#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83179750"))) PPC_WEAK_FUNC(sub_83179750);
PPC_FUNC_IMPL(__imp__sub_83179750) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179758"))) PPC_WEAK_FUNC(sub_83179758);
PPC_FUNC_IMPL(__imp__sub_83179758) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stb r4,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r4.u8);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317976C"))) PPC_WEAK_FUNC(sub_8317976C);
PPC_FUNC_IMPL(__imp__sub_8317976C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83179770"))) PPC_WEAK_FUNC(sub_83179770);
PPC_FUNC_IMPL(__imp__sub_83179770) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179778"))) PPC_WEAK_FUNC(sub_83179778);
PPC_FUNC_IMPL(__imp__sub_83179778) {
	PPC_FUNC_PROLOGUE();
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179780"))) PPC_WEAK_FUNC(sub_83179780);
PPC_FUNC_IMPL(__imp__sub_83179780) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179788"))) PPC_WEAK_FUNC(sub_83179788);
PPC_FUNC_IMPL(__imp__sub_83179788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83179790;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r28,r3,40
	ctx.r28.s64 = ctx.r3.s64 + 40;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r29,r11,284
	ctx.r29.s64 = ctx.r11.s64 + 284;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83179820
	if (!ctx.cr6.eq) goto loc_83179820;
	// lhz r31,4(r28)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r31,65535
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 65535, ctx.xer);
	// beq cr6,0x831797e4
	if (ctx.cr6.eq) goto loc_831797E4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83166510
	ctx.lr = 0x831797C8;
	sub_83166510(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r31,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r31,27
	ctx.r9.u64 = ctx.r31.u32 & 0x1F;
	// slw r8,r27,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
loc_831797E4:
	// lhz r31,6(r28)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r28.u32 + 6);
	// cmplwi cr6,r31,65535
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 65535, ctx.xer);
	// beq cr6,0x8317987c
	if (ctx.cr6.eq) goto loc_8317987C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83166510
	ctx.lr = 0x831797FC;
	sub_83166510(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r31,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r31,27
	ctx.r9.u64 = ctx.r31.u32 & 0x1F;
	// slw r8,r27,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_83179820:
	// lhz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8317987c
	if (ctx.cr6.eq) goto loc_8317987C;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
loc_83179838:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhzx r26,r31,r11
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x83166510
	ctx.lr = 0x8317984C;
	sub_83166510(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r26,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r26,27
	ctx.r9.u64 = ctx.r26.u32 & 0x1F;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// slw r8,r27,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
	// lhz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x83179838
	if (ctx.cr6.lt) goto loc_83179838;
loc_8317987C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83179884"))) PPC_WEAK_FUNC(sub_83179884);
PPC_FUNC_IMPL(__imp__sub_83179884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83179888"))) PPC_WEAK_FUNC(sub_83179888);
PPC_FUNC_IMPL(__imp__sub_83179888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// addi r9,r11,30536
	ctx.r9.s64 = ctx.r11.s64 + 30536;
	// ori r11,r10,65535
	ctx.r11.u64 = ctx.r10.u64 | 65535;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// sth r11,44(r3)
	PPC_STORE_U16(ctx.r3.u32 + 44, ctx.r11.u16);
	// stw r8,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// sth r11,46(r3)
	PPC_STORE_U16(ctx.r3.u32 + 46, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831798B8"))) PPC_WEAK_FUNC(sub_831798B8);
PPC_FUNC_IMPL(__imp__sub_831798B8) {
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
	// stfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// bl 0x83179788
	ctx.lr = 0x831798D4;
	sub_83179788(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_831798F4"))) PPC_WEAK_FUNC(sub_831798F4);
PPC_FUNC_IMPL(__imp__sub_831798F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831798F8"))) PPC_WEAK_FUNC(sub_831798F8);
PPC_FUNC_IMPL(__imp__sub_831798F8) {
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
	// stfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// bl 0x83179788
	ctx.lr = 0x83179914;
	sub_83179788(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83179934"))) PPC_WEAK_FUNC(sub_83179934);
PPC_FUNC_IMPL(__imp__sub_83179934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83179938"))) PPC_WEAK_FUNC(sub_83179938);
PPC_FUNC_IMPL(__imp__sub_83179938) {
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
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// bl 0x83179788
	ctx.lr = 0x83179968;
	sub_83179788(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83179988"))) PPC_WEAK_FUNC(sub_83179988);
PPC_FUNC_IMPL(__imp__sub_83179988) {
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
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bl 0x83179788
	ctx.lr = 0x831799AC;
	sub_83179788(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_831799CC"))) PPC_WEAK_FUNC(sub_831799CC);
PPC_FUNC_IMPL(__imp__sub_831799CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831799D0"))) PPC_WEAK_FUNC(sub_831799D0);
PPC_FUNC_IMPL(__imp__sub_831799D0) {
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
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x831910e0
	ctx.lr = 0x831799EC;
	sub_831910E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83179788
	ctx.lr = 0x831799F4;
	sub_83179788(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83179A14"))) PPC_WEAK_FUNC(sub_83179A14);
PPC_FUNC_IMPL(__imp__sub_83179A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83179A18"))) PPC_WEAK_FUNC(sub_83179A18);
PPC_FUNC_IMPL(__imp__sub_83179A18) {
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
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x831910f0
	ctx.lr = 0x83179A34;
	sub_831910F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83179788
	ctx.lr = 0x83179A3C;
	sub_83179788(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83179A5C"))) PPC_WEAK_FUNC(sub_83179A5C);
PPC_FUNC_IMPL(__imp__sub_83179A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83179A60"))) PPC_WEAK_FUNC(sub_83179A60);
PPC_FUNC_IMPL(__imp__sub_83179A60) {
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
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x83191100
	ctx.lr = 0x83179A7C;
	sub_83191100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83179788
	ctx.lr = 0x83179A84;
	sub_83179788(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83179AA4"))) PPC_WEAK_FUNC(sub_83179AA4);
PPC_FUNC_IMPL(__imp__sub_83179AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83179AA8"))) PPC_WEAK_FUNC(sub_83179AA8);
PPC_FUNC_IMPL(__imp__sub_83179AA8) {
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
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x83191108
	ctx.lr = 0x83179AC4;
	sub_83191108(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83179788
	ctx.lr = 0x83179ACC;
	sub_83179788(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83179AEC"))) PPC_WEAK_FUNC(sub_83179AEC);
PPC_FUNC_IMPL(__imp__sub_83179AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83179AF0"))) PPC_WEAK_FUNC(sub_83179AF0);
PPC_FUNC_IMPL(__imp__sub_83179AF0) {
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
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x831913d8
	ctx.lr = 0x83179B0C;
	sub_831913D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83179788
	ctx.lr = 0x83179B14;
	sub_83179788(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83179B34"))) PPC_WEAK_FUNC(sub_83179B34);
PPC_FUNC_IMPL(__imp__sub_83179B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83179B38"))) PPC_WEAK_FUNC(sub_83179B38);
PPC_FUNC_IMPL(__imp__sub_83179B38) {
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
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x83191480
	ctx.lr = 0x83179B54;
	sub_83191480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83179788
	ctx.lr = 0x83179B5C;
	sub_83179788(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83179B7C"))) PPC_WEAK_FUNC(sub_83179B7C);
PPC_FUNC_IMPL(__imp__sub_83179B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83179B80"))) PPC_WEAK_FUNC(sub_83179B80);
PPC_FUNC_IMPL(__imp__sub_83179B80) {
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
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x83191338
	ctx.lr = 0x83179B9C;
	sub_83191338(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83179788
	ctx.lr = 0x83179BA4;
	sub_83179788(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83179BC4"))) PPC_WEAK_FUNC(sub_83179BC4);
PPC_FUNC_IMPL(__imp__sub_83179BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83179BC8"))) PPC_WEAK_FUNC(sub_83179BC8);
PPC_FUNC_IMPL(__imp__sub_83179BC8) {
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
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x83191118
	ctx.lr = 0x83179BE4;
	sub_83191118(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83179788
	ctx.lr = 0x83179BEC;
	sub_83179788(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83179C0C"))) PPC_WEAK_FUNC(sub_83179C0C);
PPC_FUNC_IMPL(__imp__sub_83179C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83179C10"))) PPC_WEAK_FUNC(sub_83179C10);
PPC_FUNC_IMPL(__imp__sub_83179C10) {
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
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x83191308
	ctx.lr = 0x83179C2C;
	sub_83191308(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83179788
	ctx.lr = 0x83179C34;
	sub_83179788(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83179C54"))) PPC_WEAK_FUNC(sub_83179C54);
PPC_FUNC_IMPL(__imp__sub_83179C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83179C58"))) PPC_WEAK_FUNC(sub_83179C58);
PPC_FUNC_IMPL(__imp__sub_83179C58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83179C60;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6ae4
	ctx.lr = 0x83179C68;
	__savefpr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8317a008
	if (ctx.cr6.gt) goto loc_8317A008;
	// lis r12,-31976
	ctx.r12.s64 = -2095579136;
	// addi r12,r12,-25440
	ctx.r12.s64 = ctx.r12.s64 + -25440;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_83179CC0;
	case 1:
		goto loc_83179CF8;
	case 2:
		goto loc_83179DF0;
	case 3:
		goto loc_8317A008;
	case 4:
		goto loc_83179E98;
	case 5:
		goto loc_83179ED0;
	case 6:
		goto loc_83179F34;
	case 7:
		goto loc_83179F98;
	default:
		__builtin_unreachable();
	}
	// lwz r24,-25408(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + -25408);
	// lwz r24,-25352(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + -25352);
	// lwz r24,-25104(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + -25104);
	// lwz r24,-24568(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + -24568);
	// lwz r24,-24936(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + -24936);
	// lwz r24,-24880(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + -24880);
	// lwz r24,-24780(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + -24780);
	// lwz r24,-24680(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + -24680);
loc_83179CC0:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lfs f11,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f11,4(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f11,8(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6b30
	ctx.lr = 0x83179CF4;
	__restfpr_27(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_83179CF8:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,-18272(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18272);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,6048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f8,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f10,f11
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// lfs f0,7676(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f8,f8
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// lfs f12,6140(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6140);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f2,f9,f8,f5
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 - ctx.f5.f64));
	// fmadds f3,f9,f11,f6
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fmadds f4,f11,f11,f7
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fmuls f10,f2,f0
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f11,f3,f0
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fnmsubs f1,f4,f0,f12
	ctx.f1.f64 = double(float(-(ctx.f4.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// lfs f0,-18324(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18324);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_83179D80:
	// lfs f11,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f11,f12,f0
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// beq cr6,0x83179db0
	if (ctx.cr6.eq) goto loc_83179DB0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x83179d80
	if (ctx.cr6.lt) goto loc_83179D80;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6b30
	ctx.lr = 0x83179DAC;
	__restfpr_27(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_83179DB0:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfsx f0,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f12,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f11,f12,f13,f0
	ctx.f11.f64 = double(float(-(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64)));
	// lfs f0,-18188(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18188);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f11,r11,r29
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, temp.u32);
	// lfsx f10,r11,r30
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f10.f64 = double(temp.f32);
	// fabs f9,f11
	ctx.f9.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fmadds f8,f9,f0,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfsx f8,r11,r30
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, temp.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6b30
	ctx.lr = 0x83179DEC;
	__restfpr_27(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_83179DF0:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lfs f11,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f10
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f5,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f11,f7
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// lfs f13,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f4,f7,f7,f9
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f9.f64));
	// lfs f3,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f5,f7,f8
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 + ctx.f8.f64));
	// fmsubs f12,f5,f10,f6
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 - ctx.f6.f64));
	// fnmsubs f11,f4,f0,f13
	ctx.f11.f64 = double(float(-(ctx.f4.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// fmuls f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fabs f8,f11
	ctx.f8.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f7,f10
	ctx.f7.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fabs f6,f9
	ctx.f6.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fmadds f5,f8,f3,f2
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f3.f64 + ctx.f2.f64));
	// stfs f5,0(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f4,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f7,f4,f3
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 + ctx.f3.f64));
	// stfs f2,4(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f1,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f6,f1,f0
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f1.f64 + ctx.f0.f64));
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6b30
	ctx.lr = 0x83179E94;
	__restfpr_27(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_83179E98:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lfs f30,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f30.f64 = double(temp.f32);
	// fmr f29,f30
	ctx.f29.f64 = ctx.f30.f64;
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmr f28,f30
	ctx.f28.f64 = ctx.f30.f64;
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f29,168(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f28,164(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// b 0x8317a02c
	goto loc_8317A02C;
loc_83179ED0:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f7,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f0,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f4,176(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f3,180(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f2,184(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fadds f28,f13,f4
	ctx.f28.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f28,164(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fadds f29,f12,f3
	ctx.f29.f64 = double(float(ctx.f12.f64 + ctx.f3.f64));
	// stfs f29,168(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fadds f30,f11,f2
	ctx.f30.f64 = double(float(ctx.f11.f64 + ctx.f2.f64));
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// b 0x8317a02c
	goto loc_8317A02C;
loc_83179F34:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f7,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f0,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f4,176(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f3,180(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f2,184(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fadds f28,f4,f13
	ctx.f28.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// stfs f28,164(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fadds f29,f3,f12
	ctx.f29.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// stfs f29,168(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fadds f30,f2,f11
	ctx.f30.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// b 0x8317a02c
	goto loc_8317A02C;
loc_83179F98:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831939a8
	ctx.lr = 0x83179FA8;
	sub_831939A8(ctx, base);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f7,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f4,176(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f3,180(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f2,184(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fadds f28,f4,f13
	ctx.f28.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// stfs f28,164(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fadds f29,f3,f12
	ctx.f29.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// stfs f29,168(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fadds f30,f2,f11
	ctx.f30.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// b 0x8317a02c
	goto loc_8317A02C;
loc_8317A008:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r5,r11,30332
	ctx.r5.s64 = ctx.r11.s64 + 30332;
	// addi r4,r10,22492
	ctx.r4.s64 = ctx.r10.s64 + 22492;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x831624f8
	ctx.lr = 0x8317A020;
	sub_831624F8(ctx, base);
	// lfs f30,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f28.f64 = double(temp.f32);
loc_8317A02C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f11,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lfs f31,7676(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7676);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f10,f12,f31
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lfs f27,6140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f9,f13,f31
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f8,f0,f31
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f4,f10,f13
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f3,f10,f0
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f1,f9,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f13,f8,f11
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f2,f10,f11
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f0,f9,f11
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fadds f12,f6,f7
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// fadds f11,f5,f6
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fadds f10,f5,f7
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// fadds f7,f13,f4
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f7,132(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f6,f4,f13
	ctx.f6.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// stfs f6,140(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fadds f9,f1,f2
	ctx.f9.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// stfs f9,148(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fsubs f4,f1,f2
	ctx.f4.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// stfs f4,156(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fsubs f8,f3,f0
	ctx.f8.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// stfs f8,136(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f5,f0,f3
	ctx.f5.f64 = double(float(ctx.f0.f64 + ctx.f3.f64));
	// stfs f5,152(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fsubs f3,f27,f11
	ctx.f3.f64 = double(float(ctx.f27.f64 - ctx.f11.f64));
	// stfs f3,128(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fsubs f2,f27,f10
	ctx.f2.f64 = double(float(ctx.f27.f64 - ctx.f10.f64));
	// stfs f2,144(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fsubs f1,f27,f12
	ctx.f1.f64 = double(float(ctx.f27.f64 - ctx.f12.f64));
	// stfs f1,160(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// bl 0x831792f8
	ctx.lr = 0x8317A0E0;
	sub_831792F8(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f30,f8
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f8.f64));
	// fmuls f6,f29,f8
	ctx.f6.f64 = double(float(ctx.f29.f64 * ctx.f8.f64));
	// fmadds f5,f29,f11,f7
	ctx.f5.f64 = double(float(ctx.f29.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fmuls f3,f30,f10
	ctx.f3.f64 = double(float(ctx.f30.f64 * ctx.f10.f64));
	// fmuls f4,f28,f11
	ctx.f4.f64 = double(float(ctx.f28.f64 * ctx.f11.f64));
	// fmuls f2,f9,f9
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmsubs f1,f30,f11,f6
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f11.f64 - ctx.f6.f64));
	// fmadds f0,f28,f10,f5
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fmsubs f12,f28,f8,f3
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f8.f64 - ctx.f3.f64));
	// fmsubs f13,f29,f10,f4
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f10.f64 - ctx.f4.f64));
	// fmsubs f7,f2,f31,f27
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f31.f64 - ctx.f27.f64));
	// fmuls f6,f1,f9
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// fmuls f4,f0,f11
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f5,f0,f10
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f3,f0,f8
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f2,f13,f9
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f1,f7,f28
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f28.f64));
	// fmuls f0,f29,f7
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f7.f64));
	// fmuls f13,f7,f30
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// fmuls f11,f6,f31
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// lfs f6,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f9,f4,f31
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// fmuls f10,f5,f31
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fmuls f8,f3,f31
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// fmuls f7,f12,f31
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f5,f2,f31
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// lfs f4,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f1,f11
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f0,f7
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// fadds f0,f13,f5
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// fadds f13,f3,f10
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f10.f64));
	// fadds f12,f1,f9
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// fadds f11,f0,f8
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// fadds f10,f6,f13
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// stfs f10,0(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fadds f9,f4,f12
	ctx.f9.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// stfs f9,4(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// fadds f8,f2,f11
	ctx.f8.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// stfs f8,8(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6b30
	ctx.lr = 0x8317A1B8;
	__restfpr_27(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317A1BC"))) PPC_WEAK_FUNC(sub_8317A1BC);
PPC_FUNC_IMPL(__imp__sub_8317A1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317A1C0"))) PPC_WEAK_FUNC(sub_8317A1C0);
PPC_FUNC_IMPL(__imp__sub_8317A1C0) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r3,40
	ctx.r31.s64 = ctx.r3.s64 + 40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8317a24c
	if (!ctx.cr6.eq) goto loc_8317A24C;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8317a1fc
	if (!ctx.cr6.eq) goto loc_8317A1FC;
	// sth r30,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r30.u16);
	// b 0x8317a280
	goto loc_8317A280;
loc_8317A1FC:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8317a210
	if (!ctx.cr6.eq) goto loc_8317A210;
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
	// b 0x8317a280
	goto loc_8317A280;
loc_8317A210:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x83161968
	ctx.lr = 0x8317A218;
	sub_83161968(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,4
	ctx.r9.s64 = 4;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lhz r8,6(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r8,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, ctx.r8.u16);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r30,4(r6)
	PPC_STORE_U16(ctx.r6.u32 + 4, ctx.r30.u16);
	// sth r10,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r10.u16);
	// sth r9,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r9.u16);
	// b 0x8317a280
	goto loc_8317A280;
loc_8317A24C:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8317a264
	if (ctx.cr6.lt) goto loc_8317A264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83179238
	ctx.lr = 0x8317A264;
	sub_83179238(ctx, base);
loc_8317A264:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// sthx r30,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u16);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r8.u16);
loc_8317A280:
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

__attribute__((alias("__imp__sub_8317A298"))) PPC_WEAK_FUNC(sub_8317A298);
PPC_FUNC_IMPL(__imp__sub_8317A298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x8317A2A0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r31,r3,40
	ctx.r31.s64 = ctx.r3.s64 + 40;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8317a424
	if (!ctx.cr6.eq) goto loc_8317A424;
	// lhz r30,4(r26)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r26.u32 + 4);
	// li r24,3
	ctx.r24.s64 = 3;
	// li r25,4
	ctx.r25.s64 = 4;
	// cmplwi cr6,r30,65535
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 65535, ctx.xer);
	// beq cr6,0x8317a368
	if (ctx.cr6.eq) goto loc_8317A368;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8317a334
	if (!ctx.cr6.eq) goto loc_8317A334;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8317a2ec
	if (!ctx.cr6.eq) goto loc_8317A2EC;
	// sth r30,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r30.u16);
	// b 0x8317a368
	goto loc_8317A368;
loc_8317A2EC:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8317a300
	if (!ctx.cr6.eq) goto loc_8317A300;
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
	// b 0x8317a368
	goto loc_8317A368;
loc_8317A300:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x83161968
	ctx.lr = 0x8317A308;
	sub_83161968(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r10,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r10.u16);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r30,4(r8)
	PPC_STORE_U16(ctx.r8.u32 + 4, ctx.r30.u16);
	// sth r24,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r24.u16);
	// sth r25,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r25.u16);
	// b 0x8317a368
	goto loc_8317A368;
loc_8317A334:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8317a34c
	if (ctx.cr6.lt) goto loc_8317A34C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83179238
	ctx.lr = 0x8317A34C;
	sub_83179238(ctx, base);
loc_8317A34C:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// sthx r30,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u16);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r8.u16);
loc_8317A368:
	// lhz r30,6(r26)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r26.u32 + 6);
	// cmplwi cr6,r30,65535
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 65535, ctx.xer);
	// beq cr6,0x8317a528
	if (ctx.cr6.eq) goto loc_8317A528;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8317a3e8
	if (!ctx.cr6.eq) goto loc_8317A3E8;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8317a398
	if (!ctx.cr6.eq) goto loc_8317A398;
	// sth r30,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r30.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_8317A398:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8317a3b0
	if (!ctx.cr6.eq) goto loc_8317A3B0;
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_8317A3B0:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x83161968
	ctx.lr = 0x8317A3B8;
	sub_83161968(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lhz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r30,4(r8)
	PPC_STORE_U16(ctx.r8.u32 + 4, ctx.r30.u16);
	// sth r24,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r24.u16);
	// sth r25,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r25.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_8317A3E8:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8317a400
	if (ctx.cr6.lt) goto loc_8317A400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83179238
	ctx.lr = 0x8317A400;
	sub_83179238(ctx, base);
loc_8317A400:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// sthx r30,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u16);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r8.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_8317A424:
	// lhz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8317a528
	if (ctx.cr6.eq) goto loc_8317A528;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r24,3
	ctx.r24.s64 = 3;
	// li r25,4
	ctx.r25.s64 = 4;
loc_8317A440:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhzx r29,r28,r11
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r11.u32);
	// bne cr6,0x8317a4b0
	if (!ctx.cr6.eq) goto loc_8317A4B0;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8317a468
	if (!ctx.cr6.eq) goto loc_8317A468;
	// sth r29,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r29.u16);
	// b 0x8317a514
	goto loc_8317A514;
loc_8317A468:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8317a47c
	if (!ctx.cr6.eq) goto loc_8317A47C;
	// sth r29,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r29.u16);
	// b 0x8317a514
	goto loc_8317A514;
loc_8317A47C:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x83161968
	ctx.lr = 0x8317A484;
	sub_83161968(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r10,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r10.u16);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r29,4(r8)
	PPC_STORE_U16(ctx.r8.u32 + 4, ctx.r29.u16);
	// sth r24,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r24.u16);
	// sth r25,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r25.u16);
	// b 0x8317a514
	goto loc_8317A514;
loc_8317A4B0:
	// lhz r30,6(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8317a4f8
	if (ctx.cr6.lt) goto loc_8317A4F8;
	// rlwinm r10,r11,1,16,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFE;
	// rlwinm r3,r11,2,15,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1FFFC;
	// sth r10,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r10.u16);
	// bl 0x83161968
	ctx.lr = 0x8317A4D4;
	sub_83161968(ctx, base);
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// rotlwi r5,r9,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// bl 0x82bea998
	ctx.lr = 0x8317A4E8;
	sub_82BEA998(ctx, base);
	// rlwinm r4,r30,1,15,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1FFFE;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83161838
	ctx.lr = 0x8317A4F4;
	sub_83161838(ctx, base);
	// stw r23,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r23.u32);
loc_8317A4F8:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// sthx r29,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r29.u16);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r8.u16);
loc_8317A514:
	// lhz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8317a440
	if (ctx.cr6.lt) goto loc_8317A440;
loc_8317A528:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317A530"))) PPC_WEAK_FUNC(sub_8317A530);
PPC_FUNC_IMPL(__imp__sub_8317A530) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r10,r3,40
	ctx.r10.s64 = ctx.r3.s64 + 40;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8317a574
	if (!ctx.cr6.eq) goto loc_8317A574;
	// lhz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8317a55c
	if (!ctx.cr6.eq) goto loc_8317A55C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r11,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r11.u16);
	// blr 
	return;
loc_8317A55C:
	// lhz r9,6(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r11,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r11.u16);
	// blr 
	return;
loc_8317A574:
	// lhz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// clrlwi r7,r4,16
	ctx.r7.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8317A58C:
	// lhz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8317a5b0
	if (ctx.cr6.eq) goto loc_8317A5B0;
	// lhz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8317a58c
	if (ctx.cr6.lt) goto loc_8317A58C;
	// blr 
	return;
loc_8317A5B0:
	// rlwinm r7,r6,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r7,r11,-2
	ctx.r7.s64 = ctx.r11.s64 + -2;
	// lhzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// lhz r6,-2(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// sthx r6,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r6.u16);
	// sth r7,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r7.u16);
	// lhz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// addis r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 65536;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// sth r4,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A5E4"))) PPC_WEAK_FUNC(sub_8317A5E4);
PPC_FUNC_IMPL(__imp__sub_8317A5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317A5E8"))) PPC_WEAK_FUNC(sub_8317A5E8);
PPC_FUNC_IMPL(__imp__sub_8317A5E8) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 + 40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8317a784
	if (!ctx.cr6.eq) goto loc_8317A784;
	// lhz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r5,r10,65535
	ctx.r5.u64 = ctx.r10.u64 | 65535;
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x8317a6b4
	if (ctx.cr6.eq) goto loc_8317A6B4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8317a64c
	if (!ctx.cr6.eq) goto loc_8317A64C;
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8317a638
	if (!ctx.cr6.eq) goto loc_8317A638;
	// sth r5,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// b 0x8317a6b4
	goto loc_8317A6B4;
loc_8317A638:
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8317a6b4
	if (!ctx.cr6.eq) goto loc_8317A6B4;
	// sth r5,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r5.u16);
	// b 0x8317a6b4
	goto loc_8317A6B4;
loc_8317A64C:
	// lhz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8317a6b4
	if (ctx.cr6.eq) goto loc_8317A6B4;
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8317A664:
	// lhz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r3,r6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8317a688
	if (ctx.cr6.eq) goto loc_8317A688;
	// lhz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8317a664
	if (ctx.cr6.lt) goto loc_8317A664;
	// b 0x8317a6b4
	goto loc_8317A6B4;
loc_8317A688:
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// lhzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// lhz r6,-2(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + -2);
	// sthx r6,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r6.u16);
	// sth r7,-2(r10)
	PPC_STORE_U16(ctx.r10.u32 + -2, ctx.r7.u16);
	// lhz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// add r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 + ctx.r5.u64;
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
loc_8317A6B4:
	// lhz r9,6(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x8317a85c
	if (ctx.cr6.eq) goto loc_8317A85C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8317a708
	if (!ctx.cr6.eq) goto loc_8317A708;
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8317a6ec
	if (!ctx.cr6.eq) goto loc_8317A6EC;
	// sth r5,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8317A6EC:
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8317a85c
	if (!ctx.cr6.eq) goto loc_8317A85C;
	// sth r5,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r5.u16);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8317A708:
	// lhz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8317a85c
	if (ctx.cr6.eq) goto loc_8317A85C;
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8317A720:
	// lhz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8317a74c
	if (ctx.cr6.eq) goto loc_8317A74C;
	// lhz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8317a720
	if (ctx.cr6.lt) goto loc_8317A720;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8317A74C:
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// lhzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// lhz r6,-2(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + -2);
	// sthx r6,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r6.u16);
	// sth r7,-2(r10)
	PPC_STORE_U16(ctx.r10.u32 + -2, ctx.r7.u16);
	// lhz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// add r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 + ctx.r5.u64;
	// sth r3,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r3.u16);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8317A784:
	// lhz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8317a85c
	if (ctx.cr6.eq) goto loc_8317A85C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r5,r10,65535
	ctx.r5.u64 = ctx.r10.u64 | 65535;
loc_8317A7A0:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lhzx r8,r3,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// bne cr6,0x8317a7e0
	if (!ctx.cr6.eq) goto loc_8317A7E0;
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8317a7cc
	if (!ctx.cr6.eq) goto loc_8317A7CC;
	// sth r5,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// b 0x8317a848
	goto loc_8317A848;
loc_8317A7CC:
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8317a848
	if (!ctx.cr6.eq) goto loc_8317A848;
	// sth r5,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r5.u16);
	// b 0x8317a848
	goto loc_8317A848;
loc_8317A7E0:
	// lhz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8317a848
	if (ctx.cr6.eq) goto loc_8317A848;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_8317A7F8:
	// lhz r30,0(r8)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8317a81c
	if (ctx.cr6.eq) goto loc_8317A81C;
	// lhz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8317a7f8
	if (ctx.cr6.lt) goto loc_8317A7F8;
	// b 0x8317a848
	goto loc_8317A848;
loc_8317A81C:
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// lhzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// lhz r6,-2(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + -2);
	// sthx r6,r8,r9
	PPC_STORE_U16(ctx.r8.u32 + ctx.r9.u32, ctx.r6.u16);
	// sth r7,-2(r10)
	PPC_STORE_U16(ctx.r10.u32 + -2, ctx.r7.u16);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// add r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 + ctx.r5.u64;
	// sth r9,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r9.u16);
loc_8317A848:
	// lhz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8317a7a0
	if (ctx.cr6.lt) goto loc_8317A7A0;
loc_8317A85C:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A868"))) PPC_WEAK_FUNC(sub_8317A868);
PPC_FUNC_IMPL(__imp__sub_8317A868) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// sth r10,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A87C"))) PPC_WEAK_FUNC(sub_8317A87C);
PPC_FUNC_IMPL(__imp__sub_8317A87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317A880"))) PPC_WEAK_FUNC(sub_8317A880);
PPC_FUNC_IMPL(__imp__sub_8317A880) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8317a90c
	if (!ctx.cr6.eq) goto loc_8317A90C;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8317a8bc
	if (!ctx.cr6.eq) goto loc_8317A8BC;
	// sth r30,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r30.u16);
	// b 0x8317a940
	goto loc_8317A940;
loc_8317A8BC:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8317a8d0
	if (!ctx.cr6.eq) goto loc_8317A8D0;
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
	// b 0x8317a940
	goto loc_8317A940;
loc_8317A8D0:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x83161968
	ctx.lr = 0x8317A8D8;
	sub_83161968(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,4
	ctx.r9.s64 = 4;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lhz r8,6(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r8,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, ctx.r8.u16);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r30,4(r6)
	PPC_STORE_U16(ctx.r6.u32 + 4, ctx.r30.u16);
	// sth r10,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r10.u16);
	// sth r9,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r9.u16);
	// b 0x8317a940
	goto loc_8317A940;
loc_8317A90C:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8317a924
	if (ctx.cr6.lt) goto loc_8317A924;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83179238
	ctx.lr = 0x8317A924;
	sub_83179238(ctx, base);
loc_8317A924:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// sthx r30,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u16);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r8.u16);
loc_8317A940:
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

__attribute__((alias("__imp__sub_8317A958"))) PPC_WEAK_FUNC(sub_8317A958);
PPC_FUNC_IMPL(__imp__sub_8317A958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x8317A960;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8317aae4
	if (!ctx.cr6.eq) goto loc_8317AAE4;
	// lhz r30,4(r26)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r26.u32 + 4);
	// li r24,3
	ctx.r24.s64 = 3;
	// li r25,4
	ctx.r25.s64 = 4;
	// cmplwi cr6,r30,65535
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 65535, ctx.xer);
	// beq cr6,0x8317aa28
	if (ctx.cr6.eq) goto loc_8317AA28;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8317a9f4
	if (!ctx.cr6.eq) goto loc_8317A9F4;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8317a9ac
	if (!ctx.cr6.eq) goto loc_8317A9AC;
	// sth r30,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r30.u16);
	// b 0x8317aa28
	goto loc_8317AA28;
loc_8317A9AC:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8317a9c0
	if (!ctx.cr6.eq) goto loc_8317A9C0;
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
	// b 0x8317aa28
	goto loc_8317AA28;
loc_8317A9C0:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x83161968
	ctx.lr = 0x8317A9C8;
	sub_83161968(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r10,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r10.u16);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r30,4(r8)
	PPC_STORE_U16(ctx.r8.u32 + 4, ctx.r30.u16);
	// sth r24,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r24.u16);
	// sth r25,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r25.u16);
	// b 0x8317aa28
	goto loc_8317AA28;
loc_8317A9F4:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8317aa0c
	if (ctx.cr6.lt) goto loc_8317AA0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83179238
	ctx.lr = 0x8317AA0C;
	sub_83179238(ctx, base);
loc_8317AA0C:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// sthx r30,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u16);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r8.u16);
loc_8317AA28:
	// lhz r30,6(r26)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r26.u32 + 6);
	// cmplwi cr6,r30,65535
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 65535, ctx.xer);
	// beq cr6,0x8317abe8
	if (ctx.cr6.eq) goto loc_8317ABE8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8317aaa8
	if (!ctx.cr6.eq) goto loc_8317AAA8;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8317aa58
	if (!ctx.cr6.eq) goto loc_8317AA58;
	// sth r30,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r30.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_8317AA58:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8317aa70
	if (!ctx.cr6.eq) goto loc_8317AA70;
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_8317AA70:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x83161968
	ctx.lr = 0x8317AA78;
	sub_83161968(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lhz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r30,4(r8)
	PPC_STORE_U16(ctx.r8.u32 + 4, ctx.r30.u16);
	// sth r24,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r24.u16);
	// sth r25,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r25.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_8317AAA8:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8317aac0
	if (ctx.cr6.lt) goto loc_8317AAC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83179238
	ctx.lr = 0x8317AAC0;
	sub_83179238(ctx, base);
loc_8317AAC0:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// sthx r30,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u16);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r8.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_8317AAE4:
	// lhz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8317abe8
	if (ctx.cr6.eq) goto loc_8317ABE8;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r24,3
	ctx.r24.s64 = 3;
	// li r25,4
	ctx.r25.s64 = 4;
loc_8317AB00:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhzx r29,r28,r11
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r11.u32);
	// bne cr6,0x8317ab70
	if (!ctx.cr6.eq) goto loc_8317AB70;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8317ab28
	if (!ctx.cr6.eq) goto loc_8317AB28;
	// sth r29,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r29.u16);
	// b 0x8317abd4
	goto loc_8317ABD4;
loc_8317AB28:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8317ab3c
	if (!ctx.cr6.eq) goto loc_8317AB3C;
	// sth r29,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r29.u16);
	// b 0x8317abd4
	goto loc_8317ABD4;
loc_8317AB3C:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x83161968
	ctx.lr = 0x8317AB44;
	sub_83161968(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r10,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r10.u16);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r29,4(r8)
	PPC_STORE_U16(ctx.r8.u32 + 4, ctx.r29.u16);
	// sth r24,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r24.u16);
	// sth r25,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r25.u16);
	// b 0x8317abd4
	goto loc_8317ABD4;
loc_8317AB70:
	// lhz r30,6(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8317abb8
	if (ctx.cr6.lt) goto loc_8317ABB8;
	// rlwinm r10,r11,1,16,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFE;
	// rlwinm r3,r11,2,15,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1FFFC;
	// sth r10,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r10.u16);
	// bl 0x83161968
	ctx.lr = 0x8317AB94;
	sub_83161968(ctx, base);
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// rotlwi r5,r9,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// bl 0x82bea998
	ctx.lr = 0x8317ABA8;
	sub_82BEA998(ctx, base);
	// rlwinm r4,r30,1,15,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1FFFE;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83161838
	ctx.lr = 0x8317ABB4;
	sub_83161838(ctx, base);
	// stw r23,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r23.u32);
loc_8317ABB8:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// sthx r29,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r29.u16);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r8.u16);
loc_8317ABD4:
	// lhz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8317ab00
	if (ctx.cr6.lt) goto loc_8317AB00;
loc_8317ABE8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317ABF0"))) PPC_WEAK_FUNC(sub_8317ABF0);
PPC_FUNC_IMPL(__imp__sub_8317ABF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8317ac30
	if (!ctx.cr6.eq) goto loc_8317AC30;
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8317ac18
	if (!ctx.cr6.eq) goto loc_8317AC18;
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// blr 
	return;
loc_8317AC18:
	// lhz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// blr 
	return;
loc_8317AC30:
	// lhz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8317AC48:
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8317ac6c
	if (ctx.cr6.eq) goto loc_8317AC6C;
	// lhz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8317ac48
	if (ctx.cr6.lt) goto loc_8317AC48;
	// blr 
	return;
loc_8317AC6C:
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// lhzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// lhz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// sthx r7,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u16);
	// sth r8,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r8.u16);
	// lhz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// addis r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 65536;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// sth r5,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r5.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317ACA0"))) PPC_WEAK_FUNC(sub_8317ACA0);
PPC_FUNC_IMPL(__imp__sub_8317ACA0) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8317ae38
	if (!ctx.cr6.eq) goto loc_8317AE38;
	// lhz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r6,r11,65535
	ctx.r6.u64 = ctx.r11.u64 | 65535;
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x8317ad68
	if (ctx.cr6.eq) goto loc_8317AD68;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8317ad00
	if (!ctx.cr6.eq) goto loc_8317AD00;
	// lhz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8317acec
	if (!ctx.cr6.eq) goto loc_8317ACEC;
	// sth r6,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r6.u16);
	// b 0x8317ad68
	goto loc_8317AD68;
loc_8317ACEC:
	// lhz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8317ad68
	if (!ctx.cr6.eq) goto loc_8317AD68;
	// sth r6,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r6.u16);
	// b 0x8317ad68
	goto loc_8317AD68;
loc_8317AD00:
	// lhz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8317ad68
	if (ctx.cr6.eq) goto loc_8317AD68;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8317AD18:
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8317ad3c
	if (ctx.cr6.eq) goto loc_8317AD3C;
	// lhz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8317ad18
	if (ctx.cr6.lt) goto loc_8317AD18;
	// b 0x8317ad68
	goto loc_8317AD68;
loc_8317AD3C:
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// lhzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// lhz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// sthx r7,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u16);
	// sth r8,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r8.u16);
	// lhz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
loc_8317AD68:
	// lhz r10,6(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x8317af10
	if (ctx.cr6.eq) goto loc_8317AF10;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8317adbc
	if (!ctx.cr6.eq) goto loc_8317ADBC;
	// lhz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8317ada0
	if (!ctx.cr6.eq) goto loc_8317ADA0;
	// sth r6,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r6.u16);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8317ADA0:
	// lhz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8317af10
	if (!ctx.cr6.eq) goto loc_8317AF10;
	// sth r6,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r6.u16);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8317ADBC:
	// lhz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8317af10
	if (ctx.cr6.eq) goto loc_8317AF10;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8317ADD4:
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8317ae00
	if (ctx.cr6.eq) goto loc_8317AE00;
	// lhz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8317add4
	if (ctx.cr6.lt) goto loc_8317ADD4;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8317AE00:
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// lhzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// lhz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// sthx r7,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u16);
	// sth r8,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r8.u16);
	// lhz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// add r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 + ctx.r6.u64;
	// sth r4,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r4.u16);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8317AE38:
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8317af10
	if (ctx.cr6.eq) goto loc_8317AF10;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r6,r11,65535
	ctx.r6.u64 = ctx.r11.u64 | 65535;
loc_8317AE54:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhzx r9,r5,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r11.u32);
	// bne cr6,0x8317ae94
	if (!ctx.cr6.eq) goto loc_8317AE94;
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8317ae80
	if (!ctx.cr6.eq) goto loc_8317AE80;
	// sth r6,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r6.u16);
	// b 0x8317aefc
	goto loc_8317AEFC;
loc_8317AE80:
	// lhz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8317aefc
	if (!ctx.cr6.eq) goto loc_8317AEFC;
	// sth r6,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r6.u16);
	// b 0x8317aefc
	goto loc_8317AEFC;
loc_8317AE94:
	// lhz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8317aefc
	if (ctx.cr6.eq) goto loc_8317AEFC;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8317AEAC:
	// lhz r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8317aed0
	if (ctx.cr6.eq) goto loc_8317AED0;
	// lhz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8317aeac
	if (ctx.cr6.lt) goto loc_8317AEAC;
	// b 0x8317aefc
	goto loc_8317AEFC;
loc_8317AED0:
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// lhzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// lhz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// sthx r7,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u16);
	// sth r8,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r8.u16);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
loc_8317AEFC:
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8317ae54
	if (ctx.cr6.lt) goto loc_8317AE54;
loc_8317AF10:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317AF1C"))) PPC_WEAK_FUNC(sub_8317AF1C);
PPC_FUNC_IMPL(__imp__sub_8317AF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317AF20"))) PPC_WEAK_FUNC(sub_8317AF20);
PPC_FUNC_IMPL(__imp__sub_8317AF20) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,30536
	ctx.r10.s64 = ctx.r11.s64 + 30536;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8317af60
	if (ctx.cr6.eq) goto loc_8317AF60;
	// lhz r11,46(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// rotlwi r4,r11,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// bl 0x83161838
	ctx.lr = 0x8317AF60;
	sub_83161838(ctx, base);
loc_8317AF60:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,30384
	ctx.r9.s64 = ctx.r11.s64 + 30384;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8317af84
	if (ctx.cr6.eq) goto loc_8317AF84;
	// bl 0x822990f0
	ctx.lr = 0x8317AF80;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8317AF84:
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

__attribute__((alias("__imp__sub_8317AF9C"))) PPC_WEAK_FUNC(sub_8317AF9C);
PPC_FUNC_IMPL(__imp__sub_8317AF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317AFA0"))) PPC_WEAK_FUNC(sub_8317AFA0);
PPC_FUNC_IMPL(__imp__sub_8317AFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,30708
	ctx.r10.s64 = ctx.r11.s64 + 30708;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317AFB0"))) PPC_WEAK_FUNC(sub_8317AFB0);
PPC_FUNC_IMPL(__imp__sub_8317AFB0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,30708
	ctx.r9.s64 = ctx.r11.s64 + 30708;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8317afe4
	if (ctx.cr6.eq) goto loc_8317AFE4;
	// bl 0x822990f0
	ctx.lr = 0x8317AFE0;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8317AFE4:
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

__attribute__((alias("__imp__sub_8317AFF8"))) PPC_WEAK_FUNC(sub_8317AFF8);
PPC_FUNC_IMPL(__imp__sub_8317AFF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B01C"))) PPC_WEAK_FUNC(sub_8317B01C);
PPC_FUNC_IMPL(__imp__sub_8317B01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317B020"))) PPC_WEAK_FUNC(sub_8317B020);
PPC_FUNC_IMPL(__imp__sub_8317B020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f11,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,24(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,8(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B05C"))) PPC_WEAK_FUNC(sub_8317B05C);
PPC_FUNC_IMPL(__imp__sub_8317B05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317B060"))) PPC_WEAK_FUNC(sub_8317B060);
PPC_FUNC_IMPL(__imp__sub_8317B060) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B064"))) PPC_WEAK_FUNC(sub_8317B064);
PPC_FUNC_IMPL(__imp__sub_8317B064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317B068"))) PPC_WEAK_FUNC(sub_8317B068);
PPC_FUNC_IMPL(__imp__sub_8317B068) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8317b088
	if (!ctx.cr6.eq) goto loc_8317B088;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// blr 
	return;
loc_8317B088:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B094"))) PPC_WEAK_FUNC(sub_8317B094);
PPC_FUNC_IMPL(__imp__sub_8317B094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317B098"))) PPC_WEAK_FUNC(sub_8317B098);
PPC_FUNC_IMPL(__imp__sub_8317B098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,30708
	ctx.r10.s64 = ctx.r11.s64 + 30708;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B0A8"))) PPC_WEAK_FUNC(sub_8317B0A8);
PPC_FUNC_IMPL(__imp__sub_8317B0A8) {
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,30748
	ctx.r9.s64 = ctx.r10.s64 + 30748;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8317b0f0
	if (ctx.cr6.eq) goto loc_8317B0F0;
	// lhz r11,62(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 62);
	// rotlwi r4,r11,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// bl 0x83161838
	ctx.lr = 0x8317B0F0;
	sub_83161838(ctx, base);
loc_8317B0F0:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,30708
	ctx.r10.s64 = ctx.r11.s64 + 30708;
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

__attribute__((alias("__imp__sub_8317B110"))) PPC_WEAK_FUNC(sub_8317B110);
PPC_FUNC_IMPL(__imp__sub_8317B110) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8317B144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8317b170
	if (ctx.cr6.eq) goto loc_8317B170;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8317B168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// b 0x8317b178
	goto loc_8317B178;
loc_8317B170:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8317B178:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r8,292(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 292);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f11,40(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f10,44(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f9,48(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f8,52(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
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

__attribute__((alias("__imp__sub_8317B1E4"))) PPC_WEAK_FUNC(sub_8317B1E4);
PPC_FUNC_IMPL(__imp__sub_8317B1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317B1E8"))) PPC_WEAK_FUNC(sub_8317B1E8);
PPC_FUNC_IMPL(__imp__sub_8317B1E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r11,r9,26,0,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0xFC000000;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r3,r8,64
	ctx.r3.s64 = ctx.r8.s64 + 4194304;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B204"))) PPC_WEAK_FUNC(sub_8317B204);
PPC_FUNC_IMPL(__imp__sub_8317B204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317B208"))) PPC_WEAK_FUNC(sub_8317B208);
PPC_FUNC_IMPL(__imp__sub_8317B208) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B210"))) PPC_WEAK_FUNC(sub_8317B210);
PPC_FUNC_IMPL(__imp__sub_8317B210) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B218"))) PPC_WEAK_FUNC(sub_8317B218);
PPC_FUNC_IMPL(__imp__sub_8317B218) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B220"))) PPC_WEAK_FUNC(sub_8317B220);
PPC_FUNC_IMPL(__imp__sub_8317B220) {
	PPC_FUNC_PROLOGUE();
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B228"))) PPC_WEAK_FUNC(sub_8317B228);
PPC_FUNC_IMPL(__imp__sub_8317B228) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B230"))) PPC_WEAK_FUNC(sub_8317B230);
PPC_FUNC_IMPL(__imp__sub_8317B230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8317B238;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r28,r3,56
	ctx.r28.s64 = ctx.r3.s64 + 56;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r29,r11,284
	ctx.r29.s64 = ctx.r11.s64 + 284;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8317b2c8
	if (!ctx.cr6.eq) goto loc_8317B2C8;
	// lhz r31,4(r28)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r31,65535
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 65535, ctx.xer);
	// beq cr6,0x8317b28c
	if (ctx.cr6.eq) goto loc_8317B28C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83166510
	ctx.lr = 0x8317B270;
	sub_83166510(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r31,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r31,27
	ctx.r9.u64 = ctx.r31.u32 & 0x1F;
	// slw r8,r27,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
loc_8317B28C:
	// lhz r31,6(r28)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r28.u32 + 6);
	// cmplwi cr6,r31,65535
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 65535, ctx.xer);
	// beq cr6,0x8317b324
	if (ctx.cr6.eq) goto loc_8317B324;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83166510
	ctx.lr = 0x8317B2A4;
	sub_83166510(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r31,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r31,27
	ctx.r9.u64 = ctx.r31.u32 & 0x1F;
	// slw r8,r27,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8317B2C8:
	// lhz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8317b324
	if (ctx.cr6.eq) goto loc_8317B324;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
loc_8317B2E0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhzx r26,r31,r11
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x83166510
	ctx.lr = 0x8317B2F4;
	sub_83166510(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r26,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r26,27
	ctx.r9.u64 = ctx.r26.u32 & 0x1F;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// slw r8,r27,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
	// lhz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8317b2e0
	if (ctx.cr6.lt) goto loc_8317B2E0;
loc_8317B324:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B32C"))) PPC_WEAK_FUNC(sub_8317B32C);
PPC_FUNC_IMPL(__imp__sub_8317B32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317B330"))) PPC_WEAK_FUNC(sub_8317B330);
PPC_FUNC_IMPL(__imp__sub_8317B330) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8317b358
	if (ctx.cr6.eq) goto loc_8317B358;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// bl 0x8317fa20
	ctx.lr = 0x8317B358;
	sub_8317FA20(ctx, base);
loc_8317B358:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8317b36c
	if (ctx.cr6.eq) goto loc_8317B36C;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// bl 0x8317a298
	ctx.lr = 0x8317B36C;
	sub_8317A298(ctx, base);
loc_8317B36C:
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

__attribute__((alias("__imp__sub_8317B380"))) PPC_WEAK_FUNC(sub_8317B380);
PPC_FUNC_IMPL(__imp__sub_8317B380) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8317b3a8
	if (ctx.cr6.eq) goto loc_8317B3A8;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// bl 0x8317fd70
	ctx.lr = 0x8317B3A8;
	sub_8317FD70(ctx, base);
loc_8317B3A8:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8317b3bc
	if (ctx.cr6.eq) goto loc_8317B3BC;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// bl 0x8317a5e8
	ctx.lr = 0x8317B3BC;
	sub_8317A5E8(ctx, base);
loc_8317B3BC:
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

__attribute__((alias("__imp__sub_8317B3D0"))) PPC_WEAK_FUNC(sub_8317B3D0);
PPC_FUNC_IMPL(__imp__sub_8317B3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,30748
	ctx.r8.s64 = ctx.r11.s64 + 30748;
	// ori r11,r9,65535
	ctx.r11.u64 = ctx.r9.u64 | 65535;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r10,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// sth r11,60(r3)
	PPC_STORE_U16(ctx.r3.u32 + 60, ctx.r11.u16);
	// sth r11,62(r3)
	PPC_STORE_U16(ctx.r3.u32 + 62, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B40C"))) PPC_WEAK_FUNC(sub_8317B40C);
PPC_FUNC_IMPL(__imp__sub_8317B40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317B410"))) PPC_WEAK_FUNC(sub_8317B410);
PPC_FUNC_IMPL(__imp__sub_8317B410) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8317b438
	if (ctx.cr6.eq) goto loc_8317B438;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// bl 0x8317fd70
	ctx.lr = 0x8317B438;
	sub_8317FD70(ctx, base);
loc_8317B438:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8317b44c
	if (ctx.cr6.eq) goto loc_8317B44C;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// bl 0x8317a5e8
	ctx.lr = 0x8317B44C;
	sub_8317A5E8(ctx, base);
loc_8317B44C:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8317b470
	if (!ctx.cr6.eq) goto loc_8317B470;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// sth r11,60(r31)
	PPC_STORE_U16(ctx.r31.u32 + 60, ctx.r11.u16);
	// sth r11,62(r31)
	PPC_STORE_U16(ctx.r31.u32 + 62, ctx.r11.u16);
	// b 0x8317b474
	goto loc_8317B474;
loc_8317B470:
	// sth r10,60(r31)
	PPC_STORE_U16(ctx.r31.u32 + 60, ctx.r10.u16);
loc_8317B474:
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83163a08
	ctx.lr = 0x8317B488;
	sub_83163A08(ctx, base);
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

__attribute__((alias("__imp__sub_8317B49C"))) PPC_WEAK_FUNC(sub_8317B49C);
PPC_FUNC_IMPL(__imp__sub_8317B49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317B4A0"))) PPC_WEAK_FUNC(sub_8317B4A0);
PPC_FUNC_IMPL(__imp__sub_8317B4A0) {
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
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f11,40(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f10,44(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f9,48(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f8,52(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// bl 0x8317b230
	ctx.lr = 0x8317B4F4;
	sub_8317B230(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8317B514"))) PPC_WEAK_FUNC(sub_8317B514);
PPC_FUNC_IMPL(__imp__sub_8317B514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317B518"))) PPC_WEAK_FUNC(sub_8317B518);
PPC_FUNC_IMPL(__imp__sub_8317B518) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8317b548
	if (ctx.cr6.eq) goto loc_8317B548;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// bl 0x8317fd70
	ctx.lr = 0x8317B548;
	sub_8317FD70(ctx, base);
loc_8317B548:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8317b55c
	if (ctx.cr6.eq) goto loc_8317B55C;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// bl 0x8317a5e8
	ctx.lr = 0x8317B55C;
	sub_8317A5E8(ctx, base);
loc_8317B55C:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8317b574
	if (ctx.cr6.eq) goto loc_8317B574;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8317fa20
	ctx.lr = 0x8317B574;
	sub_8317FA20(ctx, base);
loc_8317B574:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8317b588
	if (ctx.cr6.eq) goto loc_8317B588;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// bl 0x8317a298
	ctx.lr = 0x8317B588;
	sub_8317A298(ctx, base);
loc_8317B588:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8317b230
	ctx.lr = 0x8317B590;
	sub_8317B230(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8317B5B4"))) PPC_WEAK_FUNC(sub_8317B5B4);
PPC_FUNC_IMPL(__imp__sub_8317B5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317B5B8"))) PPC_WEAK_FUNC(sub_8317B5B8);
PPC_FUNC_IMPL(__imp__sub_8317B5B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8317B5C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r29,56
	ctx.r31.s64 = ctx.r29.s64 + 56;
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8317b640
	if (!ctx.cr6.eq) goto loc_8317B640;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8317b5f0
	if (!ctx.cr6.eq) goto loc_8317B5F0;
	// sth r30,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r30.u16);
	// b 0x8317b674
	goto loc_8317B674;
loc_8317B5F0:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8317b604
	if (!ctx.cr6.eq) goto loc_8317B604;
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
	// b 0x8317b674
	goto loc_8317B674;
loc_8317B604:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x83161968
	ctx.lr = 0x8317B60C;
	sub_83161968(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,4
	ctx.r9.s64 = 4;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lhz r8,6(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r8,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, ctx.r8.u16);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r30,4(r6)
	PPC_STORE_U16(ctx.r6.u32 + 4, ctx.r30.u16);
	// sth r10,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r10.u16);
	// sth r9,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r9.u16);
	// b 0x8317b674
	goto loc_8317B674;
loc_8317B640:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8317b658
	if (ctx.cr6.lt) goto loc_8317B658;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83179238
	ctx.lr = 0x8317B658;
	sub_83179238(ctx, base);
loc_8317B658:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// sthx r30,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u16);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r8.u16);
loc_8317B674:
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8317b688
	if (ctx.cr6.eq) goto loc_8317B688;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8317f948
	ctx.lr = 0x8317B688;
	sub_8317F948(ctx, base);
loc_8317B688:
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8317b69c
	if (ctx.cr6.eq) goto loc_8317B69C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8317a1c0
	ctx.lr = 0x8317B69C;
	sub_8317A1C0(ctx, base);
loc_8317B69C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B6A4"))) PPC_WEAK_FUNC(sub_8317B6A4);
PPC_FUNC_IMPL(__imp__sub_8317B6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317B6A8"))) PPC_WEAK_FUNC(sub_8317B6A8);
PPC_FUNC_IMPL(__imp__sub_8317B6A8) {
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
	// addi r10,r30,56
	ctx.r10.s64 = ctx.r30.s64 + 56;
	// lwz r8,56(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8317b708
	if (!ctx.cr6.eq) goto loc_8317B708;
	// lhz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8317b6f0
	if (!ctx.cr6.eq) goto loc_8317B6F0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r11,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r11.u16);
	// b 0x8317b774
	goto loc_8317B774;
loc_8317B6F0:
	// lhz r9,6(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8317b774
	if (!ctx.cr6.eq) goto loc_8317B774;
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r11,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r11.u16);
	// b 0x8317b774
	goto loc_8317B774;
loc_8317B708:
	// lhz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8317b774
	if (ctx.cr6.eq) goto loc_8317B774;
	// clrlwi r7,r31,16
	ctx.r7.u64 = ctx.r31.u32 & 0xFFFF;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8317B720:
	// lhz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8317b744
	if (ctx.cr6.eq) goto loc_8317B744;
	// lhz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8317b720
	if (ctx.cr6.lt) goto loc_8317B720;
	// b 0x8317b774
	goto loc_8317B774;
loc_8317B744:
	// rlwinm r7,r6,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r7,r11,-2
	ctx.r7.s64 = ctx.r11.s64 + -2;
	// lhzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// lhz r6,-2(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// sthx r6,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r6.u16);
	// sth r7,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r7.u16);
	// lhz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// addis r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 65536;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// sth r4,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r4.u16);
loc_8317B774:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8317b788
	if (ctx.cr6.eq) goto loc_8317B788;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8317fcb8
	ctx.lr = 0x8317B788;
	sub_8317FCB8(ctx, base);
loc_8317B788:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8317b79c
	if (ctx.cr6.eq) goto loc_8317B79C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8317a530
	ctx.lr = 0x8317B79C;
	sub_8317A530(ctx, base);
loc_8317B79C:
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

__attribute__((alias("__imp__sub_8317B7B4"))) PPC_WEAK_FUNC(sub_8317B7B4);
PPC_FUNC_IMPL(__imp__sub_8317B7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317B7B8"))) PPC_WEAK_FUNC(sub_8317B7B8);
PPC_FUNC_IMPL(__imp__sub_8317B7B8) {
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,30748
	ctx.r9.s64 = ctx.r10.s64 + 30748;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8317b808
	if (ctx.cr6.eq) goto loc_8317B808;
	// lhz r11,62(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 62);
	// rotlwi r4,r11,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// bl 0x83161838
	ctx.lr = 0x8317B808;
	sub_83161838(ctx, base);
loc_8317B808:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,30708
	ctx.r9.s64 = ctx.r11.s64 + 30708;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8317b82c
	if (ctx.cr6.eq) goto loc_8317B82C;
	// bl 0x822990f0
	ctx.lr = 0x8317B828;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8317B82C:
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

__attribute__((alias("__imp__sub_8317B844"))) PPC_WEAK_FUNC(sub_8317B844);
PPC_FUNC_IMPL(__imp__sub_8317B844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317B848"))) PPC_WEAK_FUNC(sub_8317B848);
PPC_FUNC_IMPL(__imp__sub_8317B848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,30808
	ctx.r10.s64 = ctx.r11.s64 + 30808;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B858"))) PPC_WEAK_FUNC(sub_8317B858);
PPC_FUNC_IMPL(__imp__sub_8317B858) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,30808
	ctx.r9.s64 = ctx.r11.s64 + 30808;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8317b88c
	if (ctx.cr6.eq) goto loc_8317B88C;
	// bl 0x822990f0
	ctx.lr = 0x8317B888;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8317B88C:
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

__attribute__((alias("__imp__sub_8317B8A0"))) PPC_WEAK_FUNC(sub_8317B8A0);
PPC_FUNC_IMPL(__imp__sub_8317B8A0) {
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B904"))) PPC_WEAK_FUNC(sub_8317B904);
PPC_FUNC_IMPL(__imp__sub_8317B904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317B908"))) PPC_WEAK_FUNC(sub_8317B908);
PPC_FUNC_IMPL(__imp__sub_8317B908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B94C"))) PPC_WEAK_FUNC(sub_8317B94C);
PPC_FUNC_IMPL(__imp__sub_8317B94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317B950"))) PPC_WEAK_FUNC(sub_8317B950);
PPC_FUNC_IMPL(__imp__sub_8317B950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f8,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f13,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f11,f0
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f12,6048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f4,f10,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f3,f11,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmuls f2,f9,f5
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f9,f8,f6
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f1,f10,f5
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fmuls f10,f8,f7
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmuls f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f7,f11,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmuls f0,f11,f5
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fadds f6,f3,f4
	ctx.f6.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// fadds f5,f3,f2
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// fadds f4,f4,f2
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// fadds f2,f9,f1
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// stfs f2,4(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fsubs f1,f1,f9
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f9.f64));
	// fadds f11,f7,f8
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fsubs f9,f7,f8
	ctx.f9.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fsubs f3,f0,f10
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// stfs f3,8(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fadds f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fsubs f8,f13,f6
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// stfs f8,0(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f7,f13,f5
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// stfs f1,12(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f7,16(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fsubs f6,f13,f4
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// stfs f11,20(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f10,24(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f9,28(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f6,32(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f12,36(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f12,44(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BA0C"))) PPC_WEAK_FUNC(sub_8317BA0C);
PPC_FUNC_IMPL(__imp__sub_8317BA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317BA10"))) PPC_WEAK_FUNC(sub_8317BA10);
PPC_FUNC_IMPL(__imp__sub_8317BA10) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8317ba30
	if (ctx.cr6.eq) goto loc_8317BA30;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_8317BA30:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BA38"))) PPC_WEAK_FUNC(sub_8317BA38);
PPC_FUNC_IMPL(__imp__sub_8317BA38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BA40"))) PPC_WEAK_FUNC(sub_8317BA40);
PPC_FUNC_IMPL(__imp__sub_8317BA40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BA4C"))) PPC_WEAK_FUNC(sub_8317BA4C);
PPC_FUNC_IMPL(__imp__sub_8317BA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317BA50"))) PPC_WEAK_FUNC(sub_8317BA50);
PPC_FUNC_IMPL(__imp__sub_8317BA50) {
	PPC_FUNC_PROLOGUE();
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BA60"))) PPC_WEAK_FUNC(sub_8317BA60);
PPC_FUNC_IMPL(__imp__sub_8317BA60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BA64"))) PPC_WEAK_FUNC(sub_8317BA64);
PPC_FUNC_IMPL(__imp__sub_8317BA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317BA68"))) PPC_WEAK_FUNC(sub_8317BA68);
PPC_FUNC_IMPL(__imp__sub_8317BA68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,30808
	ctx.r10.s64 = ctx.r11.s64 + 30808;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BA78"))) PPC_WEAK_FUNC(sub_8317BA78);
PPC_FUNC_IMPL(__imp__sub_8317BA78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BA7C"))) PPC_WEAK_FUNC(sub_8317BA7C);
PPC_FUNC_IMPL(__imp__sub_8317BA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317BA80"))) PPC_WEAK_FUNC(sub_8317BA80);
PPC_FUNC_IMPL(__imp__sub_8317BA80) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r10,r11,30944
	ctx.r10.s64 = ctx.r11.s64 + 30944;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x83177b38
	ctx.lr = 0x8317BAA8;
	sub_83177B38(ctx, base);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r8,r9,30808
	ctx.r8.s64 = ctx.r9.s64 + 30808;
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

__attribute__((alias("__imp__sub_8317BAC8"))) PPC_WEAK_FUNC(sub_8317BAC8);
PPC_FUNC_IMPL(__imp__sub_8317BAC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r11,r9,26,0,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0xFC000000;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r3,r8,80
	ctx.r3.s64 = ctx.r8.s64 + 5242880;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BAE4"))) PPC_WEAK_FUNC(sub_8317BAE4);
PPC_FUNC_IMPL(__imp__sub_8317BAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317BAE8"))) PPC_WEAK_FUNC(sub_8317BAE8);
PPC_FUNC_IMPL(__imp__sub_8317BAE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BAF0"))) PPC_WEAK_FUNC(sub_8317BAF0);
PPC_FUNC_IMPL(__imp__sub_8317BAF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BAF8"))) PPC_WEAK_FUNC(sub_8317BAF8);
PPC_FUNC_IMPL(__imp__sub_8317BAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BB00"))) PPC_WEAK_FUNC(sub_8317BB00);
PPC_FUNC_IMPL(__imp__sub_8317BB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BB08"))) PPC_WEAK_FUNC(sub_8317BB08);
PPC_FUNC_IMPL(__imp__sub_8317BB08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BB10"))) PPC_WEAK_FUNC(sub_8317BB10);
PPC_FUNC_IMPL(__imp__sub_8317BB10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BB18"))) PPC_WEAK_FUNC(sub_8317BB18);
PPC_FUNC_IMPL(__imp__sub_8317BB18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BB24"))) PPC_WEAK_FUNC(sub_8317BB24);
PPC_FUNC_IMPL(__imp__sub_8317BB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317BB28"))) PPC_WEAK_FUNC(sub_8317BB28);
PPC_FUNC_IMPL(__imp__sub_8317BB28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BB34"))) PPC_WEAK_FUNC(sub_8317BB34);
PPC_FUNC_IMPL(__imp__sub_8317BB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317BB38"))) PPC_WEAK_FUNC(sub_8317BB38);
PPC_FUNC_IMPL(__imp__sub_8317BB38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BB44"))) PPC_WEAK_FUNC(sub_8317BB44);
PPC_FUNC_IMPL(__imp__sub_8317BB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317BB48"))) PPC_WEAK_FUNC(sub_8317BB48);
PPC_FUNC_IMPL(__imp__sub_8317BB48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BB4C"))) PPC_WEAK_FUNC(sub_8317BB4C);
PPC_FUNC_IMPL(__imp__sub_8317BB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317BB50"))) PPC_WEAK_FUNC(sub_8317BB50);
PPC_FUNC_IMPL(__imp__sub_8317BB50) {
	PPC_FUNC_PROLOGUE();
	// lis r3,16384
	ctx.r3.s64 = 1073741824;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BB58"))) PPC_WEAK_FUNC(sub_8317BB58);
PPC_FUNC_IMPL(__imp__sub_8317BB58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// rlwinm r3,r11,28,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BB64"))) PPC_WEAK_FUNC(sub_8317BB64);
PPC_FUNC_IMPL(__imp__sub_8317BB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317BB68"))) PPC_WEAK_FUNC(sub_8317BB68);
PPC_FUNC_IMPL(__imp__sub_8317BB68) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8317BB7C"))) PPC_WEAK_FUNC(sub_8317BB7C);
PPC_FUNC_IMPL(__imp__sub_8317BB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317BB80"))) PPC_WEAK_FUNC(sub_8317BB80);
PPC_FUNC_IMPL(__imp__sub_8317BB80) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8317BB94"))) PPC_WEAK_FUNC(sub_8317BB94);
PPC_FUNC_IMPL(__imp__sub_8317BB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317BB98"))) PPC_WEAK_FUNC(sub_8317BB98);
PPC_FUNC_IMPL(__imp__sub_8317BB98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BBAC"))) PPC_WEAK_FUNC(sub_8317BBAC);
PPC_FUNC_IMPL(__imp__sub_8317BBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317BBB0"))) PPC_WEAK_FUNC(sub_8317BBB0);
PPC_FUNC_IMPL(__imp__sub_8317BBB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BBB8"))) PPC_WEAK_FUNC(sub_8317BBB8);
PPC_FUNC_IMPL(__imp__sub_8317BBB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BBC0"))) PPC_WEAK_FUNC(sub_8317BBC0);
PPC_FUNC_IMPL(__imp__sub_8317BBC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BBC8"))) PPC_WEAK_FUNC(sub_8317BBC8);
PPC_FUNC_IMPL(__imp__sub_8317BBC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BBD0"))) PPC_WEAK_FUNC(sub_8317BBD0);
PPC_FUNC_IMPL(__imp__sub_8317BBD0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ori r9,r10,64
	ctx.r9.u64 = ctx.r10.u64 | 64;
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// b 0x83163648
	sub_83163648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317BBEC"))) PPC_WEAK_FUNC(sub_8317BBEC);
PPC_FUNC_IMPL(__imp__sub_8317BBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317BBF0"))) PPC_WEAK_FUNC(sub_8317BBF0);
PPC_FUNC_IMPL(__imp__sub_8317BBF0) {
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
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r10,r11,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8317BC24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x831636a8
	ctx.lr = 0x8317BC30;
	sub_831636A8(ctx, base);
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

__attribute__((alias("__imp__sub_8317BC44"))) PPC_WEAK_FUNC(sub_8317BC44);
PPC_FUNC_IMPL(__imp__sub_8317BC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317BC48"))) PPC_WEAK_FUNC(sub_8317BC48);
PPC_FUNC_IMPL(__imp__sub_8317BC48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// rlwinm r3,r11,26,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BC54"))) PPC_WEAK_FUNC(sub_8317BC54);
PPC_FUNC_IMPL(__imp__sub_8317BC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317BC58"))) PPC_WEAK_FUNC(sub_8317BC58);
PPC_FUNC_IMPL(__imp__sub_8317BC58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BC60"))) PPC_WEAK_FUNC(sub_8317BC60);
PPC_FUNC_IMPL(__imp__sub_8317BC60) {
	PPC_FUNC_PROLOGUE();
	// stw r4,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BC68"))) PPC_WEAK_FUNC(sub_8317BC68);
PPC_FUNC_IMPL(__imp__sub_8317BC68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// rlwinm r3,r11,24,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BC74"))) PPC_WEAK_FUNC(sub_8317BC74);
PPC_FUNC_IMPL(__imp__sub_8317BC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317BC78"))) PPC_WEAK_FUNC(sub_8317BC78);
PPC_FUNC_IMPL(__imp__sub_8317BC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BC80"))) PPC_WEAK_FUNC(sub_8317BC80);
PPC_FUNC_IMPL(__imp__sub_8317BC80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BC88"))) PPC_WEAK_FUNC(sub_8317BC88);
PPC_FUNC_IMPL(__imp__sub_8317BC88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BC90"))) PPC_WEAK_FUNC(sub_8317BC90);
PPC_FUNC_IMPL(__imp__sub_8317BC90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317BC98"))) PPC_WEAK_FUNC(sub_8317BC98);
PPC_FUNC_IMPL(__imp__sub_8317BC98) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8317BCAC"))) PPC_WEAK_FUNC(sub_8317BCAC);
PPC_FUNC_IMPL(__imp__sub_8317BCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317BCB0"))) PPC_WEAK_FUNC(sub_8317BCB0);
PPC_FUNC_IMPL(__imp__sub_8317BCB0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r6,30944
	ctx.r5.s64 = ctx.r6.s64 + 30944;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// lfs f12,14144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14144);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,6140(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// li r4,8
	ctx.r4.s64 = 8;
	// lfs f11,6708(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6708);
	ctx.f11.f64 = double(temp.f32);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f11,44(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r31,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r31.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// stw r4,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r4.u32);
	// bl 0x83177be0
	ctx.lr = 0x8317BD44;
	sub_83177BE0(ctx, base);
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

__attribute__((alias("__imp__sub_8317BD5C"))) PPC_WEAK_FUNC(sub_8317BD5C);
PPC_FUNC_IMPL(__imp__sub_8317BD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317BD60"))) PPC_WEAK_FUNC(sub_8317BD60);
PPC_FUNC_IMPL(__imp__sub_8317BD60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8317BD68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// rlwinm r5,r6,0,28,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8;
	// lwz r30,72(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// addi r29,r11,236
	ctx.r29.s64 = ctx.r11.s64 + 236;
	// bne cr6,0x8317bdb4
	if (!ctx.cr6.eq) goto loc_8317BDB4;
	// addi r29,r11,260
	ctx.r29.s64 = ctx.r11.s64 + 260;
loc_8317BDB4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8317bde0
	if (ctx.cr6.eq) goto loc_8317BDE0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8317BDD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
loc_8317BDE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bl 0x83163a78
	ctx.lr = 0x8317BDF4;
	sub_83163A78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317BDFC"))) PPC_WEAK_FUNC(sub_8317BDFC);
PPC_FUNC_IMPL(__imp__sub_8317BDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317BE00"))) PPC_WEAK_FUNC(sub_8317BE00);
PPC_FUNC_IMPL(__imp__sub_8317BE00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8317BE08;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6ab0
	ctx.lr = 0x8317BE10;
	__savefpr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stfs f1,324(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8317cad4
	if (!ctx.cr6.eq) goto loc_8317CAD4;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8317cad4
	if (ctx.cr6.eq) goto loc_8317CAD4;
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8317cad4
	if (ctx.cr6.eq) goto loc_8317CAD4;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r10,1136(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1136);
	// lis r28,-32256
	ctx.r28.s64 = -2113929216;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r30,1132(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1132);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f12,6048(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6048);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,7676(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// lwz r31,8(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lfs f13,6140(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// and r27,r8,r10
	ctx.r27.u64 = ctx.r8.u64 & ctx.r10.u64;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// rlwinm r28,r27,7,0,24
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 7) & 0xFFFFFF80;
	// and r26,r8,r10
	ctx.r26.u64 = ctx.r8.u64 & ctx.r10.u64;
	// add r31,r28,r30
	ctx.r31.u64 = ctx.r28.u64 + ctx.r30.u64;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// lwzx r8,r28,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8317c2a0
	if (ctx.cr6.eq) goto loc_8317C2A0;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8317c178
	if (ctx.cr6.eq) goto loc_8317C178;
	// lfs f12,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// lfs f8,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// fmr f29,f12
	ctx.f29.f64 = ctx.f12.f64;
	// lfs f11,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmr f30,f8
	ctx.f30.f64 = ctx.f8.f64;
	// lfs f7,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f11,f8
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// lfs f10,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f4,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f7,f10
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmuls f2,f4,f8
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// lfs f3,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f3,f3
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// lfs f28,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f28.f64 = double(temp.f32);
	// fmr f23,f3
	ctx.f23.f64 = ctx.f3.f64;
	// lfs f27,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f27.f64 = double(temp.f32);
	// fmr f31,f7
	ctx.f31.f64 = ctx.f7.f64;
	// lfs f25,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f25.f64 = double(temp.f32);
	// lfs f22,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f22.f64 = double(temp.f32);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// fmuls f24,f27,f29
	ctx.f24.f64 = double(float(ctx.f27.f64 * ctx.f29.f64));
	// lfs f21,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f21.f64 = double(temp.f32);
	// fmuls f26,f28,f30
	ctx.f26.f64 = double(float(ctx.f28.f64 * ctx.f30.f64));
	// lfs f20,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f20.f64 = double(temp.f32);
	// fmadds f6,f4,f7,f6
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f6.f64));
	// lfs f19,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f19.f64 = double(temp.f32);
	// fmsubs f9,f8,f10,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 - ctx.f9.f64));
	// addi r29,r11,28
	ctx.r29.s64 = ctx.r11.s64 + 28;
	// fmsubs f5,f4,f12,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 - ctx.f5.f64));
	// addi r30,r10,12
	ctx.r30.s64 = ctx.r10.s64 + 12;
	// fmsubs f2,f7,f11,f2
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 - ctx.f2.f64));
	// fmsubs f1,f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fmuls f14,f25,f23
	ctx.f14.f64 = double(float(ctx.f25.f64 * ctx.f23.f64));
	// fmuls f17,f27,f30
	ctx.f17.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// fmuls f18,f25,f31
	ctx.f18.f64 = double(float(ctx.f25.f64 * ctx.f31.f64));
	// fmuls f15,f27,f23
	ctx.f15.f64 = double(float(ctx.f27.f64 * ctx.f23.f64));
	// fmuls f16,f28,f23
	ctx.f16.f64 = double(float(ctx.f28.f64 * ctx.f23.f64));
	// fmadds f6,f10,f12,f6
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmuls f9,f9,f3
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmuls f5,f3,f5
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fmuls f3,f3,f2
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fmuls f2,f4,f1
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fmuls f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f1,f10,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmsubs f4,f27,f31,f26
	ctx.f4.f64 = double(float(ctx.f27.f64 * ctx.f31.f64 - ctx.f26.f64));
	// fmsubs f27,f25,f30,f24
	ctx.f27.f64 = double(float(ctx.f25.f64 * ctx.f30.f64 - ctx.f24.f64));
	// fmsubs f26,f28,f29,f18
	ctx.f26.f64 = double(float(ctx.f28.f64 * ctx.f29.f64 - ctx.f18.f64));
	// fmuls f10,f7,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f7,f5,f0
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f6,f12,f6
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmadds f5,f25,f29,f17
	ctx.f5.f64 = double(float(ctx.f25.f64 * ctx.f29.f64 + ctx.f17.f64));
	// fadds f4,f14,f4
	ctx.f4.f64 = double(float(ctx.f14.f64 + ctx.f4.f64));
	// fmuls f12,f31,f22
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f22.f64));
	// fmuls f30,f30,f22
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f22.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fadds f9,f2,f9
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// fmuls f2,f29,f22
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f22.f64));
	// fadds f7,f11,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f3,f1,f3
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fadds f11,f27,f16
	ctx.f11.f64 = double(float(ctx.f27.f64 + ctx.f16.f64));
	// fadds f29,f26,f15
	ctx.f29.f64 = double(float(ctx.f26.f64 + ctx.f15.f64));
	// fmadds f5,f28,f31,f5
	ctx.f5.f64 = double(float(ctx.f28.f64 * ctx.f31.f64 + ctx.f5.f64));
	// fadds f1,f9,f10
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fadds f9,f4,f2
	ctx.f9.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// fadds f10,f7,f8
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fadds f4,f3,f6
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// fadds f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fadds f7,f29,f30
	ctx.f7.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// fmsubs f5,f23,f22,f5
	ctx.f5.f64 = double(float(ctx.f23.f64 * ctx.f22.f64 - ctx.f5.f64));
	// fadds f3,f21,f1
	ctx.f3.f64 = double(float(ctx.f21.f64 + ctx.f1.f64));
	// stfs f3,0(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fadds f2,f20,f10
	ctx.f2.f64 = double(float(ctx.f20.f64 + ctx.f10.f64));
	// stfs f2,4(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fadds f1,f19,f4
	ctx.f1.f64 = double(float(ctx.f19.f64 + ctx.f4.f64));
	// stfs f1,8(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmr f11,f8
	ctx.f11.f64 = ctx.f8.f64;
	// stfs f8,12(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmr f8,f7
	ctx.f8.f64 = ctx.f7.f64;
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
	// stfs f9,20(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// fmr f10,f9
	ctx.f10.f64 = ctx.f9.f64;
	// stfs f7,16(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// fmr f9,f5
	ctx.f9.f64 = ctx.f5.f64;
	// stfs f5,24(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r30,r10,28
	ctx.r30.s64 = ctx.r10.s64 + 28;
	// lfs f6,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// addi r30,r10,76
	ctx.r30.s64 = ctx.r10.s64 + 76;
	// lfs f5,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmr f4,f8
	ctx.f4.f64 = ctx.f8.f64;
	// fmuls f2,f12,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f31,f10,f2
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmuls f2,f9,f2
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmuls f8,f1,f8
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// fmuls f12,f4,f3
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmuls f4,f9,f3
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmuls f3,f10,f3
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// fmuls f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f9,f9,f1
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fadds f1,f31,f12
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f12.f64));
	// fadds f31,f31,f11
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f11.f64));
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f11,f2,f8
	ctx.f11.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// stfs f11,32(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// fsubs f11,f10,f4
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// stfs f11,36(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// fadds f11,f4,f10
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// fsubs f8,f8,f2
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f2.f64));
	// fadds f2,f3,f9
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// fsubs f10,f3,f9
	ctx.f10.f64 = double(float(ctx.f3.f64 - ctx.f9.f64));
	// fsubs f9,f13,f1
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// stfs f9,28(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// fsubs f4,f13,f31
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// stfs f2,48(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// stfs f8,40(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// fsubs f3,f13,f12
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f4,44(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 44, temp.u32);
	// stfs f10,56(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// stfs f3,60(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 60, temp.u32);
	// stfs f11,52(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 52, temp.u32);
	// stfs f7,64(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 64, temp.u32);
	// stfs f5,72(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 72, temp.u32);
	// stfs f6,68(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 68, temp.u32);
	// lfs f2,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f2,f0
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f8,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f1,f0
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f6,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f11,f10
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f4,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f12,f10
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f10,f2,f9
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// fmuls f1,f1,f7
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// fmuls f31,f11,f7
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmuls f30,f12,f9
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f2,f2,f7
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// fmuls f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fadds f9,f5,f10
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// fadds f7,f5,f1
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// fadds f5,f10,f1
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// fsubs f10,f31,f30
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// stfs f10,84(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 84, temp.u32);
	// fsubs f1,f13,f9
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f1,76(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 76, temp.u32);
	// fadds f9,f3,f2
	ctx.f9.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// stfs f9,80(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 80, temp.u32);
	// fsubs f3,f2,f3
	ctx.f3.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// fadds f2,f11,f12
	ctx.f2.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f3,88(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 88, temp.u32);
	// fsubs f1,f13,f7
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// stfs f2,96(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 96, temp.u32);
	// stfs f1,92(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 92, temp.u32);
	// fsubs f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fadds f10,f30,f31
	ctx.f10.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// stfs f10,100(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 100, temp.u32);
	// fsubs f7,f13,f5
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// stfs f9,104(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 104, temp.u32);
	// stfs f7,108(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 108, temp.u32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f8,112(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 112, temp.u32);
	// stfs f6,116(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 116, temp.u32);
	// stfs f4,120(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 120, temp.u32);
	// b 0x8317c298
	goto loc_8317C298;
loc_8317C178:
	// lfs f11,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// addi r31,r11,28
	ctx.r31.s64 = ctx.r11.s64 + 28;
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r30,r10,28
	ctx.r30.s64 = ctx.r10.s64 + 28;
	// lfs f10,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// stfs f10,4(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f9,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f8,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,12(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f7,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,16(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f6,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,20(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f5,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,24(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f9,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f8,f4,f0
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f5,f11,f10
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f10,f6,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f31,f9,f7
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmuls f4,f4,f8
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fmuls f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f29,f6,f7
	ctx.f29.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f30,f11,f8
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmuls f7,f11,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmuls f8,f6,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fadds f6,f5,f31
	ctx.f6.f64 = double(float(ctx.f5.f64 + ctx.f31.f64));
	// fadds f5,f5,f4
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fadds f4,f31,f4
	ctx.f4.f64 = double(float(ctx.f31.f64 + ctx.f4.f64));
	// fadds f11,f10,f9
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f11,32(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fsubs f11,f30,f29
	ctx.f11.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
	// stfs f11,36(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// fadds f9,f7,f8
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fsubs f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fadds f11,f29,f30
	ctx.f11.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// fsubs f7,f13,f6
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// stfs f7,28(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// fsubs f6,f13,f5
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// stfs f10,40(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// stfs f6,44(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 44, temp.u32);
	// fsubs f5,f13,f4
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// stfs f9,48(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// stfs f11,52(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 52, temp.u32);
	// stfs f8,56(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// stfs f5,60(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 60, temp.u32);
	// stfs f3,64(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 64, temp.u32);
	// stfs f2,68(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 68, temp.u32);
	// stfs f1,72(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 72, temp.u32);
	// stfs f13,108(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 108, temp.u32);
	// stfs f13,92(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 92, temp.u32);
	// stfs f13,76(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 76, temp.u32);
	// stfs f12,84(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 84, temp.u32);
	// stfs f12,80(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 80, temp.u32);
	// stfs f12,96(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 96, temp.u32);
	// stfs f12,88(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 88, temp.u32);
	// stfs f12,104(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 104, temp.u32);
	// stfs f12,100(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 100, temp.u32);
	// stfs f12,120(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 120, temp.u32);
	// stfs f12,116(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 116, temp.u32);
	// stfs f12,112(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 112, temp.u32);
loc_8317C298:
	// lwz r8,1132(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1132);
	// stwx r11,r28,r8
	PPC_STORE_U32(ctx.r28.u32 + ctx.r8.u32, ctx.r11.u32);
loc_8317C2A0:
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8317c6a0
	if (!ctx.cr6.eq) goto loc_8317C6A0;
	// lwz r31,12(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// addi r11,r6,1008
	ctx.r11.s64 = ctx.r6.s64 + 1008;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8317c57c
	if (ctx.cr6.eq) goto loc_8317C57C;
	// lfs f12,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r31,100
	ctx.r6.s64 = ctx.r31.s64 + 100;
	// lfs f8,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// fmr f29,f12
	ctx.f29.f64 = ctx.f12.f64;
	// lfs f11,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmr f30,f8
	ctx.f30.f64 = ctx.f8.f64;
	// lfs f7,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f11,f8
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// lfs f10,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f4,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f7,f10
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmuls f2,f4,f8
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// lfs f3,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f3,f3
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// lfs f28,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f28.f64 = double(temp.f32);
	// fmr f23,f3
	ctx.f23.f64 = ctx.f3.f64;
	// lfs f27,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f27.f64 = double(temp.f32);
	// fmr f31,f7
	ctx.f31.f64 = ctx.f7.f64;
	// lfs f25,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f25.f64 = double(temp.f32);
	// lfs f22,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f22.f64 = double(temp.f32);
	// addi r6,r6,12
	ctx.r6.s64 = ctx.r6.s64 + 12;
	// fmuls f24,f27,f29
	ctx.f24.f64 = double(float(ctx.f27.f64 * ctx.f29.f64));
	// lfs f21,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f21.f64 = double(temp.f32);
	// fmuls f26,f28,f30
	ctx.f26.f64 = double(float(ctx.f28.f64 * ctx.f30.f64));
	// lfs f20,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f20.f64 = double(temp.f32);
	// fmadds f6,f7,f4,f6
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 + ctx.f6.f64));
	// lfs f19,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f19.f64 = double(temp.f32);
	// fmsubs f9,f8,f10,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 - ctx.f9.f64));
	// addi r30,r5,28
	ctx.r30.s64 = ctx.r5.s64 + 28;
	// fmsubs f5,f4,f12,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 - ctx.f5.f64));
	// addi r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 + 12;
	// fmsubs f2,f7,f11,f2
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 - ctx.f2.f64));
	// fmsubs f1,f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fmuls f14,f23,f25
	ctx.f14.f64 = double(float(ctx.f23.f64 * ctx.f25.f64));
	// fmuls f17,f27,f30
	ctx.f17.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// fmuls f18,f25,f31
	ctx.f18.f64 = double(float(ctx.f25.f64 * ctx.f31.f64));
	// fmuls f15,f23,f27
	ctx.f15.f64 = double(float(ctx.f23.f64 * ctx.f27.f64));
	// fmuls f16,f23,f28
	ctx.f16.f64 = double(float(ctx.f23.f64 * ctx.f28.f64));
	// fmadds f6,f10,f12,f6
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmuls f9,f9,f3
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmuls f5,f3,f5
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fmuls f3,f3,f2
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fmuls f2,f1,f4
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// fmuls f11,f1,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmuls f1,f1,f10
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fmsubs f4,f27,f31,f26
	ctx.f4.f64 = double(float(ctx.f27.f64 * ctx.f31.f64 - ctx.f26.f64));
	// fmsubs f27,f25,f30,f24
	ctx.f27.f64 = double(float(ctx.f25.f64 * ctx.f30.f64 - ctx.f24.f64));
	// fmsubs f26,f28,f29,f18
	ctx.f26.f64 = double(float(ctx.f28.f64 * ctx.f29.f64 - ctx.f18.f64));
	// fmuls f10,f6,f7
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f8,f6,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f7,f5,f0
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmadds f5,f25,f29,f17
	ctx.f5.f64 = double(float(ctx.f25.f64 * ctx.f29.f64 + ctx.f17.f64));
	// fadds f4,f4,f14
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f14.f64));
	// fmuls f12,f22,f31
	ctx.f12.f64 = double(float(ctx.f22.f64 * ctx.f31.f64));
	// fmuls f30,f22,f30
	ctx.f30.f64 = double(float(ctx.f22.f64 * ctx.f30.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fadds f9,f2,f9
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// fmuls f2,f22,f29
	ctx.f2.f64 = double(float(ctx.f22.f64 * ctx.f29.f64));
	// fadds f7,f11,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f3,f1,f3
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fadds f11,f27,f16
	ctx.f11.f64 = double(float(ctx.f27.f64 + ctx.f16.f64));
	// fadds f29,f26,f15
	ctx.f29.f64 = double(float(ctx.f26.f64 + ctx.f15.f64));
	// fmadds f5,f28,f31,f5
	ctx.f5.f64 = double(float(ctx.f28.f64 * ctx.f31.f64 + ctx.f5.f64));
	// fadds f1,f9,f10
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fadds f9,f4,f2
	ctx.f9.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// fadds f10,f7,f8
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fadds f4,f3,f6
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// fadds f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fadds f7,f29,f30
	ctx.f7.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// fmsubs f5,f23,f22,f5
	ctx.f5.f64 = double(float(ctx.f23.f64 * ctx.f22.f64 - ctx.f5.f64));
	// fadds f3,f1,f21
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f21.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f2,f10,f20
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f20.f64));
	// stfs f2,4(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f1,f4,f19
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f19.f64));
	// stfs f1,8(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmr f12,f8
	ctx.f12.f64 = ctx.f8.f64;
	// stfs f7,16(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fmr f10,f7
	ctx.f10.f64 = ctx.f7.f64;
	// stfs f5,24(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r6,r11,28
	ctx.r6.s64 = ctx.r11.s64 + 28;
	// stfs f8,12(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r6,r11,76
	ctx.r6.s64 = ctx.r11.s64 + 76;
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmr f2,f10
	ctx.f2.f64 = ctx.f10.f64;
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f12,f11,f2
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// lfs f2,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f10,f7,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// lfs f4,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f8,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmr f5,f8
	ctx.f5.f64 = ctx.f8.f64;
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f30,f7,f4
	ctx.f30.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// fmuls f1,f11,f4
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fmuls f31,f6,f5
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmuls f3,f11,f5
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f6,f6,f4
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// fmuls f5,f7,f5
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fadds f4,f10,f9
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// fadds f10,f31,f10
	ctx.f10.f64 = double(float(ctx.f31.f64 + ctx.f10.f64));
	// fadds f9,f31,f9
	ctx.f9.f64 = double(float(ctx.f31.f64 + ctx.f9.f64));
	// fsubs f7,f3,f30
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f30.f64));
	// stfs f7,36(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// fadds f7,f6,f12
	ctx.f7.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// stfs f7,32(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// fsubs f6,f12,f6
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fadds f12,f5,f1
	ctx.f12.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// fadds f7,f30,f3
	ctx.f7.f64 = double(float(ctx.f30.f64 + ctx.f3.f64));
	// fsubs f5,f5,f1
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f1.f64));
	// fsubs f4,f13,f4
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// fsubs f3,f13,f10
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f3,28(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fsubs f1,f13,f9
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f6,40(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f12,48(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f1,44(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f7,52(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f5,56(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f4,60(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f11,68(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f8,72(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// stfs f2,64(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lfs f5,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f5.f64 = double(temp.f32);
	// lfs f10,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f4,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f2,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f3,f11,f5
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// lfs f0,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f11,f10
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f11,f8,f10
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f7,f6,f7
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f10,f6,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fadds f5,f11,f9
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fadds f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fadds f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// fsubs f7,f13,f5
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// stfs f7,76(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// fsubs f5,f10,f3
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// stfs f5,84(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// fadds f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f7,80(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// fsubs f5,f12,f8
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fadds f12,f1,f6
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f6.f64));
	// stfs f5,88(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// fsubs f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f12,96(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// stfs f11,92(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// fadds f10,f3,f10
	ctx.f10.f64 = double(float(ctx.f3.f64 + ctx.f10.f64));
	// fsubs f8,f1,f6
	ctx.f8.f64 = double(float(ctx.f1.f64 - ctx.f6.f64));
	// stfs f10,100(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// fsubs f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f8,104(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// stfs f7,108(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stfs f4,112(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stfs f2,116(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// stfs f0,120(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// b 0x8317cab0
	goto loc_8317CAB0;
loc_8317C57C:
	// lfs f11,28(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r5,28
	ctx.r6.s64 = ctx.r5.s64 + 28;
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r31,r11,28
	ctx.r31.s64 = ctx.r11.s64 + 28;
	// lfs f10,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r6,12
	ctx.r6.s64 = ctx.r6.s64 + 12;
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f9,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f8,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,12(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f7,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,16(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f6,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,20(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f5,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,24(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f4,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// lfs f11,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// lfs f2,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f10,f4,f0
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f3,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f7,f1,f2
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// fmuls f5,f1,f3
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f3.f64));
	// lfs f1,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f10,f4
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// fmuls f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f31,f9,f2
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmuls f4,f9,f4
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// fmuls f30,f10,f3
	ctx.f30.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// fmuls f2,f10,f2
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmuls f3,f9,f3
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fadds f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// fadds f9,f7,f11
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// fadds f7,f0,f11
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fadds f0,f5,f4
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// fsubs f11,f31,f30
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// stfs f11,36(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// fsubs f5,f4,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// fadds f4,f2,f3
	ctx.f4.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// fadds f0,f30,f31
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// fsubs f11,f2,f3
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// fsubs f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f10,28(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fsubs f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f5,40(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f9,44(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// fsubs f7,f13,f7
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// stfs f4,48(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f11,56(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f7,60(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f1,64(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f8,68(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f6,72(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// stfs f13,108(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stfs f13,92(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// stfs f13,76(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// stfs f12,84(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stfs f12,80(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stfs f12,96(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// stfs f12,88(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// stfs f12,104(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// stfs f12,100(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// stfs f12,120(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// stfs f12,116(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// stfs f12,112(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// b 0x8317cab0
	goto loc_8317CAB0;
loc_8317C6A0:
	// lwz r11,1132(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1132);
	// rlwinm r28,r26,7,0,24
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 7) & 0xFFFFFF80;
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8317cab0
	if (ctx.cr6.eq) goto loc_8317CAB0;
	// lwz r31,12(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8317c988
	if (ctx.cr6.eq) goto loc_8317C988;
	// lfs f12,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// lfs f8,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// fmr f29,f12
	ctx.f29.f64 = ctx.f12.f64;
	// lfs f11,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmr f30,f8
	ctx.f30.f64 = ctx.f8.f64;
	// lfs f7,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f11,f8
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// lfs f10,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f4,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f7,f10
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmuls f2,f4,f8
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// lfs f3,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f3,f3
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// lfs f28,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f28.f64 = double(temp.f32);
	// fmr f23,f3
	ctx.f23.f64 = ctx.f3.f64;
	// lfs f27,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f27.f64 = double(temp.f32);
	// fmr f31,f7
	ctx.f31.f64 = ctx.f7.f64;
	// lfs f25,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f25.f64 = double(temp.f32);
	// lfs f22,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f22.f64 = double(temp.f32);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// fmuls f24,f27,f29
	ctx.f24.f64 = double(float(ctx.f27.f64 * ctx.f29.f64));
	// lfs f21,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f21.f64 = double(temp.f32);
	// fmuls f26,f28,f30
	ctx.f26.f64 = double(float(ctx.f28.f64 * ctx.f30.f64));
	// lfs f20,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f20.f64 = double(temp.f32);
	// fmadds f6,f4,f7,f6
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f6.f64));
	// lfs f19,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f19.f64 = double(temp.f32);
	// fmsubs f9,f8,f10,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 - ctx.f9.f64));
	// addi r29,r5,28
	ctx.r29.s64 = ctx.r5.s64 + 28;
	// fmsubs f5,f4,f12,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 - ctx.f5.f64));
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
	// fmsubs f2,f7,f11,f2
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 - ctx.f2.f64));
	// fmsubs f1,f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fmuls f14,f23,f25
	ctx.f14.f64 = double(float(ctx.f23.f64 * ctx.f25.f64));
	// fmuls f17,f27,f30
	ctx.f17.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// fmuls f18,f25,f31
	ctx.f18.f64 = double(float(ctx.f25.f64 * ctx.f31.f64));
	// fmuls f15,f23,f27
	ctx.f15.f64 = double(float(ctx.f23.f64 * ctx.f27.f64));
	// fmuls f16,f23,f28
	ctx.f16.f64 = double(float(ctx.f23.f64 * ctx.f28.f64));
	// fmadds f6,f10,f12,f6
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmuls f9,f9,f3
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmuls f5,f3,f5
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fmuls f3,f3,f2
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fmuls f2,f1,f4
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// fmuls f11,f1,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmuls f1,f1,f10
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fmsubs f4,f27,f31,f26
	ctx.f4.f64 = double(float(ctx.f27.f64 * ctx.f31.f64 - ctx.f26.f64));
	// fmsubs f27,f25,f30,f24
	ctx.f27.f64 = double(float(ctx.f25.f64 * ctx.f30.f64 - ctx.f24.f64));
	// fmsubs f26,f28,f29,f18
	ctx.f26.f64 = double(float(ctx.f28.f64 * ctx.f29.f64 - ctx.f18.f64));
	// fmuls f10,f6,f7
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f8,f6,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f7,f5,f0
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmadds f5,f25,f29,f17
	ctx.f5.f64 = double(float(ctx.f25.f64 * ctx.f29.f64 + ctx.f17.f64));
	// fadds f4,f4,f14
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f14.f64));
	// fmuls f12,f22,f31
	ctx.f12.f64 = double(float(ctx.f22.f64 * ctx.f31.f64));
	// fmuls f30,f22,f30
	ctx.f30.f64 = double(float(ctx.f22.f64 * ctx.f30.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fadds f9,f2,f9
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// fmuls f2,f22,f29
	ctx.f2.f64 = double(float(ctx.f22.f64 * ctx.f29.f64));
	// fadds f7,f11,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f3,f1,f3
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fadds f11,f27,f16
	ctx.f11.f64 = double(float(ctx.f27.f64 + ctx.f16.f64));
	// fadds f29,f26,f15
	ctx.f29.f64 = double(float(ctx.f26.f64 + ctx.f15.f64));
	// fmadds f5,f28,f31,f5
	ctx.f5.f64 = double(float(ctx.f28.f64 * ctx.f31.f64 + ctx.f5.f64));
	// fadds f1,f9,f10
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fadds f9,f4,f2
	ctx.f9.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// fadds f10,f7,f8
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fadds f4,f3,f6
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// fadds f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fadds f7,f29,f30
	ctx.f7.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// fmsubs f5,f23,f22,f5
	ctx.f5.f64 = double(float(ctx.f23.f64 * ctx.f22.f64 - ctx.f5.f64));
	// fadds f3,f1,f21
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f21.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f2,f10,f20
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f20.f64));
	// stfs f2,4(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f1,f4,f19
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f19.f64));
	// fmr f12,f7
	ctx.f12.f64 = ctx.f7.f64;
	// stfs f1,8(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmr f10,f9
	ctx.f10.f64 = ctx.f9.f64;
	// stfs f8,12(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f5,24(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r30,r11,28
	ctx.r30.s64 = ctx.r11.s64 + 28;
	// stfs f7,16(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r30,r11,76
	ctx.r30.s64 = ctx.r11.s64 + 76;
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmr f5,f10
	ctx.f5.f64 = ctx.f10.f64;
	// fmr f2,f12
	ctx.f2.f64 = ctx.f12.f64;
	// fmuls f8,f6,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f31,f7,f5
	ctx.f31.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f3,f11,f5
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f4,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f6,f5
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmuls f1,f11,f4
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f2,f6,f2
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f7,f4
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// fmuls f6,f6,f4
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// fadds f4,f31,f9
	ctx.f4.f64 = double(float(ctx.f31.f64 + ctx.f9.f64));
	// fadds f31,f31,f8
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f8.f64));
	// fadds f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// fsubs f8,f5,f1
	ctx.f8.f64 = double(float(ctx.f5.f64 - ctx.f1.f64));
	// stfs f8,36(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// fadds f1,f1,f5
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// fadds f8,f7,f2
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// stfs f8,32(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// fsubs f7,f2,f7
	ctx.f7.f64 = double(float(ctx.f2.f64 - ctx.f7.f64));
	// fadds f2,f3,f6
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// fsubs f8,f3,f6
	ctx.f8.f64 = double(float(ctx.f3.f64 - ctx.f6.f64));
	// fsubs f6,f13,f4
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// stfs f6,28(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fsubs f5,f13,f31
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// stfs f5,44(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f2,48(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// fsubs f4,f13,f9
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f7,40(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f8,56(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f4,60(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f1,52(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f12,64(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f11,68(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f10,72(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lfs f8,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f8.f64 = double(temp.f32);
	// lfs f3,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// lfs f10,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f2,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f7,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f6,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f2,f12
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f4,f1,f11
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmuls f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmuls f10,f8,f11
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f11,f2,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmuls f1,f1,f9
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// fmuls f2,f2,f9
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// fmuls f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fadds f8,f5,f4
	ctx.f8.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fadds f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// fadds f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// fsubs f0,f13,f8
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// stfs f0,76(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// fsubs f8,f2,f10
	ctx.f8.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// stfs f8,84(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// fadds f0,f12,f1
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// fsubs f12,f1,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// fadds f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fsubs f5,f13,f5
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// stfs f12,88(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// stfs f8,96(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// fadds f2,f10,f2
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// stfs f5,92(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// fsubs f1,f11,f9
	ctx.f1.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fsubs f0,f13,f4
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// stfs f2,100(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// stfs f1,104(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stfs f7,112(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stfs f6,116(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// stfs f3,120(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// b 0x8317caa8
	goto loc_8317CAA8;
loc_8317C988:
	// lfs f11,28(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// addi r31,r5,28
	ctx.r31.s64 = ctx.r5.s64 + 28;
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r30,r11,28
	ctx.r30.s64 = ctx.r11.s64 + 28;
	// lfs f10,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f9,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f8,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,12(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f7,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,16(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f6,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,20(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f5,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,24(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f2,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f4.f64 = double(temp.f32);
	// lfs f9,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f1,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f7,f10,f11
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f8,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f10,f4
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// lfs f3,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f5,f3,f0
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f10,f5,f3
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fmuls f30,f5,f4
	ctx.f30.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmuls f2,f0,f2
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmuls f31,f0,f11
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f3,f0,f3
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// fmuls f11,f5,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fadds f5,f7,f10
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// fmuls f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fadds f4,f7,f2
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// fadds f2,f10,f2
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// fadds f10,f6,f3
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f3.f64));
	// stfs f10,32(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// fsubs f7,f31,f30
	ctx.f7.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// stfs f7,36(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// fsubs f6,f3,f6
	ctx.f6.f64 = double(float(ctx.f3.f64 - ctx.f6.f64));
	// fsubs f5,f13,f5
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// stfs f5,28(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fadds f3,f11,f0
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f6,40(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f3,48(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// fadds f10,f30,f31
	ctx.f10.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// fsubs f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f4,f13,f4
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// stfs f4,44(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// fsubs f2,f13,f2
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// stfs f10,52(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f7,56(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f2,60(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f1,64(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f8,68(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f9,72(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// stfs f13,108(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stfs f13,92(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// stfs f13,76(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// stfs f12,84(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stfs f12,80(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stfs f12,96(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// stfs f12,88(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// stfs f12,104(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// stfs f12,100(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// stfs f12,120(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// stfs f12,116(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// stfs f12,112(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
loc_8317CAA8:
	// lwz r8,1132(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1132);
	// stwx r5,r28,r8
	PPC_STORE_U32(ctx.r28.u32 + ctx.r8.u32, ctx.r5.u32);
loc_8317CAB0:
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lfs f1,324(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	ctx.f1.f64 = double(temp.f32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8317CAD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8317CAD4:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6afc
	ctx.lr = 0x8317CAE0;
	__restfpr_14(ctx, base);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317CAE4"))) PPC_WEAK_FUNC(sub_8317CAE4);
PPC_FUNC_IMPL(__imp__sub_8317CAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317CAE8"))) PPC_WEAK_FUNC(sub_8317CAE8);
PPC_FUNC_IMPL(__imp__sub_8317CAE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8317CAF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8317CB28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,40(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8317CB48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f13,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f12,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f11,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,40(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f10,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,44(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f9,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,48(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f8,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,52(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r5,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r5.u32);
	// stw r28,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r28.u32);
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8317cba4
	if (ctx.cr6.eq) goto loc_8317CBA4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_8317CBA4:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8317cbbc
	if (ctx.cr6.eq) goto loc_8317CBBC;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
loc_8317CBBC:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8317cbd4
	if (ctx.cr6.eq) goto loc_8317CBD4;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
loc_8317CBD4:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8317cbec
	if (ctx.cr6.eq) goto loc_8317CBEC;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// ori r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 256;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
loc_8317CBEC:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8317CC00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,128(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 128);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8317CC10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8317CC2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,128(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8317CC3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x8317cc58
	if (!ctx.cr6.lt) goto loc_8317CC58;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8317CC58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8317cc70
	if (ctx.cr6.eq) goto loc_8317CC70;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
loc_8317CC70:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r7,r9,-30776
	ctx.r7.s64 = ctx.r9.s64 + -30776;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// stw r4,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r4.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8317ccc0
	if (ctx.cr6.eq) goto loc_8317CCC0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8317ccc4
	if (ctx.cr6.eq) goto loc_8317CCC4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8317ccc4
	if (ctx.cr6.lt) goto loc_8317CCC4;
loc_8317CCC0:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8317CCC4:
	// addi r9,r11,180
	ctx.r9.s64 = ctx.r11.s64 + 180;
	// addi r10,r31,56
	ctx.r10.s64 = ctx.r31.s64 + 56;
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r9,184(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stw r10,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r10.u32);
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x831636a8
	ctx.lr = 0x8317CCF0;
	sub_831636A8(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// rlwinm r7,r11,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8317cd08
	if (ctx.cr6.eq) goto loc_8317CD08;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// b 0x8317cd0c
	goto loc_8317CD0C;
loc_8317CD08:
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_8317CD0C:
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8317cd60
	if (ctx.cr6.eq) goto loc_8317CD60;
	// addi r29,r11,236
	ctx.r29.s64 = ctx.r11.s64 + 236;
	// lwz r11,256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8317cd3c
	if (!ctx.cr6.eq) goto loc_8317CD3C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8317e720
	ctx.lr = 0x8317CD3C;
	sub_8317E720(ctx, base);
loc_8317CD3C:
	// lwz r30,20(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// beq cr6,0x8317cd8c
	if (ctx.cr6.eq) goto loc_8317CD8C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83195980
	ctx.lr = 0x8317CD5C;
	sub_83195980(ctx, base);
	// b 0x8317cda0
	goto loc_8317CDA0;
loc_8317CD60:
	// addi r29,r11,260
	ctx.r29.s64 = ctx.r11.s64 + 260;
	// lwz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8317cd78
	if (!ctx.cr6.eq) goto loc_8317CD78;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8317e7b0
	ctx.lr = 0x8317CD78;
	sub_8317E7B0(ctx, base);
loc_8317CD78:
	// lwz r30,20(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// bne cr6,0x8317cd94
	if (!ctx.cr6.eq) goto loc_8317CD94;
loc_8317CD8C:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// b 0x8317cda0
	goto loc_8317CDA0;
loc_8317CD94:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8319a0b0
	ctx.lr = 0x8317CDA0;
	sub_8319A0B0(ctx, base);
loc_8317CDA0:
	// rotlwi r3,r30,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8317CDB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317CDC4"))) PPC_WEAK_FUNC(sub_8317CDC4);
PPC_FUNC_IMPL(__imp__sub_8317CDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317CDC8"))) PPC_WEAK_FUNC(sub_8317CDC8);
PPC_FUNC_IMPL(__imp__sub_8317CDC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317CDD0"))) PPC_WEAK_FUNC(sub_8317CDD0);
PPC_FUNC_IMPL(__imp__sub_8317CDD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317CDD4"))) PPC_WEAK_FUNC(sub_8317CDD4);
PPC_FUNC_IMPL(__imp__sub_8317CDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317CDD8"))) PPC_WEAK_FUNC(sub_8317CDD8);
PPC_FUNC_IMPL(__imp__sub_8317CDD8) {
	PPC_FUNC_PROLOGUE();
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317CDE8"))) PPC_WEAK_FUNC(sub_8317CDE8);
PPC_FUNC_IMPL(__imp__sub_8317CDE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317CE0C"))) PPC_WEAK_FUNC(sub_8317CE0C);
PPC_FUNC_IMPL(__imp__sub_8317CE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317CE10"))) PPC_WEAK_FUNC(sub_8317CE10);
PPC_FUNC_IMPL(__imp__sub_8317CE10) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317CE2C"))) PPC_WEAK_FUNC(sub_8317CE2C);
PPC_FUNC_IMPL(__imp__sub_8317CE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317CE30"))) PPC_WEAK_FUNC(sub_8317CE30);
PPC_FUNC_IMPL(__imp__sub_8317CE30) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// and r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 & ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317CE4C"))) PPC_WEAK_FUNC(sub_8317CE4C);
PPC_FUNC_IMPL(__imp__sub_8317CE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317CE50"))) PPC_WEAK_FUNC(sub_8317CE50);
PPC_FUNC_IMPL(__imp__sub_8317CE50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317CE64"))) PPC_WEAK_FUNC(sub_8317CE64);
PPC_FUNC_IMPL(__imp__sub_8317CE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317CE68"))) PPC_WEAK_FUNC(sub_8317CE68);
PPC_FUNC_IMPL(__imp__sub_8317CE68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317CE88"))) PPC_WEAK_FUNC(sub_8317CE88);
PPC_FUNC_IMPL(__imp__sub_8317CE88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317CE9C"))) PPC_WEAK_FUNC(sub_8317CE9C);
PPC_FUNC_IMPL(__imp__sub_8317CE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317CEA0"))) PPC_WEAK_FUNC(sub_8317CEA0);
PPC_FUNC_IMPL(__imp__sub_8317CEA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317CEB0"))) PPC_WEAK_FUNC(sub_8317CEB0);
PPC_FUNC_IMPL(__imp__sub_8317CEB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317CEC0"))) PPC_WEAK_FUNC(sub_8317CEC0);
PPC_FUNC_IMPL(__imp__sub_8317CEC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317CED4"))) PPC_WEAK_FUNC(sub_8317CED4);
PPC_FUNC_IMPL(__imp__sub_8317CED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317CED8"))) PPC_WEAK_FUNC(sub_8317CED8);
PPC_FUNC_IMPL(__imp__sub_8317CED8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317CEEC"))) PPC_WEAK_FUNC(sub_8317CEEC);
PPC_FUNC_IMPL(__imp__sub_8317CEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317CEF0"))) PPC_WEAK_FUNC(sub_8317CEF0);
PPC_FUNC_IMPL(__imp__sub_8317CEF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f9,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// lfs f0,7676(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f13,6140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f11,f0
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f12,6048(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6048);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f4,f10,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f3,f11,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmuls f2,f9,f5
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f9,f8,f6
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f1,f10,f5
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fmuls f10,f8,f7
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmuls f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f7,f11,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmuls f0,f11,f5
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fadds f6,f3,f4
	ctx.f6.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// fadds f5,f3,f2
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// fadds f4,f4,f2
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// fadds f2,f9,f1
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// stfs f2,4(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fsubs f1,f1,f9
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f9.f64));
	// fadds f11,f7,f8
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fsubs f9,f7,f8
	ctx.f9.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fsubs f3,f0,f10
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// stfs f3,8(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fadds f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fsubs f8,f13,f6
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// stfs f8,0(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f7,f13,f5
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// stfs f1,12(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f7,16(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fsubs f6,f13,f4
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// stfs f11,20(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f10,24(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f9,28(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f6,32(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f12,36(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f12,44(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f5,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,36(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f4,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,40(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f3,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,44(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317CFC8"))) PPC_WEAK_FUNC(sub_8317CFC8);
PPC_FUNC_IMPL(__imp__sub_8317CFC8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,180
	ctx.r11.s64 = ctx.r3.s64 + 180;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r4,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r4.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317CFE8"))) PPC_WEAK_FUNC(sub_8317CFE8);
PPC_FUNC_IMPL(__imp__sub_8317CFE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6ab4
	ctx.lr = 0x8317CFF8;
	__savefpr_15(ctx, base);
	// lfs f11,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f9,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f9,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f7,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmr f31,f9
	ctx.f31.f64 = ctx.f9.f64;
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmr f30,f7
	ctx.f30.f64 = ctx.f7.f64;
	// lfs f4,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f10,f7
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f3,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f4,f7
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// lfs f0,7676(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f3,f3
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// lfs f13,6140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f28,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f28.f64 = double(temp.f32);
	// fmr f29,f12
	ctx.f29.f64 = ctx.f12.f64;
	// fmr f25,f3
	ctx.f25.f64 = ctx.f3.f64;
	// lfs f27,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f26.f64 = double(temp.f32);
	// addi r11,r5,12
	ctx.r11.s64 = ctx.r5.s64 + 12;
	// fmsubs f6,f4,f12,f6
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 - ctx.f6.f64));
	// lfs f24,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f18,f26,f31
	ctx.f18.f64 = double(float(ctx.f26.f64 * ctx.f31.f64));
	// lfs f23,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f22,f28,f30
	ctx.f22.f64 = double(float(ctx.f28.f64 * ctx.f30.f64));
	// lfs f21,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f21.f64 = double(temp.f32);
	// fmadds f5,f4,f9,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f9.f64 + ctx.f5.f64));
	// lfs f19,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f19.f64 = double(temp.f32);
	// fmsubs f8,f7,f11,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 - ctx.f8.f64));
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// fmsubs f2,f9,f10,f2
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 - ctx.f2.f64));
	// fmsubs f1,f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fmuls f20,f27,f29
	ctx.f20.f64 = double(float(ctx.f27.f64 * ctx.f29.f64));
	// fmuls f17,f27,f30
	ctx.f17.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// fmuls f15,f26,f25
	ctx.f15.f64 = double(float(ctx.f26.f64 * ctx.f25.f64));
	// fmuls f6,f6,f3
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fmuls f16,f28,f25
	ctx.f16.f64 = double(float(ctx.f28.f64 * ctx.f25.f64));
	// fmadds f5,f11,f12,f5
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fmuls f8,f8,f3
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// fmuls f3,f2,f3
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// fmuls f2,f4,f1
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fmuls f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f4,f27,f25
	ctx.f4.f64 = double(float(ctx.f27.f64 * ctx.f25.f64));
	// fmsubs f27,f27,f31,f22
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f31.f64 - ctx.f22.f64));
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f1,f11,f1
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmsubs f22,f28,f29,f18
	ctx.f22.f64 = double(float(ctx.f28.f64 * ctx.f29.f64 - ctx.f18.f64));
	// fmuls f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f7,f7,f5
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f12,f12,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// fmuls f5,f3,f0
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmadds f11,f26,f29,f17
	ctx.f11.f64 = double(float(ctx.f26.f64 * ctx.f29.f64 + ctx.f17.f64));
	// fmsubs f20,f26,f30,f20
	ctx.f20.f64 = double(float(ctx.f26.f64 * ctx.f30.f64 - ctx.f20.f64));
	// fadds f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// fmuls f6,f29,f24
	ctx.f6.f64 = double(float(ctx.f29.f64 * ctx.f24.f64));
	// fadds f29,f27,f15
	ctx.f29.f64 = double(float(ctx.f27.f64 + ctx.f15.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fadds f2,f2,f8
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// fmuls f8,f7,f0
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fadds f5,f1,f5
	ctx.f5.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// fmuls f7,f30,f24
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f24.f64));
	// fmuls f3,f31,f24
	ctx.f3.f64 = double(float(ctx.f31.f64 * ctx.f24.f64));
	// fadds f4,f22,f4
	ctx.f4.f64 = double(float(ctx.f22.f64 + ctx.f4.f64));
	// fadds f30,f20,f16
	ctx.f30.f64 = double(float(ctx.f20.f64 + ctx.f16.f64));
	// fmadds f11,f28,f31,f11
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f31.f64 + ctx.f11.f64));
	// fadds f2,f2,f9
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// fadds f9,f29,f6
	ctx.f9.f64 = double(float(ctx.f29.f64 + ctx.f6.f64));
	// fadds f1,f10,f8
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// fadds f6,f5,f12
	ctx.f6.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// fadds f8,f4,f7
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// fadds f10,f30,f3
	ctx.f10.f64 = double(float(ctx.f30.f64 + ctx.f3.f64));
	// fmsubs f7,f25,f24,f11
	ctx.f7.f64 = double(float(ctx.f25.f64 * ctx.f24.f64 - ctx.f11.f64));
	// fadds f5,f23,f2
	ctx.f5.f64 = double(float(ctx.f23.f64 + ctx.f2.f64));
	// fadds f4,f21,f1
	ctx.f4.f64 = double(float(ctx.f21.f64 + ctx.f1.f64));
	// fadds f3,f19,f6
	ctx.f3.f64 = double(float(ctx.f19.f64 + ctx.f6.f64));
	// fmr f11,f9
	ctx.f11.f64 = ctx.f9.f64;
	// stfs f5,0(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmr f2,f8
	ctx.f2.f64 = ctx.f8.f64;
	// stfs f4,4(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// stfs f3,8(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmr f12,f7
	ctx.f12.f64 = ctx.f7.f64;
	// stfs f10,12(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmr f10,f7
	ctx.f10.f64 = ctx.f7.f64;
	// stfs f8,16(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f7,24(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// addi r11,r3,76
	ctx.r11.s64 = ctx.r3.s64 + 76;
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmr f6,f11
	ctx.f6.f64 = ctx.f11.f64;
	// fmuls f4,f2,f0
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f3,f1,f0
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f30,f2,f4
	ctx.f30.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// fmuls f1,f1,f3
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f3.f64));
	// fmuls f2,f2,f3
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// fmuls f31,f6,f5
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmuls f5,f12,f5
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// fmuls f6,f6,f3
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fmuls f12,f12,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fmuls f3,f10,f3
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// fmuls f4,f4,f11
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fadds f11,f31,f30
	ctx.f11.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// fadds f10,f31,f1
	ctx.f10.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// fadds f1,f30,f1
	ctx.f1.f64 = double(float(ctx.f30.f64 + ctx.f1.f64));
	// fadds f31,f5,f2
	ctx.f31.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// stfs f31,32(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fsubs f31,f6,f12
	ctx.f31.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// stfs f31,36(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fsubs f5,f2,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 - ctx.f5.f64));
	// fadds f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// fadds f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// fsubs f6,f4,f3
	ctx.f6.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fsubs f4,f13,f11
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f4,28(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fsubs f3,f13,f10
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f5,40(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f3,44(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fsubs f1,f13,f1
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// stfs f2,48(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f12,52(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f1,60(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f6,56(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f8,68(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f7,72(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f9,64(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f9,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f5,f12,f0
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f6,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f4,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f0,f11,f7
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// lfs f2,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f11,f12,f5
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// fmuls f3,f9,f8
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f1,f10,f8
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmuls f31,f9,f5
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f8,f10,f7
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmuls f7,f10,f5
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fadds f5,f3,f0
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// fadds f3,f3,f11
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f11.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fadds f11,f31,f8
	ctx.f11.f64 = double(float(ctx.f31.f64 + ctx.f8.f64));
	// fsubs f10,f9,f7
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// stfs f10,84(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// fadds f10,f1,f12
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// stfs f10,80(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// fsubs f3,f13,f3
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f3.f64));
	// stfs f3,76(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// fsubs f1,f12,f1
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// stfs f11,96(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// fadds f10,f7,f9
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// stfs f1,88(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// fsubs f12,f13,f5
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// stfs f12,92(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// fsubs f11,f31,f8
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f8.f64));
	// stfs f10,100(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// fsubs f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f11,104(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f9,108(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f6,112(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f4,116(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f2,120(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b00
	ctx.lr = 0x8317D2C8;
	__restfpr_15(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317D2D4"))) PPC_WEAK_FUNC(sub_8317D2D4);
PPC_FUNC_IMPL(__imp__sub_8317D2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317D2D8"))) PPC_WEAK_FUNC(sub_8317D2D8);
PPC_FUNC_IMPL(__imp__sub_8317D2D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f30,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
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
	// lfs f7,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,7676(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f11,f7,f0
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f13,6140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f6,f0
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f0,6048(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f1,f12
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmuls f8,f5,f12
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmuls f12,f7,f11
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f6,f6,f10
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f7,f7,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmuls f30,f5,f11
	ctx.f30.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmuls f31,f1,f10
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fmuls f1,f1,f11
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmuls f5,f5,f10
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fadds f11,f9,f12
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f10,f9,f6
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// fadds f9,f12,f6
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,32(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fsubs f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fsubs f12,f31,f30
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// stfs f12,36(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fadds f7,f1,f5
	ctx.f7.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// fsubs f5,f1,f5
	ctx.f5.f64 = double(float(ctx.f1.f64 - ctx.f5.f64));
	// fadds f6,f30,f31
	ctx.f6.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// fsubs f1,f13,f11
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f1,28(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fsubs f12,f13,f10
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f8,40(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f12,44(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fsubs f11,f13,f9
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f7,48(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f6,52(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f5,56(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f11,60(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f4,64(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f3,68(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f2,72(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f13,108(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f13,92(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f13,76(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfd f30,-16(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317D420"))) PPC_WEAK_FUNC(sub_8317D420);
PPC_FUNC_IMPL(__imp__sub_8317D420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6abc
	ctx.lr = 0x8317D430;
	__savefpr_17(ctx, base);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8317d70c
	if (ctx.cr6.eq) goto loc_8317D70C;
	// lfs f12,120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,100
	ctx.r10.s64 = ctx.r11.s64 + 100;
	// lfs f11,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmr f29,f12
	ctx.f29.f64 = ctx.f12.f64;
	// lfs f10,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f6,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f10
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// lfs f7,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// fmr f30,f10
	ctx.f30.f64 = ctx.f10.f64;
	// fmuls f2,f5,f7
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// lfs f3,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f3,f3
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// lfs f0,7676(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmr f31,f5
	ctx.f31.f64 = ctx.f5.f64;
	// lfs f13,6140(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f28,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f28.f64 = double(temp.f32);
	// fmr f24,f3
	ctx.f24.f64 = ctx.f3.f64;
	// lfs f27,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f27.f64 = double(temp.f32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lfs f26,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f21,f27,f29
	ctx.f21.f64 = double(float(ctx.f27.f64 * ctx.f29.f64));
	// fmsubs f9,f10,f7,f9
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f7.f64 - ctx.f9.f64));
	// lfs f23,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f23.f64 = double(temp.f32);
	// fmadds f8,f5,f6,f8
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f8.f64));
	// lfs f22,100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f22.f64 = double(temp.f32);
	// fmsubs f4,f5,f11,f4
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 - ctx.f4.f64));
	// addi r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 + 28;
	// fmuls f25,f28,f30
	ctx.f25.f64 = double(float(ctx.f28.f64 * ctx.f30.f64));
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// fmsubs f2,f6,f12,f2
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 - ctx.f2.f64));
	// fmsubs f1,f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fmuls f20,f26,f31
	ctx.f20.f64 = double(float(ctx.f26.f64 * ctx.f31.f64));
	// fmuls f19,f27,f30
	ctx.f19.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// fmuls f17,f27,f24
	ctx.f17.f64 = double(float(ctx.f27.f64 * ctx.f24.f64));
	// fmuls f18,f28,f24
	ctx.f18.f64 = double(float(ctx.f28.f64 * ctx.f24.f64));
	// fmuls f9,f9,f3
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmadds f8,f7,f12,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmuls f4,f4,f3
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmsubs f27,f27,f31,f25
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f31.f64 - ctx.f25.f64));
	// fmuls f3,f2,f3
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// fmuls f2,f6,f1
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// fmuls f7,f7,f1
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fmuls f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmsubs f25,f26,f30,f21
	ctx.f25.f64 = double(float(ctx.f26.f64 * ctx.f30.f64 - ctx.f21.f64));
	// fmuls f6,f26,f24
	ctx.f6.f64 = double(float(ctx.f26.f64 * ctx.f24.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f5,f5,f8
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fmuls f1,f10,f8
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmuls f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f8,f4,f0
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmsubs f21,f28,f29,f20
	ctx.f21.f64 = double(float(ctx.f28.f64 * ctx.f29.f64 - ctx.f20.f64));
	// fmuls f4,f3,f0
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmadds f10,f26,f29,f19
	ctx.f10.f64 = double(float(ctx.f26.f64 * ctx.f29.f64 + ctx.f19.f64));
	// fmuls f3,f31,f23
	ctx.f3.f64 = double(float(ctx.f31.f64 * ctx.f23.f64));
	// fadds f6,f27,f6
	ctx.f6.f64 = double(float(ctx.f27.f64 + ctx.f6.f64));
	// fadds f2,f2,f9
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// fmuls f9,f5,f0
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f5,f30,f23
	ctx.f5.f64 = double(float(ctx.f30.f64 * ctx.f23.f64));
	// fmuls f30,f29,f23
	ctx.f30.f64 = double(float(ctx.f29.f64 * ctx.f23.f64));
	// fadds f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fadds f29,f25,f18
	ctx.f29.f64 = double(float(ctx.f25.f64 + ctx.f18.f64));
	// fadds f27,f21,f17
	ctx.f27.f64 = double(float(ctx.f21.f64 + ctx.f17.f64));
	// fadds f7,f11,f4
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f4.f64));
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmadds f10,f28,f31,f10
	ctx.f10.f64 = double(float(ctx.f28.f64 * ctx.f31.f64 + ctx.f10.f64));
	// fadds f4,f2,f9
	ctx.f4.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// fadds f2,f6,f30
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f30.f64));
	// fadds f11,f29,f3
	ctx.f11.f64 = double(float(ctx.f29.f64 + ctx.f3.f64));
	// fadds f9,f27,f5
	ctx.f9.f64 = double(float(ctx.f27.f64 + ctx.f5.f64));
	// fadds f3,f7,f1
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// fadds f5,f8,f12
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// lfs f12,104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f6,f24,f23,f10
	ctx.f6.f64 = double(float(ctx.f24.f64 * ctx.f23.f64 - ctx.f10.f64));
	// lfs f10,108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// fadds f1,f22,f4
	ctx.f1.f64 = double(float(ctx.f22.f64 + ctx.f4.f64));
	// fadds f8,f3,f12
	ctx.f8.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// fadds f7,f5,f10
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// stfs f8,4(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmr f10,f9
	ctx.f10.f64 = ctx.f9.f64;
	// stfs f7,8(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmr f5,f11
	ctx.f5.f64 = ctx.f11.f64;
	// stfs f1,0(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmr f4,f2
	ctx.f4.f64 = ctx.f2.f64;
	// stfs f6,24(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fmr f6,f2
	ctx.f6.f64 = ctx.f2.f64;
	// stfs f9,16(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// addi r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 + 28;
	// stfs f2,20(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fmr f2,f9
	ctx.f2.f64 = ctx.f9.f64;
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// addi r10,r3,76
	ctx.r10.s64 = ctx.r3.s64 + 76;
	// lfs f1,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f3,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f7,f5,f0
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f8,f6,f0
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f6,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f5,f7,f5
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f10,f9,f3
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmuls f31,f8,f4
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmuls f8,f8,f3
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// fmuls f2,f2,f7
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// fmuls f9,f9,f4
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// fmuls f4,f7,f4
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// fmuls f3,f7,f3
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// fadds f7,f31,f6
	ctx.f7.f64 = double(float(ctx.f31.f64 + ctx.f6.f64));
	// fadds f31,f31,f5
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f5.f64));
	// fadds f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// fadds f5,f8,f2
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// stfs f5,32(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fsubs f5,f4,f10
	ctx.f5.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// stfs f5,36(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fadds f5,f10,f4
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// fsubs f2,f2,f8
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f8.f64));
	// fadds f8,f9,f3
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// fsubs f4,f9,f3
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// fsubs f3,f13,f7
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// stfs f3,28(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fsubs f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// stfs f8,48(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f10,44(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fsubs f9,f13,f6
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// stfs f2,40(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f4,56(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f9,60(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f5,52(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f1,64(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f12,68(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f11,72(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f5,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f3,f8,f0
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f2,100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f7,f0
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f0,104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f3,f8
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// lfs f11,108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f31,f3,f6
	ctx.f31.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// fmuls f12,f4,f5
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// fmuls f10,f4,f6
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// fmuls f4,f1,f8
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// fmuls f7,f1,f7
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// fmuls f8,f1,f5
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f5.f64));
	// fmuls f5,f3,f5
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fmuls f6,f1,f6
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// fadds f3,f12,f9
	ctx.f3.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// fadds f1,f12,f7
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// fadds f12,f9,f7
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// fsubs f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f31.f64));
	// stfs f7,84(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// fsubs f9,f13,f3
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f3.f64));
	// stfs f9,76(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// fadds f3,f10,f4
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// fadds f9,f5,f6
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// stfs f3,80(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// fsubs f7,f5,f6
	ctx.f7.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// stfs f9,96(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// fsubs f10,f4,f10
	ctx.f10.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// stfs f10,88(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// fsubs f6,f13,f1
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// stfs f6,92(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// fadds f8,f31,f8
	ctx.f8.f64 = double(float(ctx.f31.f64 + ctx.f8.f64));
	// stfs f8,100(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// fsubs f5,f13,f12
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f7,104(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f5,108(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f2,112(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f11,120(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// b 0x8317d838
	goto loc_8317D838;
loc_8317D70C:
	// lfs f0,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// addi r11,r4,28
	ctx.r11.s64 = ctx.r4.s64 + 28;
	// lfs f13,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 + 28;
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lfs f12,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f10,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f9,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f8,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f3,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// lfs f9,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// lfs f12,7676(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7676);
	ctx.f12.f64 = double(temp.f32);
	// lfs f4,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f2,f4,f12
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmuls f11,f3,f12
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// lfs f13,6140(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f1,f12
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// lfs f0,6048(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f4,f2
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f2.f64));
	// fmuls f2,f9,f2
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmuls f12,f11,f3
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// fmuls f1,f10,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f3,f10,f3
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// fmuls f31,f4,f10
	ctx.f31.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f30,f9,f11
	ctx.f30.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f9,f4,f11
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fadds f4,f8,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// fadds f11,f8,f1
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f1.f64));
	// fadds f8,f12,f1
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// fadds f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// stfs f1,32(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fsubs f12,f3,f2
	ctx.f12.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fsubs f3,f31,f30
	ctx.f3.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// stfs f3,36(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fadds f1,f9,f10
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fadds f2,f30,f31
	ctx.f2.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// fsubs f9,f13,f4
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// stfs f9,28(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fsubs f4,f13,f11
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f4,44(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fsubs f3,f13,f8
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// stfs f1,48(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f2,52(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f10,56(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f3,60(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f7,64(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f6,68(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f5,72(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f13,108(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f13,92(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f13,76(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
loc_8317D838:
	// stfs f0,116(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b08
	ctx.lr = 0x8317D844;
	__restfpr_17(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317D850"))) PPC_WEAK_FUNC(sub_8317D850);
PPC_FUNC_IMPL(__imp__sub_8317D850) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r10,r11,30944
	ctx.r10.s64 = ctx.r11.s64 + 30944;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x83177b38
	ctx.lr = 0x8317D880;
	sub_83177B38(ctx, base);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// addi r7,r9,30808
	ctx.r7.s64 = ctx.r9.s64 + 30808;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8317d8a4
	if (ctx.cr6.eq) goto loc_8317D8A4;
	// bl 0x822990f0
	ctx.lr = 0x8317D8A0;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8317D8A4:
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

__attribute__((alias("__imp__sub_8317D8BC"))) PPC_WEAK_FUNC(sub_8317D8BC);
PPC_FUNC_IMPL(__imp__sub_8317D8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317D8C0"))) PPC_WEAK_FUNC(sub_8317D8C0);
PPC_FUNC_IMPL(__imp__sub_8317D8C0) {
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
	// beq cr6,0x8317d908
	if (ctx.cr6.eq) goto loc_8317D908;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8317D8FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
loc_8317D908:
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

__attribute__((alias("__imp__sub_8317D920"))) PPC_WEAK_FUNC(sub_8317D920);
PPC_FUNC_IMPL(__imp__sub_8317D920) {
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
	// beq cr6,0x8317d968
	if (ctx.cr6.eq) goto loc_8317D968;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8317D95C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
loc_8317D968:
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

__attribute__((alias("__imp__sub_8317D980"))) PPC_WEAK_FUNC(sub_8317D980);
PPC_FUNC_IMPL(__imp__sub_8317D980) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// lbz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317D9AC"))) PPC_WEAK_FUNC(sub_8317D9AC);
PPC_FUNC_IMPL(__imp__sub_8317D9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317D9B0"))) PPC_WEAK_FUNC(sub_8317D9B0);
PPC_FUNC_IMPL(__imp__sub_8317D9B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8317D9B8;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6ab0
	ctx.lr = 0x8317D9C0;
	__savefpr_14(ctx, base);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,1136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1136);
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,1132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1132);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// and r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 & ctx.r11.u64;
	// lfs f12,6048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f12.f64 = double(temp.f32);
	// and r30,r8,r11
	ctx.r30.u64 = ctx.r8.u64 & ctx.r11.u64;
	// lfs f13,6140(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r31,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 7) & 0xFFFFFF80;
	// stfs f12,-192(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lfs f0,7676(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,1132(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1132);
	// lwzx r10,r9,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8317de1c
	if (ctx.cr6.eq) goto loc_8317DE1C;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8317dcf4
	if (ctx.cr6.eq) goto loc_8317DCF4;
	// lfs f12,120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r10,100
	ctx.r8.s64 = ctx.r10.s64 + 100;
	// lfs f8,116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// fmr f29,f12
	ctx.f29.f64 = ctx.f12.f64;
	// lfs f11,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmr f30,f8
	ctx.f30.f64 = ctx.f8.f64;
	// lfs f7,112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f11,f8
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// lfs f10,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f4,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f7,f10
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmuls f2,f4,f8
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// lfs f3,124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f3,f3
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// lfs f28,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f28.f64 = double(temp.f32);
	// fmr f23,f3
	ctx.f23.f64 = ctx.f3.f64;
	// lfs f27,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f27.f64 = double(temp.f32);
	// fmr f31,f7
	ctx.f31.f64 = ctx.f7.f64;
	// lfs f25,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f25.f64 = double(temp.f32);
	// lfs f22,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f22.f64 = double(temp.f32);
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// fmuls f24,f27,f29
	ctx.f24.f64 = double(float(ctx.f27.f64 * ctx.f29.f64));
	// lfs f21,100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f21.f64 = double(temp.f32);
	// fmuls f26,f28,f30
	ctx.f26.f64 = double(float(ctx.f28.f64 * ctx.f30.f64));
	// lfs f20,104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	ctx.f20.f64 = double(temp.f32);
	// fmadds f6,f4,f7,f6
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f6.f64));
	// lfs f19,108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	ctx.f19.f64 = double(temp.f32);
	// fmsubs f9,f8,f10,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 - ctx.f9.f64));
	// addi r6,r4,28
	ctx.r6.s64 = ctx.r4.s64 + 28;
	// fmsubs f5,f4,f12,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 - ctx.f5.f64));
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// fmsubs f2,f7,f11,f2
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 - ctx.f2.f64));
	// fmsubs f1,f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fmuls f14,f25,f23
	ctx.f14.f64 = double(float(ctx.f25.f64 * ctx.f23.f64));
	// fmuls f17,f27,f30
	ctx.f17.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// fmuls f18,f25,f31
	ctx.f18.f64 = double(float(ctx.f25.f64 * ctx.f31.f64));
	// fmuls f15,f27,f23
	ctx.f15.f64 = double(float(ctx.f27.f64 * ctx.f23.f64));
	// fmuls f16,f28,f23
	ctx.f16.f64 = double(float(ctx.f28.f64 * ctx.f23.f64));
	// fmadds f6,f10,f12,f6
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmuls f9,f9,f3
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmuls f5,f3,f5
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fmuls f3,f3,f2
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fmuls f2,f4,f1
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fmuls f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f1,f10,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmsubs f4,f27,f31,f26
	ctx.f4.f64 = double(float(ctx.f27.f64 * ctx.f31.f64 - ctx.f26.f64));
	// fmsubs f27,f25,f30,f24
	ctx.f27.f64 = double(float(ctx.f25.f64 * ctx.f30.f64 - ctx.f24.f64));
	// fmsubs f26,f28,f29,f18
	ctx.f26.f64 = double(float(ctx.f28.f64 * ctx.f29.f64 - ctx.f18.f64));
	// fmuls f10,f7,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f7,f5,f0
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f6,f12,f6
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmadds f5,f25,f29,f17
	ctx.f5.f64 = double(float(ctx.f25.f64 * ctx.f29.f64 + ctx.f17.f64));
	// fadds f4,f4,f14
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f14.f64));
	// fmuls f12,f31,f22
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f22.f64));
	// fmuls f30,f30,f22
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f22.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fadds f9,f2,f9
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// fmuls f2,f29,f22
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f22.f64));
	// fadds f7,f11,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f3,f1,f3
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fadds f11,f27,f16
	ctx.f11.f64 = double(float(ctx.f27.f64 + ctx.f16.f64));
	// fadds f29,f15,f26
	ctx.f29.f64 = double(float(ctx.f15.f64 + ctx.f26.f64));
	// fmadds f5,f28,f31,f5
	ctx.f5.f64 = double(float(ctx.f28.f64 * ctx.f31.f64 + ctx.f5.f64));
	// fadds f1,f9,f10
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fadds f9,f4,f2
	ctx.f9.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// fadds f10,f7,f8
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fadds f4,f3,f6
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// fadds f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fadds f7,f30,f29
	ctx.f7.f64 = double(float(ctx.f30.f64 + ctx.f29.f64));
	// fmsubs f5,f23,f22,f5
	ctx.f5.f64 = double(float(ctx.f23.f64 * ctx.f22.f64 - ctx.f5.f64));
	// fadds f3,f21,f1
	ctx.f3.f64 = double(float(ctx.f21.f64 + ctx.f1.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f2,f10,f20
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f20.f64));
	// stfs f2,4(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f1,f4,f19
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f19.f64));
	// stfs f1,8(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmr f11,f9
	ctx.f11.f64 = ctx.f9.f64;
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
	// fmr f9,f7
	ctx.f9.f64 = ctx.f7.f64;
	// stfs f5,24(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmr f10,f5
	ctx.f10.f64 = ctx.f5.f64;
	// stfs f8,12(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f7,16(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r11,76
	ctx.r8.s64 = ctx.r11.s64 + 76;
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f2,f12,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmr f5,f9
	ctx.f5.f64 = ctx.f9.f64;
	// lfs f3,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f3,f3,f1
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// fmuls f30,f11,f1
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f9,f9,f1
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f1,f10,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f12,f5,f4
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmuls f5,f11,f2
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// fmuls f31,f10,f4
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// fmuls f2,f10,f2
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmuls f4,f11,f4
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fadds f11,f5,f12
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// fadds f10,f5,f3
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// fadds f5,f12,f3
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f3.f64));
	// fsubs f12,f30,f31
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// stfs f12,36(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// fadds f3,f2,f9
	ctx.f3.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// stfs f3,32(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// fadds f3,f4,f1
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f1.f64));
	// fsubs f9,f9,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f2.f64));
	// fsubs f1,f4,f1
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f1.f64));
	// fadds f2,f31,f30
	ctx.f2.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// fsubs f12,f13,f11
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fsubs f11,f13,f10
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f9,40(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f3,48(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// fsubs f10,f13,f5
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// stfs f11,44(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f2,52(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f10,60(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f1,56(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f8,64(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f7,68(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f6,72(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lfs f9,116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f4,f9,f0
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f3,100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f8,f0
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f1,104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f12,f6,f5
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// lfs f11,108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f7,f5
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f5,f9,f4
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// fmuls f8,f8,f2
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// fmuls f31,f6,f2
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// fmuls f30,f7,f4
	ctx.f30.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// fmuls f6,f6,f4
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// fmuls f9,f9,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmuls f7,f7,f2
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fadds f4,f12,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// fadds f2,f12,f8
	ctx.f2.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// fadds f12,f5,f8
	ctx.f12.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// fsubs f5,f31,f30
	ctx.f5.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// stfs f5,84(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// fsubs f8,f13,f4
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// stfs f8,76(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// fadds f4,f10,f9
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f4,80(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fsubs f8,f13,f2
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// stfs f10,88(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// fadds f9,f6,f7
	ctx.f9.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// stfs f9,96(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// stfs f8,92(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// fsubs f2,f13,f12
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fadds f5,f30,f31
	ctx.f5.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// stfs f5,100(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// fsubs f4,f6,f7
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// stfs f4,104(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// stfs f2,108(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// lfs f12,-192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	ctx.f12.f64 = double(temp.f32);
	// stfs f3,112(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stfs f1,116(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// stfs f11,120(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// b 0x8317de14
	goto loc_8317DE14;
loc_8317DCF4:
	// lfs f11,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 + 28;
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
	// lfs f10,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f9,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f8,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,12(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f7,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,16(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f6,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,20(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f5,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,24(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f4,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// lfs f7,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// lfs f9,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f8,f4,f0
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f31,f11,f10
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f10,f3,f10
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fmuls f5,f4,f8
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fmuls f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmuls f30,f3,f8
	ctx.f30.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// fmuls f29,f11,f6
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmuls f4,f4,f6
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// fmuls f6,f3,f6
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// fmuls f8,f11,f8
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fadds f3,f31,f5
	ctx.f3.f64 = double(float(ctx.f31.f64 + ctx.f5.f64));
	// fadds f11,f31,f7
	ctx.f11.f64 = double(float(ctx.f31.f64 + ctx.f7.f64));
	// fadds f7,f5,f7
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// fsubs f5,f29,f30
	ctx.f5.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// stfs f5,36(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// fadds f5,f10,f4
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// stfs f5,32(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// fsubs f4,f4,f10
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// fadds f10,f8,f6
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// fsubs f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// fadds f5,f30,f29
	ctx.f5.f64 = double(float(ctx.f30.f64 + ctx.f29.f64));
	// fsubs f6,f13,f3
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f3.f64));
	// stfs f6,28(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fsubs f3,f13,f11
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f4,40(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f3,44(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// fsubs f11,f13,f7
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// stfs f10,48(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f5,52(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f8,56(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f11,60(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f9,64(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f2,68(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f1,72(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// stfs f13,108(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stfs f13,92(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// stfs f13,76(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// stfs f12,84(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stfs f12,80(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stfs f12,96(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// stfs f12,88(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// stfs f12,104(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// stfs f12,100(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// stfs f12,120(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// stfs f12,116(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// stfs f12,112(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
loc_8317DE14:
	// lwz r11,1132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1132);
	// stwx r4,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r4.u32);
loc_8317DE1C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8317e22c
	if (!ctx.cr6.eq) goto loc_8317E22C;
	// addi r11,r3,1008
	ctx.r11.s64 = ctx.r3.s64 + 1008;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8317e100
	if (ctx.cr6.eq) goto loc_8317E100;
	// lfs f12,120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r10,100
	ctx.r9.s64 = ctx.r10.s64 + 100;
	// lfs f8,116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// fmr f29,f12
	ctx.f29.f64 = ctx.f12.f64;
	// lfs f11,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmr f30,f8
	ctx.f30.f64 = ctx.f8.f64;
	// lfs f7,112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f11,f8
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// lfs f10,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f4,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f7,f10
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmuls f2,f4,f8
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// lfs f3,124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f3,f3
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// lfs f28,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f28.f64 = double(temp.f32);
	// fmr f23,f3
	ctx.f23.f64 = ctx.f3.f64;
	// lfs f27,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f27.f64 = double(temp.f32);
	// fmr f31,f7
	ctx.f31.f64 = ctx.f7.f64;
	// lfs f25,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f25.f64 = double(temp.f32);
	// lfs f22,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f22.f64 = double(temp.f32);
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// fmuls f24,f27,f29
	ctx.f24.f64 = double(float(ctx.f27.f64 * ctx.f29.f64));
	// lfs f21,100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f21.f64 = double(temp.f32);
	// fmuls f26,f28,f30
	ctx.f26.f64 = double(float(ctx.f28.f64 * ctx.f30.f64));
	// lfs f20,104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	ctx.f20.f64 = double(temp.f32);
	// fmadds f6,f7,f4,f6
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 + ctx.f6.f64));
	// lfs f19,108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	ctx.f19.f64 = double(temp.f32);
	// fmsubs f9,f8,f10,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 - ctx.f9.f64));
	// addi r8,r5,28
	ctx.r8.s64 = ctx.r5.s64 + 28;
	// fmsubs f5,f4,f12,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 - ctx.f5.f64));
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// fmsubs f2,f7,f11,f2
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 - ctx.f2.f64));
	// fmsubs f1,f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fmuls f14,f23,f25
	ctx.f14.f64 = double(float(ctx.f23.f64 * ctx.f25.f64));
	// fmuls f17,f27,f30
	ctx.f17.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// fmuls f18,f25,f31
	ctx.f18.f64 = double(float(ctx.f25.f64 * ctx.f31.f64));
	// fmuls f15,f23,f27
	ctx.f15.f64 = double(float(ctx.f23.f64 * ctx.f27.f64));
	// fmuls f16,f23,f28
	ctx.f16.f64 = double(float(ctx.f23.f64 * ctx.f28.f64));
	// fmadds f6,f10,f12,f6
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmuls f9,f9,f3
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmuls f5,f3,f5
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fmuls f3,f3,f2
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fmuls f2,f1,f4
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// fmuls f11,f1,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmuls f1,f1,f10
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fmsubs f4,f27,f31,f26
	ctx.f4.f64 = double(float(ctx.f27.f64 * ctx.f31.f64 - ctx.f26.f64));
	// fmsubs f27,f25,f30,f24
	ctx.f27.f64 = double(float(ctx.f25.f64 * ctx.f30.f64 - ctx.f24.f64));
	// fmsubs f26,f28,f29,f18
	ctx.f26.f64 = double(float(ctx.f28.f64 * ctx.f29.f64 - ctx.f18.f64));
	// fmuls f10,f6,f7
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f8,f6,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f7,f5,f0
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmadds f5,f25,f29,f17
	ctx.f5.f64 = double(float(ctx.f25.f64 * ctx.f29.f64 + ctx.f17.f64));
	// fadds f4,f4,f14
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f14.f64));
	// fmuls f12,f22,f31
	ctx.f12.f64 = double(float(ctx.f22.f64 * ctx.f31.f64));
	// fmuls f30,f22,f30
	ctx.f30.f64 = double(float(ctx.f22.f64 * ctx.f30.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fadds f9,f2,f9
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// fmuls f2,f22,f29
	ctx.f2.f64 = double(float(ctx.f22.f64 * ctx.f29.f64));
	// fadds f7,f11,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f3,f1,f3
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fadds f11,f27,f16
	ctx.f11.f64 = double(float(ctx.f27.f64 + ctx.f16.f64));
	// fadds f29,f26,f15
	ctx.f29.f64 = double(float(ctx.f26.f64 + ctx.f15.f64));
	// fmadds f5,f28,f31,f5
	ctx.f5.f64 = double(float(ctx.f28.f64 * ctx.f31.f64 + ctx.f5.f64));
	// fadds f1,f9,f10
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fadds f9,f4,f2
	ctx.f9.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// fadds f10,f7,f8
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fadds f4,f3,f6
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// fadds f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fadds f7,f29,f30
	ctx.f7.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// fmsubs f5,f23,f22,f5
	ctx.f5.f64 = double(float(ctx.f23.f64 * ctx.f22.f64 - ctx.f5.f64));
	// fadds f3,f1,f21
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f21.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f2,f20,f10
	ctx.f2.f64 = double(float(ctx.f20.f64 + ctx.f10.f64));
	// stfs f2,4(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f1,f19,f4
	ctx.f1.f64 = double(float(ctx.f19.f64 + ctx.f4.f64));
	// stfs f1,8(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmr f11,f7
	ctx.f11.f64 = ctx.f7.f64;
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fmr f10,f9
	ctx.f10.f64 = ctx.f9.f64;
	// stfs f7,16(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f8,12(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// stfs f5,24(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r9,r11,76
	ctx.r9.s64 = ctx.r11.s64 + 76;
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmr f5,f10
	ctx.f5.f64 = ctx.f10.f64;
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
	// fmuls f4,f9,f11
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f11,f6,f8
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f2,f7,f5
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f1,f6,f1
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// lfs f3,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f7,f7,f3
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// fmuls f8,f9,f3
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmuls f30,f6,f5
	ctx.f30.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmuls f6,f6,f3
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fmuls f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fadds f5,f2,f4
	ctx.f5.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// fadds f3,f2,f11
	ctx.f3.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// fadds f2,f4,f11
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// fadds f11,f7,f1
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// stfs f11,32(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// fsubs f1,f1,f7
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f7.f64));
	// fsubs f4,f30,f8
	ctx.f4.f64 = double(float(ctx.f30.f64 - ctx.f8.f64));
	// stfs f4,36(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// fadds f8,f8,f30
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f30.f64));
	// fadds f11,f9,f6
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// fsubs f7,f9,f6
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// fsubs f6,f13,f5
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// stfs f6,28(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fsubs f5,f13,f3
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f3.f64));
	// stfs f11,48(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f1,40(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// fsubs f4,f13,f2
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// stfs f5,44(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f8,52(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f4,60(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f7,56(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,64(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f10,72(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// stfs f12,68(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lfs f3,116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	ctx.f3.f64 = double(temp.f32);
	// lfs f7,100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	ctx.f8.f64 = double(temp.f32);
	// lfs f1,120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f5,104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f0,f11,f1
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmuls f12,f2,f3
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// fmuls f4,f2,f1
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// fmuls f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f3,f9,f3
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmuls f1,f9,f1
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f6,f2,f8
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f8.f64));
	// lfs f2,108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fadds f8,f0,f12
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fsubs f10,f13,f8
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// stfs f10,76(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// fsubs f8,f1,f6
	ctx.f8.f64 = double(float(ctx.f1.f64 - ctx.f6.f64));
	// stfs f8,84(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// fadds f10,f11,f3
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// stfs f10,80(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// fsubs f8,f3,f11
	ctx.f8.f64 = double(float(ctx.f3.f64 - ctx.f11.f64));
	// fadds f3,f4,f9
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// fsubs f10,f4,f9
	ctx.f10.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// stfs f8,88(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f3,96(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// stfs f0,92(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// fadds f11,f6,f1
	ctx.f11.f64 = double(float(ctx.f6.f64 + ctx.f1.f64));
	// fsubs f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f11,100(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// stfs f10,104(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// stfs f9,108(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stfs f7,112(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stfs f5,116(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// stfs f2,120(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6afc
	ctx.lr = 0x8317E0FC;
	__restfpr_14(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_8317E100:
	// lfs f11,28(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r5,28
	ctx.r10.s64 = ctx.r5.s64 + 28;
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// lfs f10,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f9,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f8,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,12(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f7,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,16(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f6,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,20(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f5,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,24(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f1,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// lfs f11,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f4,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f1,f0
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f2,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f10,f9,f1
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f1,f5,f1
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// fmuls f31,f0,f2
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmuls f6,f9,f3
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmuls f30,f5,f3
	ctx.f30.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fmuls f9,f9,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmuls f0,f0,f3
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// fmuls f5,f5,f2
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// fadds f3,f1,f7
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// fadds f2,f31,f1
	ctx.f2.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// fadds f1,f31,f7
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f7.f64));
	// fsubs f7,f9,f30
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f30.f64));
	// stfs f7,36(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// fadds f7,f0,f10
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f7,32(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// fsubs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fadds f10,f5,f6
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fsubs f7,f5,f6
	ctx.f7.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fadds f9,f30,f9
	ctx.f9.f64 = double(float(ctx.f30.f64 + ctx.f9.f64));
	// fsubs f6,f13,f3
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f3.f64));
	// fsubs f5,f13,f2
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// stfs f5,28(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fsubs f3,f13,f1
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f10,48(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f3,44(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f9,52(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f7,56(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f6,60(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f4,64(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f8,68(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f11,72(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// stfs f13,108(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stfs f13,92(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// stfs f13,76(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// stfs f12,84(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stfs f12,80(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stfs f12,96(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// stfs f12,88(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// stfs f12,104(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// stfs f12,100(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// stfs f12,120(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// stfs f12,116(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// stfs f12,112(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6afc
	ctx.lr = 0x8317E228;
	__restfpr_14(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_8317E22C:
	// lwz r11,1132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1132);
	// rlwinm r6,r30,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r10,1132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1132);
	// lwzx r9,r6,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8317e654
	if (ctx.cr6.eq) goto loc_8317E654;
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8317e52c
	if (ctx.cr6.eq) goto loc_8317E52C;
	// lfs f12,120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r10,100
	ctx.r9.s64 = ctx.r10.s64 + 100;
	// lfs f8,116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// fmr f29,f12
	ctx.f29.f64 = ctx.f12.f64;
	// lfs f11,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmr f30,f8
	ctx.f30.f64 = ctx.f8.f64;
	// lfs f7,112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f11,f8
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// lfs f10,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f4,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f7,f10
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmuls f2,f4,f8
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// lfs f3,124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f3,f3
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// lfs f28,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f28.f64 = double(temp.f32);
	// fmr f23,f3
	ctx.f23.f64 = ctx.f3.f64;
	// lfs f27,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f27.f64 = double(temp.f32);
	// fmr f31,f7
	ctx.f31.f64 = ctx.f7.f64;
	// lfs f25,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f25.f64 = double(temp.f32);
	// lfs f22,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f22.f64 = double(temp.f32);
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// fmuls f24,f27,f29
	ctx.f24.f64 = double(float(ctx.f27.f64 * ctx.f29.f64));
	// lfs f21,100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f21.f64 = double(temp.f32);
	// fmuls f26,f28,f30
	ctx.f26.f64 = double(float(ctx.f28.f64 * ctx.f30.f64));
	// lfs f20,104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	ctx.f20.f64 = double(temp.f32);
	// fmadds f6,f4,f7,f6
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f6.f64));
	// lfs f19,108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	ctx.f19.f64 = double(temp.f32);
	// fmsubs f9,f8,f10,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 - ctx.f9.f64));
	// addi r8,r5,28
	ctx.r8.s64 = ctx.r5.s64 + 28;
	// fmsubs f5,f4,f12,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 - ctx.f5.f64));
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// fmsubs f2,f7,f11,f2
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 - ctx.f2.f64));
	// fmsubs f1,f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fmuls f14,f23,f25
	ctx.f14.f64 = double(float(ctx.f23.f64 * ctx.f25.f64));
	// fmuls f17,f27,f30
	ctx.f17.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// fmuls f18,f25,f31
	ctx.f18.f64 = double(float(ctx.f25.f64 * ctx.f31.f64));
	// fmuls f15,f23,f27
	ctx.f15.f64 = double(float(ctx.f23.f64 * ctx.f27.f64));
	// fmuls f16,f23,f28
	ctx.f16.f64 = double(float(ctx.f23.f64 * ctx.f28.f64));
	// fmadds f6,f10,f12,f6
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmuls f9,f9,f3
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmuls f5,f3,f5
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fmuls f3,f3,f2
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fmuls f2,f1,f4
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// fmuls f11,f1,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmuls f1,f1,f10
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fmsubs f4,f27,f31,f26
	ctx.f4.f64 = double(float(ctx.f27.f64 * ctx.f31.f64 - ctx.f26.f64));
	// fmsubs f27,f25,f30,f24
	ctx.f27.f64 = double(float(ctx.f25.f64 * ctx.f30.f64 - ctx.f24.f64));
	// fmsubs f26,f28,f29,f18
	ctx.f26.f64 = double(float(ctx.f28.f64 * ctx.f29.f64 - ctx.f18.f64));
	// fmuls f10,f6,f7
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f8,f6,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f7,f5,f0
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmadds f5,f25,f29,f17
	ctx.f5.f64 = double(float(ctx.f25.f64 * ctx.f29.f64 + ctx.f17.f64));
	// fadds f4,f4,f14
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f14.f64));
	// fmuls f12,f22,f31
	ctx.f12.f64 = double(float(ctx.f22.f64 * ctx.f31.f64));
	// fmuls f30,f22,f30
	ctx.f30.f64 = double(float(ctx.f22.f64 * ctx.f30.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fadds f9,f2,f9
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// fmuls f2,f22,f29
	ctx.f2.f64 = double(float(ctx.f22.f64 * ctx.f29.f64));
	// fadds f7,f11,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f3,f1,f3
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fadds f11,f27,f16
	ctx.f11.f64 = double(float(ctx.f27.f64 + ctx.f16.f64));
	// fadds f29,f26,f15
	ctx.f29.f64 = double(float(ctx.f26.f64 + ctx.f15.f64));
	// fmadds f5,f28,f31,f5
	ctx.f5.f64 = double(float(ctx.f28.f64 * ctx.f31.f64 + ctx.f5.f64));
	// fadds f1,f9,f10
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fadds f9,f4,f2
	ctx.f9.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// fadds f10,f7,f8
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fadds f4,f3,f6
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// fadds f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fadds f7,f29,f30
	ctx.f7.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// fmsubs f5,f23,f22,f5
	ctx.f5.f64 = double(float(ctx.f23.f64 * ctx.f22.f64 - ctx.f5.f64));
	// fadds f3,f1,f21
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f21.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f2,f20,f10
	ctx.f2.f64 = double(float(ctx.f20.f64 + ctx.f10.f64));
	// stfs f2,4(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f1,f19,f4
	ctx.f1.f64 = double(float(ctx.f19.f64 + ctx.f4.f64));
	// stfs f1,8(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmr f11,f7
	ctx.f11.f64 = ctx.f7.f64;
	// stfs f8,12(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmr f10,f9
	ctx.f10.f64 = ctx.f9.f64;
	// stfs f5,24(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,16(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r9,r11,76
	ctx.r9.s64 = ctx.r11.s64 + 76;
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmr f5,f10
	ctx.f5.f64 = ctx.f10.f64;
	// fmr f3,f11
	ctx.f3.f64 = ctx.f11.f64;
	// fmuls f8,f6,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f10,f7,f5
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// lfs f1,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f31,f6,f5
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// lfs f4,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f30,f9,f4
	ctx.f30.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// fmuls f7,f7,f4
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f3,f6,f3
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// lfs f2,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f6,f6,f4
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// fmuls f5,f9,f5
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fadds f4,f10,f11
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fadds f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// fadds f9,f11,f8
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// fsubs f8,f31,f30
	ctx.f8.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// stfs f8,36(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// fadds f11,f7,f3
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f3.f64));
	// stfs f11,32(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// fsubs f8,f3,f7
	ctx.f8.f64 = double(float(ctx.f3.f64 - ctx.f7.f64));
	// fadds f7,f5,f6
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fsubs f11,f5,f6
	ctx.f11.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fsubs f6,f13,f4
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// stfs f6,28(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fsubs f5,f13,f10
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f8,40(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f5,44(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// fsubs f4,f13,f9
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f7,48(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// fadds f3,f30,f31
	ctx.f3.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// stfs f11,56(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f4,60(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f3,52(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f12,72(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// stfs f2,64(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f1,68(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lfs f3,108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	ctx.f3.f64 = double(temp.f32);
	// lfs f7,100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// lfs f1,116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// lfs f8,124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	ctx.f8.f64 = double(temp.f32);
	// lfs f2,120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f10,112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f6,104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f2,f12
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f4,f1,f11
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmuls f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmuls f10,f8,f11
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f11,f2,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmuls f1,f1,f9
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// fmuls f2,f2,f9
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// fmuls f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fadds f8,f5,f4
	ctx.f8.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fadds f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// fadds f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// fsubs f0,f13,f8
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// stfs f0,76(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// fsubs f8,f2,f10
	ctx.f8.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// stfs f8,84(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// fadds f0,f12,f1
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// fsubs f12,f1,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// fadds f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fsubs f5,f13,f5
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// stfs f12,88(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// stfs f8,96(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// fadds f2,f10,f2
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// stfs f5,92(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// fsubs f1,f11,f9
	ctx.f1.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fsubs f0,f13,f4
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// stfs f2,100(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// stfs f1,104(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stfs f6,116(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// stfs f3,120(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// stfs f7,112(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// lwz r11,1132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1132);
	// stwx r5,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r5.u32);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6afc
	ctx.lr = 0x8317E528;
	__restfpr_14(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_8317E52C:
	// lfs f11,28(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r5,28
	ctx.r10.s64 = ctx.r5.s64 + 28;
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lfs f10,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f9,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f8,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,12(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f7,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,16(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f6,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,20(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f5,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,24(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f3,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// lfs f10,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f2,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f9,f3,f0
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f4,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f1,f11
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// lfs f5,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f0,f11,f2
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// fmuls f11,f3,f9
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// fmuls f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmuls f31,f9,f2
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmuls f30,f1,f8
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// fmuls f3,f3,f8
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// fmuls f1,f1,f9
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// fmuls f9,f8,f2
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// fadds f8,f6,f11
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// fadds f6,f6,f10
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// fadds f2,f11,f10
	ctx.f2.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fsubs f10,f30,f31
	ctx.f10.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// stfs f10,36(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// fadds f11,f0,f3
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f3.f64));
	// stfs f11,32(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// fsubs f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// fadds f0,f1,f9
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// fsubs f10,f1,f9
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f9.f64));
	// fadds f11,f31,f30
	ctx.f11.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// fsubs f9,f13,f8
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// stfs f9,28(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fsubs f8,f13,f6
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// stfs f3,40(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f8,44(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// fsubs f6,f13,f2
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f11,52(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f10,56(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f6,60(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f4,64(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f7,68(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f5,72(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// stfs f13,108(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stfs f13,92(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// stfs f13,76(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// stfs f12,84(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stfs f12,80(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stfs f12,96(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// stfs f12,88(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// stfs f12,104(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// stfs f12,100(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// stfs f12,120(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// stfs f12,116(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// stfs f12,112(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// lwz r11,1132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1132);
	// stwx r5,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r5.u32);
loc_8317E654:
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6afc
	ctx.lr = 0x8317E65C;
	__restfpr_14(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E660"))) PPC_WEAK_FUNC(sub_8317E660);
PPC_FUNC_IMPL(__imp__sub_8317E660) {
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
	// addi r30,r3,236
	ctx.r30.s64 = ctx.r3.s64 + 236;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8317e6a8
	if (ctx.cr6.eq) goto loc_8317E6A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8317E69C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
loc_8317E6A8:
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

__attribute__((alias("__imp__sub_8317E6C0"))) PPC_WEAK_FUNC(sub_8317E6C0);
PPC_FUNC_IMPL(__imp__sub_8317E6C0) {
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
	// addi r30,r3,260
	ctx.r30.s64 = ctx.r3.s64 + 260;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8317e708
	if (ctx.cr6.eq) goto loc_8317E708;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8317E6FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
loc_8317E708:
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

__attribute__((alias("__imp__sub_8317E720"))) PPC_WEAK_FUNC(sub_8317E720);
PPC_FUNC_IMPL(__imp__sub_8317E720) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r5,159
	ctx.r5.s64 = 159;
	// addi r4,r11,26728
	ctx.r4.s64 = ctx.r11.s64 + 26728;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x8315b860
	ctx.lr = 0x8317E74C;
	sub_8315B860(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831612e8
	ctx.lr = 0x8317E764;
	sub_831612E8(ctx, base);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mulli r11,r9,76
	ctx.r11.s64 = ctx.r9.s64 * 76;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-76
	ctx.r11.s64 = ctx.r11.s64 + -76;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x8317e794
	if (ctx.cr6.lt) goto loc_8317E794;
loc_8317E780:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r11,r11,-76
	ctx.r11.s64 = ctx.r11.s64 + -76;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8317e780
	if (!ctx.cr6.lt) goto loc_8317E780;
loc_8317E794:
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8317E7B0"))) PPC_WEAK_FUNC(sub_8317E7B0);
PPC_FUNC_IMPL(__imp__sub_8317E7B0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r5,159
	ctx.r5.s64 = 159;
	// addi r4,r11,26728
	ctx.r4.s64 = ctx.r11.s64 + 26728;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x8315b860
	ctx.lr = 0x8317E7DC;
	sub_8315B860(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831612e8
	ctx.lr = 0x8317E7F4;
	sub_831612E8(ctx, base);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mulli r11,r9,84
	ctx.r11.s64 = ctx.r9.s64 * 84;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-84
	ctx.r11.s64 = ctx.r11.s64 + -84;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x8317e824
	if (ctx.cr6.lt) goto loc_8317E824;
loc_8317E810:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r11,r11,-84
	ctx.r11.s64 = ctx.r11.s64 + -84;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8317e810
	if (!ctx.cr6.lt) goto loc_8317E810;
loc_8317E824:
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8317E840"))) PPC_WEAK_FUNC(sub_8317E840);
PPC_FUNC_IMPL(__imp__sub_8317E840) {
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
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8317e864
	if (!ctx.cr6.eq) goto loc_8317E864;
	// bl 0x8317e720
	ctx.lr = 0x8317E864;
	sub_8317E720(ctx, base);
loc_8317E864:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8317E884"))) PPC_WEAK_FUNC(sub_8317E884);
PPC_FUNC_IMPL(__imp__sub_8317E884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317E888"))) PPC_WEAK_FUNC(sub_8317E888);
PPC_FUNC_IMPL(__imp__sub_8317E888) {
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
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8317e8ac
	if (!ctx.cr6.eq) goto loc_8317E8AC;
	// bl 0x8317e7b0
	ctx.lr = 0x8317E8AC;
	sub_8317E7B0(ctx, base);
loc_8317E8AC:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8317E8CC"))) PPC_WEAK_FUNC(sub_8317E8CC);
PPC_FUNC_IMPL(__imp__sub_8317E8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317E8D0"))) PPC_WEAK_FUNC(sub_8317E8D0);
PPC_FUNC_IMPL(__imp__sub_8317E8D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8317E8D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8317e8f4
	if (!ctx.cr6.eq) goto loc_8317E8F4;
	// bl 0x8317e720
	ctx.lr = 0x8317E8F4;
	sub_8317E720(ctx, base);
loc_8317E8F4:
	// lwz r31,20(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// bne cr6,0x8317e914
	if (!ctx.cr6.eq) goto loc_8317E914;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_8317E914:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83195980
	ctx.lr = 0x8317E920;
	sub_83195980(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E92C"))) PPC_WEAK_FUNC(sub_8317E92C);
PPC_FUNC_IMPL(__imp__sub_8317E92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317E930"))) PPC_WEAK_FUNC(sub_8317E930);
PPC_FUNC_IMPL(__imp__sub_8317E930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8317E938;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8317e954
	if (!ctx.cr6.eq) goto loc_8317E954;
	// bl 0x8317e7b0
	ctx.lr = 0x8317E954;
	sub_8317E7B0(ctx, base);
loc_8317E954:
	// lwz r31,20(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// bne cr6,0x8317e974
	if (!ctx.cr6.eq) goto loc_8317E974;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_8317E974:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8319a0b0
	ctx.lr = 0x8317E980;
	sub_8319A0B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E98C"))) PPC_WEAK_FUNC(sub_8317E98C);
PPC_FUNC_IMPL(__imp__sub_8317E98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317E990"))) PPC_WEAK_FUNC(sub_8317E990);
PPC_FUNC_IMPL(__imp__sub_8317E990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8317E998;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r3,236
	ctx.r31.s64 = ctx.r3.s64 + 236;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8317e9b8
	if (!ctx.cr6.eq) goto loc_8317E9B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8317e720
	ctx.lr = 0x8317E9B8;
	sub_8317E720(ctx, base);
loc_8317E9B8:
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bne cr6,0x8317e9d8
	if (!ctx.cr6.eq) goto loc_8317E9D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_8317E9D8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83195980
	ctx.lr = 0x8317E9E4;
	sub_83195980(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E9F0"))) PPC_WEAK_FUNC(sub_8317E9F0);
PPC_FUNC_IMPL(__imp__sub_8317E9F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8317E9F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r3,260
	ctx.r31.s64 = ctx.r3.s64 + 260;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8317ea18
	if (!ctx.cr6.eq) goto loc_8317EA18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8317e7b0
	ctx.lr = 0x8317EA18;
	sub_8317E7B0(ctx, base);
loc_8317EA18:
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bne cr6,0x8317ea38
	if (!ctx.cr6.eq) goto loc_8317EA38;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_8317EA38:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8319a0b0
	ctx.lr = 0x8317EA44;
	sub_8319A0B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EA50"))) PPC_WEAK_FUNC(sub_8317EA50);
PPC_FUNC_IMPL(__imp__sub_8317EA50) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317EA58"))) PPC_WEAK_FUNC(sub_8317EA58);
PPC_FUNC_IMPL(__imp__sub_8317EA58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317EA60"))) PPC_WEAK_FUNC(sub_8317EA60);
PPC_FUNC_IMPL(__imp__sub_8317EA60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1184);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stw r11,1184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1184, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317EA70"))) PPC_WEAK_FUNC(sub_8317EA70);
PPC_FUNC_IMPL(__imp__sub_8317EA70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1188);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stw r11,1188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1188, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317EA80"))) PPC_WEAK_FUNC(sub_8317EA80);
PPC_FUNC_IMPL(__imp__sub_8317EA80) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// bne cr6,0x8317ea90
	if (!ctx.cr6.eq) goto loc_8317EA90;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8317EA90:
	// b 0x8335a130
	sub_8335A130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EA94"))) PPC_WEAK_FUNC(sub_8317EA94);
PPC_FUNC_IMPL(__imp__sub_8317EA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317EA98"))) PPC_WEAK_FUNC(sub_8317EA98);
PPC_FUNC_IMPL(__imp__sub_8317EA98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317EA9C"))) PPC_WEAK_FUNC(sub_8317EA9C);
PPC_FUNC_IMPL(__imp__sub_8317EA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317EAA0"))) PPC_WEAK_FUNC(sub_8317EAA0);
PPC_FUNC_IMPL(__imp__sub_8317EAA0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// bne cr6,0x8317eab0
	if (!ctx.cr6.eq) goto loc_8317EAB0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8317EAB0:
	// addi r3,r3,208
	ctx.r3.s64 = ctx.r3.s64 + 208;
	// b 0x8335a130
	sub_8335A130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EAB8"))) PPC_WEAK_FUNC(sub_8317EAB8);
PPC_FUNC_IMPL(__imp__sub_8317EAB8) {
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
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8317eae0
	if (ctx.cr6.eq) goto loc_8317EAE0;
	// bl 0x822990f0
	ctx.lr = 0x8317EADC;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8317EAE0:
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

__attribute__((alias("__imp__sub_8317EAF4"))) PPC_WEAK_FUNC(sub_8317EAF4);
PPC_FUNC_IMPL(__imp__sub_8317EAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317EAF8"))) PPC_WEAK_FUNC(sub_8317EAF8);
PPC_FUNC_IMPL(__imp__sub_8317EAF8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r4,r4,140
	ctx.r4.s64 = ctx.r4.s64 + 140;
	// bne cr6,0x8317eb08
	if (!ctx.cr6.eq) goto loc_8317EB08;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8317EB08:
	// b 0x8335a130
	sub_8335A130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EB0C"))) PPC_WEAK_FUNC(sub_8317EB0C);
PPC_FUNC_IMPL(__imp__sub_8317EB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317EB10"))) PPC_WEAK_FUNC(sub_8317EB10);
PPC_FUNC_IMPL(__imp__sub_8317EB10) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r4,r4,140
	ctx.r4.s64 = ctx.r4.s64 + 140;
	// bne cr6,0x8317eb20
	if (!ctx.cr6.eq) goto loc_8317EB20;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8317EB20:
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// b 0x8335a130
	sub_8335A130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EB28"))) PPC_WEAK_FUNC(sub_8317EB28);
PPC_FUNC_IMPL(__imp__sub_8317EB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x8317EB30;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,136(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 136);
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// bl 0x833b8b14
	ctx.lr = 0x8317EB44;
	__imp__InterlockedPopEntrySList(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8317eb6c
	if (!ctx.cr6.eq) goto loc_8317EB6C;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,1200
	ctx.r3.s64 = 1200;
	// bl 0x83162c98
	ctx.lr = 0x8317EB5C;
	sub_83162C98(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8317eb6c
	if (ctx.cr6.eq) goto loc_8317EB6C;
	// bl 0x83165eb0
	ctx.lr = 0x8317EB6C;
	sub_83165EB0(ctx, base);
loc_8317EB6C:
	// lwz r11,128(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 128);
	// li r20,0
	ctx.r20.s64 = 0;
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r23,r27,1176
	ctx.r23.s64 = ctx.r27.s64 + 1176;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8317ed28
	if (!ctx.cr6.gt) goto loc_8317ED28;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// li r24,1
	ctx.r24.s64 = 1;
loc_8317EB90:
	// lwz r31,0(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,136(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 136);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r30,296(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// lwz r29,292(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8317ebbc
	if (ctx.cr6.eq) goto loc_8317EBBC;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// b 0x8317ebc4
	goto loc_8317EBC4;
loc_8317EBBC:
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8317EBC4:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8317ebe8
	if (ctx.cr6.eq) goto loc_8317EBE8;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,160(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8317ec48
	if (ctx.cr6.lt) goto loc_8317EC48;
loc_8317EBE8:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8317ec08
	if (ctx.cr6.eq) goto loc_8317EC08;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,160(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8317ec48
	if (ctx.cr6.lt) goto loc_8317EC48;
loc_8317EC08:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8317ec48
	if (ctx.cr6.lt) goto loc_8317EC48;
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8317ec48
	if (ctx.cr6.lt) goto loc_8317EC48;
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8317ec48
	if (ctx.cr6.lt) goto loc_8317EC48;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bge cr6,0x8317ec4c
	if (!ctx.cr6.lt) goto loc_8317EC4C;
loc_8317EC48:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8317EC4C:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x8317ec84
	if (ctx.cr6.eq) goto loc_8317EC84;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8317EC78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// b 0x8317ec94
	goto loc_8317EC94;
loc_8317EC84:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8317EC90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8317EC94:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8317ecb0
	if (ctx.cr6.eq) goto loc_8317ECB0;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// b 0x8317ecb8
	goto loc_8317ECB8;
loc_8317ECB0:
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,0,28,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
loc_8317ECB8:
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// xor r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8317ed14
	if (ctx.cr6.eq) goto loc_8317ED14;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83166510
	ctx.lr = 0x8317ECE4;
	sub_83166510(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r10,r31,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r31,27
	ctx.r9.u64 = ctx.r31.u32 & 0x1F;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// slw r8,r24,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// beq cr6,0x8317ed10
	if (ctx.cr6.eq) goto loc_8317ED10;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// b 0x8317ed14
	goto loc_8317ED14;
loc_8317ED10:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
loc_8317ED14:
	// lwz r11,128(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 128);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8317eb90
	if (ctx.cr6.lt) goto loc_8317EB90;
loc_8317ED28:
	// lwz r11,1184(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1184);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,1188(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1188);
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// add r10,r21,r10
	ctx.r10.u64 = ctx.r21.u64 + ctx.r10.u64;
	// stw r11,1184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1184, ctx.r11.u32);
	// stw r10,1188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1188, ctx.r10.u32);
	// lwz r9,136(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 136);
	// lwz r3,88(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// bl 0x8335a130
	ctx.lr = 0x8317ED50;
	sub_8335A130(ctx, base);
	// lwz r11,136(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 136);
	// addi r4,r26,140
	ctx.r4.s64 = ctx.r26.s64 + 140;
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// bl 0x8335a130
	ctx.lr = 0x8317ED60;
	sub_8335A130(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317ED68"))) PPC_WEAK_FUNC(sub_8317ED68);
PPC_FUNC_IMPL(__imp__sub_8317ED68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x8317ED70;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,136(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 136);
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// bl 0x833b8b14
	ctx.lr = 0x8317ED84;
	__imp__InterlockedPopEntrySList(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8317edac
	if (!ctx.cr6.eq) goto loc_8317EDAC;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,1200
	ctx.r3.s64 = 1200;
	// bl 0x83162c98
	ctx.lr = 0x8317ED9C;
	sub_83162C98(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8317edac
	if (ctx.cr6.eq) goto loc_8317EDAC;
	// bl 0x83165eb0
	ctx.lr = 0x8317EDAC;
	sub_83165EB0(ctx, base);
loc_8317EDAC:
	// lwz r11,128(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 128);
	// li r20,0
	ctx.r20.s64 = 0;
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r23,r27,1176
	ctx.r23.s64 = ctx.r27.s64 + 1176;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8317ef68
	if (!ctx.cr6.gt) goto loc_8317EF68;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// li r24,1
	ctx.r24.s64 = 1;
loc_8317EDD0:
	// lwz r31,0(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,136(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 136);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r30,296(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// lwz r29,292(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8317edfc
	if (ctx.cr6.eq) goto loc_8317EDFC;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// b 0x8317ee04
	goto loc_8317EE04;
loc_8317EDFC:
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8317EE04:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8317ee28
	if (ctx.cr6.eq) goto loc_8317EE28;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,160(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8317ee88
	if (ctx.cr6.lt) goto loc_8317EE88;
loc_8317EE28:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8317ee48
	if (ctx.cr6.eq) goto loc_8317EE48;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,160(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8317ee88
	if (ctx.cr6.lt) goto loc_8317EE88;
loc_8317EE48:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8317ee88
	if (ctx.cr6.lt) goto loc_8317EE88;
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8317ee88
	if (ctx.cr6.lt) goto loc_8317EE88;
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8317ee88
	if (ctx.cr6.lt) goto loc_8317EE88;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bge cr6,0x8317ee8c
	if (!ctx.cr6.lt) goto loc_8317EE8C;
loc_8317EE88:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8317EE8C:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x8317eec4
	if (ctx.cr6.eq) goto loc_8317EEC4;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8317EEB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// b 0x8317eed4
	goto loc_8317EED4;
loc_8317EEC4:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8317EED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8317EED4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8317eef0
	if (ctx.cr6.eq) goto loc_8317EEF0;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// b 0x8317eef8
	goto loc_8317EEF8;
loc_8317EEF0:
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,0,28,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
loc_8317EEF8:
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// xor r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8317ef54
	if (ctx.cr6.eq) goto loc_8317EF54;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83166510
	ctx.lr = 0x8317EF24;
	sub_83166510(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r10,r31,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r31,27
	ctx.r9.u64 = ctx.r31.u32 & 0x1F;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// slw r8,r24,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// beq cr6,0x8317ef50
	if (ctx.cr6.eq) goto loc_8317EF50;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// b 0x8317ef54
	goto loc_8317EF54;
loc_8317EF50:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
loc_8317EF54:
	// lwz r11,128(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 128);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8317edd0
	if (ctx.cr6.lt) goto loc_8317EDD0;
loc_8317EF68:
	// lwz r11,1184(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1184);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,1188(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1188);
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// add r10,r21,r10
	ctx.r10.u64 = ctx.r21.u64 + ctx.r10.u64;
	// stw r11,1184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1184, ctx.r11.u32);
	// stw r10,1188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1188, ctx.r10.u32);
	// lwz r9,136(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 136);
	// lwz r3,88(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// bl 0x8335a130
	ctx.lr = 0x8317EF90;
	sub_8335A130(ctx, base);
	// lwz r11,136(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 136);
	// addi r4,r26,140
	ctx.r4.s64 = ctx.r26.s64 + 140;
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// bl 0x8335a130
	ctx.lr = 0x8317EFA0;
	sub_8335A130(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EFA8"))) PPC_WEAK_FUNC(sub_8317EFA8);
PPC_FUNC_IMPL(__imp__sub_8317EFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8317EFB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,88(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// bl 0x833b8b14
	ctx.lr = 0x8317EFC8;
	__imp__InterlockedPopEntrySList(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8317eff0
	if (!ctx.cr6.eq) goto loc_8317EFF0;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,1200
	ctx.r3.s64 = 1200;
	// bl 0x83162c98
	ctx.lr = 0x8317EFE0;
	sub_83162C98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8317eff0
	if (ctx.cr6.eq) goto loc_8317EFF0;
	// bl 0x83165eb0
	ctx.lr = 0x8317EFF0;
	sub_83165EB0(ctx, base);
loc_8317EFF0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8317f034
	if (!ctx.cr6.gt) goto loc_8317F034;
	// addi r27,r28,1192
	ctx.r27.s64 = ctx.r28.s64 + 1192;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8317F008:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x83168320
	ctx.lr = 0x8317F020;
	sub_83168320(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8317f008
	if (ctx.cr6.lt) goto loc_8317F008;
loc_8317F034:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,88(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// bl 0x8335a130
	ctx.lr = 0x8317F048;
	sub_8335A130(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r11,208
	ctx.r3.s64 = ctx.r11.s64 + 208;
	// bl 0x8335a130
	ctx.lr = 0x8317F058;
	sub_8335A130(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F060"))) PPC_WEAK_FUNC(sub_8317F060);
PPC_FUNC_IMPL(__imp__sub_8317F060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8317F068;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,88(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// bl 0x833b8b14
	ctx.lr = 0x8317F080;
	__imp__InterlockedPopEntrySList(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8317f0a8
	if (!ctx.cr6.eq) goto loc_8317F0A8;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,1200
	ctx.r3.s64 = 1200;
	// bl 0x83162c98
	ctx.lr = 0x8317F098;
	sub_83162C98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8317f0a8
	if (ctx.cr6.eq) goto loc_8317F0A8;
	// bl 0x83165eb0
	ctx.lr = 0x8317F0A8;
	sub_83165EB0(ctx, base);
loc_8317F0A8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8317f0ec
	if (!ctx.cr6.gt) goto loc_8317F0EC;
	// addi r27,r28,1192
	ctx.r27.s64 = ctx.r28.s64 + 1192;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8317F0C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x83168320
	ctx.lr = 0x8317F0D8;
	sub_83168320(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8317f0c0
	if (ctx.cr6.lt) goto loc_8317F0C0;
loc_8317F0EC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,88(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// bl 0x8335a130
	ctx.lr = 0x8317F100;
	sub_8335A130(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r11,208
	ctx.r3.s64 = ctx.r11.s64 + 208;
	// bl 0x8335a130
	ctx.lr = 0x8317F110;
	sub_8335A130(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F118"))) PPC_WEAK_FUNC(sub_8317F118);
PPC_FUNC_IMPL(__imp__sub_8317F118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,31176
	ctx.r10.s64 = ctx.r11.s64 + 31176;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F128"))) PPC_WEAK_FUNC(sub_8317F128);
PPC_FUNC_IMPL(__imp__sub_8317F128) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,31176
	ctx.r9.s64 = ctx.r11.s64 + 31176;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8317f15c
	if (ctx.cr6.eq) goto loc_8317F15C;
	// bl 0x822990f0
	ctx.lr = 0x8317F158;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8317F15C:
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

__attribute__((alias("__imp__sub_8317F170"))) PPC_WEAK_FUNC(sub_8317F170);
PPC_FUNC_IMPL(__imp__sub_8317F170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F18C"))) PPC_WEAK_FUNC(sub_8317F18C);
PPC_FUNC_IMPL(__imp__sub_8317F18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317F190"))) PPC_WEAK_FUNC(sub_8317F190);
PPC_FUNC_IMPL(__imp__sub_8317F190) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F194"))) PPC_WEAK_FUNC(sub_8317F194);
PPC_FUNC_IMPL(__imp__sub_8317F194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317F198"))) PPC_WEAK_FUNC(sub_8317F198);
PPC_FUNC_IMPL(__imp__sub_8317F198) {
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F1CC"))) PPC_WEAK_FUNC(sub_8317F1CC);
PPC_FUNC_IMPL(__imp__sub_8317F1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317F1D0"))) PPC_WEAK_FUNC(sub_8317F1D0);
PPC_FUNC_IMPL(__imp__sub_8317F1D0) {
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
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F204"))) PPC_WEAK_FUNC(sub_8317F204);
PPC_FUNC_IMPL(__imp__sub_8317F204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317F208"))) PPC_WEAK_FUNC(sub_8317F208);
PPC_FUNC_IMPL(__imp__sub_8317F208) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F20C"))) PPC_WEAK_FUNC(sub_8317F20C);
PPC_FUNC_IMPL(__imp__sub_8317F20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317F210"))) PPC_WEAK_FUNC(sub_8317F210);
PPC_FUNC_IMPL(__imp__sub_8317F210) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F214"))) PPC_WEAK_FUNC(sub_8317F214);
PPC_FUNC_IMPL(__imp__sub_8317F214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317F218"))) PPC_WEAK_FUNC(sub_8317F218);
PPC_FUNC_IMPL(__imp__sub_8317F218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,31176
	ctx.r10.s64 = ctx.r11.s64 + 31176;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F228"))) PPC_WEAK_FUNC(sub_8317F228);
PPC_FUNC_IMPL(__imp__sub_8317F228) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F22C"))) PPC_WEAK_FUNC(sub_8317F22C);
PPC_FUNC_IMPL(__imp__sub_8317F22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317F230"))) PPC_WEAK_FUNC(sub_8317F230);
PPC_FUNC_IMPL(__imp__sub_8317F230) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,31272
	ctx.r10.s64 = ctx.r11.s64 + 31272;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8317f268
	if (ctx.cr6.eq) goto loc_8317F268;
	// lhz r11,198(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 198);
	// rotlwi r4,r11,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// bl 0x83161838
	ctx.lr = 0x8317F268;
	sub_83161838(ctx, base);
loc_8317F268:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,31176
	ctx.r10.s64 = ctx.r11.s64 + 31176;
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

__attribute__((alias("__imp__sub_8317F288"))) PPC_WEAK_FUNC(sub_8317F288);
PPC_FUNC_IMPL(__imp__sub_8317F288) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x831678c0
	sub_831678C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F294"))) PPC_WEAK_FUNC(sub_8317F294);
PPC_FUNC_IMPL(__imp__sub_8317F294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317F298"))) PPC_WEAK_FUNC(sub_8317F298);
PPC_FUNC_IMPL(__imp__sub_8317F298) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// rlwinm r11,r8,26,0,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0xFC000000;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r3,r7,48
	ctx.r3.s64 = ctx.r7.s64 + 3145728;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F2B8"))) PPC_WEAK_FUNC(sub_8317F2B8);
PPC_FUNC_IMPL(__imp__sub_8317F2B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F2C0"))) PPC_WEAK_FUNC(sub_8317F2C0);
PPC_FUNC_IMPL(__imp__sub_8317F2C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F2C8"))) PPC_WEAK_FUNC(sub_8317F2C8);
PPC_FUNC_IMPL(__imp__sub_8317F2C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f13,56(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f12,60(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f11,64(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f10,68(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f9,72(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F300"))) PPC_WEAK_FUNC(sub_8317F300);
PPC_FUNC_IMPL(__imp__sub_8317F300) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F308"))) PPC_WEAK_FUNC(sub_8317F308);
PPC_FUNC_IMPL(__imp__sub_8317F308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f12,36(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f11,40(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f10,44(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f9,48(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F340"))) PPC_WEAK_FUNC(sub_8317F340);
PPC_FUNC_IMPL(__imp__sub_8317F340) {
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
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F354"))) PPC_WEAK_FUNC(sub_8317F354);
PPC_FUNC_IMPL(__imp__sub_8317F354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317F358"))) PPC_WEAK_FUNC(sub_8317F358);
PPC_FUNC_IMPL(__imp__sub_8317F358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,128(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stfs f2,132(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// blr 
	return;
}

