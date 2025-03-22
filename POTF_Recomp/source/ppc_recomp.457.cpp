#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82E56CF8"))) PPC_WEAK_FUNC(sub_82E56CF8);
PPC_FUNC_IMPL(__imp__sub_82E56CF8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// beq cr6,0x82e56d30
	if (ctx.cr6.eq) goto loc_82E56D30;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E56D2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82E56D30:
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

__attribute__((alias("__imp__sub_82E56D48"))) PPC_WEAK_FUNC(sub_82E56D48);
PPC_FUNC_IMPL(__imp__sub_82E56D48) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E56D64"))) PPC_WEAK_FUNC(sub_82E56D64);
PPC_FUNC_IMPL(__imp__sub_82E56D64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E56D68"))) PPC_WEAK_FUNC(sub_82E56D68);
PPC_FUNC_IMPL(__imp__sub_82E56D68) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e56da0
	if (ctx.cr0.eq) goto loc_82E56DA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E56DA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E56DA0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq 0x82e56dc4
	if (ctx.cr0.eq) goto loc_82E56DC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E56DC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82E56DC4:
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

__attribute__((alias("__imp__sub_82E56DE0"))) PPC_WEAK_FUNC(sub_82E56DE0);
PPC_FUNC_IMPL(__imp__sub_82E56DE0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E56DE8"))) PPC_WEAK_FUNC(sub_82E56DE8);
PPC_FUNC_IMPL(__imp__sub_82E56DE8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E56DF0"))) PPC_WEAK_FUNC(sub_82E56DF0);
PPC_FUNC_IMPL(__imp__sub_82E56DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E56DF8"))) PPC_WEAK_FUNC(sub_82E56DF8);
PPC_FUNC_IMPL(__imp__sub_82E56DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E56E00"))) PPC_WEAK_FUNC(sub_82E56E00);
PPC_FUNC_IMPL(__imp__sub_82E56E00) {
	PPC_FUNC_PROLOGUE();
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E56E08"))) PPC_WEAK_FUNC(sub_82E56E08);
PPC_FUNC_IMPL(__imp__sub_82E56E08) {
	PPC_FUNC_PROLOGUE();
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E56E10"))) PPC_WEAK_FUNC(sub_82E56E10);
PPC_FUNC_IMPL(__imp__sub_82E56E10) {
	PPC_FUNC_PROLOGUE();
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E56E18"))) PPC_WEAK_FUNC(sub_82E56E18);
PPC_FUNC_IMPL(__imp__sub_82E56E18) {
	PPC_FUNC_PROLOGUE();
	// stb r4,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E56E20"))) PPC_WEAK_FUNC(sub_82E56E20);
PPC_FUNC_IMPL(__imp__sub_82E56E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,24596
	ctx.r11.s64 = ctx.r11.s64 + 24596;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E56E30"))) PPC_WEAK_FUNC(sub_82E56E30);
PPC_FUNC_IMPL(__imp__sub_82E56E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,24604
	ctx.r11.s64 = ctx.r11.s64 + 24604;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E56E4C"))) PPC_WEAK_FUNC(sub_82E56E4C);
PPC_FUNC_IMPL(__imp__sub_82E56E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E56E50"))) PPC_WEAK_FUNC(sub_82E56E50);
PPC_FUNC_IMPL(__imp__sub_82E56E50) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E56E58"))) PPC_WEAK_FUNC(sub_82E56E58);
PPC_FUNC_IMPL(__imp__sub_82E56E58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E56E60"))) PPC_WEAK_FUNC(sub_82E56E60);
PPC_FUNC_IMPL(__imp__sub_82E56E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,24612
	ctx.r11.s64 = ctx.r11.s64 + 24612;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E56E78"))) PPC_WEAK_FUNC(sub_82E56E78);
PPC_FUNC_IMPL(__imp__sub_82E56E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E56E80"))) PPC_WEAK_FUNC(sub_82E56E80);
PPC_FUNC_IMPL(__imp__sub_82E56E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E56E88"))) PPC_WEAK_FUNC(sub_82E56E88);
PPC_FUNC_IMPL(__imp__sub_82E56E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,24620
	ctx.r11.s64 = ctx.r11.s64 + 24620;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E56EA0"))) PPC_WEAK_FUNC(sub_82E56EA0);
PPC_FUNC_IMPL(__imp__sub_82E56EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,24624
	ctx.r11.s64 = ctx.r11.s64 + 24624;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E56EB8"))) PPC_WEAK_FUNC(sub_82E56EB8);
PPC_FUNC_IMPL(__imp__sub_82E56EB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E56EC0"))) PPC_WEAK_FUNC(sub_82E56EC0);
PPC_FUNC_IMPL(__imp__sub_82E56EC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E56EC8"))) PPC_WEAK_FUNC(sub_82E56EC8);
PPC_FUNC_IMPL(__imp__sub_82E56EC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E56ED0"))) PPC_WEAK_FUNC(sub_82E56ED0);
PPC_FUNC_IMPL(__imp__sub_82E56ED0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E56ED8"))) PPC_WEAK_FUNC(sub_82E56ED8);
PPC_FUNC_IMPL(__imp__sub_82E56ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,24652
	ctx.r11.s64 = ctx.r11.s64 + 24652;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E56EE8"))) PPC_WEAK_FUNC(sub_82E56EE8);
PPC_FUNC_IMPL(__imp__sub_82E56EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,24596
	ctx.r11.s64 = ctx.r11.s64 + 24596;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E56EF8"))) PPC_WEAK_FUNC(sub_82E56EF8);
PPC_FUNC_IMPL(__imp__sub_82E56EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,24596
	ctx.r10.s64 = ctx.r11.s64 + 24596;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r11,24672
	ctx.r9.s64 = ctx.r11.s64 + 24672;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r8,r11,24664
	ctx.r8.s64 = ctx.r11.s64 + 24664;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E56F30"))) PPC_WEAK_FUNC(sub_82E56F30);
PPC_FUNC_IMPL(__imp__sub_82E56F30) {
	PPC_FUNC_PROLOGUE();
	// lis r3,29550
	ctx.r3.s64 = 1936588800;
	// ori r3,r3,25459
	ctx.r3.u64 = ctx.r3.u64 | 25459;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E56F3C"))) PPC_WEAK_FUNC(sub_82E56F3C);
PPC_FUNC_IMPL(__imp__sub_82E56F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E56F40"))) PPC_WEAK_FUNC(sub_82E56F40);
PPC_FUNC_IMPL(__imp__sub_82E56F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,24596
	ctx.r10.s64 = ctx.r11.s64 + 24596;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r11,24684
	ctx.r9.s64 = ctx.r11.s64 + 24684;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r8,r11,24676
	ctx.r8.s64 = ctx.r11.s64 + 24676;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E56F78"))) PPC_WEAK_FUNC(sub_82E56F78);
PPC_FUNC_IMPL(__imp__sub_82E56F78) {
	PPC_FUNC_PROLOGUE();
	// lis r3,29549
	ctx.r3.s64 = 1936523264;
	// ori r3,r3,26740
	ctx.r3.u64 = ctx.r3.u64 | 26740;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E56F84"))) PPC_WEAK_FUNC(sub_82E56F84);
PPC_FUNC_IMPL(__imp__sub_82E56F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E56F88"))) PPC_WEAK_FUNC(sub_82E56F88);
PPC_FUNC_IMPL(__imp__sub_82E56F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,24596
	ctx.r10.s64 = ctx.r11.s64 + 24596;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r11,24696
	ctx.r9.s64 = ctx.r11.s64 + 24696;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r8,r11,24688
	ctx.r8.s64 = ctx.r11.s64 + 24688;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E56FC0"))) PPC_WEAK_FUNC(sub_82E56FC0);
PPC_FUNC_IMPL(__imp__sub_82E56FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,29549
	ctx.r3.s64 = 1936523264;
	// ori r3,r3,26483
	ctx.r3.u64 = ctx.r3.u64 | 26483;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E56FCC"))) PPC_WEAK_FUNC(sub_82E56FCC);
PPC_FUNC_IMPL(__imp__sub_82E56FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E56FD0"))) PPC_WEAK_FUNC(sub_82E56FD0);
PPC_FUNC_IMPL(__imp__sub_82E56FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,24596
	ctx.r10.s64 = ctx.r11.s64 + 24596;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r11,24708
	ctx.r9.s64 = ctx.r11.s64 + 24708;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r8,r11,24700
	ctx.r8.s64 = ctx.r11.s64 + 24700;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E57014"))) PPC_WEAK_FUNC(sub_82E57014);
PPC_FUNC_IMPL(__imp__sub_82E57014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E57018"))) PPC_WEAK_FUNC(sub_82E57018);
PPC_FUNC_IMPL(__imp__sub_82E57018) {
	PPC_FUNC_PROLOGUE();
	// lis r3,29547
	ctx.r3.s64 = 1936392192;
	// ori r3,r3,28268
	ctx.r3.u64 = ctx.r3.u64 | 28268;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E57024"))) PPC_WEAK_FUNC(sub_82E57024);
PPC_FUNC_IMPL(__imp__sub_82E57024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E57028"))) PPC_WEAK_FUNC(sub_82E57028);
PPC_FUNC_IMPL(__imp__sub_82E57028) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5702C"))) PPC_WEAK_FUNC(sub_82E5702C);
PPC_FUNC_IMPL(__imp__sub_82E5702C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E57030"))) PPC_WEAK_FUNC(sub_82E57030);
PPC_FUNC_IMPL(__imp__sub_82E57030) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r10,24720
	ctx.r5.s64 = ctx.r10.s64 + 24720;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// li r6,35
	ctx.r6.s64 = 35;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39480
	ctx.lr = 0x82E57070;
	sub_82E39480(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82E57090"))) PPC_WEAK_FUNC(sub_82E57090);
PPC_FUNC_IMPL(__imp__sub_82E57090) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,42
	ctx.r6.s64 = 42;
	// addi r5,r11,24720
	ctx.r5.s64 = ctx.r11.s64 + 24720;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E570BC;
	sub_82E394B8(ctx, base);
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

__attribute__((alias("__imp__sub_82E570D0"))) PPC_WEAK_FUNC(sub_82E570D0);
PPC_FUNC_IMPL(__imp__sub_82E570D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E570D4"))) PPC_WEAK_FUNC(sub_82E570D4);
PPC_FUNC_IMPL(__imp__sub_82E570D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E570D8"))) PPC_WEAK_FUNC(sub_82E570D8);
PPC_FUNC_IMPL(__imp__sub_82E570D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E570F0"))) PPC_WEAK_FUNC(sub_82E570F0);
PPC_FUNC_IMPL(__imp__sub_82E570F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E570F8;
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
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E57120;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e57180
	if (!ctx.cr0.eq) goto loc_82E57180;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E57144;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e57180
	if (!ctx.cr0.eq) goto loc_82E57180;
	// lis r11,48
	ctx.r11.s64 = 3145728;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82e5717c
	if (!ctx.cr6.lt) goto loc_82E5717C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r8,r11,24,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF00;
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,8,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82E5717C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E57180:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E57188"))) PPC_WEAK_FUNC(sub_82E57188);
PPC_FUNC_IMPL(__imp__sub_82E57188) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e570f0
	ctx.lr = 0x82E571B4;
	sub_82E570F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e574c0
	if (!ctx.cr0.eq) goto loc_82E574C0;
	// lis r11,28018
	ctx.r11.s64 = 1836187648;
	// ori r10,r11,28771
	ctx.r10.u64 = ctx.r11.u64 | 28771;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e57308
	if (!ctx.cr6.eq) goto loc_82E57308;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E571E8;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e574c0
	if (!ctx.cr0.eq) goto loc_82E574C0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E57208;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e574c0
	if (!ctx.cr0.eq) goto loc_82E574C0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E57228;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e574c0
	if (!ctx.cr0.eq) goto loc_82E574C0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E57248;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e574c0
	if (!ctx.cr0.eq) goto loc_82E574C0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E57268;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e574c0
	if (!ctx.cr0.eq) goto loc_82E574C0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,140
	ctx.r6.s64 = 140;
	// addi r5,r11,24720
	ctx.r5.s64 = ctx.r11.s64 + 24720;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39460
	ctx.lr = 0x82E57290;
	sub_82E39460(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e572a4
	if (ctx.cr0.eq) goto loc_82E572A4;
	// bl 0x82e5c7c8
	ctx.lr = 0x82E5729C;
	sub_82E5C7C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82e572a8
	goto loc_82E572A8;
loc_82E572A4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E572A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82e5c548
	ctx.lr = 0x82E572B4;
	sub_82E5C548(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x82e56cf8
	ctx.lr = 0x82E572F4;
	sub_82E56CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e56d68
	ctx.lr = 0x82E57300;
	sub_82E56D68(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x82e57488
	goto loc_82E57488;
loc_82E57308:
	// lis r10,8307
	ctx.r10.s64 = 544407552;
	// ori r10,r10,28003
	ctx.r10.u64 = ctx.r10.u64 | 28003;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e573ec
	if (!ctx.cr6.eq) goto loc_82E573EC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E57330;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e574c0
	if (!ctx.cr0.eq) goto loc_82E574C0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E57350;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e574c0
	if (!ctx.cr0.eq) goto loc_82E574C0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E57370;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e574c0
	if (!ctx.cr0.eq) goto loc_82E574C0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,159
	ctx.r6.s64 = 159;
	// addi r5,r11,24720
	ctx.r5.s64 = ctx.r11.s64 + 24720;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39460
	ctx.lr = 0x82E57398;
	sub_82E39460(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e573ac
	if (ctx.cr0.eq) goto loc_82E573AC;
	// bl 0x82e5c808
	ctx.lr = 0x82E573A4;
	sub_82E5C808(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82e573b0
	goto loc_82E573B0;
loc_82E573AC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E573B0:
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82e56cf8
	ctx.lr = 0x82E573D8;
	sub_82E56CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e56d68
	ctx.lr = 0x82E573E4;
	sub_82E56D68(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x82e57488
	goto loc_82E57488;
loc_82E573EC:
	// lis r10,8224
	ctx.r10.s64 = 538968064;
	// ori r10,r10,25443
	ctx.r10.u64 = ctx.r10.u64 | 25443;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e574bc
	if (!ctx.cr6.eq) goto loc_82E574BC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E57414;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e574c0
	if (!ctx.cr0.eq) goto loc_82E574C0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,172
	ctx.r6.s64 = 172;
	// addi r5,r11,24720
	ctx.r5.s64 = ctx.r11.s64 + 24720;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39460
	ctx.lr = 0x82E5743C;
	sub_82E39460(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e57450
	if (ctx.cr0.eq) goto loc_82E57450;
	// bl 0x82e5c838
	ctx.lr = 0x82E57448;
	sub_82E5C838(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82e57454
	goto loc_82E57454;
loc_82E57450:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E57454:
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// bl 0x82e56cf8
	ctx.lr = 0x82E57478;
	sub_82E56CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e56d68
	ctx.lr = 0x82E57484;
	sub_82E56D68(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_82E57488:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e574a0
	if (ctx.cr6.eq) goto loc_82E574A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E574A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E574A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E574B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e574c0
	goto loc_82E574C0;
loc_82E574BC:
	// li r3,33
	ctx.r3.s64 = 33;
loc_82E574C0:
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

__attribute__((alias("__imp__sub_82E574D8"))) PPC_WEAK_FUNC(sub_82E574D8);
PPC_FUNC_IMPL(__imp__sub_82E574D8) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x82e56d68
	ctx.lr = 0x82E57500;
	sub_82E56D68(ctx, base);
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

__attribute__((alias("__imp__sub_82E57514"))) PPC_WEAK_FUNC(sub_82E57514);
PPC_FUNC_IMPL(__imp__sub_82E57514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E57518"))) PPC_WEAK_FUNC(sub_82E57518);
PPC_FUNC_IMPL(__imp__sub_82E57518) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82e56d68
	ctx.lr = 0x82E57538;
	sub_82E56D68(ctx, base);
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

__attribute__((alias("__imp__sub_82E5754C"))) PPC_WEAK_FUNC(sub_82E5754C);
PPC_FUNC_IMPL(__imp__sub_82E5754C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E57550"))) PPC_WEAK_FUNC(sub_82E57550);
PPC_FUNC_IMPL(__imp__sub_82E57550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E57564"))) PPC_WEAK_FUNC(sub_82E57564);
PPC_FUNC_IMPL(__imp__sub_82E57564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E57568"))) PPC_WEAK_FUNC(sub_82E57568);
PPC_FUNC_IMPL(__imp__sub_82E57568) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E57570"))) PPC_WEAK_FUNC(sub_82E57570);
PPC_FUNC_IMPL(__imp__sub_82E57570) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E57588"))) PPC_WEAK_FUNC(sub_82E57588);
PPC_FUNC_IMPL(__imp__sub_82E57588) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r6,226
	ctx.r6.s64 = 226;
	// addi r5,r11,24720
	ctx.r5.s64 = ctx.r11.s64 + 24720;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E575B4;
	sub_82E394B8(ctx, base);
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

__attribute__((alias("__imp__sub_82E575C8"))) PPC_WEAK_FUNC(sub_82E575C8);
PPC_FUNC_IMPL(__imp__sub_82E575C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82e575fc
	if (ctx.cr0.eq) goto loc_82E575FC;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82E575E0:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82e57604
	if (ctx.cr6.eq) goto loc_82E57604;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e575e0
	if (ctx.cr6.lt) goto loc_82E575E0;
loc_82E575FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E57604:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E57614"))) PPC_WEAK_FUNC(sub_82E57614);
PPC_FUNC_IMPL(__imp__sub_82E57614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E57618"))) PPC_WEAK_FUNC(sub_82E57618);
PPC_FUNC_IMPL(__imp__sub_82E57618) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r4,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r4.u32);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// stw r7,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E57658"))) PPC_WEAK_FUNC(sub_82E57658);
PPC_FUNC_IMPL(__imp__sub_82E57658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E57660;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e576a4
	if (!ctx.cr6.gt) goto loc_82E576A4;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82E57680:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82e56d68
	ctx.lr = 0x82E57690;
	sub_82E56D68(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e57680
	if (ctx.cr6.lt) goto loc_82E57680;
loc_82E576A4:
	// lis r29,-31890
	ctx.r29.s64 = -2089943040;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,271
	ctx.r6.s64 = 271;
	// addi r30,r11,24720
	ctx.r30.s64 = ctx.r11.s64 + 24720;
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E576C8;
	sub_82E394B8(ctx, base);
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// li r6,272
	ctx.r6.s64 = 272;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E576E0;
	sub_82E394B8(ctx, base);
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// li r6,273
	ctx.r6.s64 = 273;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E576F8;
	sub_82E394B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E57704"))) PPC_WEAK_FUNC(sub_82E57704);
PPC_FUNC_IMPL(__imp__sub_82E57704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E57708"))) PPC_WEAK_FUNC(sub_82E57708);
PPC_FUNC_IMPL(__imp__sub_82E57708) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82e57740
	if (!ctx.cr6.lt) goto loc_82E57740;
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x82e57758
	goto loc_82E57758;
loc_82E57740:
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82cb1160
	ctx.lr = 0x82E5774C;
	sub_82CB1160(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82E57758:
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

__attribute__((alias("__imp__sub_82E57770"))) PPC_WEAK_FUNC(sub_82E57770);
PPC_FUNC_IMPL(__imp__sub_82E57770) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82e577a0
	if (ctx.cr0.eq) goto loc_82E577A0;
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
loc_82E57784:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82e577a0
	if (ctx.cr6.eq) goto loc_82E577A0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82e57784
	if (ctx.cr6.lt) goto loc_82E57784;
loc_82E577A0:
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E577BC"))) PPC_WEAK_FUNC(sub_82E577BC);
PPC_FUNC_IMPL(__imp__sub_82E577BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E577C0"))) PPC_WEAK_FUNC(sub_82E577C0);
PPC_FUNC_IMPL(__imp__sub_82E577C0) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82e57800
	if (ctx.cr0.eq) goto loc_82E57800;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
loc_82E577E4:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82e57814
	if (ctx.cr6.eq) goto loc_82E57814;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82e577e4
	if (ctx.cr6.lt) goto loc_82E577E4;
loc_82E57800:
	// li r3,33
	ctx.r3.s64 = 33;
loc_82E57804:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82E57814:
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82e56d68
	ctx.lr = 0x82E57828;
	sub_82E56D68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e57804
	goto loc_82E57804;
}

__attribute__((alias("__imp__sub_82E57830"))) PPC_WEAK_FUNC(sub_82E57830);
PPC_FUNC_IMPL(__imp__sub_82E57830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,24812
	ctx.r10.s64 = ctx.r11.s64 + 24812;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E57870"))) PPC_WEAK_FUNC(sub_82E57870);
PPC_FUNC_IMPL(__imp__sub_82E57870) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,20
	ctx.r11.s64 = ctx.r4.s64 + 20;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E57888"))) PPC_WEAK_FUNC(sub_82E57888);
PPC_FUNC_IMPL(__imp__sub_82E57888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E57890"))) PPC_WEAK_FUNC(sub_82E57890);
PPC_FUNC_IMPL(__imp__sub_82E57890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E57898"))) PPC_WEAK_FUNC(sub_82E57898);
PPC_FUNC_IMPL(__imp__sub_82E57898) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E578A8"))) PPC_WEAK_FUNC(sub_82E578A8);
PPC_FUNC_IMPL(__imp__sub_82E578A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E578B0"))) PPC_WEAK_FUNC(sub_82E578B0);
PPC_FUNC_IMPL(__imp__sub_82E578B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E578B8"))) PPC_WEAK_FUNC(sub_82E578B8);
PPC_FUNC_IMPL(__imp__sub_82E578B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f1,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stfs f2,28(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// sth r8,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r8.u16);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E578E8"))) PPC_WEAK_FUNC(sub_82E578E8);
PPC_FUNC_IMPL(__imp__sub_82E578E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E578F0"))) PPC_WEAK_FUNC(sub_82E578F0);
PPC_FUNC_IMPL(__imp__sub_82E578F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E578F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,-4716(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E57924;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e57968
	if (!ctx.cr0.eq) goto loc_82E57968;
	// li r5,108
	ctx.r5.s64 = 108;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82cb16f0
	ctx.lr = 0x82E5793C;
	sub_82CB16F0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r5,24492(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24492);
	// li r11,108
	ctx.r11.s64 = 108;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82d81020
	ctx.lr = 0x82E57968;
	sub_82D81020(ctx, base);
loc_82E57968:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E57970"))) PPC_WEAK_FUNC(sub_82E57970);
PPC_FUNC_IMPL(__imp__sub_82E57970) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e57990
	if (!ctx.cr6.eq) goto loc_82E57990;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_82E57990:
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x82e578f0
	sub_82E578F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E579A4"))) PPC_WEAK_FUNC(sub_82E579A4);
PPC_FUNC_IMPL(__imp__sub_82E579A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E579A8"))) PPC_WEAK_FUNC(sub_82E579A8);
PPC_FUNC_IMPL(__imp__sub_82E579A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E579B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82e579cc
	if (!ctx.cr6.eq) goto loc_82E579CC;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82e57abc
	goto loc_82E57ABC;
loc_82E579CC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82e579e4
	if (!ctx.cr0.eq) goto loc_82E579E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82e57ab4
	goto loc_82E57AB4;
loc_82E579E4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// beq 0x82e57a14
	if (ctx.cr0.eq) goto loc_82E57A14;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82E57A00:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d85188
	ctx.lr = 0x82E57A08;
	sub_82D85188(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e57ab8
	if (ctx.cr0.eq) goto loc_82E57AB8;
	// b 0x82e57abc
	goto loc_82E57ABC;
loc_82E57A14:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d85188
	ctx.lr = 0x82E57A1C;
	sub_82D85188(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e57a58
	if (!ctx.cr0.eq) goto loc_82E57A58;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e57a58
	if (!ctx.cr6.eq) goto loc_82E57A58;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82d84de0
	ctx.lr = 0x82E57A40;
	sub_82D84DE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e57abc
	if (!ctx.cr0.eq) goto loc_82E57ABC;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82E57A4C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82e57a00
	goto loc_82E57A00;
loc_82E57A58:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82e57aac
	if (!ctx.cr6.eq) goto loc_82E57AAC;
	// cmpwi cr6,r3,23
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 23, ctx.xer);
	// bne cr6,0x82e57aac
	if (!ctx.cr6.eq) goto loc_82E57AAC;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82e57abc
	if (ctx.cr0.eq) goto loc_82E57ABC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82d84718
	ctx.lr = 0x82E57A84;
	sub_82D84718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e57abc
	if (!ctx.cr0.eq) goto loc_82E57ABC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e578f0
	ctx.lr = 0x82E57A9C;
	sub_82E578F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e57abc
	if (!ctx.cr0.eq) goto loc_82E57ABC;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82e57a4c
	goto loc_82E57A4C;
loc_82E57AAC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e57abc
	if (!ctx.cr6.eq) goto loc_82E57ABC;
loc_82E57AB4:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82E57AB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E57ABC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E57AC4"))) PPC_WEAK_FUNC(sub_82E57AC4);
PPC_FUNC_IMPL(__imp__sub_82E57AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E57AC8"))) PPC_WEAK_FUNC(sub_82E57AC8);
PPC_FUNC_IMPL(__imp__sub_82E57AC8) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e57af4
	if (ctx.cr0.eq) goto loc_82E57AF4;
	// bl 0x82d84718
	ctx.lr = 0x82E57AEC;
	sub_82D84718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e57b18
	if (!ctx.cr0.eq) goto loc_82E57B18;
loc_82E57AF4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,435
	ctx.r6.s64 = 435;
	// addi r5,r11,24720
	ctx.r5.s64 = ctx.r11.s64 + 24720;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E57B14;
	sub_82E394B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E57B18:
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

__attribute__((alias("__imp__sub_82E57B2C"))) PPC_WEAK_FUNC(sub_82E57B2C);
PPC_FUNC_IMPL(__imp__sub_82E57B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E57B30"))) PPC_WEAK_FUNC(sub_82E57B30);
PPC_FUNC_IMPL(__imp__sub_82E57B30) {
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
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82e57b5c
	if (!ctx.cr6.eq) goto loc_82E57B5C;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82e57bac
	goto loc_82E57BAC;
loc_82E57B5C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e57ba4
	if (ctx.cr6.eq) goto loc_82E57BA4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82e57b7c
	if (!ctx.cr0.eq) goto loc_82E57B7C;
loc_82E57B74:
	// li r3,54
	ctx.r3.s64 = 54;
	// b 0x82e57bac
	goto loc_82E57BAC;
loc_82E57B7C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d85188
	ctx.lr = 0x82E57B8C;
	sub_82D85188(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e57bac
	if (!ctx.cr0.eq) goto loc_82E57BAC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e57b74
	if (!ctx.cr6.eq) goto loc_82E57B74;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82E57BA4:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E57BAC:
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

__attribute__((alias("__imp__sub_82E57BC4"))) PPC_WEAK_FUNC(sub_82E57BC4);
PPC_FUNC_IMPL(__imp__sub_82E57BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E57BC8"))) PPC_WEAK_FUNC(sub_82E57BC8);
PPC_FUNC_IMPL(__imp__sub_82E57BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E57BD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r29,-31890
	ctx.r29.s64 = -2089943040;
	// addi r30,r11,24720
	ctx.r30.s64 = ctx.r11.s64 + 24720;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e57c04
	if (ctx.cr0.eq) goto loc_82E57C04;
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// li r6,510
	ctx.r6.s64 = 510;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E57C04;
	sub_82E394B8(ctx, base);
loc_82E57C04:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e57c40
	if (ctx.cr0.eq) goto loc_82E57C40;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,42
	ctx.r6.s64 = 42;
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E57C28;
	sub_82E394B8(ctx, base);
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// li r6,515
	ctx.r6.s64 = 515;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E57C40;
	sub_82E394B8(ctx, base);
loc_82E57C40:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E57C5C"))) PPC_WEAK_FUNC(sub_82E57C5C);
PPC_FUNC_IMPL(__imp__sub_82E57C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E57C60"))) PPC_WEAK_FUNC(sub_82E57C60);
PPC_FUNC_IMPL(__imp__sub_82E57C60) {
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
	// lis r31,-31890
	ctx.r31.s64 = -2089943040;
	// lwz r3,-4708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4708);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e57cb4
	if (ctx.cr6.eq) goto loc_82E57CB4;
	// bl 0x82e57bc8
	ctx.lr = 0x82E57C84;
	sub_82E57BC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e57cb8
	if (!ctx.cr0.eq) goto loc_82E57CB8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,-4708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4708);
	// li r6,594
	ctx.r6.s64 = 594;
	// addi r5,r11,24720
	ctx.r5.s64 = ctx.r11.s64 + 24720;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E57CAC;
	sub_82E394B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4708(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4708, ctx.r11.u32);
loc_82E57CB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E57CB8:
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

__attribute__((alias("__imp__sub_82E57CCC"))) PPC_WEAK_FUNC(sub_82E57CCC);
PPC_FUNC_IMPL(__imp__sub_82E57CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E57CD0"))) PPC_WEAK_FUNC(sub_82E57CD0);
PPC_FUNC_IMPL(__imp__sub_82E57CD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E57CE4"))) PPC_WEAK_FUNC(sub_82E57CE4);
PPC_FUNC_IMPL(__imp__sub_82E57CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E57CE8"))) PPC_WEAK_FUNC(sub_82E57CE8);
PPC_FUNC_IMPL(__imp__sub_82E57CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82E57CF0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r27,-31890
	ctx.r27.s64 = -2089943040;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r11,24720
	ctx.r28.s64 = ctx.r11.s64 + 24720;
	// ble cr6,0x82e57d50
	if (!ctx.cr6.gt) goto loc_82E57D50;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82E57D1C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,226
	ctx.r6.s64 = 226;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,-4716(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82e394b8
	ctx.lr = 0x82E57D3C;
	sub_82E394B8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e57d1c
	if (ctx.cr6.lt) goto loc_82E57D1C;
loc_82E57D50:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e57d70
	if (ctx.cr0.eq) goto loc_82E57D70;
	// lwz r11,-4716(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4716);
	// li r6,616
	ctx.r6.s64 = 616;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E57D70;
	sub_82E394B8(ctx, base);
loc_82E57D70:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e57dac
	if (ctx.cr0.eq) goto loc_82E57DAC;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,42
	ctx.r6.s64 = 42;
	// lwz r11,-4716(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4716);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E57D94;
	sub_82E394B8(ctx, base);
	// lwz r11,-4716(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4716);
	// li r6,621
	ctx.r6.s64 = 621;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E57DAC;
	sub_82E394B8(ctx, base);
loc_82E57DAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E57DC4"))) PPC_WEAK_FUNC(sub_82E57DC4);
PPC_FUNC_IMPL(__imp__sub_82E57DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E57DC8"))) PPC_WEAK_FUNC(sub_82E57DC8);
PPC_FUNC_IMPL(__imp__sub_82E57DC8) {
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
	// lis r31,-31890
	ctx.r31.s64 = -2089943040;
	// lwz r3,-4704(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4704);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e57e50
	if (!ctx.cr6.eq) goto loc_82E57E50;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,694
	ctx.r6.s64 = 694;
	// addi r5,r11,24720
	ctx.r5.s64 = ctx.r11.s64 + 24720;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39460
	ctx.lr = 0x82E57E08;
	sub_82E39460(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e57e48
	if (ctx.cr0.eq) goto loc_82E57E48;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,24596
	ctx.r10.s64 = ctx.r11.s64 + 24596;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r11,24672
	ctx.r9.s64 = ctx.r11.s64 + 24672;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r8,r11,24664
	ctx.r8.s64 = ctx.r11.s64 + 24664;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// b 0x82e57e4c
	goto loc_82E57E4C;
loc_82E57E48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E57E4C:
	// stw r3,-4704(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4704, ctx.r3.u32);
loc_82E57E50:
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

__attribute__((alias("__imp__sub_82E57E64"))) PPC_WEAK_FUNC(sub_82E57E64);
PPC_FUNC_IMPL(__imp__sub_82E57E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E57E68"))) PPC_WEAK_FUNC(sub_82E57E68);
PPC_FUNC_IMPL(__imp__sub_82E57E68) {
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
	// lis r31,-31890
	ctx.r31.s64 = -2089943040;
	// lwz r3,-4704(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4704);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e57ebc
	if (ctx.cr6.eq) goto loc_82E57EBC;
	// bl 0x82e57ce8
	ctx.lr = 0x82E57E8C;
	sub_82E57CE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e57ec0
	if (!ctx.cr0.eq) goto loc_82E57EC0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,-4704(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4704);
	// li r6,705
	ctx.r6.s64 = 705;
	// addi r5,r11,24720
	ctx.r5.s64 = ctx.r11.s64 + 24720;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E57EB4;
	sub_82E394B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4704(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4704, ctx.r11.u32);
loc_82E57EBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E57EC0:
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

__attribute__((alias("__imp__sub_82E57ED4"))) PPC_WEAK_FUNC(sub_82E57ED4);
PPC_FUNC_IMPL(__imp__sub_82E57ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E57ED8"))) PPC_WEAK_FUNC(sub_82E57ED8);
PPC_FUNC_IMPL(__imp__sub_82E57ED8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E57EEC"))) PPC_WEAK_FUNC(sub_82E57EEC);
PPC_FUNC_IMPL(__imp__sub_82E57EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E57EF0"))) PPC_WEAK_FUNC(sub_82E57EF0);
PPC_FUNC_IMPL(__imp__sub_82E57EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E57EF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e57f38
	if (!ctx.cr6.gt) goto loc_82E57F38;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82E57F18:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82e57658
	ctx.lr = 0x82E57F24;
	sub_82E57658(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,44
	ctx.r30.s64 = ctx.r30.s64 + 44;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e57f18
	if (ctx.cr6.lt) goto loc_82E57F18;
loc_82E57F38:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r29,-31890
	ctx.r29.s64 = -2089943040;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,24720
	ctx.r30.s64 = ctx.r11.s64 + 24720;
	// beq 0x82e57f64
	if (ctx.cr0.eq) goto loc_82E57F64;
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// li r6,727
	ctx.r6.s64 = 727;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E57F64;
	sub_82E394B8(ctx, base);
loc_82E57F64:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e57fa0
	if (ctx.cr0.eq) goto loc_82E57FA0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,42
	ctx.r6.s64 = 42;
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E57F88;
	sub_82E394B8(ctx, base);
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// li r6,732
	ctx.r6.s64 = 732;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E57FA0;
	sub_82E394B8(ctx, base);
loc_82E57FA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E57FB8"))) PPC_WEAK_FUNC(sub_82E57FB8);
PPC_FUNC_IMPL(__imp__sub_82E57FB8) {
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
	// lis r31,-31890
	ctx.r31.s64 = -2089943040;
	// lwz r3,-4700(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4700);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e58040
	if (!ctx.cr6.eq) goto loc_82E58040;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,795
	ctx.r6.s64 = 795;
	// addi r5,r11,24720
	ctx.r5.s64 = ctx.r11.s64 + 24720;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39460
	ctx.lr = 0x82E57FF8;
	sub_82E39460(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e58038
	if (ctx.cr0.eq) goto loc_82E58038;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,24596
	ctx.r10.s64 = ctx.r11.s64 + 24596;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r11,24684
	ctx.r9.s64 = ctx.r11.s64 + 24684;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r8,r11,24676
	ctx.r8.s64 = ctx.r11.s64 + 24676;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// b 0x82e5803c
	goto loc_82E5803C;
loc_82E58038:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E5803C:
	// stw r3,-4700(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4700, ctx.r3.u32);
loc_82E58040:
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

__attribute__((alias("__imp__sub_82E58054"))) PPC_WEAK_FUNC(sub_82E58054);
PPC_FUNC_IMPL(__imp__sub_82E58054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E58058"))) PPC_WEAK_FUNC(sub_82E58058);
PPC_FUNC_IMPL(__imp__sub_82E58058) {
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
	// lis r31,-31890
	ctx.r31.s64 = -2089943040;
	// lwz r3,-4700(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4700);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e580ac
	if (ctx.cr6.eq) goto loc_82E580AC;
	// bl 0x82e57ef0
	ctx.lr = 0x82E5807C;
	sub_82E57EF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e580b0
	if (!ctx.cr0.eq) goto loc_82E580B0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,-4700(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4700);
	// li r6,806
	ctx.r6.s64 = 806;
	// addi r5,r11,24720
	ctx.r5.s64 = ctx.r11.s64 + 24720;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E580A4;
	sub_82E394B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4700(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4700, ctx.r11.u32);
loc_82E580AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E580B0:
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

__attribute__((alias("__imp__sub_82E580C4"))) PPC_WEAK_FUNC(sub_82E580C4);
PPC_FUNC_IMPL(__imp__sub_82E580C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E580C8"))) PPC_WEAK_FUNC(sub_82E580C8);
PPC_FUNC_IMPL(__imp__sub_82E580C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E580DC"))) PPC_WEAK_FUNC(sub_82E580DC);
PPC_FUNC_IMPL(__imp__sub_82E580DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E580E0"))) PPC_WEAK_FUNC(sub_82E580E0);
PPC_FUNC_IMPL(__imp__sub_82E580E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E580E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r29,-31890
	ctx.r29.s64 = -2089943040;
	// addi r30,r11,24720
	ctx.r30.s64 = ctx.r11.s64 + 24720;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e5811c
	if (ctx.cr0.eq) goto loc_82E5811C;
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// li r6,894
	ctx.r6.s64 = 894;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E5811C;
	sub_82E394B8(ctx, base);
loc_82E5811C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e58158
	if (ctx.cr0.eq) goto loc_82E58158;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,42
	ctx.r6.s64 = 42;
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E58140;
	sub_82E394B8(ctx, base);
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// li r6,899
	ctx.r6.s64 = 899;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E58158;
	sub_82E394B8(ctx, base);
loc_82E58158:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E58174"))) PPC_WEAK_FUNC(sub_82E58174);
PPC_FUNC_IMPL(__imp__sub_82E58174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E58178"))) PPC_WEAK_FUNC(sub_82E58178);
PPC_FUNC_IMPL(__imp__sub_82E58178) {
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
	// lis r31,-31890
	ctx.r31.s64 = -2089943040;
	// lwz r3,-4696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4696);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e58200
	if (!ctx.cr6.eq) goto loc_82E58200;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,995
	ctx.r6.s64 = 995;
	// addi r5,r11,24720
	ctx.r5.s64 = ctx.r11.s64 + 24720;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39460
	ctx.lr = 0x82E581B8;
	sub_82E39460(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e581f8
	if (ctx.cr0.eq) goto loc_82E581F8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,24596
	ctx.r10.s64 = ctx.r11.s64 + 24596;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r11,24696
	ctx.r9.s64 = ctx.r11.s64 + 24696;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r8,r11,24688
	ctx.r8.s64 = ctx.r11.s64 + 24688;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// b 0x82e581fc
	goto loc_82E581FC;
loc_82E581F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E581FC:
	// stw r3,-4696(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4696, ctx.r3.u32);
loc_82E58200:
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

__attribute__((alias("__imp__sub_82E58214"))) PPC_WEAK_FUNC(sub_82E58214);
PPC_FUNC_IMPL(__imp__sub_82E58214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E58218"))) PPC_WEAK_FUNC(sub_82E58218);
PPC_FUNC_IMPL(__imp__sub_82E58218) {
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
	// lis r31,-31890
	ctx.r31.s64 = -2089943040;
	// lwz r3,-4696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4696);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e5826c
	if (ctx.cr6.eq) goto loc_82E5826C;
	// bl 0x82e580e0
	ctx.lr = 0x82E5823C;
	sub_82E580E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e58270
	if (!ctx.cr0.eq) goto loc_82E58270;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,-4696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4696);
	// li r6,1006
	ctx.r6.s64 = 1006;
	// addi r5,r11,24720
	ctx.r5.s64 = ctx.r11.s64 + 24720;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E58264;
	sub_82E394B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4696(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4696, ctx.r11.u32);
loc_82E5826C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E58270:
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

__attribute__((alias("__imp__sub_82E58284"))) PPC_WEAK_FUNC(sub_82E58284);
PPC_FUNC_IMPL(__imp__sub_82E58284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E58288"))) PPC_WEAK_FUNC(sub_82E58288);
PPC_FUNC_IMPL(__imp__sub_82E58288) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5829C"))) PPC_WEAK_FUNC(sub_82E5829C);
PPC_FUNC_IMPL(__imp__sub_82E5829C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E582A0"))) PPC_WEAK_FUNC(sub_82E582A0);
PPC_FUNC_IMPL(__imp__sub_82E582A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82E582A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e582f4
	if (!ctx.cr6.gt) goto loc_82E582F4;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82E582CC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82e56d68
	ctx.lr = 0x82E582E0;
	sub_82E56D68(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e582cc
	if (ctx.cr6.lt) goto loc_82E582CC;
loc_82E582F4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r29,-31890
	ctx.r29.s64 = -2089943040;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,24720
	ctx.r30.s64 = ctx.r11.s64 + 24720;
	// beq 0x82e58320
	if (ctx.cr0.eq) goto loc_82E58320;
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// li r6,1030
	ctx.r6.s64 = 1030;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E58320;
	sub_82E394B8(ctx, base);
loc_82E58320:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e5835c
	if (ctx.cr0.eq) goto loc_82E5835C;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,42
	ctx.r6.s64 = 42;
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E58344;
	sub_82E394B8(ctx, base);
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// li r6,1035
	ctx.r6.s64 = 1035;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E5835C;
	sub_82E394B8(ctx, base);
loc_82E5835C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// ble cr6,0x82e583b0
	if (!ctx.cr6.gt) goto loc_82E583B0;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_82E5837C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r6,1045
	ctx.r6.s64 = 1045;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82e394b8
	ctx.lr = 0x82E5839C;
	sub_82E394B8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e5837c
	if (ctx.cr6.lt) goto loc_82E5837C;
loc_82E583B0:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e583d0
	if (ctx.cr0.eq) goto loc_82E583D0;
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// li r6,1050
	ctx.r6.s64 = 1050;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E583D0;
	sub_82E394B8(ctx, base);
loc_82E583D0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e5840c
	if (ctx.cr0.eq) goto loc_82E5840C;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,42
	ctx.r6.s64 = 42;
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E583F4;
	sub_82E394B8(ctx, base);
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// li r6,1055
	ctx.r6.s64 = 1055;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E5840C;
	sub_82E394B8(ctx, base);
loc_82E5840C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E58424"))) PPC_WEAK_FUNC(sub_82E58424);
PPC_FUNC_IMPL(__imp__sub_82E58424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E58428"))) PPC_WEAK_FUNC(sub_82E58428);
PPC_FUNC_IMPL(__imp__sub_82E58428) {
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
	// lis r31,-31890
	ctx.r31.s64 = -2089943040;
	// lwz r3,-4692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4692);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e584bc
	if (!ctx.cr6.eq) goto loc_82E584BC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,1169
	ctx.r6.s64 = 1169;
	// addi r5,r11,24720
	ctx.r5.s64 = ctx.r11.s64 + 24720;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39460
	ctx.lr = 0x82E58468;
	sub_82E39460(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e584b4
	if (ctx.cr0.eq) goto loc_82E584B4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,24596
	ctx.r10.s64 = ctx.r11.s64 + 24596;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r11,24708
	ctx.r9.s64 = ctx.r11.s64 + 24708;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r8,r11,24700
	ctx.r8.s64 = ctx.r11.s64 + 24700;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
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
	// b 0x82e584b8
	goto loc_82E584B8;
loc_82E584B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E584B8:
	// stw r3,-4692(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4692, ctx.r3.u32);
loc_82E584BC:
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

__attribute__((alias("__imp__sub_82E584D0"))) PPC_WEAK_FUNC(sub_82E584D0);
PPC_FUNC_IMPL(__imp__sub_82E584D0) {
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
	// lis r31,-31890
	ctx.r31.s64 = -2089943040;
	// lwz r3,-4692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4692);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e58524
	if (ctx.cr6.eq) goto loc_82E58524;
	// bl 0x82e582a0
	ctx.lr = 0x82E584F4;
	sub_82E582A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e58528
	if (!ctx.cr0.eq) goto loc_82E58528;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,-4692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4692);
	// li r6,1180
	ctx.r6.s64 = 1180;
	// addi r5,r11,24720
	ctx.r5.s64 = ctx.r11.s64 + 24720;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E5851C;
	sub_82E394B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4692(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4692, ctx.r11.u32);
loc_82E58524:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E58528:
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

__attribute__((alias("__imp__sub_82E5853C"))) PPC_WEAK_FUNC(sub_82E5853C);
PPC_FUNC_IMPL(__imp__sub_82E5853C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E58540"))) PPC_WEAK_FUNC(sub_82E58540);
PPC_FUNC_IMPL(__imp__sub_82E58540) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E58554"))) PPC_WEAK_FUNC(sub_82E58554);
PPC_FUNC_IMPL(__imp__sub_82E58554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E58558"))) PPC_WEAK_FUNC(sub_82E58558);
PPC_FUNC_IMPL(__imp__sub_82E58558) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5856C"))) PPC_WEAK_FUNC(sub_82E5856C);
PPC_FUNC_IMPL(__imp__sub_82E5856C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E58570"))) PPC_WEAK_FUNC(sub_82E58570);
PPC_FUNC_IMPL(__imp__sub_82E58570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,24840
	ctx.r10.s64 = ctx.r11.s64 + 24840;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E58594"))) PPC_WEAK_FUNC(sub_82E58594);
PPC_FUNC_IMPL(__imp__sub_82E58594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E58598"))) PPC_WEAK_FUNC(sub_82E58598);
PPC_FUNC_IMPL(__imp__sub_82E58598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,24596
	ctx.r10.s64 = ctx.r11.s64 + 24596;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r11,24860
	ctx.r9.s64 = ctx.r11.s64 + 24860;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r8,r11,24852
	ctx.r8.s64 = ctx.r11.s64 + 24852;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E585D0"))) PPC_WEAK_FUNC(sub_82E585D0);
PPC_FUNC_IMPL(__imp__sub_82E585D0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,29549
	ctx.r3.s64 = 1936523264;
	// ori r3,r3,29296
	ctx.r3.u64 = ctx.r3.u64 | 29296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E585DC"))) PPC_WEAK_FUNC(sub_82E585DC);
PPC_FUNC_IMPL(__imp__sub_82E585DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E585E0"))) PPC_WEAK_FUNC(sub_82E585E0);
PPC_FUNC_IMPL(__imp__sub_82E585E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// divwu r10,r4,r11
	ctx.r10.u32 = ctx.r4.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r9,r10,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r10.s64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82E585FC:
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82e58630
	if (ctx.cr6.eq) goto loc_82E58630;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// twllei r11,0
	// divwu r7,r10,r11
	ctx.r7.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r7,r7,r11
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82e585fc
	if (!ctx.cr6.eq) goto loc_82E585FC;
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
loc_82E58630:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r5,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E58640"))) PPC_WEAK_FUNC(sub_82E58640);
PPC_FUNC_IMPL(__imp__sub_82E58640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82E58648;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// divwu r10,r28,r11
	ctx.r10.u32 = ctx.r28.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r27,r11,r28
	ctx.r27.s64 = ctx.r28.s64 - ctx.r11.s64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82E5866C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x82e586bc
	if (ctx.cr0.eq) goto loc_82E586BC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E58694;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e586c8
	if (!ctx.cr0.eq) goto loc_82E586C8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r30,r11,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82e5866c
	if (!ctx.cr6.eq) goto loc_82E5866C;
loc_82E586BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E586C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82E586C8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82e586c0
	goto loc_82E586C0;
}

__attribute__((alias("__imp__sub_82E586D0"))) PPC_WEAK_FUNC(sub_82E586D0);
PPC_FUNC_IMPL(__imp__sub_82E586D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E586D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82e586f4
	if (!ctx.cr6.eq) goto loc_82E586F4;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82e587ac
	goto loc_82E587AC;
loc_82E586F4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,479
	ctx.r6.s64 = 479;
	// addi r5,r11,24720
	ctx.r5.s64 = ctx.r11.s64 + 24720;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39460
	ctx.lr = 0x82E58714;
	sub_82E39460(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e58744
	if (ctx.cr0.eq) goto loc_82E58744;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,24840
	ctx.r10.s64 = ctx.r11.s64 + 24840;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// b 0x82e5874c
	goto loc_82E5874C;
loc_82E58744:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82E5874C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e5875c
	if (!ctx.cr6.eq) goto loc_82E5875C;
	// li r3,42
	ctx.r3.s64 = 42;
	// b 0x82e587ac
	goto loc_82E587AC;
loc_82E5875C:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e587a0
	if (ctx.cr6.eq) goto loc_82E587A0;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82e587a0
	if (ctx.cr0.eq) goto loc_82E587A0;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x82e578f0
	ctx.lr = 0x82E58794;
	sub_82E578F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e587a4
	if (ctx.cr6.eq) goto loc_82E587A4;
	// b 0x82e587ac
	goto loc_82E587AC;
loc_82E587A0:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82E587A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_82E587AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E587B4"))) PPC_WEAK_FUNC(sub_82E587B4);
PPC_FUNC_IMPL(__imp__sub_82E587B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E587B8"))) PPC_WEAK_FUNC(sub_82E587B8);
PPC_FUNC_IMPL(__imp__sub_82E587B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e587c8
	if (ctx.cr0.eq) goto loc_82E587C8;
	// b 0x82e58640
	sub_82E58640(ctx, base);
	return;
loc_82E587C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E587D0"))) PPC_WEAK_FUNC(sub_82E587D0);
PPC_FUNC_IMPL(__imp__sub_82E587D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82E587D8;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e570f0
	ctx.lr = 0x82E587FC;
	sub_82E570F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e58994
	if (!ctx.cr0.eq) goto loc_82E58994;
	// lis r11,26733
	ctx.r11.s64 = 1751973888;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// ori r11,r11,29296
	ctx.r11.u64 = ctx.r11.u64 | 29296;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e58820
	if (ctx.cr6.eq) goto loc_82E58820;
loc_82E58818:
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x82e58994
	goto loc_82E58994;
loc_82E58820:
	// li r26,0
	ctx.r26.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// sth r26,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r26.u16);
	// bl 0x82da76a0
	ctx.lr = 0x82E58840;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e58994
	if (!ctx.cr0.eq) goto loc_82E58994;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lis r29,-31890
	ctx.r29.s64 = -2089943040;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,547
	ctx.r6.s64 = 547;
	// addi r30,r11,24720
	ctx.r30.s64 = ctx.r11.s64 + 24720;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39460
	ctx.lr = 0x82E58874;
	sub_82E39460(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// bne cr6,0x82e58888
	if (!ctx.cr6.eq) goto loc_82E58888;
loc_82E58880:
	// li r3,42
	ctx.r3.s64 = 42;
	// b 0x82e58994
	goto loc_82E58994;
loc_82E58888:
	// lis r11,-32027
	ctx.r11.s64 = -2098921472;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r11,31952
	ctx.r5.s64 = ctx.r11.s64 + 31952;
	// bl 0x82e57030
	ctx.lr = 0x82E58898;
	sub_82E57030(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e58994
	if (!ctx.cr0.eq) goto loc_82E58994;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,554
	ctx.r6.s64 = 554;
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mulli r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 * 12;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39480
	ctx.lr = 0x82E588BC;
	sub_82E39480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq 0x82e58880
	if (ctx.cr0.eq) goto loc_82E58880;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e58990
	if (!ctx.cr6.gt) goto loc_82E58990;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r28,r11,24612
	ctx.r28.s64 = ctx.r11.s64 + 24612;
	// lfs f31,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
loc_82E588EC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add. r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e58900
	if (ctx.cr0.eq) goto loc_82E58900;
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_82E58900:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e570f0
	ctx.lr = 0x82E58910;
	sub_82E570F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e58994
	if (!ctx.cr0.eq) goto loc_82E58994;
	// lis r11,25709
	ctx.r11.s64 = 1684865024;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// ori r11,r11,29296
	ctx.r11.u64 = ctx.r11.u64 | 29296;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e58818
	if (!ctx.cr6.eq) goto loc_82E58818;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E58944;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e58994
	if (!ctx.cr0.eq) goto loc_82E58994;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stfs f31,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r5,r30,r11
	ctx.r5.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82e585e0
	ctx.lr = 0x82E58974;
	sub_82E585E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e58994
	if (!ctx.cr0.eq) goto loc_82E58994;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e588ec
	if (ctx.cr6.lt) goto loc_82E588EC;
loc_82E58990:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E58994:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E589A0"))) PPC_WEAK_FUNC(sub_82E589A0);
PPC_FUNC_IMPL(__imp__sub_82E589A0) {
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
	// lis r31,-31890
	ctx.r31.s64 = -2089943040;
	// lwz r3,-4708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4708);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e58a28
	if (!ctx.cr6.eq) goto loc_82E58A28;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,583
	ctx.r6.s64 = 583;
	// addi r5,r11,24720
	ctx.r5.s64 = ctx.r11.s64 + 24720;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39460
	ctx.lr = 0x82E589E0;
	sub_82E39460(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e58a20
	if (ctx.cr0.eq) goto loc_82E58A20;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,24596
	ctx.r10.s64 = ctx.r11.s64 + 24596;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r11,24860
	ctx.r9.s64 = ctx.r11.s64 + 24860;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r8,r11,24852
	ctx.r8.s64 = ctx.r11.s64 + 24852;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// b 0x82e58a24
	goto loc_82E58A24;
loc_82E58A20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E58A24:
	// stw r3,-4708(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4708, ctx.r3.u32);
loc_82E58A28:
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

__attribute__((alias("__imp__sub_82E58A3C"))) PPC_WEAK_FUNC(sub_82E58A3C);
PPC_FUNC_IMPL(__imp__sub_82E58A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E58A40"))) PPC_WEAK_FUNC(sub_82E58A40);
PPC_FUNC_IMPL(__imp__sub_82E58A40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e58a50
	if (ctx.cr0.eq) goto loc_82E58A50;
	// b 0x82e58640
	sub_82E58640(ctx, base);
	return;
loc_82E58A50:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E58A58"))) PPC_WEAK_FUNC(sub_82E58A58);
PPC_FUNC_IMPL(__imp__sub_82E58A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82E58A60;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e570f0
	ctx.lr = 0x82E58A80;
	sub_82E570F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e58c7c
	if (!ctx.cr0.eq) goto loc_82E58C7C;
	// lis r11,26734
	ctx.r11.s64 = 1752039424;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// ori r11,r11,25459
	ctx.r11.u64 = ctx.r11.u64 | 25459;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e58aa4
	if (ctx.cr6.eq) goto loc_82E58AA4;
loc_82E58A9C:
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x82e58c7c
	goto loc_82E58C7C;
loc_82E58AA4:
	// li r23,0
	ctx.r23.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// sth r23,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r23.u16);
	// bl 0x82da76a0
	ctx.lr = 0x82E58AC4;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e58c7c
	if (!ctx.cr0.eq) goto loc_82E58C7C;
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lis r27,-31890
	ctx.r27.s64 = -2089943040;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,653
	ctx.r6.s64 = 653;
	// addi r28,r11,24720
	ctx.r28.s64 = ctx.r11.s64 + 24720;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,-4716(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39460
	ctx.lr = 0x82E58AF8;
	sub_82E39460(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// bne cr6,0x82e58b0c
	if (!ctx.cr6.eq) goto loc_82E58B0C;
loc_82E58B04:
	// li r3,42
	ctx.r3.s64 = 42;
	// b 0x82e58c7c
	goto loc_82E58C7C;
loc_82E58B0C:
	// lis r11,-32027
	ctx.r11.s64 = -2098921472;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r11,32472
	ctx.r5.s64 = ctx.r11.s64 + 32472;
	// bl 0x82e57030
	ctx.lr = 0x82E58B1C;
	sub_82E57030(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e58c7c
	if (!ctx.cr0.eq) goto loc_82E58C7C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,660
	ctx.r6.s64 = 660;
	// lwz r11,-4716(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4716);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r3,r10,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39480
	ctx.lr = 0x82E58B40;
	sub_82E39480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq 0x82e58b04
	if (ctx.cr0.eq) goto loc_82E58B04;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e58c78
	if (!ctx.cr6.gt) goto loc_82E58C78;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r24,r11,24620
	ctx.r24.s64 = ctx.r11.s64 + 24620;
loc_82E58B68:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add. r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e58b7c
	if (ctx.cr0.eq) goto loc_82E58B7C;
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// stw r24,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
loc_82E58B7C:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e570f0
	ctx.lr = 0x82E58B8C;
	sub_82E570F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e58c7c
	if (!ctx.cr0.eq) goto loc_82E58C7C;
	// lis r11,25710
	ctx.r11.s64 = 1684930560;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// ori r11,r11,25459
	ctx.r11.u64 = ctx.r11.u64 | 25459;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e58a9c
	if (!ctx.cr6.eq) goto loc_82E58A9C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E58BC0;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e58c7c
	if (!ctx.cr0.eq) goto loc_82E58C7C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E58BE0;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e58c7c
	if (!ctx.cr0.eq) goto loc_82E58C7C;
	// lwz r11,-4716(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4716);
	// li r6,678
	ctx.r6.s64 = 678;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// rotlwi r3,r11,3
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// bl 0x82e39480
	ctx.lr = 0x82E58C04;
	sub_82E39480(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rotlwi r6,r11,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E58C24;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e58c7c
	if (!ctx.cr0.eq) goto loc_82E58C7C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r5,r29,r11
	ctx.r5.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82e585e0
	ctx.lr = 0x82E58C5C;
	sub_82E585E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e58c7c
	if (!ctx.cr0.eq) goto loc_82E58C7C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e58b68
	if (ctx.cr6.lt) goto loc_82E58B68;
loc_82E58C78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E58C7C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E58C84"))) PPC_WEAK_FUNC(sub_82E58C84);
PPC_FUNC_IMPL(__imp__sub_82E58C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E58C88"))) PPC_WEAK_FUNC(sub_82E58C88);
PPC_FUNC_IMPL(__imp__sub_82E58C88) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e58c98
	if (ctx.cr0.eq) goto loc_82E58C98;
	// b 0x82e58640
	sub_82E58640(ctx, base);
	return;
loc_82E58C98:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E58CA0"))) PPC_WEAK_FUNC(sub_82E58CA0);
PPC_FUNC_IMPL(__imp__sub_82E58CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82E58CA8;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e570f0
	ctx.lr = 0x82E58CCC;
	sub_82E570F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e58f70
	if (!ctx.cr0.eq) goto loc_82E58F70;
	// lis r11,25709
	ctx.r11.s64 = 1684865024;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// ori r11,r11,26740
	ctx.r11.u64 = ctx.r11.u64 | 26740;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e58cf0
	if (ctx.cr6.eq) goto loc_82E58CF0;
loc_82E58CE8:
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x82e58f70
	goto loc_82E58F70;
loc_82E58CF0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E58D08;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e58f70
	if (!ctx.cr0.eq) goto loc_82E58F70;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E58D28;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e58f70
	if (!ctx.cr0.eq) goto loc_82E58F70;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E58D48;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e58f70
	if (!ctx.cr0.eq) goto loc_82E58F70;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E58D68;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e58f70
	if (!ctx.cr0.eq) goto loc_82E58F70;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E58D88;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e58f70
	if (!ctx.cr0.eq) goto loc_82E58F70;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,86
	ctx.r4.s64 = ctx.r1.s64 + 86;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E58DA8;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e58f70
	if (!ctx.cr0.eq) goto loc_82E58F70;
	// lis r28,-31890
	ctx.r28.s64 = -2089943040;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,836
	ctx.r6.s64 = 836;
	// addi r29,r11,24720
	ctx.r29.s64 = ctx.r11.s64 + 24720;
	// lwz r11,-4716(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4716);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x82e39480
	ctx.lr = 0x82E58DD8;
	sub_82E39480(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne 0x82e58de8
	if (!ctx.cr0.eq) goto loc_82E58DE8;
loc_82E58DE0:
	// li r3,42
	ctx.r3.s64 = 42;
	// b 0x82e58f70
	goto loc_82E58F70;
loc_82E58DE8:
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r6,86(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E58E00;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e58f70
	if (!ctx.cr0.eq) goto loc_82E58F70;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E58E20;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e58f70
	if (!ctx.cr0.eq) goto loc_82E58F70;
	// lwz r11,-4716(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4716);
	// li r6,846
	ctx.r6.s64 = 846;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x82e39480
	ctx.lr = 0x82E58E44;
	sub_82E39480(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x82e58de0
	if (ctx.cr0.eq) goto loc_82E58DE0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E58E64;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e58f70
	if (!ctx.cr0.eq) goto loc_82E58F70;
	// lwz r11,-4716(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4716);
	// li r6,853
	ctx.r6.s64 = 853;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x82e39480
	ctx.lr = 0x82E58E88;
	sub_82E39480(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82e58de0
	if (ctx.cr0.eq) goto loc_82E58DE0;
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr. r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e58f14
	if (ctx.cr0.eq) goto loc_82E58F14;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82E58EA4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82e58eb4
	if (ctx.cr6.eq) goto loc_82E58EB4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82E58EB4:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e570f0
	ctx.lr = 0x82E58EC4;
	sub_82E570F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e58f70
	if (!ctx.cr0.eq) goto loc_82E58F70;
	// lis r11,25710
	ctx.r11.s64 = 1684930560;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// ori r11,r11,28515
	ctx.r11.u64 = ctx.r11.u64 | 28515;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e58ce8
	if (!ctx.cr6.eq) goto loc_82E58CE8;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e57188
	ctx.lr = 0x82E58EF4;
	sub_82E57188(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e58f70
	if (!ctx.cr0.eq) goto loc_82E58F70;
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82e58ea4
	if (ctx.cr6.lt) goto loc_82E58EA4;
loc_82E58F14:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// lhz r6,86(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// stw r25,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r25.u32);
	// lwz r3,16(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// bl 0x82e585e0
	ctx.lr = 0x82E58F70;
	sub_82E585E0(ctx, base);
loc_82E58F70:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E58F78"))) PPC_WEAK_FUNC(sub_82E58F78);
PPC_FUNC_IMPL(__imp__sub_82E58F78) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e58f88
	if (ctx.cr0.eq) goto loc_82E58F88;
	// b 0x82e58640
	sub_82E58640(ctx, base);
	return;
loc_82E58F88:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E58F90"))) PPC_WEAK_FUNC(sub_82E58F90);
PPC_FUNC_IMPL(__imp__sub_82E58F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82E58F98;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-1248(r1)
	ea = -1248 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e570f0
	ctx.lr = 0x82E58FBC;
	sub_82E570F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e59314
	if (!ctx.cr0.eq) goto loc_82E59314;
	// lis r11,26733
	ctx.r11.s64 = 1751973888;
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// ori r11,r11,26483
	ctx.r11.u64 = ctx.r11.u64 | 26483;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e58fe0
	if (ctx.cr6.eq) goto loc_82E58FE0;
loc_82E58FD8:
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x82e59314
	goto loc_82E59314;
loc_82E58FE0:
	// li r27,0
	ctx.r27.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sth r27,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r27.u16);
	// bl 0x82da76a0
	ctx.lr = 0x82E59000;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e59314
	if (!ctx.cr0.eq) goto loc_82E59314;
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lis r28,-31890
	ctx.r28.s64 = -2089943040;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,931
	ctx.r6.s64 = 931;
	// addi r30,r11,24720
	ctx.r30.s64 = ctx.r11.s64 + 24720;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,-4716(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39460
	ctx.lr = 0x82E59034;
	sub_82E39460(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// bne cr6,0x82e59048
	if (!ctx.cr6.eq) goto loc_82E59048;
loc_82E59040:
	// li r3,42
	ctx.r3.s64 = 42;
	// b 0x82e59314
	goto loc_82E59314;
loc_82E59048:
	// lis r11,-32026
	ctx.r11.s64 = -2098855936;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r11,-32120
	ctx.r5.s64 = ctx.r11.s64 + -32120;
	// bl 0x82e57030
	ctx.lr = 0x82E59058;
	sub_82E57030(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e59314
	if (!ctx.cr0.eq) goto loc_82E59314;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,938
	ctx.r6.s64 = 938;
	// lwz r11,-4716(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4716);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mulli r3,r10,36
	ctx.r3.s64 = ctx.r10.s64 * 36;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39460
	ctx.lr = 0x82E5907C;
	sub_82E39460(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq 0x82e59040
	if (ctx.cr0.eq) goto loc_82E59040;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e59310
	if (!ctx.cr6.gt) goto loc_82E59310;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r25,r11,24812
	ctx.r25.s64 = ctx.r11.s64 + 24812;
	// lfs f31,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
loc_82E590AC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add. r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e590e0
	if (ctx.cr0.eq) goto loc_82E590E0;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// stw r27,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r27.u32);
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// stb r27,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r27.u8);
	// stb r27,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r27.u8);
	// stfs f31,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f31,28(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r27,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r27.u32);
loc_82E590E0:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e570f0
	ctx.lr = 0x82E590F0;
	sub_82E570F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e59314
	if (!ctx.cr0.eq) goto loc_82E59314;
	// lis r11,25709
	ctx.r11.s64 = 1684865024;
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// ori r11,r11,26483
	ctx.r11.u64 = ctx.r11.u64 | 26483;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e58fd8
	if (!ctx.cr6.eq) goto loc_82E58FD8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E59124;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e59314
	if (!ctx.cr0.eq) goto loc_82E59314;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E59144;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e59314
	if (!ctx.cr0.eq) goto loc_82E59314;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E59164;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e59314
	if (!ctx.cr0.eq) goto loc_82E59314;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r6,1024
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1024, ctx.xer);
	// bgt cr6,0x82e59040
	if (ctx.cr6.gt) goto loc_82E59040;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E5918C;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e59314
	if (!ctx.cr0.eq) goto loc_82E59314;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E591AC;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e59314
	if (!ctx.cr0.eq) goto loc_82E59314;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E591CC;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e59314
	if (!ctx.cr0.eq) goto loc_82E59314;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E591EC;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e59314
	if (!ctx.cr0.eq) goto loc_82E59314;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E5920C;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e59314
	if (!ctx.cr0.eq) goto loc_82E59314;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E5922C;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e59314
	if (!ctx.cr0.eq) goto loc_82E59314;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E5924C;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e59314
	if (!ctx.cr0.eq) goto loc_82E59314;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e59288
	if (ctx.cr6.eq) goto loc_82E59288;
	// lwz r3,-4716(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4716);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E59280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e59314
	if (!ctx.cr0.eq) goto loc_82E59314;
loc_82E59288:
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stb r6,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r6.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stb r6,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r6.u8);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lhz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// sth r5,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r5.u16);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r5,r30,r11
	ctx.r5.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82e585e0
	ctx.lr = 0x82E592F4;
	sub_82E585E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e59314
	if (!ctx.cr0.eq) goto loc_82E59314;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e590ac
	if (ctx.cr6.lt) goto loc_82E590AC;
loc_82E59310:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E59314:
	// addi r1,r1,1248
	ctx.r1.s64 = ctx.r1.s64 + 1248;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E59320"))) PPC_WEAK_FUNC(sub_82E59320);
PPC_FUNC_IMPL(__imp__sub_82E59320) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e59330
	if (ctx.cr0.eq) goto loc_82E59330;
	// b 0x82e58640
	sub_82E58640(ctx, base);
	return;
loc_82E59330:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E59338"))) PPC_WEAK_FUNC(sub_82E59338);
PPC_FUNC_IMPL(__imp__sub_82E59338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E59340;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82e59360
	if (!ctx.cr0.eq) goto loc_82E59360;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82e59398
	goto loc_82E59398;
loc_82E59360:
	// bl 0x82e58640
	ctx.lr = 0x82E59364;
	sub_82E58640(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82e59374
	if (!ctx.cr0.eq) goto loc_82E59374;
loc_82E5936C:
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x82e593a0
	goto loc_82E593A0;
loc_82E59374:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82e5936c
	if (ctx.cr6.gt) goto loc_82E5936C;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82E59394;
	sub_82CB1160(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82E59398:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E593A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E593A8"))) PPC_WEAK_FUNC(sub_82E593A8);
PPC_FUNC_IMPL(__imp__sub_82E593A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82E593B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e570f0
	ctx.lr = 0x82E593D8;
	sub_82E570F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e594fc
	if (!ctx.cr0.eq) goto loc_82E594FC;
	// lis r11,25707
	ctx.r11.s64 = 1684733952;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// ori r11,r11,28268
	ctx.r11.u64 = ctx.r11.u64 | 28268;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e593fc
	if (ctx.cr6.eq) goto loc_82E593FC;
loc_82E593F4:
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x82e594fc
	goto loc_82E594FC;
loc_82E593FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82da76a0
	ctx.lr = 0x82E5941C;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e594fc
	if (!ctx.cr0.eq) goto loc_82E594FC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E5943C;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e594fc
	if (!ctx.cr0.eq) goto loc_82E594FC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e570f0
	ctx.lr = 0x82E59454;
	sub_82E570F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e594fc
	if (!ctx.cr0.eq) goto loc_82E594FC;
	// lis r11,25710
	ctx.r11.s64 = 1684930560;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// ori r11,r11,28515
	ctx.r11.u64 = ctx.r11.u64 | 28515;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e593f4
	if (!ctx.cr6.eq) goto loc_82E593F4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e57188
	ctx.lr = 0x82E59484;
	sub_82E57188(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82e594b0
	if (ctx.cr0.eq) goto loc_82E594B0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e594a8
	if (ctx.cr6.eq) goto loc_82E594A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E594A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E594A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82e594fc
	goto loc_82E594FC;
loc_82E594B0:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// bl 0x82e56d68
	ctx.lr = 0x82E594CC;
	sub_82E56D68(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82e585e0
	ctx.lr = 0x82E594DC;
	sub_82E585E0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e594f8
	if (ctx.cr6.eq) goto loc_82E594F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E594F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E594F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E594FC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E59504"))) PPC_WEAK_FUNC(sub_82E59504);
PPC_FUNC_IMPL(__imp__sub_82E59504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E59508"))) PPC_WEAK_FUNC(sub_82E59508);
PPC_FUNC_IMPL(__imp__sub_82E59508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E59510;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E59534;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e595c8
	if (!ctx.cr0.eq) goto loc_82E595C8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E59554;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e595c8
	if (!ctx.cr0.eq) goto loc_82E595C8;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r6,1220
	ctx.r6.s64 = 1220;
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r5,r10,24720
	ctx.r5.s64 = ctx.r10.s64 + 24720;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39480
	ctx.lr = 0x82E59584;
	sub_82E39480(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// bne 0x82e59598
	if (!ctx.cr0.eq) goto loc_82E59598;
	// li r3,42
	ctx.r3.s64 = 42;
	// b 0x82e595c8
	goto loc_82E595C8;
loc_82E59598:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E595AC;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e595c8
	if (!ctx.cr0.eq) goto loc_82E595C8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// bl 0x82e585e0
	ctx.lr = 0x82E595C4;
	sub_82E585E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E595C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E595D0"))) PPC_WEAK_FUNC(sub_82E595D0);
PPC_FUNC_IMPL(__imp__sub_82E595D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82E595D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e570f0
	ctx.lr = 0x82E595F8;
	sub_82E570F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5975c
	if (!ctx.cr0.eq) goto loc_82E5975C;
	// lis r11,26733
	ctx.r11.s64 = 1751973888;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// ori r11,r11,26740
	ctx.r11.u64 = ctx.r11.u64 | 26740;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e5961c
	if (ctx.cr6.eq) goto loc_82E5961C;
loc_82E59614:
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x82e5975c
	goto loc_82E5975C;
loc_82E5961C:
	// li r25,0
	ctx.r25.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// sth r25,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r25.u16);
	// bl 0x82da76a0
	ctx.lr = 0x82E5963C;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5975c
	if (!ctx.cr0.eq) goto loc_82E5975C;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lis r29,-31890
	ctx.r29.s64 = -2089943040;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,764
	ctx.r6.s64 = 764;
	// addi r30,r11,24720
	ctx.r30.s64 = ctx.r11.s64 + 24720;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39460
	ctx.lr = 0x82E59670;
	sub_82E39460(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// bne cr6,0x82e59684
	if (!ctx.cr6.eq) goto loc_82E59684;
loc_82E5967C:
	// li r3,42
	ctx.r3.s64 = 42;
	// b 0x82e5975c
	goto loc_82E5975C;
loc_82E59684:
	// lis r11,-32026
	ctx.r11.s64 = -2098855936;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r11,-32568
	ctx.r5.s64 = ctx.r11.s64 + -32568;
	// bl 0x82e57030
	ctx.lr = 0x82E59694;
	sub_82E57030(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5975c
	if (!ctx.cr0.eq) goto loc_82E5975C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,771
	ctx.r6.s64 = 771;
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mulli r3,r10,44
	ctx.r3.s64 = ctx.r10.s64 * 44;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39480
	ctx.lr = 0x82E596B8;
	sub_82E39480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq 0x82e5967c
	if (ctx.cr0.eq) goto loc_82E5967C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e59758
	if (!ctx.cr6.gt) goto loc_82E59758;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// addi r28,r11,24624
	ctx.r28.s64 = ctx.r11.s64 + 24624;
loc_82E596E0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add. r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e596f4
	if (ctx.cr0.eq) goto loc_82E596F4;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_82E596F4:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e570f0
	ctx.lr = 0x82E59704;
	sub_82E570F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5975c
	if (!ctx.cr0.eq) goto loc_82E5975C;
	// lis r11,8301
	ctx.r11.s64 = 544014336;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// ori r11,r11,26740
	ctx.r11.u64 = ctx.r11.u64 | 26740;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e59614
	if (!ctx.cr6.eq) goto loc_82E59614;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// bl 0x82e58ca0
	ctx.lr = 0x82E5973C;
	sub_82E58CA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5975c
	if (!ctx.cr0.eq) goto loc_82E5975C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,44
	ctx.r30.s64 = ctx.r30.s64 + 44;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e596e0
	if (ctx.cr6.lt) goto loc_82E596E0;
loc_82E59758:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E5975C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E59764"))) PPC_WEAK_FUNC(sub_82E59764);
PPC_FUNC_IMPL(__imp__sub_82E59764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E59768"))) PPC_WEAK_FUNC(sub_82E59768);
PPC_FUNC_IMPL(__imp__sub_82E59768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82E59770;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e570f0
	ctx.lr = 0x82E59790;
	sub_82E570F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e59a18
	if (!ctx.cr0.eq) goto loc_82E59A18;
	// lis r11,26731
	ctx.r11.s64 = 1751842816;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// ori r11,r11,28268
	ctx.r11.u64 = ctx.r11.u64 | 28268;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e597b4
	if (ctx.cr6.eq) goto loc_82E597B4;
loc_82E597AC:
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x82e59a18
	goto loc_82E59A18;
loc_82E597B4:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// bl 0x82da76a0
	ctx.lr = 0x82E597D4;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e59a18
	if (!ctx.cr0.eq) goto loc_82E59A18;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lis r25,-31890
	ctx.r25.s64 = -2089943040;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,1112
	ctx.r6.s64 = 1112;
	// addi r26,r11,24720
	ctx.r26.s64 = ctx.r11.s64 + 24720;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r11,-4716(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39460
	ctx.lr = 0x82E59808;
	sub_82E39460(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// bne cr6,0x82e5981c
	if (!ctx.cr6.eq) goto loc_82E5981C;
loc_82E59814:
	// li r3,42
	ctx.r3.s64 = 42;
	// b 0x82e59a18
	goto loc_82E59A18;
loc_82E5981C:
	// lis r11,-32026
	ctx.r11.s64 = -2098855936;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r11,-31424
	ctx.r5.s64 = ctx.r11.s64 + -31424;
	// bl 0x82e57030
	ctx.lr = 0x82E5982C;
	sub_82E57030(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e59a18
	if (!ctx.cr0.eq) goto loc_82E59A18;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,1119
	ctx.r6.s64 = 1119;
	// lwz r11,-4716(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4716);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// rlwinm r3,r10,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39480
	ctx.lr = 0x82E59850;
	sub_82E39480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq 0x82e59814
	if (ctx.cr0.eq) goto loc_82E59814;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e598f4
	if (!ctx.cr6.gt) goto loc_82E598F4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r27,r11,24604
	ctx.r27.s64 = ctx.r11.s64 + 24604;
loc_82E59878:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add. r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e59890
	if (ctx.cr0.eq) goto loc_82E59890;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
loc_82E59890:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e570f0
	ctx.lr = 0x82E598A0;
	sub_82E570F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e59a18
	if (!ctx.cr0.eq) goto loc_82E59A18;
	// lis r11,8299
	ctx.r11.s64 = 543883264;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// ori r11,r11,28268
	ctx.r11.u64 = ctx.r11.u64 | 28268;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e597ac
	if (!ctx.cr6.eq) goto loc_82E597AC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// bl 0x82e593a8
	ctx.lr = 0x82E598D8;
	sub_82E593A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e59a18
	if (!ctx.cr0.eq) goto loc_82E59A18;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e59878
	if (ctx.cr6.lt) goto loc_82E59878;
loc_82E598F4:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e570f0
	ctx.lr = 0x82E59904;
	sub_82E570F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e59a18
	if (!ctx.cr0.eq) goto loc_82E59A18;
	// lis r11,26739
	ctx.r11.s64 = 1752367104;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// ori r11,r11,26220
	ctx.r11.u64 = ctx.r11.u64 | 26220;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e597ac
	if (!ctx.cr6.eq) goto loc_82E597AC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82da76a0
	ctx.lr = 0x82E59938;
	sub_82DA76A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e59a18
	if (!ctx.cr0.eq) goto loc_82E59A18;
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// li r6,1142
	ctx.r6.s64 = 1142;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,-4716(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39460
	ctx.lr = 0x82E59960;
	sub_82E39460(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// beq cr6,0x82e59814
	if (ctx.cr6.eq) goto loc_82E59814;
	// lis r11,-32026
	ctx.r11.s64 = -2098855936;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r11,-31400
	ctx.r5.s64 = ctx.r11.s64 + -31400;
	// bl 0x82e57030
	ctx.lr = 0x82E5997C;
	sub_82E57030(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e59a18
	if (!ctx.cr0.eq) goto loc_82E59A18;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r6,1149
	ctx.r6.s64 = 1149;
	// lwz r11,-4716(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4716);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mulli r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 * 12;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39480
	ctx.lr = 0x82E599A0;
	sub_82E39480(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e59a14
	if (!ctx.cr6.gt) goto loc_82E59A14;
loc_82E599B4:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e570f0
	ctx.lr = 0x82E599C4;
	sub_82E570F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e59a18
	if (!ctx.cr0.eq) goto loc_82E59A18;
	// lis r11,25715
	ctx.r11.s64 = 1685258240;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// ori r11,r11,26220
	ctx.r11.u64 = ctx.r11.u64 | 26220;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e597ac
	if (!ctx.cr6.eq) goto loc_82E597AC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// bl 0x82e59508
	ctx.lr = 0x82E599F8;
	sub_82E59508(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e59a18
	if (!ctx.cr0.eq) goto loc_82E59A18;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e599b4
	if (ctx.cr6.lt) goto loc_82E599B4;
loc_82E59A14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E59A18:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E59A20"))) PPC_WEAK_FUNC(sub_82E59A20);
PPC_FUNC_IMPL(__imp__sub_82E59A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E59A28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e59a68
	if (ctx.cr0.eq) goto loc_82E59A68;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394d0
	ctx.lr = 0x82E59A54;
	sub_82E394D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// bne 0x82e59a6c
	if (!ctx.cr0.eq) goto loc_82E59A6C;
	// li r3,42
	ctx.r3.s64 = 42;
	// b 0x82e59a84
	goto loc_82E59A84;
loc_82E59A68:
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_82E59A6C:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// li r5,124
	ctx.r5.s64 = 124;
	// bl 0x82cb1160
	ctx.lr = 0x82E59A7C;
	sub_82CB1160(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r29.u32);
loc_82E59A84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E59A8C"))) PPC_WEAK_FUNC(sub_82E59A8C);
PPC_FUNC_IMPL(__imp__sub_82E59A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E59A90"))) PPC_WEAK_FUNC(sub_82E59A90);
PPC_FUNC_IMPL(__imp__sub_82E59A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E59A98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r29,-31890
	ctx.r29.s64 = -2089943040;
	// addi r30,r11,24864
	ctx.r30.s64 = ctx.r11.s64 + 24864;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e59acc
	if (ctx.cr0.eq) goto loc_82E59ACC;
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// li r6,49
	ctx.r6.s64 = 49;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E59ACC;
	sub_82E394B8(ctx, base);
loc_82E59ACC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,54
	ctx.r6.s64 = 54;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E59B0C;
	sub_82E394B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E59B18"))) PPC_WEAK_FUNC(sub_82E59B18);
PPC_FUNC_IMPL(__imp__sub_82E59B18) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,-728(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -728);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r5,124
	ctx.r5.s64 = 124;
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,-18240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18240);
	ctx.f0.f64 = double(temp.f32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r11,-10000
	ctx.r11.s64 = -10000;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// li r11,-2602
	ctx.r11.s64 = -2602;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r11,200
	ctx.r11.s64 = 200;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lfs f13,-18248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18248);
	ctx.f13.f64 = double(temp.f32);
	// li r11,831
	ctx.r11.s64 = 831;
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,7616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7616);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lfs f13,-732(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -732);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lfs f13,-736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -736);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lfs f13,-17720(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17720);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82E59C2C;
	sub_82CB1160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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

__attribute__((alias("__imp__sub_82E59C4C"))) PPC_WEAK_FUNC(sub_82E59C4C);
PPC_FUNC_IMPL(__imp__sub_82E59C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E59C50"))) PPC_WEAK_FUNC(sub_82E59C50);
PPC_FUNC_IMPL(__imp__sub_82E59C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,24948
	ctx.r11.s64 = ctx.r11.s64 + 24948;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E59C60"))) PPC_WEAK_FUNC(sub_82E59C60);
PPC_FUNC_IMPL(__imp__sub_82E59C60) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,24948
	ctx.r11.s64 = ctx.r11.s64 + 24948;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82e59c8c
	if (ctx.cr0.eq) goto loc_82E59C8C;
	// bl 0x822990f0
	ctx.lr = 0x82E59C8C;
	sub_822990F0(ctx, base);
loc_82E59C8C:
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

__attribute__((alias("__imp__sub_82E59CA4"))) PPC_WEAK_FUNC(sub_82E59CA4);
PPC_FUNC_IMPL(__imp__sub_82E59CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E59CA8"))) PPC_WEAK_FUNC(sub_82E59CA8);
PPC_FUNC_IMPL(__imp__sub_82E59CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,24948
	ctx.r11.s64 = ctx.r11.s64 + 24948;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E59CB8"))) PPC_WEAK_FUNC(sub_82E59CB8);
PPC_FUNC_IMPL(__imp__sub_82E59CB8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,80
	ctx.r9.s64 = ctx.r11.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E59D0C"))) PPC_WEAK_FUNC(sub_82E59D0C);
PPC_FUNC_IMPL(__imp__sub_82E59D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E59D10"))) PPC_WEAK_FUNC(sub_82E59D10);
PPC_FUNC_IMPL(__imp__sub_82E59D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E59D18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82e59e14
	if (ctx.cr6.eq) goto loc_82E59E14;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,-47
	ctx.r11.s64 = ctx.r11.s64 + -47;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// add r30,r11,r4
	ctx.r30.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// b 0x82e59d58
	goto loc_82E59D58;
loc_82E59D48:
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// beq cr6,0x82e59d60
	if (ctx.cr6.eq) goto loc_82E59D60;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
loc_82E59D58:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e59d48
	if (!ctx.cr0.eq) goto loc_82E59D48;
loc_82E59D60:
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r28,r3,28
	ctx.r28.s64 = ctx.r3.s64 + 28;
	// b 0x82e59dd8
	goto loc_82E59DD8;
loc_82E59D6C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e59d7c
	if (!ctx.cr6.eq) goto loc_82E59D7C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E59D7C:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e59dd4
	if (ctx.cr6.eq) goto loc_82E59DD4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e59d98
	if (!ctx.cr6.eq) goto loc_82E59D98;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E59D98:
	// subf r5,r30,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r30.s64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82da46a0
	ctx.lr = 0x82E59DA8;
	sub_82DA46A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e59dd4
	if (!ctx.cr0.eq) goto loc_82E59DD4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e59dc0
	if (!ctx.cr6.eq) goto loc_82E59DC0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E59DC0:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e59de4
	if (ctx.cr6.eq) goto loc_82E59DE4;
loc_82E59DD4:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82E59DD8:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82e59d6c
	if (!ctx.cr6.eq) goto loc_82E59D6C;
	// b 0x82e59e14
	goto loc_82E59E14;
loc_82E59DE4:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e59e0c
	if (ctx.cr6.eq) goto loc_82E59E0C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e59e00
	if (!ctx.cr6.eq) goto loc_82E59E00;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E59E00:
	// addi r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 1;
	// bl 0x82e49b88
	ctx.lr = 0x82E59E08;
	sub_82E49B88(ctx, base);
	// b 0x82e59e18
	goto loc_82E59E18;
loc_82E59E0C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e59e18
	if (!ctx.cr6.eq) goto loc_82E59E18;
loc_82E59E14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E59E18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E59E20"))) PPC_WEAK_FUNC(sub_82E59E20);
PPC_FUNC_IMPL(__imp__sub_82E59E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E59E28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e59e40
	if (!ctx.cr6.eq) goto loc_82E59E40;
loc_82E59E38:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e59f38
	goto loc_82E59F38;
loc_82E59E40:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,-47
	ctx.r11.s64 = ctx.r11.s64 + -47;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_82E59E5C:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82e59e7c
	goto loc_82E59E7C;
loc_82E59E68:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x82e59e84
	if (ctx.cr6.eq) goto loc_82E59E84;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
loc_82E59E7C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e59e68
	if (!ctx.cr6.eq) goto loc_82E59E68;
loc_82E59E84:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e59e9c
	if (ctx.cr6.eq) goto loc_82E59E9C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82E59E9C:
	// bl 0x82da4900
	ctx.lr = 0x82E59EA0;
	sub_82DA4900(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82e59e38
	if (ctx.cr0.lt) goto loc_82E59E38;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// beq cr6,0x82e59ee4
	if (ctx.cr6.eq) goto loc_82E59EE4;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e59f18
	if (ctx.cr6.eq) goto loc_82E59F18;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82e59f0c
	if (!ctx.cr6.gt) goto loc_82E59F0C;
loc_82E59ED0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e59f18
	if (ctx.cr6.eq) goto loc_82E59F18;
	// bdnz 0x82e59ed0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E59ED0;
	// b 0x82e59f0c
	goto loc_82E59F0C;
loc_82E59EE4:
	// addi r10,r29,28
	ctx.r10.s64 = ctx.r29.s64 + 28;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e59f18
	if (ctx.cr6.eq) goto loc_82E59F18;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82e59f0c
	if (!ctx.cr6.gt) goto loc_82E59F0C;
loc_82E59EFC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e59f18
	if (ctx.cr6.eq) goto loc_82E59F18;
	// bdnz 0x82e59efc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E59EFC;
loc_82E59F0C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-4
	ctx.r31.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82e59f1c
	if (!ctx.cr6.eq) goto loc_82E59F1C;
loc_82E59F18:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E59F1C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e59f34
	if (ctx.cr6.eq) goto loc_82E59F34;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e59e5c
	if (!ctx.cr6.eq) goto loc_82E59E5C;
loc_82E59F34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E59F38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E59F40"))) PPC_WEAK_FUNC(sub_82E59F40);
PPC_FUNC_IMPL(__imp__sub_82E59F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E59F48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82e59fe0
	if (!ctx.cr6.eq) goto loc_82E59FE0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r11,24992
	ctx.r5.s64 = ctx.r11.s64 + 24992;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,169
	ctx.r6.s64 = 169;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39480
	ctx.lr = 0x82E59F84;
	sub_82E39480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// bne 0x82e59f98
	if (!ctx.cr0.eq) goto loc_82E59F98;
	// li r3,42
	ctx.r3.s64 = 42;
	// b 0x82e59fd8
	goto loc_82E59FD8;
loc_82E59F98:
	// lwz r30,28(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// b 0x82e59fcc
	goto loc_82E59FCC;
loc_82E59FA4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r5,r30,-4
	ctx.r5.s64 = ctx.r30.s64 + -4;
	// bne cr6,0x82e59fb4
	if (!ctx.cr6.eq) goto loc_82E59FB4;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82E59FB4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e59f40
	ctx.lr = 0x82E59FC0;
	sub_82E59F40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e59fd8
	if (!ctx.cr0.eq) goto loc_82E59FD8;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82E59FCC:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82e59fa4
	if (!ctx.cr6.eq) goto loc_82E59FA4;
loc_82E59FD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E59FD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82E59FE0:
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// addi r9,r29,48
	ctx.r9.s64 = ctx.r29.s64 + 48;
	// b 0x82e5a030
	goto loc_82E5A030;
loc_82E59FEC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// bne cr6,0x82e59ffc
	if (!ctx.cr6.eq) goto loc_82E59FFC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82E59FFC:
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r10.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r10,76(r8)
	PPC_STORE_U32(ctx.r8.u32 + 76, ctx.r10.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82E5A030:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82e59fec
	if (!ctx.cr6.eq) goto loc_82E59FEC;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e59fd4
	if (ctx.cr0.eq) goto loc_82E59FD4;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82E5A048:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82e5a05c
	if (!ctx.cr0.eq) goto loc_82E5A05C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E5A05C:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e59fd4
	if (ctx.cr6.eq) goto loc_82E59FD4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r5,r30,-4
	ctx.r5.s64 = ctx.r30.s64 + -4;
	// bne cr6,0x82e5a074
	if (!ctx.cr6.eq) goto loc_82E5A074;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82E5A074:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e59f40
	ctx.lr = 0x82E5A080;
	sub_82E59F40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e59fd8
	if (!ctx.cr0.eq) goto loc_82E59FD8;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82e5a048
	goto loc_82E5A048;
}

__attribute__((alias("__imp__sub_82E5A090"))) PPC_WEAK_FUNC(sub_82E5A090);
PPC_FUNC_IMPL(__imp__sub_82E5A090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82E5A098;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r30,28
	ctx.r29.s64 = ctx.r30.s64 + 28;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82e5a0e4
	if (ctx.cr6.eq) goto loc_82E5A0E4;
loc_82E5A0B4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82e5a0c4
	if (!ctx.cr6.eq) goto loc_82E5A0C4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82E5A0C4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e4a3f0
	ctx.lr = 0x82E5A0D0;
	sub_82E4A3F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5a328
	if (!ctx.cr0.eq) goto loc_82E5A328;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82e5a0b4
	if (!ctx.cr6.eq) goto loc_82E5A0B4;
loc_82E5A0E4:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r31,-31890
	ctx.r31.s64 = -2089943040;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,24992
	ctx.r28.s64 = ctx.r11.s64 + 24992;
	// beq 0x82e5a110
	if (ctx.cr0.eq) goto loc_82E5A110;
	// lwz r11,-4716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4716);
	// li r6,245
	ctx.r6.s64 = 245;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E5A110;
	sub_82E394B8(ctx, base);
loc_82E5A110:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e5a130
	if (ctx.cr0.eq) goto loc_82E5A130;
	// lwz r11,-4716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4716);
	// li r6,250
	ctx.r6.s64 = 250;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E5A130;
	sub_82E394B8(ctx, base);
loc_82E5A130:
	// lwz r3,-4716(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4716);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5A148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5a328
	if (!ctx.cr0.eq) goto loc_82E5A328;
	// lwz r3,-4716(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4716);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5A168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5a328
	if (!ctx.cr0.eq) goto loc_82E5A328;
	// lbz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e5a1f4
	if (ctx.cr0.eq) goto loc_82E5A1F4;
	// lwz r11,-4716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4716);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5A194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5a328
	if (!ctx.cr0.eq) goto loc_82E5A328;
	// bl 0x82e58428
	ctx.lr = 0x82E5A1A0;
	sub_82E58428(ctx, base);
	// bl 0x82e582a0
	ctx.lr = 0x82E5A1A4;
	sub_82E582A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5a328
	if (!ctx.cr0.eq) goto loc_82E5A328;
	// bl 0x82e589a0
	ctx.lr = 0x82E5A1B0;
	sub_82E589A0(ctx, base);
	// bl 0x82e57bc8
	ctx.lr = 0x82E5A1B4;
	sub_82E57BC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5a328
	if (!ctx.cr0.eq) goto loc_82E5A328;
	// bl 0x82e57dc8
	ctx.lr = 0x82E5A1C0;
	sub_82E57DC8(ctx, base);
	// bl 0x82e57ce8
	ctx.lr = 0x82E5A1C4;
	sub_82E57CE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5a328
	if (!ctx.cr0.eq) goto loc_82E5A328;
	// bl 0x82e57fb8
	ctx.lr = 0x82E5A1D0;
	sub_82E57FB8(ctx, base);
	// bl 0x82e57ef0
	ctx.lr = 0x82E5A1D4;
	sub_82E57EF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5a328
	if (!ctx.cr0.eq) goto loc_82E5A328;
	// bl 0x82e58178
	ctx.lr = 0x82E5A1E0;
	sub_82E58178(ctx, base);
	// bl 0x82e580e0
	ctx.lr = 0x82E5A1E4;
	sub_82E580E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5a328
	if (!ctx.cr0.eq) goto loc_82E5A328;
	// lwz r11,-4716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4716);
	// stb r27,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r27.u8);
loc_82E5A1F4:
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e5a214
	if (ctx.cr0.eq) goto loc_82E5A214;
	// lwz r11,-4716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4716);
	// li r6,283
	ctx.r6.s64 = 283;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E5A214;
	sub_82E394B8(ctx, base);
loc_82E5A214:
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e5a234
	if (ctx.cr0.eq) goto loc_82E5A234;
	// lwz r11,-4716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4716);
	// li r6,288
	ctx.r6.s64 = 288;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E5A234;
	sub_82E394B8(ctx, base);
loc_82E5A234:
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e5a254
	if (ctx.cr0.eq) goto loc_82E5A254;
	// lwz r11,-4716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4716);
	// li r6,293
	ctx.r6.s64 = 293;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E5A254;
	sub_82E394B8(ctx, base);
loc_82E5A254:
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e5a274
	if (ctx.cr0.eq) goto loc_82E5A274;
	// lwz r11,-4716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4716);
	// li r6,298
	ctx.r6.s64 = 298;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E5A274;
	sub_82E394B8(ctx, base);
loc_82E5A274:
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e5a284
	if (ctx.cr0.eq) goto loc_82E5A284;
	// bl 0x82e54190
	ctx.lr = 0x82E5A284;
	sub_82E54190(ctx, base);
loc_82E5A284:
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e5a2c0
	if (ctx.cr6.eq) goto loc_82E5A2C0;
loc_82E5A298:
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82e5a2ac
	if (!ctx.cr6.eq) goto loc_82E5A2AC;
	// bl 0x82e59a90
	ctx.lr = 0x82E5A2AC;
	sub_82E59A90(ctx, base);
loc_82E5A2AC:
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e5a298
	if (!ctx.cr6.eq) goto loc_82E5A298;
loc_82E5A2C0:
	// lwz r10,-4716(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4716);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lwz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r6,321
	ctx.r6.s64 = 321;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r9,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// lwz r11,-4716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E5A314;
	sub_82E394B8(ctx, base);
	// lwz r3,-4716(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4716);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5A328;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E5A328:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5A330"))) PPC_WEAK_FUNC(sub_82E5A330);
PPC_FUNC_IMPL(__imp__sub_82E5A330) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82e5a340
	if (ctx.cr6.eq) goto loc_82E5A340;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82E5A340:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82e5a390
	if (ctx.cr6.eq) goto loc_82E5A390;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x82e5a358
	if (!ctx.cr6.eq) goto loc_82E5A358;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82E5A358:
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// addi r10,r11,132
	ctx.r10.s64 = ctx.r11.s64 + 132;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82e5a380
	goto loc_82E5A380;
loc_82E5A370:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82e5a38c
	if (ctx.cr6.eq) goto loc_82E5A38C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82E5A380:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e5a370
	if (!ctx.cr6.eq) goto loc_82E5A370;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82E5A38C:
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
loc_82E5A390:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5A398"))) PPC_WEAK_FUNC(sub_82E5A398);
PPC_FUNC_IMPL(__imp__sub_82E5A398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82E5A3A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82e5a504
	if (ctx.cr6.eq) goto loc_82E5A504;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82e5a504
	if (ctx.cr6.eq) goto loc_82E5A504;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// bne cr6,0x82e5a3d8
	if (!ctx.cr6.eq) goto loc_82E5A3D8;
	// addi r30,r4,1
	ctx.r30.s64 = ctx.r4.s64 + 1;
loc_82E5A3D8:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// b 0x82e5a3f4
	goto loc_82E5A3F4;
loc_82E5A3E4:
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// beq cr6,0x82e5a3fc
	if (ctx.cr6.eq) goto loc_82E5A3FC;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
loc_82E5A3F4:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e5a3e4
	if (!ctx.cr0.eq) goto loc_82E5A3E4;
loc_82E5A3FC:
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r28,r3,28
	ctx.r28.s64 = ctx.r3.s64 + 28;
	// b 0x82e5a474
	goto loc_82E5A474;
loc_82E5A408:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e5a418
	if (!ctx.cr6.eq) goto loc_82E5A418;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E5A418:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e5a470
	if (ctx.cr6.eq) goto loc_82E5A470;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e5a434
	if (!ctx.cr6.eq) goto loc_82E5A434;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E5A434:
	// subf r5,r30,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r30.s64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82da46a0
	ctx.lr = 0x82E5A444;
	sub_82DA46A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5a470
	if (!ctx.cr0.eq) goto loc_82E5A470;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e5a45c
	if (!ctx.cr6.eq) goto loc_82E5A45C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E5A45C:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e5a484
	if (ctx.cr6.eq) goto loc_82E5A484;
loc_82E5A470:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82E5A474:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82e5a408
	if (!ctx.cr6.eq) goto loc_82E5A408;
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82e5a508
	goto loc_82E5A508;
loc_82E5A484:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e5a4c0
	if (ctx.cr6.eq) goto loc_82E5A4C0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e5a4a0
	if (!ctx.cr6.eq) goto loc_82E5A4A0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E5A4A0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5A4BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82e5a508
	goto loc_82E5A508;
loc_82E5A4C0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e5a4d0
	if (!ctx.cr6.eq) goto loc_82E5A4D0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E5A4D0:
	// clrlwi. r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// beq 0x82e5a4fc
	if (ctx.cr0.eq) goto loc_82E5A4FC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e5a4ec
	if (!ctx.cr6.eq) goto loc_82E5A4EC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E5A4EC:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e4b240
	ctx.lr = 0x82E5A4F4;
	sub_82E4B240(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5a508
	if (!ctx.cr0.eq) goto loc_82E5A508;
loc_82E5A4FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e5a508
	goto loc_82E5A508;
loc_82E5A504:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82E5A508:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5A510"))) PPC_WEAK_FUNC(sub_82E5A510);
PPC_FUNC_IMPL(__imp__sub_82E5A510) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e5a534
	if (!ctx.cr6.eq) goto loc_82E5A534;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82e5a5d8
	goto loc_82E5A5D8;
loc_82E5A534:
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e5a5c0
	if (ctx.cr6.eq) goto loc_82E5A5C0;
loc_82E5A550:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e5a550
	if (!ctx.cr6.eq) goto loc_82E5A550;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82e5a5c0
	if (ctx.cr6.eq) goto loc_82E5A5C0;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e5a59c
	if (ctx.cr6.eq) goto loc_82E5A59C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82e5a590
	if (!ctx.cr6.gt) goto loc_82E5A590;
loc_82E5A580:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e5a59c
	if (ctx.cr6.eq) goto loc_82E5A59C;
	// bdnz 0x82e5a580
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E5A580;
loc_82E5A590:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e5a59c
	if (ctx.cr6.eq) goto loc_82E5A59C;
	// addi r3,r10,-4
	ctx.r3.s64 = ctx.r10.s64 + -4;
loc_82E5A59C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82e5a5c0
	if (ctx.cr6.eq) goto loc_82E5A5C0;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e5a5c0
	if (ctx.cr0.eq) goto loc_82E5A5C0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e4b240
	ctx.lr = 0x82E5A5B8;
	sub_82E4B240(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5a5d8
	if (!ctx.cr0.eq) goto loc_82E5A5D8;
loc_82E5A5C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r12,-87
	ctx.r12.s64 = -87;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// addi r3,r11,87
	ctx.r3.s64 = ctx.r11.s64 + 87;
loc_82E5A5D8:
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

__attribute__((alias("__imp__sub_82E5A5EC"))) PPC_WEAK_FUNC(sub_82E5A5EC);
PPC_FUNC_IMPL(__imp__sub_82E5A5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5A5F0"))) PPC_WEAK_FUNC(sub_82E5A5F0);
PPC_FUNC_IMPL(__imp__sub_82E5A5F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e5a600
	if (!ctx.cr6.eq) goto loc_82E5A600;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E5A600:
	// addi r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 + 28;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82e5a618
	goto loc_82E5A618;
loc_82E5A610:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82E5A618:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e5a610
	if (!ctx.cr6.eq) goto loc_82E5A610;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5A62C"))) PPC_WEAK_FUNC(sub_82E5A62C);
PPC_FUNC_IMPL(__imp__sub_82E5A62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5A630"))) PPC_WEAK_FUNC(sub_82E5A630);
PPC_FUNC_IMPL(__imp__sub_82E5A630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82E5A638;
	__savegprlr_26(ctx, base);
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e5a714
	if (ctx.cr6.eq) goto loc_82E5A714;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82e5a714
	if (ctx.cr6.eq) goto loc_82E5A714;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// bl 0x82da4420
	ctx.lr = 0x82E5A66C;
	sub_82DA4420(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,1023
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1023, ctx.xer);
	// bgt cr6,0x82e5a714
	if (ctx.cr6.gt) goto loc_82E5A714;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82da4448
	ctx.lr = 0x82E5A684;
	sub_82DA4448(ctx, base);
	// addic. r31,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r31.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82e5a6b4
	if (ctx.cr0.eq) goto loc_82E5A6B4;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
loc_82E5A694:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// beq cr6,0x82e5a6ac
	if (ctx.cr6.eq) goto loc_82E5A6AC;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne 0x82e5a694
	if (!ctx.cr0.eq) goto loc_82E5A694;
loc_82E5A6AC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82e5a6bc
	if (!ctx.cr6.eq) goto loc_82E5A6BC;
loc_82E5A6B4:
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82e5a718
	goto loc_82E5A718;
loc_82E5A6BC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stbx r28,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r28.u8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5A6E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5a718
	if (!ctx.cr0.eq) goto loc_82E5A718;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r1,97
	ctx.r11.s64 = ctx.r1.s64 + 97;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5A710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82e5a718
	goto loc_82E5A718;
loc_82E5A714:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82E5A718:
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5A720"))) PPC_WEAK_FUNC(sub_82E5A720);
PPC_FUNC_IMPL(__imp__sub_82E5A720) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e5a78c
	if (ctx.cr6.eq) goto loc_82E5A78C;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82e5a78c
	if (!ctx.cr6.lt) goto loc_82E5A78C;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm. r9,r5,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// beq 0x82e5a778
	if (ctx.cr0.eq) goto loc_82E5A778;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r3,-4716(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// bl 0x82e505c8
	ctx.lr = 0x82E5A768;
	sub_82E505C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82e5a790
	goto loc_82E5A790;
loc_82E5A778:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r3,68(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82e4c358
	ctx.lr = 0x82E5A788;
	sub_82E4C358(ctx, base);
	// b 0x82e5a790
	goto loc_82E5A790;
loc_82E5A78C:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82E5A790:
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

__attribute__((alias("__imp__sub_82E5A7A4"))) PPC_WEAK_FUNC(sub_82E5A7A4);
PPC_FUNC_IMPL(__imp__sub_82E5A7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5A7A8"))) PPC_WEAK_FUNC(sub_82E5A7A8);
PPC_FUNC_IMPL(__imp__sub_82E5A7A8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e5a7b8
	if (!ctx.cr6.eq) goto loc_82E5A7B8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E5A7B8:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5A7C8"))) PPC_WEAK_FUNC(sub_82E5A7C8);
PPC_FUNC_IMPL(__imp__sub_82E5A7C8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5A7D8"))) PPC_WEAK_FUNC(sub_82E5A7D8);
PPC_FUNC_IMPL(__imp__sub_82E5A7D8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e5a7e8
	if (!ctx.cr6.eq) goto loc_82E5A7E8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E5A7E8:
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5A7F8"))) PPC_WEAK_FUNC(sub_82E5A7F8);
PPC_FUNC_IMPL(__imp__sub_82E5A7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// addi r7,r11,25080
	ctx.r7.s64 = ctx.r11.s64 + 25080;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r3,28
	ctx.r8.s64 = ctx.r3.s64 + 28;
	// addi r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 + 80;
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
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
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5A87C"))) PPC_WEAK_FUNC(sub_82E5A87C);
PPC_FUNC_IMPL(__imp__sub_82E5A87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5A880"))) PPC_WEAK_FUNC(sub_82E5A880);
PPC_FUNC_IMPL(__imp__sub_82E5A880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,24948
	ctx.r11.s64 = ctx.r11.s64 + 24948;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5A890"))) PPC_WEAK_FUNC(sub_82E5A890);
PPC_FUNC_IMPL(__imp__sub_82E5A890) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,24948
	ctx.r11.s64 = ctx.r11.s64 + 24948;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82e5a8bc
	if (ctx.cr0.eq) goto loc_82E5A8BC;
	// bl 0x822990f0
	ctx.lr = 0x82E5A8BC;
	sub_822990F0(ctx, base);
loc_82E5A8BC:
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

__attribute__((alias("__imp__sub_82E5A8D4"))) PPC_WEAK_FUNC(sub_82E5A8D4);
PPC_FUNC_IMPL(__imp__sub_82E5A8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5A8D8"))) PPC_WEAK_FUNC(sub_82E5A8D8);
PPC_FUNC_IMPL(__imp__sub_82E5A8D8) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e5a964
	if (ctx.cr6.eq) goto loc_82E5A964;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da4420
	ctx.lr = 0x82E5A904;
	sub_82DA4420(ctx, base);
	// addic. r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82e5a920
	if (!ctx.cr0.gt) goto loc_82E5A920;
loc_82E5A90C:
	// lbzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// beq cr6,0x82e5a920
	if (ctx.cr6.eq) goto loc_82E5A920;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x82e5a90c
	if (ctx.cr0.gt) goto loc_82E5A90C;
loc_82E5A920:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e5a964
	if (ctx.cr6.eq) goto loc_82E5A964;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stbx r10,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u8);
	// bl 0x82e59d10
	ctx.lr = 0x82E5A940;
	sub_82E59D10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e5a964
	if (ctx.cr0.eq) goto loc_82E5A964;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// bl 0x82e499c0
	ctx.lr = 0x82E5A958;
	sub_82E499C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq 0x82e5a968
	if (ctx.cr0.eq) goto loc_82E5A968;
loc_82E5A964:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E5A968:
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

__attribute__((alias("__imp__sub_82E5A980"))) PPC_WEAK_FUNC(sub_82E5A980);
PPC_FUNC_IMPL(__imp__sub_82E5A980) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e5a99c
	if (ctx.cr0.eq) goto loc_82E5A99C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82E5A99C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5A9AC"))) PPC_WEAK_FUNC(sub_82E5A9AC);
PPC_FUNC_IMPL(__imp__sub_82E5A9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5A9B0"))) PPC_WEAK_FUNC(sub_82E5A9B0);
PPC_FUNC_IMPL(__imp__sub_82E5A9B0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,168(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 168);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5A9B8"))) PPC_WEAK_FUNC(sub_82E5A9B8);
PPC_FUNC_IMPL(__imp__sub_82E5A9B8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5A9C0"))) PPC_WEAK_FUNC(sub_82E5A9C0);
PPC_FUNC_IMPL(__imp__sub_82E5A9C0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5A9C8"))) PPC_WEAK_FUNC(sub_82E5A9C8);
PPC_FUNC_IMPL(__imp__sub_82E5A9C8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5A9D0"))) PPC_WEAK_FUNC(sub_82E5A9D0);
PPC_FUNC_IMPL(__imp__sub_82E5A9D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5A9D8"))) PPC_WEAK_FUNC(sub_82E5A9D8);
PPC_FUNC_IMPL(__imp__sub_82E5A9D8) {
	PPC_FUNC_PROLOGUE();
	// std r4,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r4.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5A9E0"))) PPC_WEAK_FUNC(sub_82E5A9E0);
PPC_FUNC_IMPL(__imp__sub_82E5A9E0) {
	PPC_FUNC_PROLOGUE();
	// std r4,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r4.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5A9E8"))) PPC_WEAK_FUNC(sub_82E5A9E8);
PPC_FUNC_IMPL(__imp__sub_82E5A9E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5A9F0"))) PPC_WEAK_FUNC(sub_82E5A9F0);
PPC_FUNC_IMPL(__imp__sub_82E5A9F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E5A9F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82e5aa3c
	if (ctx.cr6.eq) goto loc_82E5AA3C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r28,-31890
	ctx.r28.s64 = -2089943040;
	// addi r30,r11,25128
	ctx.r30.s64 = ctx.r11.s64 + 25128;
loc_82E5AA18:
	// lwz r11,-4716(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4716);
	// li r6,37
	ctx.r6.s64 = 37;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E5AA30;
	sub_82E394B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82e5aa18
	if (!ctx.cr6.eq) goto loc_82E5AA18;
loc_82E5AA3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5AA48"))) PPC_WEAK_FUNC(sub_82E5AA48);
PPC_FUNC_IMPL(__imp__sub_82E5AA48) {
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
	// bl 0x82e5a9f0
	ctx.lr = 0x82E5AA60;
	sub_82E5A9F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5aa78
	if (!ctx.cr0.eq) goto loc_82E5AA78;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82E5AA78:
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

__attribute__((alias("__imp__sub_82E5AA8C"))) PPC_WEAK_FUNC(sub_82E5AA8C);
PPC_FUNC_IMPL(__imp__sub_82E5AA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5AA90"))) PPC_WEAK_FUNC(sub_82E5AA90);
PPC_FUNC_IMPL(__imp__sub_82E5AA90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82e5aabc
	if (ctx.cr6.eq) goto loc_82E5AABC;
loc_82E5AA9C:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82e5aab4
	if (ctx.cr6.eq) goto loc_82E5AAB4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82e5aa9c
	if (!ctx.cr6.eq) goto loc_82E5AA9C;
loc_82E5AAB4:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82e5aac0
	if (!ctx.cr6.eq) goto loc_82E5AAC0;
loc_82E5AABC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E5AAC0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5AAC8"))) PPC_WEAK_FUNC(sub_82E5AAC8);
PPC_FUNC_IMPL(__imp__sub_82E5AAC8) {
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5AAE0"))) PPC_WEAK_FUNC(sub_82E5AAE0);
PPC_FUNC_IMPL(__imp__sub_82E5AAE0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// beq cr6,0x82e5ab48
	if (ctx.cr6.eq) goto loc_82E5AB48;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r6,160
	ctx.r6.s64 = 160;
	// addi r5,r10,25128
	ctx.r5.s64 = ctx.r10.s64 + 25128;
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,-4716(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4716);
	// addi r4,r10,196
	ctx.r4.s64 = ctx.r10.s64 + 196;
	// bl 0x82e39480
	ctx.lr = 0x82E5AB38;
	sub_82E39480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// li r3,42
	ctx.r3.s64 = 42;
	// beq 0x82e5ab4c
	if (ctx.cr0.eq) goto loc_82E5AB4C;
loc_82E5AB48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E5AB4C:
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

__attribute__((alias("__imp__sub_82E5AB60"))) PPC_WEAK_FUNC(sub_82E5AB60);
PPC_FUNC_IMPL(__imp__sub_82E5AB60) {
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
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e5ab94
	if (ctx.cr0.eq) goto loc_82E5AB94;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,175
	ctx.r6.s64 = 175;
	// addi r5,r11,25128
	ctx.r5.s64 = ctx.r11.s64 + 25128;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E5AB94;
	sub_82E394B8(ctx, base);
loc_82E5AB94:
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

__attribute__((alias("__imp__sub_82E5ABA8"))) PPC_WEAK_FUNC(sub_82E5ABA8);
PPC_FUNC_IMPL(__imp__sub_82E5ABA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82e5ac08
	if (!ctx.cr6.lt) goto loc_82E5AC08;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r3,-8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// blr 
	return;
loc_82E5AC08:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5AC10"))) PPC_WEAK_FUNC(sub_82E5AC10);
PPC_FUNC_IMPL(__imp__sub_82E5AC10) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82e5ac44
	if (ctx.cr0.eq) goto loc_82E5AC44;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_82E5AC24:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82e5ac44
	if (ctx.cr6.eq) goto loc_82E5AC44;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82e5ac24
	if (ctx.cr6.lt) goto loc_82E5AC24;
loc_82E5AC44:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_82E5AC60:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82e5ac60
	if (ctx.cr6.lt) goto loc_82E5AC60;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5AC94"))) PPC_WEAK_FUNC(sub_82E5AC94);
PPC_FUNC_IMPL(__imp__sub_82E5AC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5AC98"))) PPC_WEAK_FUNC(sub_82E5AC98);
PPC_FUNC_IMPL(__imp__sub_82E5AC98) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5ACA4"))) PPC_WEAK_FUNC(sub_82E5ACA4);
PPC_FUNC_IMPL(__imp__sub_82E5ACA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5ACA8"))) PPC_WEAK_FUNC(sub_82E5ACA8);
PPC_FUNC_IMPL(__imp__sub_82E5ACA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e5acd4
	if (ctx.cr0.eq) goto loc_82E5ACD4;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82e5acdc
	goto loc_82E5ACDC;
loc_82E5ACD4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82E5ACDC:
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5ACE4"))) PPC_WEAK_FUNC(sub_82E5ACE4);
PPC_FUNC_IMPL(__imp__sub_82E5ACE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5ACE8"))) PPC_WEAK_FUNC(sub_82E5ACE8);
PPC_FUNC_IMPL(__imp__sub_82E5ACE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,25212
	ctx.r11.s64 = ctx.r11.s64 + 25212;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5ACF8"))) PPC_WEAK_FUNC(sub_82E5ACF8);
PPC_FUNC_IMPL(__imp__sub_82E5ACF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,25224
	ctx.r11.s64 = ctx.r11.s64 + 25224;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5AD08"))) PPC_WEAK_FUNC(sub_82E5AD08);
PPC_FUNC_IMPL(__imp__sub_82E5AD08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82e5aae0
	sub_82E5AAE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5AD10"))) PPC_WEAK_FUNC(sub_82E5AD10);
PPC_FUNC_IMPL(__imp__sub_82E5AD10) {
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
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e5ab60
	ctx.lr = 0x82E5AD2C;
	sub_82E5AB60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5ad3c
	if (!ctx.cr0.eq) goto loc_82E5AD3C;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82e5a9f0
	ctx.lr = 0x82E5AD3C;
	sub_82E5A9F0(ctx, base);
loc_82E5AD3C:
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

__attribute__((alias("__imp__sub_82E5AD50"))) PPC_WEAK_FUNC(sub_82E5AD50);
PPC_FUNC_IMPL(__imp__sub_82E5AD50) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x82e5aa48
	sub_82E5AA48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5AD64"))) PPC_WEAK_FUNC(sub_82E5AD64);
PPC_FUNC_IMPL(__imp__sub_82E5AD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5AD68"))) PPC_WEAK_FUNC(sub_82E5AD68);
PPC_FUNC_IMPL(__imp__sub_82E5AD68) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x82e5aba8
	ctx.lr = 0x82E5AD7C;
	sub_82E5ABA8(ctx, base);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82e5ad88
	if (ctx.cr6.eq) goto loc_82E5AD88;
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
loc_82E5AD88:
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

__attribute__((alias("__imp__sub_82E5AD9C"))) PPC_WEAK_FUNC(sub_82E5AD9C);
PPC_FUNC_IMPL(__imp__sub_82E5AD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5ADA0"))) PPC_WEAK_FUNC(sub_82E5ADA0);
PPC_FUNC_IMPL(__imp__sub_82E5ADA0) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x82e5ac10
	ctx.lr = 0x82E5ADB4;
	sub_82E5AC10(ctx, base);
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

__attribute__((alias("__imp__sub_82E5ADC8"))) PPC_WEAK_FUNC(sub_82E5ADC8);
PPC_FUNC_IMPL(__imp__sub_82E5ADC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e5adf0
	if (ctx.cr0.eq) goto loc_82E5ADF0;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ld r11,-8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -8);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
loc_82E5ADF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5ADF8"))) PPC_WEAK_FUNC(sub_82E5ADF8);
PPC_FUNC_IMPL(__imp__sub_82E5ADF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5AE00"))) PPC_WEAK_FUNC(sub_82E5AE00);
PPC_FUNC_IMPL(__imp__sub_82E5AE00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r11,r11,25236
	ctx.r11.s64 = ctx.r11.s64 + 25236;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5AE14"))) PPC_WEAK_FUNC(sub_82E5AE14);
PPC_FUNC_IMPL(__imp__sub_82E5AE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5AE18"))) PPC_WEAK_FUNC(sub_82E5AE18);
PPC_FUNC_IMPL(__imp__sub_82E5AE18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e5ae38
	if (ctx.cr6.eq) goto loc_82E5AE38;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82E5AE38:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5AE40"))) PPC_WEAK_FUNC(sub_82E5AE40);
PPC_FUNC_IMPL(__imp__sub_82E5AE40) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5AE48"))) PPC_WEAK_FUNC(sub_82E5AE48);
PPC_FUNC_IMPL(__imp__sub_82E5AE48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e5ae68
	if (ctx.cr6.eq) goto loc_82E5AE68;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82E5AE68:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5AE70"))) PPC_WEAK_FUNC(sub_82E5AE70);
PPC_FUNC_IMPL(__imp__sub_82E5AE70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5AEA0"))) PPC_WEAK_FUNC(sub_82E5AEA0);
PPC_FUNC_IMPL(__imp__sub_82E5AEA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5AEA4"))) PPC_WEAK_FUNC(sub_82E5AEA4);
PPC_FUNC_IMPL(__imp__sub_82E5AEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5AEA8"))) PPC_WEAK_FUNC(sub_82E5AEA8);
PPC_FUNC_IMPL(__imp__sub_82E5AEA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stb r11,-48(r1)
	PPC_STORE_U8(ctx.r1.u32 + -48, ctx.r11.u8);
	// lfs f0,6048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,-47(r1)
	PPC_STORE_U8(ctx.r1.u32 + -47, ctx.r11.u8);
	// std r11,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r11.u64);
	// stfs f0,-44(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// std r11,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r11.u64);
	// li r9,5
	ctx.r9.s64 = 5;
	// std r11,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r11.u64);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// addi r11,r1,-48
	ctx.r11.s64 = ctx.r1.s64 + -48;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82E5AEE4:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82e5aee4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E5AEE4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5AEFC"))) PPC_WEAK_FUNC(sub_82E5AEFC);
PPC_FUNC_IMPL(__imp__sub_82E5AEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5AF00"))) PPC_WEAK_FUNC(sub_82E5AF00);
PPC_FUNC_IMPL(__imp__sub_82E5AF00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E5AF08;
	__savegprlr_29(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq 0x82e5b188
	if (ctx.cr0.eq) goto loc_82E5B188;
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82e5b188
	if (ctx.cr0.eq) goto loc_82E5B188;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82e5b188
	if (ctx.cr0.eq) goto loc_82E5B188;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// ld r31,8(r10)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmpld cr6,r4,r31
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r31.u64, ctx.xer);
	// lfs f0,-17976(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17976);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blt cr6,0x82e5af54
	if (ctx.cr6.lt) goto loc_82E5AF54;
	// subf r11,r31,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r31.s64;
loc_82E5AF54:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x82e5af88
	if (!ctx.cr6.eq) goto loc_82E5AF88;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r3,36(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// li r5,-1
	ctx.r5.s64 = -1;
	// divw r6,r6,r8
	ctx.r6.s32 = ctx.r6.s32 / ctx.r8.s32;
	// twllei r8,0
	// mullw r6,r6,r9
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// subfic r6,r6,32
	ctx.xer.ca = ctx.r6.u32 <= 32;
	ctx.r6.s64 = 32 - ctx.r6.s64;
	// srw r6,r5,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r6.u8 & 0x3F));
	// and. r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 & ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82e5afa0
	if (!ctx.cr0.eq) goto loc_82E5AFA0;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82E5AF88:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82e5b0e8
	if (ctx.cr6.eq) goto loc_82E5B0E8;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82e5afa0
	if (ctx.cr6.eq) goto loc_82E5AFA0;
	// subf r11,r31,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r31.s64;
	// b 0x82e5b180
	goto loc_82E5B180;
loc_82E5AFA0:
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r6,32(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// addi r5,r1,-48
	ctx.r5.s64 = ctx.r1.s64 + -48;
	// addi r4,r1,-48
	ctx.r4.s64 = ctx.r1.s64 + -48;
	// std r8,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r8.u64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f10,17708(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17708);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r7,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r7.u64);
	// addi r7,r1,-64
	ctx.r7.s64 = ctx.r1.s64 + -64;
	// std r6,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r6.u64);
	// lfs f0,7676(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfd f0,-64(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,-56(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f13,-48(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// frsp f12,f8
	ctx.f12.f64 = double(float(ctx.f8.f64));
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fdivs f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f0,7616(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7616);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f9,f12,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 / ctx.f9.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f0,6380(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f8,f10,f0
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fadds f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fdivs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// fctiwz f11,f10
	ctx.f11.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// fctidz f10,f9
	ctx.f10.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.f0.u64);
	// stfiwx f11,0,r7
	PPC_STORE_U32(ctx.r7.u32, ctx.f11.u32);
	// lwz r7,-64(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	// ld r6,-48(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// stfd f10,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.f10.u64);
	// divdu r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 / ctx.r6.u64;
	// tdllei r6,0
	// mulld r8,r8,r6
	ctx.r8.s64 = ctx.r8.s64 * ctx.r6.s64;
	// rlwinm. r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// subf r8,r8,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r8.s64;
	// ble 0x82e5b0d4
	if (!ctx.cr0.gt) goto loc_82E5B0D4;
	// ld r3,-48(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
loc_82E5B070:
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x82e5b0ac
	if (!ctx.cr6.eq) goto loc_82E5B0AC;
	// divw r4,r9,r7
	ctx.r4.s32 = ctx.r9.s32 / ctx.r7.s32;
	// lwz r30,36(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// twllei r7,0
	// mullw r4,r4,r7
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// subf r29,r4,r9
	ctx.r29.s64 = ctx.r9.s64 - ctx.r4.s64;
	// rotlwi r4,r9,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// andc r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 & ~ctx.r4.u64;
	// twlgei r4,-1
	// li r4,1
	ctx.r4.s64 = 1;
	// slw r4,r4,r29
	ctx.r4.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r29.u8 & 0x3F));
	// and. r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 & ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82e5b0cc
	if (!ctx.cr0.eq) goto loc_82E5B0CC;
loc_82E5B0AC:
	// cmpld cr6,r8,r3
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r3.u64, ctx.xer);
	// subf r8,r3,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r3.s64;
	// bgt cr6,0x82e5b0bc
	if (ctx.cr6.gt) goto loc_82E5B0BC;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82E5B0BC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82e5b070
	if (ctx.cr6.lt) goto loc_82E5B070;
	// b 0x82e5b0d4
	goto loc_82E5B0D4;
loc_82E5B0CC:
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// mulld r8,r10,r3
	ctx.r8.s64 = ctx.r10.s64 * ctx.r3.s64;
loc_82E5B0D4:
	// divdu r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 / ctx.r6.u64;
	// tdllei r6,0
	// mulld r11,r11,r6
	ctx.r11.s64 = ctx.r11.s64 * ctx.r6.s64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x82e5b180
	goto loc_82E5B180;
loc_82E5B0E8:
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// clrldi r8,r7,32
	ctx.r8.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// addi r7,r1,-48
	ctx.r7.s64 = ctx.r1.s64 + -48;
	// std r9,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r9.u64);
	// std r10,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r10.u64);
	// lfd f0,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r8,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r8.u64);
	// lfd f12,-64(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f0,7616(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7616);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfd f13,-56(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fdivs f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// lfs f0,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.f0.u64);
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// divdu r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 / ctx.r10.u64;
	// tdllei r10,0
	// mulld r9,r9,r10
	ctx.r9.s64 = ctx.r9.s64 * ctx.r10.s64;
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x82e5b180
	if (ctx.cr6.eq) goto loc_82E5B180;
	// divdu r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 / ctx.r10.u64;
	// tdllei r10,0
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulld r11,r11,r10
	ctx.r11.s64 = ctx.r11.s64 * ctx.r10.s64;
loc_82E5B180:
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// b 0x82e5b18c
	goto loc_82E5B18C;
loc_82E5B188:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_82E5B18C:
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5B190"))) PPC_WEAK_FUNC(sub_82E5B190);
PPC_FUNC_IMPL(__imp__sub_82E5B190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E5B198;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5b1e0
	if (!ctx.cr6.gt) goto loc_82E5B1E0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E5B1B4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82e5e258
	ctx.lr = 0x82E5B1C4;
	sub_82E5E258(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5b254
	if (!ctx.cr0.eq) goto loc_82E5B254;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5b1b4
	if (ctx.cr6.lt) goto loc_82E5B1B4;
loc_82E5B1E0:
	// lis r28,-31890
	ctx.r28.s64 = -2089943040;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,571
	ctx.r6.s64 = 571;
	// addi r29,r11,25128
	ctx.r29.s64 = ctx.r11.s64 + 25128;
	// lwz r11,-4716(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4716);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E5B204;
	sub_82E394B8(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82d82550
	ctx.lr = 0x82E5B20C;
	sub_82D82550(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5b254
	if (!ctx.cr0.eq) goto loc_82E5B254;
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82e5ab60
	ctx.lr = 0x82E5B220;
	sub_82E5AB60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5b230
	if (!ctx.cr0.eq) goto loc_82E5B230;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x82e5a9f0
	ctx.lr = 0x82E5B230;
	sub_82E5A9F0(ctx, base);
loc_82E5B230:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e5b254
	if (!ctx.cr6.eq) goto loc_82E5B254;
	// lwz r11,-4716(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4716);
	// li r6,574
	ctx.r6.s64 = 574;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e394b8
	ctx.lr = 0x82E5B250;
	sub_82E394B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E5B254:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5B25C"))) PPC_WEAK_FUNC(sub_82E5B25C);
PPC_FUNC_IMPL(__imp__sub_82E5B25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5B260"))) PPC_WEAK_FUNC(sub_82E5B260);
PPC_FUNC_IMPL(__imp__sub_82E5B260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E5B268;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5b2b0
	if (!ctx.cr6.gt) goto loc_82E5B2B0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E5B284:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82e5e2e0
	ctx.lr = 0x82E5B294;
	sub_82E5E2E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5b2b4
	if (!ctx.cr0.eq) goto loc_82E5B2B4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5b284
	if (ctx.cr6.lt) goto loc_82E5B284;
loc_82E5B2B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E5B2B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5B2BC"))) PPC_WEAK_FUNC(sub_82E5B2BC);
PPC_FUNC_IMPL(__imp__sub_82E5B2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5B2C0"))) PPC_WEAK_FUNC(sub_82E5B2C0);
PPC_FUNC_IMPL(__imp__sub_82E5B2C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E5B2C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5b328
	if (!ctx.cr6.gt) goto loc_82E5B328;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E5B2E4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82e5d7f8
	ctx.lr = 0x82E5B2F4;
	sub_82E5D7F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5b32c
	if (!ctx.cr0.eq) goto loc_82E5B32C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82e5ce38
	ctx.lr = 0x82E5B30C;
	sub_82E5CE38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5b32c
	if (!ctx.cr0.eq) goto loc_82E5B32C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5b2e4
	if (ctx.cr6.lt) goto loc_82E5B2E4;
loc_82E5B328:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E5B32C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5B334"))) PPC_WEAK_FUNC(sub_82E5B334);
PPC_FUNC_IMPL(__imp__sub_82E5B334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5B338"))) PPC_WEAK_FUNC(sub_82E5B338);
PPC_FUNC_IMPL(__imp__sub_82E5B338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E5B340;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5b38c
	if (!ctx.cr6.gt) goto loc_82E5B38C;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_82E5B360:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82e5dd08
	ctx.lr = 0x82E5B370;
	sub_82E5DD08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5b3f8
	if (!ctx.cr0.eq) goto loc_82E5B3F8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5b360
	if (ctx.cr6.lt) goto loc_82E5B360;
loc_82E5B38C:
	// addi r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 + 20;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// bl 0x82e5aa48
	ctx.lr = 0x82E5B39C;
	sub_82E5AA48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e5b3f8
	if (!ctx.cr6.eq) goto loc_82E5B3F8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r10,r30,64
	ctx.r10.s64 = ctx.r30.s64 + 64;
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// li r9,5
	ctx.r9.s64 = 5;
	// std r31,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r31.u64);
	// std r31,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r31.u64);
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82E5B3DC:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82e5b3dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E5B3DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// std r31,112(r30)
	PPC_STORE_U64(ctx.r30.u32 + 112, ctx.r31.u64);
loc_82E5B3F8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5B400"))) PPC_WEAK_FUNC(sub_82E5B400);
PPC_FUNC_IMPL(__imp__sub_82E5B400) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// b 0x82d825d0
	sub_82D825D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5B408"))) PPC_WEAK_FUNC(sub_82E5B408);
PPC_FUNC_IMPL(__imp__sub_82E5B408) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// b 0x82d82618
	sub_82D82618(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5B410"))) PPC_WEAK_FUNC(sub_82E5B410);
PPC_FUNC_IMPL(__imp__sub_82E5B410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E5B418;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r29.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5b46c
	if (!ctx.cr6.gt) goto loc_82E5B46C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E5B43C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82e5d810
	ctx.lr = 0x82E5B450;
	sub_82E5D810(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5b470
	if (!ctx.cr0.eq) goto loc_82E5B470;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5b43c
	if (ctx.cr6.lt) goto loc_82E5B43C;
loc_82E5B46C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E5B470:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5B478"))) PPC_WEAK_FUNC(sub_82E5B478);
PPC_FUNC_IMPL(__imp__sub_82E5B478) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e5b488
	if (!ctx.cr6.eq) goto loc_82E5B488;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E5B488:
	// lbz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5B498"))) PPC_WEAK_FUNC(sub_82E5B498);
PPC_FUNC_IMPL(__imp__sub_82E5B498) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// b 0x82d82830
	sub_82D82830(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5B4A0"))) PPC_WEAK_FUNC(sub_82E5B4A0);
PPC_FUNC_IMPL(__imp__sub_82E5B4A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// b 0x82d82878
	sub_82D82878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5B4A8"))) PPC_WEAK_FUNC(sub_82E5B4A8);
PPC_FUNC_IMPL(__imp__sub_82E5B4A8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e5b4b8
	if (!ctx.cr6.eq) goto loc_82E5B4B8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E5B4B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x82e5b500
	if (!ctx.cr0.gt) goto loc_82E5B500;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_82E5B4D4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r8,168(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 168);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne 0x82e5b4f8
	if (!ctx.cr0.eq) goto loc_82E5B4F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e5b4d4
	if (ctx.cr6.lt) goto loc_82E5B4D4;
	// b 0x82e5b500
	goto loc_82E5B500;
loc_82E5B4F8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
loc_82E5B500:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5B508"))) PPC_WEAK_FUNC(sub_82E5B508);
PPC_FUNC_IMPL(__imp__sub_82E5B508) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d81678
	ctx.lr = 0x82E5B534;
	sub_82D81678(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5b5b8
	if (!ctx.cr0.eq) goto loc_82E5B5B8;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d802f0
	ctx.lr = 0x82E5B55C;
	sub_82D802F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5b5b8
	if (!ctx.cr0.eq) goto loc_82E5B5B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ff1e30
	ctx.lr = 0x82E5B56C;
	sub_82FF1E30(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwa r11,80(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 80));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6480);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r11.u64);
loc_82E5B5B8:
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

__attribute__((alias("__imp__sub_82E5B5D0"))) PPC_WEAK_FUNC(sub_82E5B5D0);
PPC_FUNC_IMPL(__imp__sub_82E5B5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E5B5D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5b62c
	if (!ctx.cr6.gt) goto loc_82E5B62C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E5B5F4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e5b618
	if (ctx.cr6.eq) goto loc_82E5B618;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82e5cdf8
	ctx.lr = 0x82E5B610;
	sub_82E5CDF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e5b638
	if (ctx.cr0.eq) goto loc_82E5B638;
loc_82E5B618:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5b5f4
	if (ctx.cr6.lt) goto loc_82E5B5F4;
loc_82E5B62C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E5B630:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82E5B638:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 * 12;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82e5b630
	goto loc_82E5B630;
}

__attribute__((alias("__imp__sub_82E5B648"))) PPC_WEAK_FUNC(sub_82E5B648);
PPC_FUNC_IMPL(__imp__sub_82E5B648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82E5B650;
	__savegprlr_26(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82e5b674
	if (!ctx.cr6.eq) goto loc_82E5B674;
loc_82E5B668:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E5B66C:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x82e5b7f8
	goto loc_82E5B7F8;
loc_82E5B674:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5B688;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82e5b720
	if (!ctx.cr0.eq) goto loc_82E5B720;
	// bl 0x82e56b48
	ctx.lr = 0x82E5B694;
	sub_82E56B48(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5B6A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82e5b6b8
	if (!ctx.cr0.eq) goto loc_82E5B6B8;
loc_82E5B6B0:
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x82e5b7fc
	goto loc_82E5B7FC;
loc_82E5B6B8:
	// bl 0x82e56b30
	ctx.lr = 0x82E5B6BC;
	sub_82E56B30(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5B6D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5B6EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e5b6b0
	if (ctx.cr0.eq) goto loc_82E5B6B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5B70C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5b7fc
	if (!ctx.cr0.eq) goto loc_82E5B7FC;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e5b668
	if (!ctx.cr0.eq) goto loc_82E5B668;
loc_82E5B720:
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82e56b60
	ctx.lr = 0x82E5B72C;
	sub_82E56B60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5B748;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5b7fc
	if (!ctx.cr0.eq) goto loc_82E5B7FC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5b7f4
	if (!ctx.cr6.gt) goto loc_82E5B7F4;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
loc_82E5B768:
	// bl 0x82e56b60
	ctx.lr = 0x82E5B76C;
	sub_82E56B60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5B780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82e5b6b0
	if (ctx.cr0.eq) goto loc_82E5B6B0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5B79C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e5b7c4
	if (ctx.cr0.eq) goto loc_82E5B7C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5B7C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82e5b7cc
	goto loc_82E5B7CC;
loc_82E5B7C4:
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82E5B7CC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e5b7fc
	if (!ctx.cr6.eq) goto loc_82E5B7FC;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e5b804
	if (!ctx.cr0.eq) goto loc_82E5B804;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5b768
	if (ctx.cr6.lt) goto loc_82E5B768;
loc_82E5B7F4:
	// stw r26,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r26.u32);
loc_82E5B7F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E5B7FC:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E5B804:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5B818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82e5b66c
	goto loc_82E5B66C;
}

__attribute__((alias("__imp__sub_82E5B820"))) PPC_WEAK_FUNC(sub_82E5B820);
PPC_FUNC_IMPL(__imp__sub_82E5B820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82E5B828;
	__savegprlr_25(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x82e56b30
	ctx.lr = 0x82E5B83C;
	sub_82E56B30(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5B850;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82e5b860
	if (!ctx.cr0.eq) goto loc_82E5B860;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82e5b998
	goto loc_82E5B998;
loc_82E5B860:
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5B884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5b998
	if (!ctx.cr0.eq) goto loc_82E5B998;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// ble cr6,0x82e5b994
	if (!ctx.cr6.gt) goto loc_82E5B994;
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
loc_82E5B8A8:
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5B8C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82e5b94c
	if (!ctx.cr0.eq) goto loc_82E5B94C;
	// beq cr6,0x82e5b900
	if (ctx.cr6.eq) goto loc_82E5B900;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r25,20
	ctx.r4.s64 = ctx.r25.s64 + 20;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5B8F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82e5b908
	goto loc_82E5B908;
loc_82E5B900:
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82E5B908:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82e5b968
	if (!ctx.cr6.eq) goto loc_82E5B968;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e5b970
	if (!ctx.cr0.eq) goto loc_82E5B970;
	// beq cr6,0x82e5b934
	if (ctx.cr6.eq) goto loc_82E5B934;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5B934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E5B934:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5b8a8
	if (ctx.cr6.lt) goto loc_82E5B8A8;
	// b 0x82e5b994
	goto loc_82E5B994;
loc_82E5B94C:
	// beq cr6,0x82e5b960
	if (ctx.cr6.eq) goto loc_82E5B960;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5B960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E5B960:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82e5b998
	goto loc_82E5B998;
loc_82E5B968:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// b 0x82e5b94c
	goto loc_82E5B94C;
loc_82E5B970:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82e5b994
	if (ctx.cr6.eq) goto loc_82E5B994;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5B994;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E5B994:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E5B998:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5B9A0"))) PPC_WEAK_FUNC(sub_82E5B9A0);
PPC_FUNC_IMPL(__imp__sub_82E5B9A0) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82e5b9f0
	if (!ctx.cr6.eq) goto loc_82E5B9F0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82e5b648
	ctx.lr = 0x82E5B9CC;
	sub_82E5B648(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5b9f4
	if (!ctx.cr0.eq) goto loc_82E5B9F4;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82e5b9f0
	if (ctx.cr6.eq) goto loc_82E5B9F0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82e5dca0
	ctx.lr = 0x82E5B9E8;
	sub_82E5DCA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e5b9f4
	if (!ctx.cr0.eq) goto loc_82E5B9F4;
loc_82E5B9F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E5B9F4:
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

__attribute__((alias("__imp__sub_82E5BA08"))) PPC_WEAK_FUNC(sub_82E5BA08);
PPC_FUNC_IMPL(__imp__sub_82E5BA08) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5BA1C"))) PPC_WEAK_FUNC(sub_82E5BA1C);
PPC_FUNC_IMPL(__imp__sub_82E5BA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5BA20"))) PPC_WEAK_FUNC(sub_82E5BA20);
PPC_FUNC_IMPL(__imp__sub_82E5BA20) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5BA3C"))) PPC_WEAK_FUNC(sub_82E5BA3C);
PPC_FUNC_IMPL(__imp__sub_82E5BA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5BA40"))) PPC_WEAK_FUNC(sub_82E5BA40);
PPC_FUNC_IMPL(__imp__sub_82E5BA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E5BA48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82e5ba84
	if (ctx.cr6.eq) goto loc_82E5BA84;
loc_82E5BA64:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82e5ba7c
	if (ctx.cr6.eq) goto loc_82E5BA7C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82e5ba64
	if (!ctx.cr6.eq) goto loc_82E5BA64;
loc_82E5BA7C:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82e5ba88
	if (!ctx.cr6.eq) goto loc_82E5BA88;
loc_82E5BA84:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82E5BA88:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e5bb04
	if (!ctx.cr6.eq) goto loc_82E5BB04;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,60
	ctx.r6.s64 = 60;
	// addi r5,r11,25128
	ctx.r5.s64 = ctx.r11.s64 + 25128;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39460
	ctx.lr = 0x82E5BAB0;
	sub_82E39460(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e5bad4
	if (ctx.cr0.eq) goto loc_82E5BAD4;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// b 0x82e5bad8
	goto loc_82E5BAD8;
loc_82E5BAD4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82E5BAD8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e5bae8
	if (!ctx.cr6.eq) goto loc_82E5BAE8;
	// li r3,42
	ctx.r3.s64 = 42;
	// b 0x82e5bb14
	goto loc_82E5BB14;
loc_82E5BAE8:
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82E5BB04:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_82E5BB14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5BB1C"))) PPC_WEAK_FUNC(sub_82E5BB1C);
PPC_FUNC_IMPL(__imp__sub_82E5BB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

