#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82C77630"))) PPC_WEAK_FUNC(sub_82C77630);
PPC_FUNC_IMPL(__imp__sub_82C77630) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
loc_82C77658:
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// slw r31,r7,r8
	ctx.r31.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// and. r4,r31,r4
	ctx.r4.u64 = ctx.r31.u64 & ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lbzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// slw r31,r7,r9
	ctx.r31.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// beq 0x82c7767c
	if (ctx.cr0.eq) goto loc_82C7767C;
	// or r4,r31,r4
	ctx.r4.u64 = ctx.r31.u64 | ctx.r4.u64;
	// b 0x82c77680
	goto loc_82C77680;
loc_82C7767C:
	// andc r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 & ~ctx.r31.u64;
loc_82C77680:
	// stbx r4,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c7769c
	if (!ctx.cr6.eq) goto loc_82C7769C;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r9,7
	ctx.r9.s64 = 7;
	// b 0x82c776a0
	goto loc_82C776A0;
loc_82C7769C:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_82C776A0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c77658
	if (!ctx.cr6.eq) goto loc_82C77658;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C776B8"))) PPC_WEAK_FUNC(sub_82C776B8);
PPC_FUNC_IMPL(__imp__sub_82C776B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C776BC"))) PPC_WEAK_FUNC(sub_82C776BC);
PPC_FUNC_IMPL(__imp__sub_82C776BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C776C0"))) PPC_WEAK_FUNC(sub_82C776C0);
PPC_FUNC_IMPL(__imp__sub_82C776C0) {
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
	// bl 0x82c774c0
	ctx.lr = 0x82C776E0;
	sub_82C774C0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c776fc
	if (ctx.cr0.eq) goto loc_82C776FC;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C776FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C776FC:
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

__attribute__((alias("__imp__sub_82C77718"))) PPC_WEAK_FUNC(sub_82C77718);
PPC_FUNC_IMPL(__imp__sub_82C77718) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C77720"))) PPC_WEAK_FUNC(sub_82C77720);
PPC_FUNC_IMPL(__imp__sub_82C77720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,148(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C77728"))) PPC_WEAK_FUNC(sub_82C77728);
PPC_FUNC_IMPL(__imp__sub_82C77728) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C77730"))) PPC_WEAK_FUNC(sub_82C77730);
PPC_FUNC_IMPL(__imp__sub_82C77730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C77744"))) PPC_WEAK_FUNC(sub_82C77744);
PPC_FUNC_IMPL(__imp__sub_82C77744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C77748"))) PPC_WEAK_FUNC(sub_82C77748);
PPC_FUNC_IMPL(__imp__sub_82C77748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,15412
	ctx.r11.s64 = ctx.r11.s64 + 15412;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C77760"))) PPC_WEAK_FUNC(sub_82C77760);
PPC_FUNC_IMPL(__imp__sub_82C77760) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c77780
	if (!ctx.cr6.eq) goto loc_82C77780;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_82C77780:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c77794
	if (!ctx.cr6.eq) goto loc_82C77794;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
loc_82C77794:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82c777a8
	if (ctx.cr0.eq) goto loc_82C777A8;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
loc_82C777A8:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82c777bc
	if (ctx.cr0.eq) goto loc_82C777BC;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
loc_82C777BC:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C777D8"))) PPC_WEAK_FUNC(sub_82C777D8);
PPC_FUNC_IMPL(__imp__sub_82C777D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82c7780c
	if (!ctx.cr0.eq) goto loc_82C7780C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r11,r11,15412
	ctx.r11.s64 = ctx.r11.s64 + 15412;
	// addi r10,r10,-21672
	ctx.r10.s64 = ctx.r10.s64 + -21672;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
loc_82C7780C:
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r9.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stb r8,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r8.u8);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82c77888
	if (!ctx.cr6.eq) goto loc_82C77888;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82c7786c
	if (!ctx.cr0.eq) goto loc_82C7786C;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// b 0x82c778ac
	goto loc_82C778AC;
loc_82C7786C:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// b 0x82c778ac
	goto loc_82C778AC;
loc_82C77888:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// beq 0x82c778a8
	if (ctx.cr0.eq) goto loc_82C778A8;
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// b 0x82c778ac
	goto loc_82C778AC;
loc_82C778A8:
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
loc_82C778AC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r10,r10,15412
	ctx.r10.s64 = ctx.r10.s64 + 15412;
	// addi r9,r9,-21672
	ctx.r9.s64 = ctx.r9.s64 + -21672;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C778CC"))) PPC_WEAK_FUNC(sub_82C778CC);
PPC_FUNC_IMPL(__imp__sub_82C778CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C778D0"))) PPC_WEAK_FUNC(sub_82C778D0);
PPC_FUNC_IMPL(__imp__sub_82C778D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C778E0"))) PPC_WEAK_FUNC(sub_82C778E0);
PPC_FUNC_IMPL(__imp__sub_82C778E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,15504
	ctx.r10.s64 = ctx.r11.s64 + 15504;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C77900"))) PPC_WEAK_FUNC(sub_82C77900);
PPC_FUNC_IMPL(__imp__sub_82C77900) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C77908"))) PPC_WEAK_FUNC(sub_82C77908);
PPC_FUNC_IMPL(__imp__sub_82C77908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82C77910;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82c7792c
	if (!ctx.cr6.eq) goto loc_82C7792C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c779b4
	goto loc_82C779B4;
loc_82C7792C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,96
	ctx.r31.s64 = ctx.r11.s64 + 96;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c779b0
	if (!ctx.cr6.gt) goto loc_82C779B0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82C77948:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq 0x82c77970
	if (ctx.cr0.eq) goto loc_82C77970;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82cb1690
	ctx.lr = 0x82C77968;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c77988
	if (ctx.cr0.eq) goto loc_82C77988;
loc_82C77970:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c77948
	if (ctx.cr6.lt) goto loc_82C77948;
	// b 0x82c779b0
	goto loc_82C779B0;
loc_82C77988:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,80(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,15412
	ctx.r11.s64 = ctx.r11.s64 + 15412;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82c777d8
	ctx.lr = 0x82C779B0;
	sub_82C777D8(ctx, base);
loc_82C779B0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C779B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C779BC"))) PPC_WEAK_FUNC(sub_82C779BC);
PPC_FUNC_IMPL(__imp__sub_82C779BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C779C0"))) PPC_WEAK_FUNC(sub_82C779C0);
PPC_FUNC_IMPL(__imp__sub_82C779C0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,80(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// addi r11,r11,15412
	ctx.r11.s64 = ctx.r11.s64 + 15412;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82c777d8
	ctx.lr = 0x82C779FC;
	sub_82C777D8(ctx, base);
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

__attribute__((alias("__imp__sub_82C77A14"))) PPC_WEAK_FUNC(sub_82C77A14);
PPC_FUNC_IMPL(__imp__sub_82C77A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C77A18"))) PPC_WEAK_FUNC(sub_82C77A18);
PPC_FUNC_IMPL(__imp__sub_82C77A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,15508
	ctx.r10.s64 = ctx.r11.s64 + 15508;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r9,r11,-21624
	ctx.r9.s64 = ctx.r11.s64 + -21624;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C77A48"))) PPC_WEAK_FUNC(sub_82C77A48);
PPC_FUNC_IMPL(__imp__sub_82C77A48) {
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
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82c77a84
	if (ctx.cr0.eq) goto loc_82C77A84;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,8884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C77A84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C77A84:
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

__attribute__((alias("__imp__sub_82C77A9C"))) PPC_WEAK_FUNC(sub_82C77A9C);
PPC_FUNC_IMPL(__imp__sub_82C77A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C77AA0"))) PPC_WEAK_FUNC(sub_82C77AA0);
PPC_FUNC_IMPL(__imp__sub_82C77AA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c77ac4
	if (ctx.cr6.eq) goto loc_82C77AC4;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82c77ac4
	if (ctx.cr6.eq) goto loc_82C77AC4;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
loc_82C77AC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C77ACC"))) PPC_WEAK_FUNC(sub_82C77ACC);
PPC_FUNC_IMPL(__imp__sub_82C77ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C77AD0"))) PPC_WEAK_FUNC(sub_82C77AD0);
PPC_FUNC_IMPL(__imp__sub_82C77AD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lbz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C77AFC"))) PPC_WEAK_FUNC(sub_82C77AFC);
PPC_FUNC_IMPL(__imp__sub_82C77AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C77B00"))) PPC_WEAK_FUNC(sub_82C77B00);
PPC_FUNC_IMPL(__imp__sub_82C77B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82C77B08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,15512
	ctx.r11.s64 = ctx.r11.s64 + 15512;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// beq cr6,0x82c77c28
	if (ctx.cr6.eq) goto loc_82C77C28;
	// lis r11,3276
	ctx.r11.s64 = 214695936;
	// li r3,-1
	ctx.r3.s64 = -1;
	// ori r11,r11,52428
	ctx.r11.u64 = ctx.r11.u64 | 52428;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// mulli r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 * 20;
	// ble cr6,0x82c77b60
	if (!ctx.cr6.gt) goto loc_82C77B60;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82C77B60:
	// li r10,-5
	ctx.r10.s64 = -5;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82c77b70
	if (ctx.cr6.gt) goto loc_82C77B70;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_82C77B70:
	// bl 0x82b6e518
	ctx.lr = 0x82C77B74;
	sub_82B6E518(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c77bbc
	if (ctx.cr0.eq) goto loc_82C77BBC;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addic. r10,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r10.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// blt 0x82c77bb4
	if (ctx.cr0.lt) goto loc_82C77BB4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r9,r9,15504
	ctx.r9.s64 = ctx.r9.s64 + 15504;
loc_82C77B98:
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// stb r29,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r29.u8);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// bge 0x82c77b98
	if (!ctx.cr0.lt) goto loc_82C77B98;
loc_82C77BB4:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82c77bc0
	goto loc_82C77BC0;
loc_82C77BBC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82C77BC0:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82c77c14
	if (!ctx.cr6.gt) goto loc_82C77C14;
	// li r11,20
	ctx.r11.s64 = 20;
loc_82C77BE0:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r9,-20
	ctx.r8.s64 = ctx.r9.s64 + -20;
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r9,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82c77be0
	if (ctx.cr6.lt) goto loc_82C77BE0;
loc_82C77C14:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r29.u32);
loc_82C77C28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C77C34"))) PPC_WEAK_FUNC(sub_82C77C34);
PPC_FUNC_IMPL(__imp__sub_82C77C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C77C38"))) PPC_WEAK_FUNC(sub_82C77C38);
PPC_FUNC_IMPL(__imp__sub_82C77C38) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,15512
	ctx.r11.s64 = ctx.r11.s64 + 15512;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// ble cr6,0x82c77ca0
	if (!ctx.cr6.gt) goto loc_82C77CA0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82c77ca0
	if (ctx.cr0.eq) goto loc_82C77CA0;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82c77c9c
	if (ctx.cr6.eq) goto loc_82C77C9C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C77C98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c77ca0
	goto loc_82C77CA0;
loc_82C77C9C:
	// bl 0x82294ab8
	ctx.lr = 0x82C77CA0;
	sub_82294AB8(ctx, base);
loc_82C77CA0:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
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

__attribute__((alias("__imp__sub_82C77CC0"))) PPC_WEAK_FUNC(sub_82C77CC0);
PPC_FUNC_IMPL(__imp__sub_82C77CC0) {
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
	// bl 0x82c77c38
	ctx.lr = 0x82C77CE0;
	sub_82C77C38(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c77cfc
	if (ctx.cr0.eq) goto loc_82C77CFC;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C77CFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C77CFC:
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

__attribute__((alias("__imp__sub_82C77D18"))) PPC_WEAK_FUNC(sub_82C77D18);
PPC_FUNC_IMPL(__imp__sub_82C77D18) {
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
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c77d8c
	if (ctx.cr0.eq) goto loc_82C77D8C;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r30,r31,-4
	ctx.r30.s64 = ctx.r31.s64 + -4;
	// mulli r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 * 20;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// blt 0x82c77d68
	if (ctx.cr0.lt) goto loc_82C77D68;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r9,r9,-21672
	ctx.r9.s64 = ctx.r9.s64 + -21672;
loc_82C77D58:
	// addi r10,r10,-20
	ctx.r10.s64 = ctx.r10.s64 + -20;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bge 0x82c77d58
	if (!ctx.cr0.lt) goto loc_82C77D58;
loc_82C77D68:
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c77d84
	if (ctx.cr0.eq) goto loc_82C77D84;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C77D84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C77D84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82c77db8
	goto loc_82C77DB8;
loc_82C77D8C:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82c77db4
	if (ctx.cr0.eq) goto loc_82C77DB4;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C77DB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C77DB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C77DB8:
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

__attribute__((alias("__imp__sub_82C77DD0"))) PPC_WEAK_FUNC(sub_82C77DD0);
PPC_FUNC_IMPL(__imp__sub_82C77DD0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// addi r11,r11,15412
	ctx.r11.s64 = ctx.r11.s64 + 15412;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82c77e04
	goto loc_82C77E04;
loc_82C77DF4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82c77e24
	if (ctx.cr6.eq) goto loc_82C77E24;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_82C77E04:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bne 0x82c77df4
	if (!ctx.cr0.eq) goto loc_82C77DF4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C77E14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C77E24:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82c77760
	ctx.lr = 0x82C77E2C;
	sub_82C77760(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82c77e14
	goto loc_82C77E14;
}

__attribute__((alias("__imp__sub_82C77E34"))) PPC_WEAK_FUNC(sub_82C77E34);
PPC_FUNC_IMPL(__imp__sub_82C77E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C77E38"))) PPC_WEAK_FUNC(sub_82C77E38);
PPC_FUNC_IMPL(__imp__sub_82C77E38) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82c77ebc
	if (!ctx.cr6.gt) goto loc_82C77EBC;
loc_82C77E70:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82c77ea0
	if (ctx.cr0.eq) goto loc_82C77EA0;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82C77EA0:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82c77e70
	if (ctx.cr6.lt) goto loc_82C77E70;
loc_82C77EBC:
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C77EC8"))) PPC_WEAK_FUNC(sub_82C77EC8);
PPC_FUNC_IMPL(__imp__sub_82C77EC8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 + 44;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// b 0x82c77f58
	goto loc_82C77F58;
loc_82C77F18:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82c77f48
	if (ctx.cr0.eq) goto loc_82C77F48;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82C77F48:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82C77F58:
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82c77f18
	if (ctx.cr6.lt) goto loc_82C77F18;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C77F70"))) PPC_WEAK_FUNC(sub_82C77F70);
PPC_FUNC_IMPL(__imp__sub_82C77F70) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lfs f0,14144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14144);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// lfs f13,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r9,r11,15520
	ctx.r9.s64 = ctx.r11.s64 + 15520;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,15516(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15516);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r9,r9,7496
	ctx.r9.s64 = ctx.r9.s64 + 7496;
	// addi r8,r11,15508
	ctx.r8.s64 = ctx.r11.s64 + 15508;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r7,r11,-21624
	ctx.r7.s64 = ctx.r11.s64 + -21624;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r7,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r7.u32);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// stb r11,24(r10)
	PPC_STORE_U8(ctx.r10.u32 + 24, ctx.r11.u8);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f13,64(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stb r11,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r11.u8);
	// stfs f12,72(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82c78070
	if (ctx.cr6.eq) goto loc_82C78070;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82C7802C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c7802c
	if (!ctx.cr6.eq) goto loc_82C7802C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x82b6e518
	ctx.lr = 0x82C78050;
	sub_82B6E518(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_82C78058:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82c78058
	if (!ctx.cr0.eq) goto loc_82C78058;
loc_82C78070:
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

__attribute__((alias("__imp__sub_82C7808C"))) PPC_WEAK_FUNC(sub_82C7808C);
PPC_FUNC_IMPL(__imp__sub_82C7808C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C78090"))) PPC_WEAK_FUNC(sub_82C78090);
PPC_FUNC_IMPL(__imp__sub_82C78090) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C78094"))) PPC_WEAK_FUNC(sub_82C78094);
PPC_FUNC_IMPL(__imp__sub_82C78094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C78098"))) PPC_WEAK_FUNC(sub_82C78098);
PPC_FUNC_IMPL(__imp__sub_82C78098) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,15520
	ctx.r11.s64 = ctx.r11.s64 + 15520;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82c780d8
	if (ctx.cr0.eq) goto loc_82C780D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C780D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C780D8:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c780f4
	if (ctx.cr0.eq) goto loc_82C780F4;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,8884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C780F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C780F4:
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x82c0b1b0
	ctx.lr = 0x82C780FC;
	sub_82C0B1B0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82C78124"))) PPC_WEAK_FUNC(sub_82C78124);
PPC_FUNC_IMPL(__imp__sub_82C78124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C78128"))) PPC_WEAK_FUNC(sub_82C78128);
PPC_FUNC_IMPL(__imp__sub_82C78128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82C78130;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82c7814c
	if (!ctx.cr6.eq) goto loc_82C7814C;
loc_82C78144:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c781c4
	goto loc_82C781C4;
loc_82C7814C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,80
	ctx.r31.s64 = ctx.r11.s64 + 80;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c78144
	if (!ctx.cr6.gt) goto loc_82C78144;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82C78168:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82cb1690
	ctx.lr = 0x82C7817C;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c7819c
	if (ctx.cr0.eq) goto loc_82C7819C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c78168
	if (ctx.cr6.lt) goto loc_82C78168;
	// b 0x82c78144
	goto loc_82C78144;
loc_82C7819C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq 0x82c78144
	if (ctx.cr0.eq) goto loc_82C78144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r27,44
	ctx.r3.s64 = ctx.r27.s64 + 44;
	// bl 0x82c0b210
	ctx.lr = 0x82C781C0;
	sub_82C0B210(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C781C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C781CC"))) PPC_WEAK_FUNC(sub_82C781CC);
PPC_FUNC_IMPL(__imp__sub_82C781CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C781D0"))) PPC_WEAK_FUNC(sub_82C781D0);
PPC_FUNC_IMPL(__imp__sub_82C781D0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82c781f8
	if (ctx.cr6.eq) goto loc_82C781F8;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82c781f8
	if (!ctx.cr6.eq) goto loc_82C781F8;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82C781F8:
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r4,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// stw r5,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r5.u32);
	// b 0x82c77e38
	sub_82C77E38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C78208"))) PPC_WEAK_FUNC(sub_82C78208);
PPC_FUNC_IMPL(__imp__sub_82C78208) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7820C"))) PPC_WEAK_FUNC(sub_82C7820C);
PPC_FUNC_IMPL(__imp__sub_82C7820C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C78210"))) PPC_WEAK_FUNC(sub_82C78210);
PPC_FUNC_IMPL(__imp__sub_82C78210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r10,r11,15508
	ctx.r10.s64 = ctx.r11.s64 + 15508;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r9,r11,-21624
	ctx.r9.s64 = ctx.r11.s64 + -21624;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// b 0x82c77e38
	sub_82C77E38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C78240"))) PPC_WEAK_FUNC(sub_82C78240);
PPC_FUNC_IMPL(__imp__sub_82C78240) {
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
	// bl 0x82c0bf90
	ctx.lr = 0x82C78258;
	sub_82C0BF90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,1024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82c782c0
	if (!ctx.cr0.gt) goto loc_82C782C0;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_82C78274:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82C78280:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x82c782a4
	if (ctx.cr0.eq) goto loc_82C782A4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82c78280
	if (ctx.cr6.eq) goto loc_82C78280;
loc_82C782A4:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82c782d0
	if (ctx.cr0.eq) goto loc_82C782D0;
	// lwz r10,1024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82c78274
	if (ctx.cr6.lt) goto loc_82C78274;
loc_82C782C0:
	// cmpwi cr6,r3,256
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 256, ctx.xer);
	// bne cr6,0x82c782dc
	if (!ctx.cr6.eq) goto loc_82C782DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c782f4
	goto loc_82C782F4;
loc_82C782D0:
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
	// b 0x82c782f0
	goto loc_82C782F0;
loc_82C782DC:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
	// lwz r10,1024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
loc_82C782F0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C782F4:
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

__attribute__((alias("__imp__sub_82C78308"))) PPC_WEAK_FUNC(sub_82C78308);
PPC_FUNC_IMPL(__imp__sub_82C78308) {
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
	// bl 0x82c78098
	ctx.lr = 0x82C78328;
	sub_82C78098(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c78344
	if (ctx.cr0.eq) goto loc_82C78344;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C78344;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C78344:
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

__attribute__((alias("__imp__sub_82C78360"))) PPC_WEAK_FUNC(sub_82C78360);
PPC_FUNC_IMPL(__imp__sub_82C78360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82C78368;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c783a8
	if (ctx.cr6.eq) goto loc_82C783A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c051a0
	ctx.lr = 0x82C78384;
	sub_82C051A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c783a8
	if (ctx.cr0.eq) goto loc_82C783A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c051a0
	ctx.lr = 0x82C78394;
	sub_82C051A0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// bne cr6,0x82c783a8
	if (!ctx.cr6.eq) goto loc_82C783A8;
loc_82C783A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82c785dc
	goto loc_82C785DC;
loc_82C783A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c051a0
	ctx.lr = 0x82C783B0;
	sub_82C051A0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-19524
	ctx.r11.s64 = ctx.r11.s64 + -19524;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C783C4;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82c78400
	if (!ctx.cr0.eq) goto loc_82C78400;
	// bl 0x82c05198
	ctx.lr = 0x82C783D4;
	sub_82C05198(ctx, base);
	// bl 0x82cb6c40
	ctx.lr = 0x82C783D8;
	sub_82CB6C40(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6480);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82c783a0
	if (ctx.cr6.lt) goto loc_82C783A0;
	// stfs f0,60(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 60, temp.u32);
	// b 0x82c783a0
	goto loc_82C783A0;
loc_82C78400:
	// bl 0x82c051a0
	ctx.lr = 0x82C78404;
	sub_82C051A0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-19512
	ctx.r11.s64 = ctx.r11.s64 + -19512;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C78418;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82c78454
	if (!ctx.cr0.eq) goto loc_82C78454;
	// bl 0x82c05198
	ctx.lr = 0x82C78428;
	sub_82C05198(ctx, base);
	// bl 0x82cb6c40
	ctx.lr = 0x82C7842C;
	sub_82CB6C40(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6480);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82c783a0
	if (ctx.cr6.lt) goto loc_82C783A0;
	// stfs f0,64(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 64, temp.u32);
	// b 0x82c783a0
	goto loc_82C783A0;
loc_82C78454:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r30,r11,-19500
	ctx.r30.s64 = ctx.r11.s64 + -19500;
	// bl 0x82c051a0
	ctx.lr = 0x82C78460;
	sub_82C051A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C78468;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82c78544
	if (!ctx.cr0.eq) goto loc_82C78544;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r11,6120
	ctx.r30.s64 = ctx.r11.s64 + 6120;
	// bl 0x82c05198
	ctx.lr = 0x82C78480;
	sub_82C05198(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C78488;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c78538
	if (ctx.cr0.eq) goto loc_82C78538;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-12384
	ctx.r30.s64 = ctx.r11.s64 + -12384;
	// bl 0x82c05198
	ctx.lr = 0x82C784A0;
	sub_82C05198(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C784A8;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c78538
	if (ctx.cr0.eq) goto loc_82C78538;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-16692
	ctx.r30.s64 = ctx.r11.s64 + -16692;
	// bl 0x82c05198
	ctx.lr = 0x82C784C0;
	sub_82C05198(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C784C8;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c78538
	if (ctx.cr0.eq) goto loc_82C78538;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,6116
	ctx.r30.s64 = ctx.r11.s64 + 6116;
	// bl 0x82c05198
	ctx.lr = 0x82C784E0;
	sub_82C05198(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C784E8;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c78530
	if (ctx.cr0.eq) goto loc_82C78530;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-12392
	ctx.r30.s64 = ctx.r11.s64 + -12392;
	// bl 0x82c05198
	ctx.lr = 0x82C78500;
	sub_82C05198(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C78508;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c78530
	if (ctx.cr0.eq) goto loc_82C78530;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,18988
	ctx.r30.s64 = ctx.r11.s64 + 18988;
	// bl 0x82c05198
	ctx.lr = 0x82C78520;
	sub_82C05198(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C78528;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c785d8
	if (!ctx.cr0.eq) goto loc_82C785D8;
loc_82C78530:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82c7853c
	goto loc_82C7853C;
loc_82C78538:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82C7853C:
	// stb r11,68(r29)
	PPC_STORE_U8(ctx.r29.u32 + 68, ctx.r11.u8);
	// b 0x82c783a0
	goto loc_82C783A0;
loc_82C78544:
	// bl 0x82c051a0
	ctx.lr = 0x82C78548;
	sub_82C051A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,15568
	ctx.r11.s64 = ctx.r11.s64 + 15568;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C7855C;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c783a0
	if (ctx.cr0.eq) goto loc_82C783A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c051a0
	ctx.lr = 0x82C7856C;
	sub_82C051A0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-19472
	ctx.r11.s64 = ctx.r11.s64 + -19472;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C78580;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82c785a0
	if (!ctx.cr0.eq) goto loc_82C785A0;
	// bl 0x82c05198
	ctx.lr = 0x82C78590;
	sub_82C05198(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c77908
	ctx.lr = 0x82C7859C;
	sub_82C77908(ctx, base);
	// b 0x82c783a0
	goto loc_82C783A0;
loc_82C785A0:
	// bl 0x82c051a0
	ctx.lr = 0x82C785A4;
	sub_82C051A0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-19376
	ctx.r11.s64 = ctx.r11.s64 + -19376;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C785B8;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c785d8
	if (!ctx.cr0.eq) goto loc_82C785D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c05198
	ctx.lr = 0x82C785C8;
	sub_82C05198(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c78128
	ctx.lr = 0x82C785D4;
	sub_82C78128(ctx, base);
	// b 0x82c783a0
	goto loc_82C783A0;
loc_82C785D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C785DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C785E4"))) PPC_WEAK_FUNC(sub_82C785E4);
PPC_FUNC_IMPL(__imp__sub_82C785E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C785E8"))) PPC_WEAK_FUNC(sub_82C785E8);
PPC_FUNC_IMPL(__imp__sub_82C785E8) {
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
	// bl 0x82c0bf18
	ctx.lr = 0x82C785F8;
	sub_82C0BF18(ctx, base);
	// lwz r3,1024(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7860C"))) PPC_WEAK_FUNC(sub_82C7860C);
PPC_FUNC_IMPL(__imp__sub_82C7860C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C78610"))) PPC_WEAK_FUNC(sub_82C78610);
PPC_FUNC_IMPL(__imp__sub_82C78610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82C78618;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,15300
	ctx.r9.s64 = ctx.r11.s64 + 15300;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
loc_82C78648:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82c78648
	if (!ctx.cr0.eq) goto loc_82C78648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c78240
	ctx.lr = 0x82C78664;
	sub_82C78240(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c78674
	if (!ctx.cr0.eq) goto loc_82C78674;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82c78680
	goto loc_82C78680;
loc_82C78674:
	// bl 0x82c0bf90
	ctx.lr = 0x82C78678;
	sub_82C0BF90(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82C78680:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r29,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r29.u32);
	// bne cr6,0x82c786a4
	if (!ctx.cr6.eq) goto loc_82C786A4;
	// bl 0x82c083b0
	ctx.lr = 0x82C7869C;
	sub_82C083B0(ctx, base);
	// stw r3,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r3.u32);
	// b 0x82c786ac
	goto loc_82C786AC;
loc_82C786A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
loc_82C786AC:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c786c8
	if (ctx.cr0.eq) goto loc_82C786C8;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r10,9028(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9028);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,9028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9028, ctx.r10.u32);
loc_82C786C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C786D4"))) PPC_WEAK_FUNC(sub_82C786D4);
PPC_FUNC_IMPL(__imp__sub_82C786D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C786D8"))) PPC_WEAK_FUNC(sub_82C786D8);
PPC_FUNC_IMPL(__imp__sub_82C786D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82C786E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r3,r29,44
	ctx.r3.s64 = ctx.r29.s64 + 44;
	// lwz r4,32(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// bl 0x82c0b300
	ctx.lr = 0x82C786FC;
	sub_82C0B300(ctx, base);
	// bl 0x82c0bf18
	ctx.lr = 0x82C78700;
	sub_82C0BF18(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r11,15568
	ctx.r4.s64 = ctx.r11.s64 + 15568;
	// lwz r31,1024(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1024);
	// bl 0x82c04e10
	ctx.lr = 0x82C78718;
	sub_82C04E10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c78734
	if (ctx.cr0.eq) goto loc_82C78734;
	// bl 0x82c05198
	ctx.lr = 0x82C78724;
	sub_82C05198(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c78734
	if (ctx.cr0.eq) goto loc_82C78734;
	// bl 0x82cb6a70
	ctx.lr = 0x82C78730;
	sub_82CB6A70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82C78734:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82b6e518
	ctx.lr = 0x82C7873C;
	sub_82B6E518(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c78750
	if (ctx.cr0.eq) goto loc_82C78750;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c77b00
	ctx.lr = 0x82C7874C;
	sub_82C77B00(ctx, base);
	// b 0x82c78754
	goto loc_82C78754;
loc_82C78750:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C78754:
	// stw r3,80(r29)
	PPC_STORE_U32(ctx.r29.u32 + 80, ctx.r3.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c787d8
	if (!ctx.cr6.gt) goto loc_82C787D8;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r27,r11,-21172
	ctx.r27.s64 = ctx.r11.s64 + -21172;
loc_82C78774:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c04fa8
	ctx.lr = 0x82C78780;
	sub_82C04FA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c051a0
	ctx.lr = 0x82C78788;
	sub_82C051A0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C78790;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c787a8
	if (!ctx.cr0.eq) goto loc_82C787A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c05198
	ctx.lr = 0x82C787A0;
	sub_82C05198(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x82c787c8
	goto loc_82C787C8;
loc_82C787A8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C787C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c788e0
	if (ctx.cr0.eq) goto loc_82C788E0;
loc_82C787C8:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c78774
	if (ctx.cr6.lt) goto loc_82C78774;
loc_82C787D8:
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c7884c
	if (!ctx.cr6.gt) goto loc_82C7884C;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r28,r11,-19384
	ctx.r28.s64 = ctx.r11.s64 + -19384;
loc_82C787F0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c04fa8
	ctx.lr = 0x82C787FC;
	sub_82C04FA8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82c7881c
	if (ctx.cr0.eq) goto loc_82C7881C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c051a0
	ctx.lr = 0x82C7880C;
	sub_82C051A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C78814;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c7883c
	if (ctx.cr0.eq) goto loc_82C7883C;
loc_82C7881C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C78834;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c788e0
	if (ctx.cr0.eq) goto loc_82C788E0;
loc_82C7883C:
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c787f0
	if (ctx.cr6.lt) goto loc_82C787F0;
loc_82C7884C:
	// lbz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 68);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82c78874
	if (!ctx.cr0.eq) goto loc_82C78874;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r4,32(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C78874;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C78874:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lfs f13,60(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82c78894
	if (!ctx.cr6.gt) goto loc_82C78894;
	// stfs f0,60(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 60, temp.u32);
loc_82C78894:
	// lfs f13,64(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82c788a4
	if (!ctx.cr6.gt) goto loc_82C788A4;
	// stfs f0,64(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 64, temp.u32);
loc_82C788A4:
	// bl 0x82c0d1b0
	ctx.lr = 0x82C788A8;
	sub_82C0D1B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 120);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82c788d4
	if (ctx.cr0.eq) goto loc_82C788D4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82c0d500
	ctx.lr = 0x82C788C0;
	sub_82C0D500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt 0x82c788d4
	if (ctx.cr0.lt) goto loc_82C788D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c0d700
	ctx.lr = 0x82C788D0;
	sub_82C0D700(ctx, base);
	// stfs f1,72(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 72, temp.u32);
loc_82C788D4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C788D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82C788E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c788d8
	goto loc_82C788D8;
}

__attribute__((alias("__imp__sub_82C788E8"))) PPC_WEAK_FUNC(sub_82C788E8);
PPC_FUNC_IMPL(__imp__sub_82C788E8) {
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
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c78610
	ctx.lr = 0x82C78908;
	sub_82C78610(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,15580
	ctx.r11.s64 = ctx.r11.s64 + 15580;
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

__attribute__((alias("__imp__sub_82C7892C"))) PPC_WEAK_FUNC(sub_82C7892C);
PPC_FUNC_IMPL(__imp__sub_82C7892C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C78930"))) PPC_WEAK_FUNC(sub_82C78930);
PPC_FUNC_IMPL(__imp__sub_82C78930) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,15300
	ctx.r11.s64 = ctx.r11.s64 + 15300;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82c7895c
	if (ctx.cr0.eq) goto loc_82C7895C;
	// bl 0x822990f0
	ctx.lr = 0x82C7895C;
	sub_822990F0(ctx, base);
loc_82C7895C:
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

__attribute__((alias("__imp__sub_82C78974"))) PPC_WEAK_FUNC(sub_82C78974);
PPC_FUNC_IMPL(__imp__sub_82C78974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C78978"))) PPC_WEAK_FUNC(sub_82C78978);
PPC_FUNC_IMPL(__imp__sub_82C78978) {
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
	// bl 0x82c786d8
	ctx.lr = 0x82C78994;
	sub_82C786D8(ctx, base);
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,31088
	ctx.r4.s64 = ctx.r11.s64 + 31088;
	// bl 0x82c0a978
	ctx.lr = 0x82C789A8;
	sub_82C0A978(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r3.u32);
	// bne 0x82c789b8
	if (!ctx.cr0.eq) goto loc_82C789B8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82C789B8:
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

__attribute__((alias("__imp__sub_82C789D4"))) PPC_WEAK_FUNC(sub_82C789D4);
PPC_FUNC_IMPL(__imp__sub_82C789D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C789D8"))) PPC_WEAK_FUNC(sub_82C789D8);
PPC_FUNC_IMPL(__imp__sub_82C789D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82C789E0;
	__savegprlr_22(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r4,r11,32192
	ctx.r4.s64 = ctx.r11.s64 + 32192;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// bl 0x82c383a0
	ctx.lr = 0x82C78A0C;
	sub_82C383A0(ctx, base);
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r11,4992
	ctx.r30.s64 = ctx.r11.s64 + 4992;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c383a0
	ctx.lr = 0x82C78A28;
	sub_82C383A0(ctx, base);
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r11,32468
	ctx.r4.s64 = ctx.r11.s64 + 32468;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c383a0
	ctx.lr = 0x82C78A40;
	sub_82C383A0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c383a0
	ctx.lr = 0x82C78A54;
	sub_82C383A0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r11,r11,5496
	ctx.r11.s64 = ctx.r11.s64 + 5496;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f0,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// lfs f0,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// li r10,16
	ctx.r10.s64 = 16;
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82C78A8C:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82c78a8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C78A8C;
	// stb r23,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r23.u8);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82c78ac0
	if (ctx.cr6.eq) goto loc_82C78AC0;
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f0,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f0,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stb r23,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r23.u8);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
loc_82C78AC0:
	// lfs f0,52(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// stfs f0,228(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// lfs f0,56(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// stfs f0,232(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// lfs f0,60(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,236(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82C78AEC:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82c78aec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C78AEC;
	// stb r23,312(r1)
	PPC_STORE_U8(ctx.r1.u32 + 312, ctx.r23.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c78b20
	if (ctx.cr6.eq) goto loc_82C78B20;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,228(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,232(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stb r23,312(r1)
	PPC_STORE_U8(ctx.r1.u32 + 312, ctx.r23.u8);
	// stfs f0,236(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
loc_82C78B20:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r30,r11,-31892
	ctx.r30.s64 = ctx.r11.s64 + -31892;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// bl 0x82c273a0
	ctx.lr = 0x82C78B3C;
	sub_82C273A0(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// bl 0x82c273a0
	ctx.lr = 0x82C78B50;
	sub_82C273A0(ctx, base);
	// lfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lfs f0,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// beq cr6,0x82c78bc8
	if (ctx.cr6.eq) goto loc_82C78BC8;
	// lfs f2,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// lfs f1,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// beq cr6,0x82c78b98
	if (ctx.cr6.eq) goto loc_82C78B98;
	// lfs f0,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,12(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_82C78B98:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// bl 0x82c759f8
	ctx.lr = 0x82C78BA8;
	sub_82C759F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c78bc8
	if (!ctx.cr0.eq) goto loc_82C78BC8;
	// li r31,1
	ctx.r31.s64 = 1;
	// stb r23,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r23.u8);
loc_82C78BB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C78BBC:
	// stb r31,0(r22)
	PPC_STORE_U8(ctx.r22.u32 + 0, ctx.r31.u8);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82C78BC8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,216(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 216);
	// li r31,1
	ctx.r31.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// bl 0x82bbb400
	ctx.lr = 0x82C78BEC;
	sub_82BBB400(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c78bfc
	if (!ctx.cr0.eq) goto loc_82C78BFC;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x82c78bbc
	goto loc_82C78BBC;
loc_82C78BFC:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r11,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r11.u8);
	// b 0x82c78bb8
	goto loc_82C78BB8;
}

__attribute__((alias("__imp__sub_82C78C08"))) PPC_WEAK_FUNC(sub_82C78C08);
PPC_FUNC_IMPL(__imp__sub_82C78C08) {
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
	// bl 0x82c76010
	ctx.lr = 0x82C78C20;
	sub_82C76010(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,15620
	ctx.r11.s64 = ctx.r11.s64 + 15620;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82C78C4C"))) PPC_WEAK_FUNC(sub_82C78C4C);
PPC_FUNC_IMPL(__imp__sub_82C78C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C78C50"))) PPC_WEAK_FUNC(sub_82C78C50);
PPC_FUNC_IMPL(__imp__sub_82C78C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// addi r3,r11,31916
	ctx.r3.s64 = ctx.r11.s64 + 31916;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C78C5C"))) PPC_WEAK_FUNC(sub_82C78C5C);
PPC_FUNC_IMPL(__imp__sub_82C78C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C78C60"))) PPC_WEAK_FUNC(sub_82C78C60);
PPC_FUNC_IMPL(__imp__sub_82C78C60) {
	PPC_FUNC_PROLOGUE();
	// b 0x82c770a0
	sub_82C770A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C78C64"))) PPC_WEAK_FUNC(sub_82C78C64);
PPC_FUNC_IMPL(__imp__sub_82C78C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C78C68"))) PPC_WEAK_FUNC(sub_82C78C68);
PPC_FUNC_IMPL(__imp__sub_82C78C68) {
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
	// bl 0x82c770a0
	ctx.lr = 0x82C78C88;
	sub_82C770A0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c78ca4
	if (ctx.cr0.eq) goto loc_82C78CA4;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C78CA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C78CA4:
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

__attribute__((alias("__imp__sub_82C78CC0"))) PPC_WEAK_FUNC(sub_82C78CC0);
PPC_FUNC_IMPL(__imp__sub_82C78CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82C78CC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,220
	ctx.r3.s64 = 220;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82b6e518
	ctx.lr = 0x82C78CE0;
	sub_82B6E518(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82c78d18
	if (ctx.cr0.eq) goto loc_82C78D18;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c76010
	ctx.lr = 0x82C78CFC;
	sub_82C76010(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,15620
	ctx.r11.s64 = ctx.r11.s64 + 15620;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82c78d1c
	goto loc_82C78D1C;
loc_82C78D18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C78D1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C78D24"))) PPC_WEAK_FUNC(sub_82C78D24);
PPC_FUNC_IMPL(__imp__sub_82C78D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C78D28"))) PPC_WEAK_FUNC(sub_82C78D28);
PPC_FUNC_IMPL(__imp__sub_82C78D28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,15700
	ctx.r11.s64 = ctx.r11.s64 + 15700;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lwz r11,28104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28104);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82c78d4c
	if (ctx.cr0.eq) goto loc_82C78D4C;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82c78d54
	goto loc_82C78D54;
loc_82C78D4C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
loc_82C78D54:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6148);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,-18312(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18312);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C78D74"))) PPC_WEAK_FUNC(sub_82C78D74);
PPC_FUNC_IMPL(__imp__sub_82C78D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C78D78"))) PPC_WEAK_FUNC(sub_82C78D78);
PPC_FUNC_IMPL(__imp__sub_82C78D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C78D88"))) PPC_WEAK_FUNC(sub_82C78D88);
PPC_FUNC_IMPL(__imp__sub_82C78D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// addi r3,r11,32192
	ctx.r3.s64 = ctx.r11.s64 + 32192;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C78D94"))) PPC_WEAK_FUNC(sub_82C78D94);
PPC_FUNC_IMPL(__imp__sub_82C78D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C78D98"))) PPC_WEAK_FUNC(sub_82C78D98);
PPC_FUNC_IMPL(__imp__sub_82C78D98) {
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
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82c78dd0
	if (ctx.cr0.eq) goto loc_82C78DD0;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,8884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C78DD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C78DD0:
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

__attribute__((alias("__imp__sub_82C78DE8"))) PPC_WEAK_FUNC(sub_82C78DE8);
PPC_FUNC_IMPL(__imp__sub_82C78DE8) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82b6e518
	ctx.lr = 0x82C78DFC;
	sub_82B6E518(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c78e0c
	if (ctx.cr0.eq) goto loc_82C78E0C;
	// bl 0x82c78d28
	ctx.lr = 0x82C78E08;
	sub_82C78D28(ctx, base);
	// b 0x82c78e10
	goto loc_82C78E10;
loc_82C78E0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C78E10:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C78E20"))) PPC_WEAK_FUNC(sub_82C78E20);
PPC_FUNC_IMPL(__imp__sub_82C78E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82c78e40
	if (ctx.cr6.lt) goto loc_82C78E40;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-18328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18328);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82c78e48
	if (!ctx.cr6.gt) goto loc_82C78E48;
loc_82C78E40:
	// stfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
loc_82C78E48:
	// stfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C78E50"))) PPC_WEAK_FUNC(sub_82C78E50);
PPC_FUNC_IMPL(__imp__sub_82C78E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// stfs f1,4(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C78E68"))) PPC_WEAK_FUNC(sub_82C78E68);
PPC_FUNC_IMPL(__imp__sub_82C78E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82C78E70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C78E90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C78EA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82c78ef0
	if (!ctx.cr6.eq) goto loc_82C78EF0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82c78ec8
	if (ctx.cr6.lt) goto loc_82C78EC8;
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
loc_82C78EC8:
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82c78ee4
	if (ctx.cr6.lt) goto loc_82C78EE4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-18328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18328);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82c78eec
	if (!ctx.cr6.gt) goto loc_82C78EEC;
loc_82C78EE4:
	// stfs f13,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// b 0x82c78ef0
	goto loc_82C78EF0;
loc_82C78EEC:
	// stfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_82C78EF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C78EFC"))) PPC_WEAK_FUNC(sub_82C78EFC);
PPC_FUNC_IMPL(__imp__sub_82C78EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C78F00"))) PPC_WEAK_FUNC(sub_82C78F00);
PPC_FUNC_IMPL(__imp__sub_82C78F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// addi r11,r11,15744
	ctx.r11.s64 = ctx.r11.s64 + 15744;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C78F24"))) PPC_WEAK_FUNC(sub_82C78F24);
PPC_FUNC_IMPL(__imp__sub_82C78F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C78F28"))) PPC_WEAK_FUNC(sub_82C78F28);
PPC_FUNC_IMPL(__imp__sub_82C78F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C78F38"))) PPC_WEAK_FUNC(sub_82C78F38);
PPC_FUNC_IMPL(__imp__sub_82C78F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// addi r3,r11,32468
	ctx.r3.s64 = ctx.r11.s64 + 32468;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C78F44"))) PPC_WEAK_FUNC(sub_82C78F44);
PPC_FUNC_IMPL(__imp__sub_82C78F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C78F48"))) PPC_WEAK_FUNC(sub_82C78F48);
PPC_FUNC_IMPL(__imp__sub_82C78F48) {
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
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82c78f80
	if (ctx.cr0.eq) goto loc_82C78F80;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,8884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C78F80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C78F80:
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

__attribute__((alias("__imp__sub_82C78F98"))) PPC_WEAK_FUNC(sub_82C78F98);
PPC_FUNC_IMPL(__imp__sub_82C78F98) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82b6e518
	ctx.lr = 0x82C78FAC;
	sub_82B6E518(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c78fd8
	if (ctx.cr0.eq) goto loc_82C78FD8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,15744
	ctx.r11.s64 = ctx.r11.s64 + 15744;
	// lfs f0,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x82c78fdc
	goto loc_82C78FDC;
loc_82C78FD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C78FDC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C78FEC"))) PPC_WEAK_FUNC(sub_82C78FEC);
PPC_FUNC_IMPL(__imp__sub_82C78FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C78FF0"))) PPC_WEAK_FUNC(sub_82C78FF0);
PPC_FUNC_IMPL(__imp__sub_82C78FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82C78FF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C79018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C79030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82c79050
	if (!ctx.cr6.eq) goto loc_82C79050;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_82C79050:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C7905C"))) PPC_WEAK_FUNC(sub_82C7905C);
PPC_FUNC_IMPL(__imp__sub_82C7905C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C79060"))) PPC_WEAK_FUNC(sub_82C79060);
PPC_FUNC_IMPL(__imp__sub_82C79060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// addi r11,r11,15788
	ctx.r11.s64 = ctx.r11.s64 + 15788;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C79090"))) PPC_WEAK_FUNC(sub_82C79090);
PPC_FUNC_IMPL(__imp__sub_82C79090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C790C4"))) PPC_WEAK_FUNC(sub_82C790C4);
PPC_FUNC_IMPL(__imp__sub_82C790C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C790C8"))) PPC_WEAK_FUNC(sub_82C790C8);
PPC_FUNC_IMPL(__imp__sub_82C790C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C790D8"))) PPC_WEAK_FUNC(sub_82C790D8);
PPC_FUNC_IMPL(__imp__sub_82C790D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82C790E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82c790fc
	if (!ctx.cr6.eq) goto loc_82C790FC;
loc_82C790F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c7918c
	goto loc_82C7918C;
loc_82C790FC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,15808
	ctx.r30.s64 = ctx.r11.s64 + 15808;
	// bl 0x82c051a0
	ctx.lr = 0x82C7910C;
	sub_82C051A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C79114;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82c79140
	if (!ctx.cr0.eq) goto loc_82C79140;
	// bl 0x82c05198
	ctx.lr = 0x82C79124;
	sub_82C05198(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c790f4
	if (ctx.cr0.eq) goto loc_82C790F4;
	// bl 0x82cb6a70
	ctx.lr = 0x82C79130;
	sub_82CB6A70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// b 0x82c7918c
	goto loc_82C7918C;
loc_82C79140:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r11,15792
	ctx.r30.s64 = ctx.r11.s64 + 15792;
	// bl 0x82c051a0
	ctx.lr = 0x82C7914C;
	sub_82C051A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C79154;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c79180
	if (!ctx.cr0.eq) goto loc_82C79180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c05198
	ctx.lr = 0x82C79164;
	sub_82C05198(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c790f4
	if (ctx.cr0.eq) goto loc_82C790F4;
	// bl 0x82cb6a70
	ctx.lr = 0x82C79170;
	sub_82CB6A70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// b 0x82c7918c
	goto loc_82C7918C;
loc_82C79180:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82baaff8
	ctx.lr = 0x82C7918C;
	sub_82BAAFF8(ctx, base);
loc_82C7918C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C79194"))) PPC_WEAK_FUNC(sub_82C79194);
PPC_FUNC_IMPL(__imp__sub_82C79194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C79198"))) PPC_WEAK_FUNC(sub_82C79198);
PPC_FUNC_IMPL(__imp__sub_82C79198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82C791A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c79200
	if (!ctx.cr6.gt) goto loc_82C79200;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82C791C0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c791ec
	if (ctx.cr6.eq) goto loc_82C791EC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C791EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C791EC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c791c0
	if (ctx.cr6.lt) goto loc_82C791C0;
loc_82C79200:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C7920C"))) PPC_WEAK_FUNC(sub_82C7920C);
PPC_FUNC_IMPL(__imp__sub_82C7920C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C79210"))) PPC_WEAK_FUNC(sub_82C79210);
PPC_FUNC_IMPL(__imp__sub_82C79210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82C79218;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c79278
	if (!ctx.cr6.gt) goto loc_82C79278;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82C79238:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c79264
	if (ctx.cr6.eq) goto loc_82C79264;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C79264;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C79264:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c79238
	if (ctx.cr6.lt) goto loc_82C79238;
loc_82C79278:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C79284"))) PPC_WEAK_FUNC(sub_82C79284);
PPC_FUNC_IMPL(__imp__sub_82C79284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C79288"))) PPC_WEAK_FUNC(sub_82C79288);
PPC_FUNC_IMPL(__imp__sub_82C79288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82C79290;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82c792b4
	if (ctx.cr6.lt) goto loc_82C792B4;
loc_82C792AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c793e4
	goto loc_82C793E4;
loc_82C792B4:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r28.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bne 0x82c79384
	if (!ctx.cr0.eq) goto loc_82C79384;
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// addi r4,r11,4440
	ctx.r4.s64 = ctx.r11.s64 + 4440;
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lwz r3,28104(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28104);
	// bl 0x82c017f8
	ctx.lr = 0x82C792EC;
	sub_82C017F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// beq 0x82c792ac
	if (ctx.cr0.eq) goto loc_82C792AC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c793e0
	if (!ctx.cr6.gt) goto loc_82C793E0;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82C7930C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r28,r11,r27
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lbz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 136);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82c79368
	if (ctx.cr0.eq) goto loc_82C79368;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c79368
	if (!ctx.cr6.gt) goto loc_82C79368;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82C79338:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,132(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C79354;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c79338
	if (ctx.cr6.lt) goto loc_82C79338;
loc_82C79368:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c7930c
	if (ctx.cr6.lt) goto loc_82C7930C;
	// b 0x82c793e0
	goto loc_82C793E0;
loc_82C79384:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c793e0
	if (!ctx.cr6.gt) goto loc_82C793E0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82C79398:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lbz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 136);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82c793c8
	if (ctx.cr0.eq) goto loc_82C793C8;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C793C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C793C8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c79398
	if (ctx.cr6.lt) goto loc_82C79398;
loc_82C793E0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C793E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C793EC"))) PPC_WEAK_FUNC(sub_82C793EC);
PPC_FUNC_IMPL(__imp__sub_82C793EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C793F0"))) PPC_WEAK_FUNC(sub_82C793F0);
PPC_FUNC_IMPL(__imp__sub_82C793F0) {
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C79420;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82c79460
	if (ctx.cr0.eq) goto loc_82C79460;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82C79438:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82c7945c
	if (ctx.cr6.eq) goto loc_82C7945C;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82c79438
	if (ctx.cr6.lt) goto loc_82C79438;
	// b 0x82c79460
	goto loc_82C79460;
loc_82C7945C:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82C79460:
	// clrlwi. r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82c794b4
	if (ctx.cr0.eq) goto loc_82C794B4;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82c794a0
	if (!ctx.cr6.lt) goto loc_82C794A0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82C79478:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82c79478
	if (ctx.cr6.lt) goto loc_82C79478;
loc_82C794A0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82c794b8
	goto loc_82C794B8;
loc_82C794B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C794B8:
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

__attribute__((alias("__imp__sub_82C794D0"))) PPC_WEAK_FUNC(sub_82C794D0);
PPC_FUNC_IMPL(__imp__sub_82C794D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C794E0"))) PPC_WEAK_FUNC(sub_82C794E0);
PPC_FUNC_IMPL(__imp__sub_82C794E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C794E8"))) PPC_WEAK_FUNC(sub_82C794E8);
PPC_FUNC_IMPL(__imp__sub_82C794E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C794F0"))) PPC_WEAK_FUNC(sub_82C794F0);
PPC_FUNC_IMPL(__imp__sub_82C794F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r11,r11,15828
	ctx.r11.s64 = ctx.r11.s64 + 15828;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C79504"))) PPC_WEAK_FUNC(sub_82C79504);
PPC_FUNC_IMPL(__imp__sub_82C79504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C79508"))) PPC_WEAK_FUNC(sub_82C79508);
PPC_FUNC_IMPL(__imp__sub_82C79508) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C79514"))) PPC_WEAK_FUNC(sub_82C79514);
PPC_FUNC_IMPL(__imp__sub_82C79514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C79518"))) PPC_WEAK_FUNC(sub_82C79518);
PPC_FUNC_IMPL(__imp__sub_82C79518) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7952C"))) PPC_WEAK_FUNC(sub_82C7952C);
PPC_FUNC_IMPL(__imp__sub_82C7952C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C79530"))) PPC_WEAK_FUNC(sub_82C79530);
PPC_FUNC_IMPL(__imp__sub_82C79530) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C79540"))) PPC_WEAK_FUNC(sub_82C79540);
PPC_FUNC_IMPL(__imp__sub_82C79540) {
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
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82c79578
	if (ctx.cr0.eq) goto loc_82C79578;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,8884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C79578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C79578:
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

__attribute__((alias("__imp__sub_82C79590"))) PPC_WEAK_FUNC(sub_82C79590);
PPC_FUNC_IMPL(__imp__sub_82C79590) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c795b0
	if (!ctx.cr6.eq) goto loc_82C795B0;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_82C795B0:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c795c4
	if (!ctx.cr6.eq) goto loc_82C795C4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
loc_82C795C4:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82c795d8
	if (ctx.cr0.eq) goto loc_82C795D8;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
loc_82C795D8:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82c795ec
	if (ctx.cr0.eq) goto loc_82C795EC;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
loc_82C795EC:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C79608"))) PPC_WEAK_FUNC(sub_82C79608);
PPC_FUNC_IMPL(__imp__sub_82C79608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C79618"))) PPC_WEAK_FUNC(sub_82C79618);
PPC_FUNC_IMPL(__imp__sub_82C79618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,15828
	ctx.r11.s64 = ctx.r11.s64 + 15828;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C79630"))) PPC_WEAK_FUNC(sub_82C79630);
PPC_FUNC_IMPL(__imp__sub_82C79630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,15832
	ctx.r10.s64 = ctx.r11.s64 + 15832;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C79650"))) PPC_WEAK_FUNC(sub_82C79650);
PPC_FUNC_IMPL(__imp__sub_82C79650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82C79658;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c79844
	if (!ctx.cr6.eq) goto loc_82C79844;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r11.u32);
	// ble cr6,0x82c796c4
	if (!ctx.cr6.gt) goto loc_82C796C4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82C7968C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C796A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r11,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r11.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c7968c
	if (ctx.cr6.lt) goto loc_82C7968C;
loc_82C796C4:
	// lwz r31,24(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82c7976c
	if (ctx.cr0.eq) goto loc_82C7976C;
	// lis r11,2340
	ctx.r11.s64 = 153354240;
	// li r3,-1
	ctx.r3.s64 = -1;
	// ori r11,r11,37449
	ctx.r11.u64 = ctx.r11.u64 | 37449;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// mulli r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 * 28;
	// ble cr6,0x82c796ec
	if (!ctx.cr6.gt) goto loc_82C796EC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82C796EC:
	// li r10,-5
	ctx.r10.s64 = -5;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82c796fc
	if (ctx.cr6.gt) goto loc_82C796FC;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_82C796FC:
	// bl 0x82b6e518
	ctx.lr = 0x82C79700;
	sub_82B6E518(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c79764
	if (ctx.cr0.eq) goto loc_82C79764;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addic. r10,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r10.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// blt 0x82c7975c
	if (ctx.cr0.lt) goto loc_82C7975C;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r9,12
	ctx.r11.s64 = ctx.r9.s64 + 12;
	// addi r8,r8,15788
	ctx.r8.s64 = ctx.r8.s64 + 15788;
	// lfs f0,6048(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
loc_82C79730:
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 + 28;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// bge 0x82c79730
	if (!ctx.cr0.lt) goto loc_82C79730;
loc_82C7975C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82c79768
	goto loc_82C79768;
loc_82C79764:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C79768:
	// stw r11,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r11.u32);
loc_82C7976C:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c79844
	if (!ctx.cr6.gt) goto loc_82C79844;
	// li r25,0
	ctx.r25.s64 = 0;
loc_82C79784:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwzx r30,r11,r25
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C797A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C797BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c79830
	if (ctx.cr0.eq) goto loc_82C79830;
	// mulli r29,r26,28
	ctx.r29.s64 = ctx.r26.s64 * 28;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
loc_82C797CC:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lfs f0,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C79828;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82c797cc
	if (ctx.cr6.lt) goto loc_82C797CC;
loc_82C79830:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c79784
	if (ctx.cr6.lt) goto loc_82C79784;
loc_82C79844:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// lwz r3,24(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C79858"))) PPC_WEAK_FUNC(sub_82C79858);
PPC_FUNC_IMPL(__imp__sub_82C79858) {
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
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c798cc
	if (ctx.cr0.eq) goto loc_82C798CC;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r30,r31,-4
	ctx.r30.s64 = ctx.r31.s64 + -4;
	// mulli r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 * 28;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// blt 0x82c798a8
	if (ctx.cr0.lt) goto loc_82C798A8;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r9,r9,-21672
	ctx.r9.s64 = ctx.r9.s64 + -21672;
loc_82C79898:
	// addi r10,r10,-28
	ctx.r10.s64 = ctx.r10.s64 + -28;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bge 0x82c79898
	if (!ctx.cr0.lt) goto loc_82C79898;
loc_82C798A8:
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c798c4
	if (ctx.cr0.eq) goto loc_82C798C4;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C798C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C798C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82c798f8
	goto loc_82C798F8;
loc_82C798CC:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82c798f4
	if (ctx.cr0.eq) goto loc_82C798F4;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C798F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C798F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C798F8:
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

__attribute__((alias("__imp__sub_82C79910"))) PPC_WEAK_FUNC(sub_82C79910);
PPC_FUNC_IMPL(__imp__sub_82C79910) {
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
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7993C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31902
	ctx.r11.s64 = -2090729472;
	// addi r11,r11,-23664
	ctx.r11.s64 = ctx.r11.s64 + -23664;
loc_82C79944:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82c79994
	if (ctx.cr6.eq) goto loc_82C79994;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82c79944
	if (!ctx.cr0.eq) goto loc_82C79944;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C7995C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c7997c
	if (ctx.cr0.eq) goto loc_82C7997C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7997C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C7997C:
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
loc_82C79994:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82c7995c
	goto loc_82C7995C;
}

__attribute__((alias("__imp__sub_82C7999C"))) PPC_WEAK_FUNC(sub_82C7999C);
PPC_FUNC_IMPL(__imp__sub_82C7999C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C799A0"))) PPC_WEAK_FUNC(sub_82C799A0);
PPC_FUNC_IMPL(__imp__sub_82C799A0) {
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
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C799CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31902
	ctx.r11.s64 = -2090729472;
	// addi r11,r11,-23664
	ctx.r11.s64 = ctx.r11.s64 + -23664;
loc_82C799D4:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82c79a24
	if (ctx.cr6.eq) goto loc_82C79A24;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82c799d4
	if (!ctx.cr0.eq) goto loc_82C799D4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C799EC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c79a0c
	if (ctx.cr0.eq) goto loc_82C79A0C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C79A0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C79A0C:
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
loc_82C79A24:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82c799ec
	goto loc_82C799EC;
}

__attribute__((alias("__imp__sub_82C79A2C"))) PPC_WEAK_FUNC(sub_82C79A2C);
PPC_FUNC_IMPL(__imp__sub_82C79A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C79A30"))) PPC_WEAK_FUNC(sub_82C79A30);
PPC_FUNC_IMPL(__imp__sub_82C79A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r11,r11,15828
	ctx.r11.s64 = ctx.r11.s64 + 15828;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C79A48"))) PPC_WEAK_FUNC(sub_82C79A48);
PPC_FUNC_IMPL(__imp__sub_82C79A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82C79A50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,15836
	ctx.r11.s64 = ctx.r11.s64 + 15836;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// beq cr6,0x82c79b70
	if (ctx.cr6.eq) goto loc_82C79B70;
	// lis r11,2340
	ctx.r11.s64 = 153354240;
	// li r3,-1
	ctx.r3.s64 = -1;
	// ori r11,r11,37449
	ctx.r11.u64 = ctx.r11.u64 | 37449;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// mulli r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 * 28;
	// ble cr6,0x82c79aa8
	if (!ctx.cr6.gt) goto loc_82C79AA8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82C79AA8:
	// li r10,-5
	ctx.r10.s64 = -5;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82c79ab8
	if (ctx.cr6.gt) goto loc_82C79AB8;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_82C79AB8:
	// bl 0x82b6e518
	ctx.lr = 0x82C79ABC;
	sub_82B6E518(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c79b04
	if (ctx.cr0.eq) goto loc_82C79B04;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addic. r10,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r10.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// blt 0x82c79afc
	if (ctx.cr0.lt) goto loc_82C79AFC;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r9,r9,15832
	ctx.r9.s64 = ctx.r9.s64 + 15832;
loc_82C79AE0:
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r29,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r29.u32);
	// stb r29,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r29.u8);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// bge 0x82c79ae0
	if (!ctx.cr0.lt) goto loc_82C79AE0;
loc_82C79AFC:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82c79b08
	goto loc_82C79B08;
loc_82C79B04:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82C79B08:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82c79b5c
	if (!ctx.cr6.gt) goto loc_82C79B5C;
	// li r11,28
	ctx.r11.s64 = 28;
loc_82C79B28:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r9,-28
	ctx.r8.s64 = ctx.r9.s64 + -28;
	// stw r8,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r8.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// stw r9,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r9.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82c79b28
	if (ctx.cr6.lt) goto loc_82C79B28;
loc_82C79B5C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r29.u32);
loc_82C79B70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C79B7C"))) PPC_WEAK_FUNC(sub_82C79B7C);
PPC_FUNC_IMPL(__imp__sub_82C79B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C79B80"))) PPC_WEAK_FUNC(sub_82C79B80);
PPC_FUNC_IMPL(__imp__sub_82C79B80) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,15836
	ctx.r11.s64 = ctx.r11.s64 + 15836;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// ble cr6,0x82c79be8
	if (!ctx.cr6.gt) goto loc_82C79BE8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82c79be8
	if (ctx.cr0.eq) goto loc_82C79BE8;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82c79be4
	if (ctx.cr6.eq) goto loc_82C79BE4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C79BE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c79be8
	goto loc_82C79BE8;
loc_82C79BE4:
	// bl 0x82294ab8
	ctx.lr = 0x82C79BE8;
	sub_82294AB8(ctx, base);
loc_82C79BE8:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
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

__attribute__((alias("__imp__sub_82C79C08"))) PPC_WEAK_FUNC(sub_82C79C08);
PPC_FUNC_IMPL(__imp__sub_82C79C08) {
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
	// bl 0x82c79b80
	ctx.lr = 0x82C79C28;
	sub_82C79B80(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c79c44
	if (ctx.cr0.eq) goto loc_82C79C44;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C79C44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C79C44:
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

__attribute__((alias("__imp__sub_82C79C60"))) PPC_WEAK_FUNC(sub_82C79C60);
PPC_FUNC_IMPL(__imp__sub_82C79C60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82c79c94
	if (!ctx.cr0.eq) goto loc_82C79C94;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r11,r11,15828
	ctx.r11.s64 = ctx.r11.s64 + 15828;
	// addi r10,r10,-21672
	ctx.r10.s64 = ctx.r10.s64 + -21672;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
loc_82C79C94:
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r9.u32);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r9,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stb r7,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r7.u8);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// bne cr6,0x82c79d24
	if (!ctx.cr6.eq) goto loc_82C79D24;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82c79d08
	if (!ctx.cr0.eq) goto loc_82C79D08;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// b 0x82c79d48
	goto loc_82C79D48;
loc_82C79D08:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// b 0x82c79d48
	goto loc_82C79D48;
loc_82C79D24:
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// beq 0x82c79d44
	if (ctx.cr0.eq) goto loc_82C79D44;
	// stw r11,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// b 0x82c79d48
	goto loc_82C79D48;
loc_82C79D44:
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
loc_82C79D48:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r10,r10,15828
	ctx.r10.s64 = ctx.r10.s64 + 15828;
	// addi r9,r9,-21672
	ctx.r9.s64 = ctx.r9.s64 + -21672;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C79D68"))) PPC_WEAK_FUNC(sub_82C79D68);
PPC_FUNC_IMPL(__imp__sub_82C79D68) {
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
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c79ddc
	if (ctx.cr0.eq) goto loc_82C79DDC;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r30,r31,-4
	ctx.r30.s64 = ctx.r31.s64 + -4;
	// mulli r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 * 28;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// blt 0x82c79db8
	if (ctx.cr0.lt) goto loc_82C79DB8;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r9,r9,-21672
	ctx.r9.s64 = ctx.r9.s64 + -21672;
loc_82C79DA8:
	// addi r10,r10,-28
	ctx.r10.s64 = ctx.r10.s64 + -28;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bge 0x82c79da8
	if (!ctx.cr0.lt) goto loc_82C79DA8;
loc_82C79DB8:
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c79dd4
	if (ctx.cr0.eq) goto loc_82C79DD4;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C79DD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C79DD4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82c79e08
	goto loc_82C79E08;
loc_82C79DDC:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82c79e04
	if (ctx.cr0.eq) goto loc_82C79E04;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C79E04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C79E04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C79E08:
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

__attribute__((alias("__imp__sub_82C79E20"))) PPC_WEAK_FUNC(sub_82C79E20);
PPC_FUNC_IMPL(__imp__sub_82C79E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82C79E28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,15840
	ctx.r11.s64 = ctx.r11.s64 + 15840;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r29,-31904
	ctx.r29.s64 = -2090860544;
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,-26352
	ctx.r4.s64 = ctx.r10.s64 + -26352;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// lwz r3,28104(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28104);
	// bl 0x82c08370
	ctx.lr = 0x82C79E5C;
	sub_82C08370(ctx, base);
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// lwz r3,28104(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28104);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-26208
	ctx.r4.s64 = ctx.r11.s64 + -26208;
	// bl 0x82c08390
	ctx.lr = 0x82C79E70;
	sub_82C08390(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C79E94"))) PPC_WEAK_FUNC(sub_82C79E94);
PPC_FUNC_IMPL(__imp__sub_82C79E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C79E98"))) PPC_WEAK_FUNC(sub_82C79E98);
PPC_FUNC_IMPL(__imp__sub_82C79E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// addi r3,r11,32744
	ctx.r3.s64 = ctx.r11.s64 + 32744;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C79EA4"))) PPC_WEAK_FUNC(sub_82C79EA4);
PPC_FUNC_IMPL(__imp__sub_82C79EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C79EA8"))) PPC_WEAK_FUNC(sub_82C79EA8);
PPC_FUNC_IMPL(__imp__sub_82C79EA8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,15840
	ctx.r10.s64 = ctx.r10.s64 + 15840;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq 0x82c79f08
	if (ctx.cr0.eq) goto loc_82C79F08;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82c79f04
	if (ctx.cr6.eq) goto loc_82C79F04;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C79F00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c79f08
	goto loc_82C79F08;
loc_82C79F04:
	// bl 0x82294ab8
	ctx.lr = 0x82C79F08;
	sub_82294AB8(ctx, base);
loc_82C79F08:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c79f24
	if (ctx.cr0.eq) goto loc_82C79F24;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,8884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C79F24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C79F24:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c79f44
	if (ctx.cr0.eq) goto loc_82C79F44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C79F44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C79F44:
	// lis r30,-31904
	ctx.r30.s64 = -2090860544;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-26352
	ctx.r4.s64 = ctx.r11.s64 + -26352;
	// lwz r3,28104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28104);
	// bl 0x82c08380
	ctx.lr = 0x82C79F5C;
	sub_82C08380(ctx, base);
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// lwz r3,28104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28104);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-26208
	ctx.r4.s64 = ctx.r11.s64 + -26208;
	// bl 0x82c083a0
	ctx.lr = 0x82C79F70;
	sub_82C083A0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82C79F94"))) PPC_WEAK_FUNC(sub_82C79F94);
PPC_FUNC_IMPL(__imp__sub_82C79F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C79F98"))) PPC_WEAK_FUNC(sub_82C79F98);
PPC_FUNC_IMPL(__imp__sub_82C79F98) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r4,r11,4440
	ctx.r4.s64 = ctx.r11.s64 + 4440;
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r10,28104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28104);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwz r3,28104(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28104);
	// bl 0x82c017f8
	ctx.lr = 0x82C79FDC;
	sub_82C017F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82c1e098
	ctx.lr = 0x82C79FF0;
	sub_82C1E098(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c7a000
	if (!ctx.cr0.eq) goto loc_82C7A000;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c7a084
	goto loc_82C7A084;
loc_82C7A000:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82c7a01c
	if (!ctx.cr6.gt) goto loc_82C7A01C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82C7A01C:
	// bl 0x82b6e518
	ctx.lr = 0x82C7A020;
	sub_82B6E518(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82c7a058
	if (!ctx.cr6.gt) goto loc_82C7A058;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82C7A038:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82c7a038
	if (ctx.cr6.lt) goto loc_82C7A038;
loc_82C7A058:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82b6e518
	ctx.lr = 0x82C7A060;
	sub_82B6E518(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c7a078
	if (ctx.cr0.eq) goto loc_82C7A078;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82c79a48
	ctx.lr = 0x82C7A070;
	sub_82C79A48(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82c7a07c
	goto loc_82C7A07C;
loc_82C7A078:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C7A07C:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82C7A084:
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

__attribute__((alias("__imp__sub_82C7A09C"))) PPC_WEAK_FUNC(sub_82C7A09C);
PPC_FUNC_IMPL(__imp__sub_82C7A09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C7A0A0"))) PPC_WEAK_FUNC(sub_82C7A0A0);
PPC_FUNC_IMPL(__imp__sub_82C7A0A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82C7A0A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r28,r11,15828
	ctx.r28.s64 = ctx.r11.s64 + 15828;
	// bne cr6,0x82c7a184
	if (!ctx.cr6.eq) goto loc_82C7A184;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r3,28
	ctx.r3.s64 = 28;
	// beq cr6,0x82c7a104
	if (ctx.cr6.eq) goto loc_82C7A104;
	// bl 0x82b6e518
	ctx.lr = 0x82C7A0EC;
	sub_82B6E518(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c7a128
	if (ctx.cr0.eq) goto loc_82C7A128;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x82c7a11c
	goto loc_82C7A11C;
loc_82C7A104:
	// bl 0x82b6e518
	ctx.lr = 0x82C7A108;
	sub_82B6E518(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c7a128
	if (ctx.cr0.eq) goto loc_82C7A128;
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lwz r11,28104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28104);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
loc_82C7A11C:
	// bl 0x82c79a48
	ctx.lr = 0x82C7A120;
	sub_82C79A48(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82c7a12c
	goto loc_82C7A12C;
loc_82C7A128:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82C7A12C:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82c7a158
	goto loc_82C7A158;
loc_82C7A138:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82c79c60
	ctx.lr = 0x82C7A154;
	sub_82C79C60(ctx, base);
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_82C7A158:
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x82c7a138
	if (!ctx.cr0.eq) goto loc_82C7A138;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c7a180
	if (ctx.cr0.eq) goto loc_82C7A180;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7A180;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C7A180:
	// stw r29,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
loc_82C7A184:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x82c79c60
	ctx.lr = 0x82C7A1AC;
	sub_82C79C60(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C7A1B4"))) PPC_WEAK_FUNC(sub_82C7A1B4);
PPC_FUNC_IMPL(__imp__sub_82C7A1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C7A1B8"))) PPC_WEAK_FUNC(sub_82C7A1B8);
PPC_FUNC_IMPL(__imp__sub_82C7A1B8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,15828
	ctx.r11.s64 = ctx.r11.s64 + 15828;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82c7a204
	goto loc_82C7A204;
loc_82C7A1DC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82c7a200
	if (!ctx.cr6.eq) goto loc_82C7A200;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82c7a200
	if (!ctx.cr6.eq) goto loc_82C7A200;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82c7a214
	if (ctx.cr6.eq) goto loc_82C7A214;
loc_82C7A200:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
loc_82C7A204:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bne 0x82c7a1dc
	if (!ctx.cr0.eq) goto loc_82C7A1DC;
	// b 0x82c7a21c
	goto loc_82C7A21C;
loc_82C7A214:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82c79590
	ctx.lr = 0x82C7A21C;
	sub_82C79590(ctx, base);
loc_82C7A21C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7A22C"))) PPC_WEAK_FUNC(sub_82C7A22C);
PPC_FUNC_IMPL(__imp__sub_82C7A22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C7A230"))) PPC_WEAK_FUNC(sub_82C7A230);
PPC_FUNC_IMPL(__imp__sub_82C7A230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82C7A238;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82c7a284
	goto loc_82C7A284;
loc_82C7A250:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82c7a26c
	if (ctx.cr6.eq) goto loc_82C7A26C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c7a26c
	if (ctx.cr6.eq) goto loc_82C7A26C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82c7a280
	if (!ctx.cr6.eq) goto loc_82C7A280;
loc_82C7A26C:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7A280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C7A280:
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_82C7A284:
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x82c7a250
	if (!ctx.cr0.eq) goto loc_82C7A250;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C7A294"))) PPC_WEAK_FUNC(sub_82C7A294);
PPC_FUNC_IMPL(__imp__sub_82C7A294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C7A298"))) PPC_WEAK_FUNC(sub_82C7A298);
PPC_FUNC_IMPL(__imp__sub_82C7A298) {
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
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82b6e518
	ctx.lr = 0x82C7A2AC;
	sub_82B6E518(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c7a2bc
	if (ctx.cr0.eq) goto loc_82C7A2BC;
	// bl 0x82c79e20
	ctx.lr = 0x82C7A2B8;
	sub_82C79E20(ctx, base);
	// b 0x82c7a2c0
	goto loc_82C7A2C0;
loc_82C7A2BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C7A2C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7A2D0"))) PPC_WEAK_FUNC(sub_82C7A2D0);
PPC_FUNC_IMPL(__imp__sub_82C7A2D0) {
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
	// bl 0x82c79ea8
	ctx.lr = 0x82C7A2F0;
	sub_82C79EA8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c7a30c
	if (ctx.cr0.eq) goto loc_82C7A30C;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7A30C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C7A30C:
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

__attribute__((alias("__imp__sub_82C7A328"))) PPC_WEAK_FUNC(sub_82C7A328);
PPC_FUNC_IMPL(__imp__sub_82C7A328) {
	PPC_FUNC_PROLOGUE();
	// b 0x82cb80a0
	sub_82CB80A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C7A32C"))) PPC_WEAK_FUNC(sub_82C7A32C);
PPC_FUNC_IMPL(__imp__sub_82C7A32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C7A330"))) PPC_WEAK_FUNC(sub_82C7A330);
PPC_FUNC_IMPL(__imp__sub_82C7A330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82C7A338;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c7a458
	if (ctx.cr6.eq) goto loc_82C7A458;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82c7a458
	if (ctx.cr6.eq) goto loc_82C7A458;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// bne cr6,0x82c7a364
	if (!ctx.cr6.eq) goto loc_82C7A364;
	// addi r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 1;
loc_82C7A364:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// bne cr6,0x82c7a374
	if (!ctx.cr6.eq) goto loc_82C7A374;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82C7A374:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// bne cr6,0x82c7a384
	if (!ctx.cr6.eq) goto loc_82C7A384;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82C7A384:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// bne cr6,0x82c7a394
	if (!ctx.cr6.eq) goto loc_82C7A394;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82C7A394:
	// lis r11,-31902
	ctx.r11.s64 = -2090729472;
	// addi r31,r11,-32516
	ctx.r31.s64 = ctx.r11.s64 + -32516;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82C7A3A4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c7a3a4
	if (!ctx.cr6.eq) goto loc_82C7A3A4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82cb80e0
	ctx.lr = 0x82C7A3CC;
	sub_82CB80E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c7a3f4
	if (ctx.cr0.eq) goto loc_82C7A3F4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r9,r31,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r31.s64;
loc_82C7A3DC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82c7a3dc
	if (!ctx.cr0.eq) goto loc_82C7A3DC;
	// b 0x82c7a3fc
	goto loc_82C7A3FC;
loc_82C7A3F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
loc_82C7A3FC:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82C7A404:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c7a404
	if (!ctx.cr6.eq) goto loc_82C7A404;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82C7A418:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82c7a418
	if (!ctx.cr0.eq) goto loc_82C7A418;
	// b 0x82c7a43c
	goto loc_82C7A43C;
loc_82C7A434:
	// li r10,92
	ctx.r10.s64 = 92;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_82C7A43C:
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb80a0
	ctx.lr = 0x82C7A448;
	sub_82CB80A0(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c7a434
	if (!ctx.cr0.eq) goto loc_82C7A434;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82c7a45c
	goto loc_82C7A45C;
loc_82C7A458:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C7A45C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C7A464"))) PPC_WEAK_FUNC(sub_82C7A464);
PPC_FUNC_IMPL(__imp__sub_82C7A464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C7A468"))) PPC_WEAK_FUNC(sub_82C7A468);
PPC_FUNC_IMPL(__imp__sub_82C7A468) {
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
	// bl 0x82ca40f8
	ctx.lr = 0x82C7A480;
	sub_82CA40F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,15932(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 15932);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r11,r11,15904
	ctx.r11.s64 = ctx.r11.s64 + 15904;
	// lfs f12,-18112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18112);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// addi r11,r11,-25788
	ctx.r11.s64 = ctx.r11.s64 + -25788;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// addi r11,r11,9328
	ctx.r11.s64 = ctx.r11.s64 + 9328;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,20(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,24(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,28(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
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

__attribute__((alias("__imp__sub_82C7A508"))) PPC_WEAK_FUNC(sub_82C7A508);
PPC_FUNC_IMPL(__imp__sub_82C7A508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31902
	ctx.r11.s64 = -2090729472;
	// addi r3,r11,-32512
	ctx.r3.s64 = ctx.r11.s64 + -32512;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7A514"))) PPC_WEAK_FUNC(sub_82C7A514);
PPC_FUNC_IMPL(__imp__sub_82C7A514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C7A518"))) PPC_WEAK_FUNC(sub_82C7A518);
PPC_FUNC_IMPL(__imp__sub_82C7A518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,15904
	ctx.r11.s64 = ctx.r11.s64 + 15904;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82ca4228
	sub_82CA4228(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C7A528"))) PPC_WEAK_FUNC(sub_82C7A528);
PPC_FUNC_IMPL(__imp__sub_82C7A528) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7A530"))) PPC_WEAK_FUNC(sub_82C7A530);
PPC_FUNC_IMPL(__imp__sub_82C7A530) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7A538"))) PPC_WEAK_FUNC(sub_82C7A538);
PPC_FUNC_IMPL(__imp__sub_82C7A538) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,15904
	ctx.r11.s64 = ctx.r11.s64 + 15904;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ca4228
	ctx.lr = 0x82C7A564;
	sub_82CA4228(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c7a580
	if (ctx.cr0.eq) goto loc_82C7A580;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7A580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C7A580:
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

__attribute__((alias("__imp__sub_82C7A59C"))) PPC_WEAK_FUNC(sub_82C7A59C);
PPC_FUNC_IMPL(__imp__sub_82C7A59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C7A5A0"))) PPC_WEAK_FUNC(sub_82C7A5A0);
PPC_FUNC_IMPL(__imp__sub_82C7A5A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82C7A5A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r5,52
	ctx.r28.s64 = ctx.r5.s64 + 52;
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f2,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f1,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82c759f8
	ctx.lr = 0x82C7A5D4;
	sub_82C759F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c7a5e4
	if (!ctx.cr0.eq) goto loc_82C7A5E4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82c7a61c
	goto loc_82C7A61C;
loc_82C7A5E4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// ble cr6,0x82c7a618
	if (!ctx.cr6.gt) goto loc_82C7A618;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f1,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c759f8
	ctx.lr = 0x82C7A60C;
	sub_82C759F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x82c7a61c
	if (!ctx.cr0.eq) goto loc_82C7A61C;
loc_82C7A618:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C7A61C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C7A624"))) PPC_WEAK_FUNC(sub_82C7A624);
PPC_FUNC_IMPL(__imp__sub_82C7A624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C7A628"))) PPC_WEAK_FUNC(sub_82C7A628);
PPC_FUNC_IMPL(__imp__sub_82C7A628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82C7A630;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lwz r11,32(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82c7a73c
	if (!ctx.cr6.eq) goto loc_82C7A73C;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r25,r11,-19708
	ctx.r25.s64 = ctx.r11.s64 + -19708;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r24,r11,-19712
	ctx.r24.s64 = ctx.r11.s64 + -19712;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r27,r11,-19720
	ctx.r27.s64 = ctx.r11.s64 + -19720;
loc_82C7A66C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82c04fa8
	ctx.lr = 0x82C7A678;
	sub_82C04FA8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82c7a720
	if (ctx.cr0.eq) goto loc_82C7A720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c051a0
	ctx.lr = 0x82C7A688;
	sub_82C051A0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C7A694;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c7a6bc
	if (!ctx.cr0.eq) goto loc_82C7A6BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c05198
	ctx.lr = 0x82C7A6A4;
	sub_82C05198(ctx, base);
	// bl 0x82cb6c40
	ctx.lr = 0x82C7A6A8;
	sub_82CB6C40(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// ori r29,r11,1
	ctx.r29.u64 = ctx.r11.u64 | 1;
	// b 0x82c7a720
	goto loc_82C7A720;
loc_82C7A6BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C7A6C8;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c7a6f0
	if (!ctx.cr0.eq) goto loc_82C7A6F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c05198
	ctx.lr = 0x82C7A6D8;
	sub_82C05198(ctx, base);
	// bl 0x82cb6c40
	ctx.lr = 0x82C7A6DC;
	sub_82CB6C40(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// ori r29,r11,2
	ctx.r29.u64 = ctx.r11.u64 | 2;
	// b 0x82c7a720
	goto loc_82C7A720;
loc_82C7A6F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C7A6FC;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c7a720
	if (!ctx.cr0.eq) goto loc_82C7A720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c05198
	ctx.lr = 0x82C7A70C;
	sub_82C05198(ctx, base);
	// bl 0x82cb6c40
	ctx.lr = 0x82C7A710;
	sub_82CB6C40(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,8(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// ori r29,r11,4
	ctx.r29.u64 = ctx.r11.u64 | 4;
loc_82C7A720:
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// clrlwi r26,r11,24
	ctx.r26.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// blt cr6,0x82c7a66c
	if (ctx.cr6.lt) goto loc_82C7A66C;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x82c7a754
	if (ctx.cr6.eq) goto loc_82C7A754;
loc_82C7A73C:
	// lfs f0,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lfs f0,4(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// lfs f0,8(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
loc_82C7A754:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C7A760"))) PPC_WEAK_FUNC(sub_82C7A760);
PPC_FUNC_IMPL(__imp__sub_82C7A760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,15936
	ctx.r11.s64 = ctx.r11.s64 + 15936;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7A770"))) PPC_WEAK_FUNC(sub_82C7A770);
PPC_FUNC_IMPL(__imp__sub_82C7A770) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,15936
	ctx.r11.s64 = ctx.r11.s64 + 15936;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82c7a79c
	if (ctx.cr0.eq) goto loc_82C7A79C;
	// bl 0x822990f0
	ctx.lr = 0x82C7A79C;
	sub_822990F0(ctx, base);
loc_82C7A79C:
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

__attribute__((alias("__imp__sub_82C7A7B4"))) PPC_WEAK_FUNC(sub_82C7A7B4);
PPC_FUNC_IMPL(__imp__sub_82C7A7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C7A7B8"))) PPC_WEAK_FUNC(sub_82C7A7B8);
PPC_FUNC_IMPL(__imp__sub_82C7A7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,15936
	ctx.r11.s64 = ctx.r11.s64 + 15936;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7A7C8"))) PPC_WEAK_FUNC(sub_82C7A7C8);
PPC_FUNC_IMPL(__imp__sub_82C7A7C8) {
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
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82b6e518
	ctx.lr = 0x82C7A7E4;
	sub_82B6E518(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c7a7f8
	if (ctx.cr0.eq) goto loc_82C7A7F8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c7a468
	ctx.lr = 0x82C7A7F4;
	sub_82C7A468(ctx, base);
	// b 0x82c7a7fc
	goto loc_82C7A7FC;
loc_82C7A7F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C7A7FC:
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

__attribute__((alias("__imp__sub_82C7A810"))) PPC_WEAK_FUNC(sub_82C7A810);
PPC_FUNC_IMPL(__imp__sub_82C7A810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82C7A818;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c7a858
	if (ctx.cr6.eq) goto loc_82C7A858;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c051a0
	ctx.lr = 0x82C7A834;
	sub_82C051A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c7a858
	if (ctx.cr0.eq) goto loc_82C7A858;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c051a0
	ctx.lr = 0x82C7A844;
	sub_82C051A0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// bne cr6,0x82c7a858
	if (!ctx.cr6.eq) goto loc_82C7A858;
loc_82C7A850:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82c7aa04
	goto loc_82C7AA04;
loc_82C7A858:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c051a0
	ctx.lr = 0x82C7A860;
	sub_82C051A0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-19448
	ctx.r4.s64 = ctx.r11.s64 + -19448;
	// bl 0x82cb1690
	ctx.lr = 0x82C7A870;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c7a894
	if (!ctx.cr0.eq) goto loc_82C7A894;
	// addi r5,r29,8
	ctx.r5.s64 = ctx.r29.s64 + 8;
loc_82C7A87C:
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r6,r11,-25788
	ctx.r6.s64 = ctx.r11.s64 + -25788;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c7a628
	ctx.lr = 0x82C7A890;
	sub_82C7A628(ctx, base);
	// b 0x82c7a850
	goto loc_82C7A850;
loc_82C7A894:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-19436
	ctx.r4.s64 = ctx.r11.s64 + -19436;
	// bl 0x82cb1690
	ctx.lr = 0x82C7A8A4;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c7a8b4
	if (!ctx.cr0.eq) goto loc_82C7A8B4;
	// addi r5,r29,20
	ctx.r5.s64 = ctx.r29.s64 + 20;
	// b 0x82c7a87c
	goto loc_82C7A87C;
loc_82C7A8B4:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-19432
	ctx.r4.s64 = ctx.r11.s64 + -19432;
	// bl 0x82cb1690
	ctx.lr = 0x82C7A8C4;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c7a928
	if (!ctx.cr0.eq) goto loc_82C7A928;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c05198
	ctx.lr = 0x82C7A8D4;
	sub_82C05198(ctx, base);
	// bl 0x82cb6c40
	ctx.lr = 0x82C7A8D8;
	sub_82CB6C40(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 32, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82c7a8f4
	if (ctx.cr6.lt) goto loc_82C7A8F4;
	// stfs f13,32(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 32, temp.u32);
loc_82C7A8F4:
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lwz r11,28104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28104);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82c7a90c
	if (ctx.cr0.eq) goto loc_82C7A90C;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82c7a914
	goto loc_82C7A914;
loc_82C7A90C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
loc_82C7A914:
	// lfs f13,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,32(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 32, temp.u32);
	// b 0x82c7aa04
	goto loc_82C7AA04;
loc_82C7A928:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-19420
	ctx.r4.s64 = ctx.r11.s64 + -19420;
	// bl 0x82cb1690
	ctx.lr = 0x82C7A938;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c7a9a4
	if (!ctx.cr0.eq) goto loc_82C7A9A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c05198
	ctx.lr = 0x82C7A948;
	sub_82C05198(ctx, base);
	// bl 0x82cb6c40
	ctx.lr = 0x82C7A94C;
	sub_82CB6C40(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,15932(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15932);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,36(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 36, temp.u32);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82c7a970
	if (!ctx.cr6.gt) goto loc_82C7A970;
	// stfs f0,36(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 36, temp.u32);
loc_82C7A970:
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lwz r11,28104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28104);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82c7a988
	if (ctx.cr0.eq) goto loc_82C7A988;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82c7a990
	goto loc_82C7A990;
loc_82C7A988:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
loc_82C7A990:
	// lfs f13,36(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,36(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 36, temp.u32);
	// b 0x82c7aa04
	goto loc_82C7AA04;
loc_82C7A9A4:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-19412
	ctx.r4.s64 = ctx.r11.s64 + -19412;
	// bl 0x82cb1690
	ctx.lr = 0x82C7A9B4;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c7aa00
	if (!ctx.cr0.eq) goto loc_82C7AA00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c05198
	ctx.lr = 0x82C7A9C4;
	sub_82C05198(ctx, base);
	// bl 0x82cb6c40
	ctx.lr = 0x82C7A9C8;
	sub_82CB6C40(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-18112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18112);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,40(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 40, temp.u32);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82c7a850
	if (ctx.cr6.lt) goto loc_82C7A850;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-18084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18084);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82c7a850
	if (ctx.cr6.gt) goto loc_82C7A850;
	// stfs f0,40(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 40, temp.u32);
	// b 0x82c7a850
	goto loc_82C7A850;
loc_82C7AA00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C7AA04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C7AA0C"))) PPC_WEAK_FUNC(sub_82C7AA0C);
PPC_FUNC_IMPL(__imp__sub_82C7AA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C7AA10"))) PPC_WEAK_FUNC(sub_82C7AA10);
PPC_FUNC_IMPL(__imp__sub_82C7AA10) {
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
	// bl 0x82ca40f8
	ctx.lr = 0x82C7AA28;
	sub_82CA40F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
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

__attribute__((alias("__imp__sub_82C7AA4C"))) PPC_WEAK_FUNC(sub_82C7AA4C);
PPC_FUNC_IMPL(__imp__sub_82C7AA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C7AA50"))) PPC_WEAK_FUNC(sub_82C7AA50);
PPC_FUNC_IMPL(__imp__sub_82C7AA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82ca4228
	sub_82CA4228(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C7AA60"))) PPC_WEAK_FUNC(sub_82C7AA60);
PPC_FUNC_IMPL(__imp__sub_82C7AA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31902
	ctx.r11.s64 = -2090729472;
	// addi r3,r11,-32236
	ctx.r3.s64 = ctx.r11.s64 + -32236;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7AA6C"))) PPC_WEAK_FUNC(sub_82C7AA6C);
PPC_FUNC_IMPL(__imp__sub_82C7AA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C7AA70"))) PPC_WEAK_FUNC(sub_82C7AA70);
PPC_FUNC_IMPL(__imp__sub_82C7AA70) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7AA78"))) PPC_WEAK_FUNC(sub_82C7AA78);
PPC_FUNC_IMPL(__imp__sub_82C7AA78) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7AA80"))) PPC_WEAK_FUNC(sub_82C7AA80);
PPC_FUNC_IMPL(__imp__sub_82C7AA80) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7AA88"))) PPC_WEAK_FUNC(sub_82C7AA88);
PPC_FUNC_IMPL(__imp__sub_82C7AA88) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ca4228
	ctx.lr = 0x82C7AAB4;
	sub_82CA4228(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c7aad0
	if (ctx.cr0.eq) goto loc_82C7AAD0;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7AAD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C7AAD0:
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

__attribute__((alias("__imp__sub_82C7AAEC"))) PPC_WEAK_FUNC(sub_82C7AAEC);
PPC_FUNC_IMPL(__imp__sub_82C7AAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C7AAF0"))) PPC_WEAK_FUNC(sub_82C7AAF0);
PPC_FUNC_IMPL(__imp__sub_82C7AAF0) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82b6e518
	ctx.lr = 0x82C7AB10;
	sub_82B6E518(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82c7ab38
	if (ctx.cr0.eq) goto loc_82C7AB38;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca40f8
	ctx.lr = 0x82C7AB24;
	sub_82CA40F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82c7ab3c
	goto loc_82C7AB3C;
loc_82C7AB38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C7AB3C:
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

__attribute__((alias("__imp__sub_82C7AB54"))) PPC_WEAK_FUNC(sub_82C7AB54);
PPC_FUNC_IMPL(__imp__sub_82C7AB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C7AB58"))) PPC_WEAK_FUNC(sub_82C7AB58);
PPC_FUNC_IMPL(__imp__sub_82C7AB58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fmuls f0,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7AB64"))) PPC_WEAK_FUNC(sub_82C7AB64);
PPC_FUNC_IMPL(__imp__sub_82C7AB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C7AB68"))) PPC_WEAK_FUNC(sub_82C7AB68);
PPC_FUNC_IMPL(__imp__sub_82C7AB68) {
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
	// bl 0x82ca40f8
	ctx.lr = 0x82C7AB80;
	sub_82CA40F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-18264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18264);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// addi r11,r11,-25788
	ctx.r11.s64 = ctx.r11.s64 + -25788;
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
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

__attribute__((alias("__imp__sub_82C7ABE0"))) PPC_WEAK_FUNC(sub_82C7ABE0);
PPC_FUNC_IMPL(__imp__sub_82C7ABE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31902
	ctx.r11.s64 = -2090729472;
	// addi r3,r11,-31960
	ctx.r3.s64 = ctx.r11.s64 + -31960;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7ABEC"))) PPC_WEAK_FUNC(sub_82C7ABEC);
PPC_FUNC_IMPL(__imp__sub_82C7ABEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C7ABF0"))) PPC_WEAK_FUNC(sub_82C7ABF0);
PPC_FUNC_IMPL(__imp__sub_82C7ABF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82ca4228
	sub_82CA4228(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C7AC00"))) PPC_WEAK_FUNC(sub_82C7AC00);
PPC_FUNC_IMPL(__imp__sub_82C7AC00) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7AC08"))) PPC_WEAK_FUNC(sub_82C7AC08);
PPC_FUNC_IMPL(__imp__sub_82C7AC08) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7AC10"))) PPC_WEAK_FUNC(sub_82C7AC10);
PPC_FUNC_IMPL(__imp__sub_82C7AC10) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ca4228
	ctx.lr = 0x82C7AC3C;
	sub_82CA4228(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c7ac58
	if (ctx.cr0.eq) goto loc_82C7AC58;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7AC58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C7AC58:
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

__attribute__((alias("__imp__sub_82C7AC74"))) PPC_WEAK_FUNC(sub_82C7AC74);
PPC_FUNC_IMPL(__imp__sub_82C7AC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C7AC78"))) PPC_WEAK_FUNC(sub_82C7AC78);
PPC_FUNC_IMPL(__imp__sub_82C7AC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82c7aca0
	if (!ctx.cr0.eq) goto loc_82C7ACA0;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82c7aca0
	if (ctx.cr0.eq) goto loc_82C7ACA0;
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
	// b 0x82c7acac
	goto loc_82C7ACAC;
loc_82C7ACA0:
	// lfs f13,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
loc_82C7ACAC:
	// lfs f0,52(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,56(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,60(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,-8(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
loc_82C7ACE0:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82c7ad04
	if (ctx.cr0.eq) goto loc_82C7AD04;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82c7acf8
	if (!ctx.cr6.eq) goto loc_82C7ACF8;
	// addi r9,r1,-12
	ctx.r9.s64 = ctx.r1.s64 + -12;
	// b 0x82c7ad08
	goto loc_82C7AD08;
loc_82C7ACF8:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// addi r9,r1,-8
	ctx.r9.s64 = ctx.r1.s64 + -8;
	// beq cr6,0x82c7ad08
	if (ctx.cr6.eq) goto loc_82C7AD08;
loc_82C7AD04:
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
loc_82C7AD08:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82c7ad2c
	if (ctx.cr0.eq) goto loc_82C7AD2C;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82c7ad20
	if (!ctx.cr6.eq) goto loc_82C7AD20;
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
	// b 0x82c7ad30
	goto loc_82C7AD30;
loc_82C7AD20:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// addi r11,r1,-8
	ctx.r11.s64 = ctx.r1.s64 + -8;
	// beq cr6,0x82c7ad30
	if (ctx.cr6.eq) goto loc_82C7AD30;
loc_82C7AD2C:
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
loc_82C7AD30:
	// lfs f12,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f12,f11,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82c7ad5c
	if (ctx.cr6.gt) goto loc_82C7AD5C;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x82c7ace0
	if (ctx.cr6.lt) goto loc_82C7ACE0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82C7AD5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7AD64"))) PPC_WEAK_FUNC(sub_82C7AD64);
PPC_FUNC_IMPL(__imp__sub_82C7AD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C7AD68"))) PPC_WEAK_FUNC(sub_82C7AD68);
PPC_FUNC_IMPL(__imp__sub_82C7AD68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82C7AD70;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82c7adb0
	if (ctx.cr6.eq) goto loc_82C7ADB0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c051a0
	ctx.lr = 0x82C7AD8C;
	sub_82C051A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c7adb0
	if (ctx.cr0.eq) goto loc_82C7ADB0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c051a0
	ctx.lr = 0x82C7AD9C;
	sub_82C051A0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// bne cr6,0x82c7adb0
	if (!ctx.cr6.eq) goto loc_82C7ADB0;
loc_82C7ADA8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82c7afa8
	goto loc_82C7AFA8;
loc_82C7ADB0:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c051a0
	ctx.lr = 0x82C7ADB8;
	sub_82C051A0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-19464
	ctx.r4.s64 = ctx.r11.s64 + -19464;
	// bl 0x82cb1690
	ctx.lr = 0x82C7ADC8;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c7af18
	if (!ctx.cr0.eq) goto loc_82C7AF18;
	// lwz r11,32(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82c7ae04
	if (ctx.cr6.eq) goto loc_82C7AE04;
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-25788
	ctx.r11.s64 = ctx.r11.s64 + -25788;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 16, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 20, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 24, temp.u32);
	// b 0x82c7afa8
	goto loc_82C7AFA8;
loc_82C7AE04:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r26,r11,-19708
	ctx.r26.s64 = ctx.r11.s64 + -19708;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r25,r11,-19712
	ctx.r25.s64 = ctx.r11.s64 + -19712;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r28,r11,-19720
	ctx.r28.s64 = ctx.r11.s64 + -19720;
loc_82C7AE24:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c04fa8
	ctx.lr = 0x82C7AE30;
	sub_82C04FA8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82c7aed8
	if (ctx.cr0.eq) goto loc_82C7AED8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c051a0
	ctx.lr = 0x82C7AE40;
	sub_82C051A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C7AE4C;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c7ae74
	if (!ctx.cr0.eq) goto loc_82C7AE74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c05198
	ctx.lr = 0x82C7AE5C;
	sub_82C05198(ctx, base);
	// bl 0x82cb6c40
	ctx.lr = 0x82C7AE60;
	sub_82CB6C40(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,16(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 16, temp.u32);
	// ori r29,r11,1
	ctx.r29.u64 = ctx.r11.u64 | 1;
	// b 0x82c7aed8
	goto loc_82C7AED8;
loc_82C7AE74:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C7AE80;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c7aea8
	if (!ctx.cr0.eq) goto loc_82C7AEA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c05198
	ctx.lr = 0x82C7AE90;
	sub_82C05198(ctx, base);
	// bl 0x82cb6c40
	ctx.lr = 0x82C7AE94;
	sub_82CB6C40(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,20(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 20, temp.u32);
	// ori r29,r11,2
	ctx.r29.u64 = ctx.r11.u64 | 2;
	// b 0x82c7aed8
	goto loc_82C7AED8;
loc_82C7AEA8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C7AEB4;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c7aed8
	if (!ctx.cr0.eq) goto loc_82C7AED8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c05198
	ctx.lr = 0x82C7AEC4;
	sub_82C05198(ctx, base);
	// bl 0x82cb6c40
	ctx.lr = 0x82C7AEC8;
	sub_82CB6C40(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,24(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 24, temp.u32);
	// ori r29,r11,4
	ctx.r29.u64 = ctx.r11.u64 | 4;
loc_82C7AED8:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 3, ctx.xer);
	// blt cr6,0x82c7ae24
	if (ctx.cr6.lt) goto loc_82C7AE24;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x82c7ada8
	if (ctx.cr6.eq) goto loc_82C7ADA8;
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// addi r11,r11,-25788
	ctx.r11.s64 = ctx.r11.s64 + -25788;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 16, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 20, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 24, temp.u32);
	// b 0x82c7ada8
	goto loc_82C7ADA8;
loc_82C7AF18:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,16044
	ctx.r4.s64 = ctx.r11.s64 + 16044;
	// bl 0x82cb1690
	ctx.lr = 0x82C7AF28;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c7afa4
	if (!ctx.cr0.eq) goto loc_82C7AFA4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c05198
	ctx.lr = 0x82C7AF38;
	sub_82C05198(ctx, base);
	// bl 0x82cb6c40
	ctx.lr = 0x82C7AF3C;
	sub_82CB6C40(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lwz r11,28104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28104);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bge cr6,0x82c7af80
	if (!ctx.cr6.lt) goto loc_82C7AF80;
	// beq 0x82c7af68
	if (ctx.cr0.eq) goto loc_82C7AF68;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82c7af70
	goto loc_82C7AF70;
loc_82C7AF68:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
loc_82C7AF70:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9904);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82c7af98
	goto loc_82C7AF98;
loc_82C7AF80:
	// beq 0x82c7af8c
	if (ctx.cr0.eq) goto loc_82C7AF8C;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82c7af94
	goto loc_82C7AF94;
loc_82C7AF8C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
loc_82C7AF94:
	// fmuls f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_82C7AF98:
	// fmuls f0,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f0,28(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 28, temp.u32);
	// b 0x82c7ada8
	goto loc_82C7ADA8;
loc_82C7AFA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C7AFA8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C7AFB0"))) PPC_WEAK_FUNC(sub_82C7AFB0);
PPC_FUNC_IMPL(__imp__sub_82C7AFB0) {
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82b6e518
	ctx.lr = 0x82C7AFCC;
	sub_82B6E518(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c7afe0
	if (ctx.cr0.eq) goto loc_82C7AFE0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c7ab68
	ctx.lr = 0x82C7AFDC;
	sub_82C7AB68(ctx, base);
	// b 0x82c7afe4
	goto loc_82C7AFE4;
loc_82C7AFE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C7AFE4:
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

__attribute__((alias("__imp__sub_82C7AFF8"))) PPC_WEAK_FUNC(sub_82C7AFF8);
PPC_FUNC_IMPL(__imp__sub_82C7AFF8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7B000"))) PPC_WEAK_FUNC(sub_82C7B000);
PPC_FUNC_IMPL(__imp__sub_82C7B000) {
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
	// bl 0x82c30e70
	ctx.lr = 0x82C7B018;
	sub_82C30E70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,1024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82c7b080
	if (!ctx.cr0.gt) goto loc_82C7B080;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_82C7B034:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82C7B040:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x82c7b064
	if (ctx.cr0.eq) goto loc_82C7B064;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82c7b040
	if (ctx.cr6.eq) goto loc_82C7B040;
loc_82C7B064:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82c7b090
	if (ctx.cr0.eq) goto loc_82C7B090;
	// lwz r10,1024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82c7b034
	if (ctx.cr6.lt) goto loc_82C7B034;
loc_82C7B080:
	// cmpwi cr6,r3,256
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 256, ctx.xer);
	// bne cr6,0x82c7b09c
	if (!ctx.cr6.eq) goto loc_82C7B09C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c7b0b4
	goto loc_82C7B0B4;
loc_82C7B090:
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
	// b 0x82c7b0b0
	goto loc_82C7B0B0;
loc_82C7B09C:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
	// lwz r10,1024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
loc_82C7B0B0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C7B0B4:
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

__attribute__((alias("__imp__sub_82C7B0C8"))) PPC_WEAK_FUNC(sub_82C7B0C8);
PPC_FUNC_IMPL(__imp__sub_82C7B0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82C7B0D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-31632
	ctx.r9.s64 = ctx.r11.s64 + -31632;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
loc_82C7B100:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82c7b100
	if (!ctx.cr0.eq) goto loc_82C7B100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c7b000
	ctx.lr = 0x82C7B11C;
	sub_82C7B000(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c7b12c
	if (!ctx.cr0.eq) goto loc_82C7B12C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82c7b138
	goto loc_82C7B138;
loc_82C7B12C:
	// bl 0x82c30e70
	ctx.lr = 0x82C7B130;
	sub_82C30E70(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82C7B138:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r29,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r29.u32);
	// bne cr6,0x82c7b15c
	if (!ctx.cr6.eq) goto loc_82C7B15C;
	// bl 0x82c083b0
	ctx.lr = 0x82C7B154;
	sub_82C083B0(ctx, base);
	// stw r3,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r3.u32);
	// b 0x82c7b164
	goto loc_82C7B164;
loc_82C7B15C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
loc_82C7B164:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c7b180
	if (ctx.cr0.eq) goto loc_82C7B180;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r10,9028(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9028);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,9028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9028, ctx.r10.u32);
loc_82C7B180:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C7B18C"))) PPC_WEAK_FUNC(sub_82C7B18C);
PPC_FUNC_IMPL(__imp__sub_82C7B18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C7B190"))) PPC_WEAK_FUNC(sub_82C7B190);
PPC_FUNC_IMPL(__imp__sub_82C7B190) {
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
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c7b0c8
	ctx.lr = 0x82C7B1B0;
	sub_82C7B0C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,16076
	ctx.r11.s64 = ctx.r11.s64 + 16076;
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

__attribute__((alias("__imp__sub_82C7B1D4"))) PPC_WEAK_FUNC(sub_82C7B1D4);
PPC_FUNC_IMPL(__imp__sub_82C7B1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C7B1D8"))) PPC_WEAK_FUNC(sub_82C7B1D8);
PPC_FUNC_IMPL(__imp__sub_82C7B1D8) {
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
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-31632
	ctx.r11.s64 = ctx.r11.s64 + -31632;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82c7b204
	if (ctx.cr0.eq) goto loc_82C7B204;
	// bl 0x822990f0
	ctx.lr = 0x82C7B204;
	sub_822990F0(ctx, base);
loc_82C7B204:
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

__attribute__((alias("__imp__sub_82C7B21C"))) PPC_WEAK_FUNC(sub_82C7B21C);
PPC_FUNC_IMPL(__imp__sub_82C7B21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C7B220"))) PPC_WEAK_FUNC(sub_82C7B220);
PPC_FUNC_IMPL(__imp__sub_82C7B220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f5,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// bge cr6,0x82c7b260
	if (!ctx.cr6.lt) goto loc_82C7B260;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x82c7b260
	if (!ctx.cr6.lt) goto loc_82C7B260;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82c7b260
	if (!ctx.cr6.lt) goto loc_82C7B260;
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// blt cr6,0x82c7b33c
	if (ctx.cr6.lt) goto loc_82C7B33C;
loc_82C7B260:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82c7b280
	if (!ctx.cr6.gt) goto loc_82C7B280;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x82c7b280
	if (!ctx.cr6.gt) goto loc_82C7B280;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x82c7b280
	if (!ctx.cr6.gt) goto loc_82C7B280;
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// bgt cr6,0x82c7b33c
	if (ctx.cr6.gt) goto loc_82C7B33C;
loc_82C7B280:
	// fcmpu cr6,f9,f6
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f6.f64);
	// bge cr6,0x82c7b2a0
	if (!ctx.cr6.lt) goto loc_82C7B2A0;
	// fcmpu cr6,f12,f6
	ctx.cr6.compare(ctx.f12.f64, ctx.f6.f64);
	// bge cr6,0x82c7b2a0
	if (!ctx.cr6.lt) goto loc_82C7B2A0;
	// fcmpu cr6,f9,f5
	ctx.cr6.compare(ctx.f9.f64, ctx.f5.f64);
	// bge cr6,0x82c7b2a0
	if (!ctx.cr6.lt) goto loc_82C7B2A0;
	// fcmpu cr6,f12,f5
	ctx.cr6.compare(ctx.f12.f64, ctx.f5.f64);
	// blt cr6,0x82c7b33c
	if (ctx.cr6.lt) goto loc_82C7B33C;
loc_82C7B2A0:
	// fcmpu cr6,f9,f6
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f6.f64);
	// ble cr6,0x82c7b2c0
	if (!ctx.cr6.gt) goto loc_82C7B2C0;
	// fcmpu cr6,f12,f6
	ctx.cr6.compare(ctx.f12.f64, ctx.f6.f64);
	// ble cr6,0x82c7b2c0
	if (!ctx.cr6.gt) goto loc_82C7B2C0;
	// fcmpu cr6,f9,f5
	ctx.cr6.compare(ctx.f9.f64, ctx.f5.f64);
	// ble cr6,0x82c7b2c0
	if (!ctx.cr6.gt) goto loc_82C7B2C0;
	// fcmpu cr6,f12,f5
	ctx.cr6.compare(ctx.f12.f64, ctx.f5.f64);
	// bgt cr6,0x82c7b33c
	if (ctx.cr6.gt) goto loc_82C7B33C;
loc_82C7B2C0:
	// fsubs f8,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f13,f10,f11
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fsubs f7,f12,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f12,f5,f6
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fsubs f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// fmuls f0,f7,f13
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmsubs f11,f12,f8,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 - ctx.f0.f64));
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// beq cr6,0x82c7b33c
	if (ctx.cr6.eq) goto loc_82C7B33C;
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f6,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f6.f64 = double(temp.f32);
	// fdivs f11,f6,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 / ctx.f11.f64));
	// fmsubs f13,f9,f13,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f12.f64));
	// fmuls f12,f13,f11
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x82c7b33c
	if (ctx.cr6.lt) goto loc_82C7B33C;
	// fcmpu cr6,f12,f6
	ctx.cr6.compare(ctx.f12.f64, ctx.f6.f64);
	// bge cr6,0x82c7b33c
	if (!ctx.cr6.lt) goto loc_82C7B33C;
	// fmuls f13,f7,f10
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmsubs f13,f9,f8,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 - ctx.f13.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82c7b33c
	if (ctx.cr6.lt) goto loc_82C7B33C;
	// fcmpu cr6,f13,f6
	ctx.cr6.compare(ctx.f13.f64, ctx.f6.f64);
	// bge cr6,0x82c7b33c
	if (!ctx.cr6.lt) goto loc_82C7B33C;
	// fmuls f1,f12,f1
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// blr 
	return;
loc_82C7B33C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f1,-18264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18264);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7B348"))) PPC_WEAK_FUNC(sub_82C7B348);
PPC_FUNC_IMPL(__imp__sub_82C7B348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31902
	ctx.r11.s64 = -2090729472;
	// lwz r3,-31684(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31684);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7B354"))) PPC_WEAK_FUNC(sub_82C7B354);
PPC_FUNC_IMPL(__imp__sub_82C7B354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C7B358"))) PPC_WEAK_FUNC(sub_82C7B358);
PPC_FUNC_IMPL(__imp__sub_82C7B358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82C7B360;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6ae0
	ctx.lr = 0x82C7B368;
	__savefpr_26(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,88(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f6.f64 = double(temp.f32);
	// lfs f13,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f13,f1
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfs f12,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// lfs f10,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f8.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fnmsubs f27,f11,f12,f2
	ctx.f27.f64 = double(float(-(ctx.f11.f64 * ctx.f12.f64 - ctx.f2.f64)));
	// lfs f11,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f9,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// lfs f9,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f27,f9
	ctx.cr6.compare(ctx.f27.f64, ctx.f9.f64);
	// fmadds f10,f5,f8,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 + ctx.f10.f64));
	// fmuls f26,f10,f0
	ctx.f26.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fadds f0,f7,f11
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// fadds f10,f6,f13
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// bge cr6,0x82c7b3dc
	if (!ctx.cr6.lt) goto loc_82C7B3DC;
	// fmr f27,f9
	ctx.f27.f64 = ctx.f9.f64;
loc_82C7B3DC:
	// fmuls f13,f1,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// lfs f12,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f8,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f12,f10,f8
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// lfs f10,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmadds f12,f8,f12,f0
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsubs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fadds f31,f13,f12
	ctx.f31.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x82c7b5bc
	if (ctx.cr6.gt) goto loc_82C7B5BC;
	// fneg f13,f11
	ctx.f13.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// blt cr6,0x82c7b5bc
	if (ctx.cr6.lt) goto loc_82C7B5BC;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82c7b42c
	if (!ctx.cr6.lt) goto loc_82C7B42C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82C7B42C:
	// fcmpu cr6,f31,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f11.f64);
	// ble cr6,0x82c7b438
	if (!ctx.cr6.gt) goto loc_82C7B438;
	// fmr f31,f11
	ctx.f31.f64 = ctx.f11.f64;
loc_82C7B438:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f28,7712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7712);
	ctx.f28.f64 = double(temp.f32);
	// fcmpu cr6,f27,f28
	ctx.cr6.compare(ctx.f27.f64, ctx.f28.f64);
	// bge cr6,0x82c7b58c
	if (!ctx.cr6.lt) goto loc_82C7B58C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f12,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-16540(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16540);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f30,f12,f13,f11
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x82c7b58c
	if (ctx.cr6.gt) goto loc_82C7B58C;
	// fneg f29,f30
	ctx.f29.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// blt cr6,0x82c7b58c
	if (ctx.cr6.lt) goto loc_82C7B58C;
	// fadds f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f13,f9
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// ble cr6,0x82c7b508
	if (!ctx.cr6.gt) goto loc_82C7B508;
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bgt cr6,0x82c7b4b4
	if (ctx.cr6.gt) goto loc_82C7B4B4;
	// addi r11,r11,8028
	ctx.r11.s64 = ctx.r11.s64 + 8028;
	// stfs f0,244(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f31,248(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// stfs f28,252(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f26,256(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,260(r1)
	PPC_STORE_U8(ctx.r1.u32 + 260, ctx.r11.u8);
	// b 0x82c7b5b8
	goto loc_82C7B5B8;
loc_82C7B4B4:
	// addi r29,r11,8028
	ctx.r29.s64 = ctx.r11.s64 + 8028;
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f28,92(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f26,96(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
	// bl 0x82c6e830
	ctx.lr = 0x82C7B4DC;
	sub_82C6E830(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// stfs f30,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stfs f27,156(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f26,160(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stb r30,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r30.u8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82c7b5b4
	goto loc_82C7B5B4;
loc_82C7B508:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// blt cr6,0x82c7b538
	if (ctx.cr6.lt) goto loc_82C7B538;
	// addi r11,r11,8028
	ctx.r11.s64 = ctx.r11.s64 + 8028;
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stfs f28,188(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f26,192(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r11.u8);
	// b 0x82c7b5b8
	goto loc_82C7B5B8;
loc_82C7B538:
	// addi r29,r11,8028
	ctx.r29.s64 = ctx.r11.s64 + 8028;
	// stfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stfs f29,120(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f27,124(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f26,128(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stb r30,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r30.u8);
	// bl 0x82c6e830
	ctx.lr = 0x82C7B560;
	sub_82C6E830(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// stfs f29,212(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f31,216(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stfs f28,220(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f26,224(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// stb r30,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, ctx.r30.u8);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// b 0x82c7b5b4
	goto loc_82C7B5B4;
loc_82C7B58C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,276(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f31,280(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r11,r11,8028
	ctx.r11.s64 = ctx.r11.s64 + 8028;
	// stfs f27,284(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stfs f26,288(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// stw r11,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,292(r1)
	PPC_STORE_U8(ctx.r1.u32 + 292, ctx.r11.u8);
loc_82C7B5B4:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_82C7B5B8:
	// bl 0x82c6e830
	ctx.lr = 0x82C7B5BC;
	sub_82C6E830(ctx, base);
loc_82C7B5BC:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6b2c
	ctx.lr = 0x82C7B5C8;
	__restfpr_26(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C7B5CC"))) PPC_WEAK_FUNC(sub_82C7B5CC);
PPC_FUNC_IMPL(__imp__sub_82C7B5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C7B5D0"))) PPC_WEAK_FUNC(sub_82C7B5D0);
PPC_FUNC_IMPL(__imp__sub_82C7B5D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82C7B5D8;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82cb6ab0
	ctx.lr = 0x82C7B5E0;
	__savefpr_14(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lfs f12,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f14,f3
	ctx.f14.f64 = ctx.f3.f64;
	// addi r11,r11,9352
	ctx.r11.s64 = ctx.r11.s64 + 9352;
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f4,f0,f2
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f3,f13,f2
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// lfs f7,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f2,f12,f2
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// lfs f6,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f31,f0,f11
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmuls f29,f12,f9
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// addi r28,r31,176
	ctx.r28.s64 = ctx.r31.s64 + 176;
	// fmuls f28,f13,f10
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// li r9,4
	ctx.r9.s64 = 4;
	// lfs f27,-18264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18264);
	ctx.f27.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmr f5,f27
	ctx.f5.f64 = ctx.f27.f64;
	// fmr f16,f27
	ctx.f16.f64 = ctx.f27.f64;
	// fmsubs f10,f12,f10,f31
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - ctx.f31.f64));
	// lfs f20,-18268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18268);
	ctx.f20.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmsubs f11,f13,f11,f29
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 - ctx.f29.f64));
	// lfs f29,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f29.f64 = double(temp.f32);
	// fmsubs f9,f0,f9,f28
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 - ctx.f28.f64));
	// lfs f28,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f28.f64 = double(temp.f32);
	// fmr f30,f20
	ctx.f30.f64 = ctx.f20.f64;
	// lfs f19,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f19.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f15,f19
	ctx.f15.f64 = ctx.f19.f64;
	// lfs f31,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f0,f4,f31
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// fmuls f13,f3,f31
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// fmuls f4,f11,f1
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f3,f10,f1
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f12,f2,f31
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// fmuls f2,f9,f1
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fadds f11,f8,f0
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fsubs f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fmuls f0,f4,f31
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// fadds f10,f7,f13
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// fsubs f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fmuls f13,f3,f31
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// fadds f9,f6,f12
	ctx.f9.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// fsubs f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// fmuls f12,f2,f31
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// fadds f4,f0,f11
	ctx.f4.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f4,176(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fadds f4,f13,f10
	ctx.f4.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f4,180(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fadds f4,f0,f8
	ctx.f4.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// stfs f4,188(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fsubs f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// stfs f8,200(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fadds f4,f12,f9
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f4,184(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fadds f4,f13,f7
	ctx.f4.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// stfs f4,192(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fsubs f8,f7,f13
	ctx.f8.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// stfs f8,204(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fsubs f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// fadds f4,f12,f6
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// stfs f4,196(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fsubs f8,f6,f12
	ctx.f8.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// stfs f8,208(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fsubs f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfs f0,220(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
loc_82C7B71C:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f28.f64));
	// lfs f11,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmsubs f0,f12,f11,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 - ctx.f0.f64));
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// ble cr6,0x82c7b748
	if (!ctx.cr6.gt) goto loc_82C7B748;
	// fmr f5,f0
	ctx.f5.f64 = ctx.f0.f64;
loc_82C7B748:
	// fcmpu cr6,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bge cr6,0x82c7b754
	if (!ctx.cr6.lt) goto loc_82C7B754;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_82C7B754:
	// lfs f11,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f11,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f16
	ctx.cr6.compare(ctx.f13.f64, ctx.f16.f64);
	// bge cr6,0x82c7b774
	if (!ctx.cr6.lt) goto loc_82C7B774;
	// fmr f16,f13
	ctx.f16.f64 = ctx.f13.f64;
	// fmr f15,f0
	ctx.f15.f64 = ctx.f0.f64;
loc_82C7B774:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne 0x82c7b71c
	if (!ctx.cr0.eq) goto loc_82C7B71C;
	// lfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f5,f13
	ctx.cr6.compare(ctx.f5.f64, ctx.f13.f64);
	// bge cr6,0x82c7b794
	if (!ctx.cr6.lt) goto loc_82C7B794;
	// fmr f5,f13
	ctx.f5.f64 = ctx.f13.f64;
loc_82C7B794:
	// fcmpu cr6,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// ble cr6,0x82c7b7a0
	if (!ctx.cr6.gt) goto loc_82C7B7A0;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_82C7B7A0:
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lfs f12,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmadds f21,f12,f31,f30
	ctx.f21.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f30.f64));
	// lwz r11,28104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28104);
	// lfs f13,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82c7b7c8
	if (ctx.cr0.eq) goto loc_82C7B7C8;
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// b 0x82c7b7cc
	goto loc_82C7B7CC;
loc_82C7B7C8:
	// fmr f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f13.f64;
loc_82C7B7CC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,6404(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6404);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f29,f11,f0
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// beq 0x82c7b7e4
	if (ctx.cr0.eq) goto loc_82C7B7E4;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
loc_82C7B7E4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f11,f21,f5
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f21.f64 - ctx.f5.f64));
	// lfs f0,7984(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7984);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fadds f22,f0,f29
	ctx.f22.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bgt cr6,0x82c7b814
	if (ctx.cr6.gt) goto loc_82C7B814;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C7B814:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r25,r31,152
	ctx.r25.s64 = ctx.r31.s64 + 152;
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// fmuls f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// lfs f8,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// fmr f26,f5
	ctx.f26.f64 = ctx.f5.f64;
	// lfs f6,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f6.f64 = double(temp.f32);
	// fcmpu cr6,f5,f21
	ctx.cr6.compare(ctx.f5.f64, ctx.f21.f64);
	// lfs f11,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// clrlwi r24,r11,24
	ctx.r24.u64 = ctx.r11.u32 & 0xFF;
	// lfs f10,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// lfs f9,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f5
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fmuls f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fsubs f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fsubs f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fsubs f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// fadds f25,f0,f11
	ctx.f25.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f25,80(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f24,f13,f10
	ctx.f24.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f24,84(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f23,f12,f9
	ctx.f23.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f23,88(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bge cr6,0x82c7ba6c
	if (!ctx.cr6.lt) goto loc_82C7BA6C;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r27,r11,-21672
	ctx.r27.s64 = ctx.r11.s64 + -21672;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f17,-18200(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18200);
	ctx.f17.f64 = double(temp.f32);
	// addi r26,r11,8028
	ctx.r26.s64 = ctx.r11.s64 + 8028;
	// lfs f18,7712(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7712);
	ctx.f18.f64 = double(temp.f32);
loc_82C7B8A8:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f30,f27
	ctx.f30.f64 = ctx.f27.f64;
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f22
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f22.f64));
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f22,f13
	ctx.f13.f64 = double(float(ctx.f22.f64 * ctx.f13.f64));
	// fmuls f12,f22,f12
	ctx.f12.f64 = double(float(ctx.f22.f64 * ctx.f12.f64));
	// li r11,0
	ctx.r11.s64 = 0;
	// fmr f28,f20
	ctx.f28.f64 = ctx.f20.f64;
	// addi r30,r1,176
	ctx.r30.s64 = ctx.r1.s64 + 176;
	// fadds f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f25.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f0,f13,f24
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f24.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f0,f12,f23
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f23.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_82C7B8E8:
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// fmr f1,f22
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f22.f64;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// clrlwi r11,r29,30
	ctx.r11.u64 = ctx.r29.u32 & 0x3;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82c7b220
	ctx.lr = 0x82C7B910;
	sub_82C7B220(ctx, base);
	// fcmpu cr6,f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f27.f64);
	// beq cr6,0x82c7b930
	if (ctx.cr6.eq) goto loc_82C7B930;
	// fcmpu cr6,f28,f1
	ctx.cr6.compare(ctx.f28.f64, ctx.f1.f64);
	// bge cr6,0x82c7b924
	if (!ctx.cr6.lt) goto loc_82C7B924;
	// fmr f28,f1
	ctx.f28.f64 = ctx.f1.f64;
loc_82C7B924:
	// fcmpu cr6,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f1.f64);
	// ble cr6,0x82c7b930
	if (!ctx.cr6.gt) goto loc_82C7B930;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
loc_82C7B930:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82c7b8e8
	if (ctx.cr6.lt) goto loc_82C7B8E8;
	// fcmpu cr6,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f29.f64);
	// blt cr6,0x82c7ba28
	if (ctx.cr6.lt) goto loc_82C7BA28;
	// fcmpu cr6,f30,f29
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// bge cr6,0x82c7b954
	if (!ctx.cr6.lt) goto loc_82C7B954;
	// fmr f30,f29
	ctx.f30.f64 = ctx.f29.f64;
loc_82C7B954:
	// fsubs f13,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
	// lfs f11,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fnmsubs f13,f0,f31,f26
	ctx.f13.f64 = double(float(-(ctx.f0.f64 * ctx.f31.f64 - ctx.f26.f64)));
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x82c7b980
	if (!ctx.cr6.lt) goto loc_82C7B980;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
loc_82C7B980:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82c7b98c
	if (!ctx.cr6.gt) goto loc_82C7B98C;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82C7B98C:
	// fcmpu cr6,f16,f19
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f16.f64, ctx.f19.f64);
	// bge cr6,0x82c7ba00
	if (!ctx.cr6.lt) goto loc_82C7BA00;
	// fcmpu cr6,f10,f18
	ctx.cr6.compare(ctx.f10.f64, ctx.f18.f64);
	// bge cr6,0x82c7ba00
	if (!ctx.cr6.lt) goto loc_82C7BA00;
	// fcmpu cr6,f15,f19
	ctx.cr6.compare(ctx.f15.f64, ctx.f19.f64);
	// bgt cr6,0x82c7b9b8
	if (ctx.cr6.gt) goto loc_82C7B9B8;
	// lfs f12,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fmsubs f12,f12,f17,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f17.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82c7b9d4
	if (!ctx.cr6.lt) goto loc_82C7B9D4;
loc_82C7B9B8:
	// fcmpu cr6,f15,f19
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f15.f64, ctx.f19.f64);
	// ble cr6,0x82c7ba00
	if (!ctx.cr6.gt) goto loc_82C7BA00;
	// lfs f12,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f12,f12,f31,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f11.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82c7ba00
	if (ctx.cr6.gt) goto loc_82C7BA00;
loc_82C7B9D4:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stfs f13,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stb r24,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r24.u8);
	// stfs f18,124(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f14,128(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x82c6e830
	ctx.lr = 0x82C7B9F8;
	sub_82C6E830(ctx, base);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// b 0x82c7ba28
	goto loc_82C7BA28;
loc_82C7BA00:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stfs f13,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r26.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stb r24,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r24.u8);
	// stfs f10,156(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f14,160(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// bl 0x82c6e830
	ctx.lr = 0x82C7BA24;
	sub_82C6E830(ctx, base);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
loc_82C7BA28:
	// lfs f0,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f13,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f26,f0,f26
	ctx.f26.f64 = double(float(ctx.f0.f64 + ctx.f26.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fcmpu cr6,f26,f21
	ctx.cr6.compare(ctx.f26.f64, ctx.f21.f64);
	// fadds f25,f13,f25
	ctx.f25.f64 = double(float(ctx.f13.f64 + ctx.f25.f64));
	// stfs f25,80(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f24,f12,f24
	ctx.f24.f64 = double(float(ctx.f12.f64 + ctx.f24.f64));
	// stfs f24,84(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f23,f0,f23
	ctx.f23.f64 = double(float(ctx.f0.f64 + ctx.f23.f64));
	// stfs f23,88(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// blt cr6,0x82c7b8a8
	if (ctx.cr6.lt) goto loc_82C7B8A8;
loc_82C7BA6C:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82cb6afc
	ctx.lr = 0x82C7BA78;
	__restfpr_14(ctx, base);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C7BA7C"))) PPC_WEAK_FUNC(sub_82C7BA7C);
PPC_FUNC_IMPL(__imp__sub_82C7BA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C7BA80"))) PPC_WEAK_FUNC(sub_82C7BA80);
PPC_FUNC_IMPL(__imp__sub_82C7BA80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82C7BA88;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6adc
	ctx.lr = 0x82C7BA90;
	__savefpr_25(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31902
	ctx.r11.s64 = -2090729472;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,-31684(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31684);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,-31684(r11)
	PPC_STORE_U32(ctx.r11.u32 + -31684, ctx.r10.u32);
	// bl 0x82b9b698
	ctx.lr = 0x82C7BAB8;
	sub_82B9B698(ctx, base);
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,5268
	ctx.r4.s64 = ctx.r11.s64 + 5268;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c383a0
	ctx.lr = 0x82C7BACC;
	sub_82C383A0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lis r28,-31904
	ctx.r28.s64 = -2090860544;
	// lfs f29,6140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f29.f64 = double(temp.f32);
	// lfs f26,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f26.f64 = double(temp.f32);
	// beq 0x82c7baf4
	if (ctx.cr0.eq) goto loc_82C7BAF4;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// b 0x82c7bb0c
	goto loc_82C7BB0C;
loc_82C7BAF4:
	// lwz r11,28104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28104);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82c7bb08
	if (ctx.cr0.eq) goto loc_82C7BB08;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82c7bb0c
	goto loc_82C7BB0C;
loc_82C7BB08:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64;
loc_82C7BB0C:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lfs f10,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f13,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f9,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f31,f12,f9
	ctx.f31.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// lfs f12,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f30,f11,f12
	ctx.f30.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f12,168(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,172(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f9.f64 = double(temp.f32);
	// fneg f10,f0
	ctx.f10.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmadds f13,f11,f31,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f13.f64));
	// fmadds f13,f30,f9,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// blt cr6,0x82c7bf38
	if (ctx.cr6.lt) goto loc_82C7BF38;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82c7bf38
	if (ctx.cr6.gt) goto loc_82C7BF38;
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6096
	ctx.r4.s64 = ctx.r11.s64 + 6096;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c383a0
	ctx.lr = 0x82C7BB7C;
	sub_82C383A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c7bb8c
	if (ctx.cr0.eq) goto loc_82C7BB8C;
	// lfs f25,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f25.f64 = double(temp.f32);
	// b 0x82c7bba4
	goto loc_82C7BBA4;
loc_82C7BB8C:
	// lwz r11,28104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28104);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82c7bba0
	if (ctx.cr0.eq) goto loc_82C7BBA0;
	// lfs f25,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f25.f64 = double(temp.f32);
	// b 0x82c7bba4
	goto loc_82C7BBA4;
loc_82C7BBA0:
	// fmr f25,f29
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f29.f64;
loc_82C7BBA4:
	// lfs f0,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// fadds f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f25.f64));
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6372
	ctx.r4.s64 = ctx.r11.s64 + 6372;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmuls f28,f0,f26
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// bl 0x82c383a0
	ctx.lr = 0x82C7BBC4;
	sub_82C383A0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82c7bbd4
	if (ctx.cr0.eq) goto loc_82C7BBD4;
	// lfs f29,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// b 0x82c7bbe4
	goto loc_82C7BBE4;
loc_82C7BBD4:
	// lwz r11,28104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28104);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82c7bbe4
	if (ctx.cr0.eq) goto loc_82C7BBE4;
	// lfs f29,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f29.f64 = double(temp.f32);
loc_82C7BBE4:
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6648
	ctx.r4.s64 = ctx.r11.s64 + 6648;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c383a0
	ctx.lr = 0x82C7BBF8;
	sub_82C383A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f27,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f27.f64 = double(temp.f32);
	// stfs f27,80(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f27,84(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f27,88(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// beq 0x82c7bc2c
	if (ctx.cr0.eq) goto loc_82C7BC2C;
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f7,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// b 0x82c7bc78
	goto loc_82C7BC78;
loc_82C7BC2C:
	// lfs f13,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// beq cr6,0x82c7bf38
	if (ctx.cr6.eq) goto loc_82C7BF38;
	// lfs f0,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f0,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f27,100(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82ba20e0
	ctx.lr = 0x82C7BC64;
	sub_82BA20E0(ctx, base);
	// lfs f8,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
loc_82C7BC78:
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stfs f7,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r11,r11,9352
	ctx.r11.s64 = ctx.r11.s64 + 9352;
	// lfs f6,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f5.f64 = double(temp.f32);
	// lfs f13,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f4.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f2,f7,f12
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f9,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f3,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// fmsubs f11,f11,f10,f2
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 - ctx.f2.f64));
	// fmsubs f10,f8,f12,f9
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 - ctx.f9.f64));
	// fmuls f12,f6,f0
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f9,f5,f0
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmsubs f12,f13,f4,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 - ctx.f12.f64));
	// fmsubs f13,f3,f13,f9
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 - ctx.f9.f64));
	// fmr f9,f6
	ctx.f9.f64 = ctx.f6.f64;
	// fmr f4,f5
	ctx.f4.f64 = ctx.f5.f64;
	// fmuls f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f9,f30,f9
	ctx.f9.f64 = double(float(ctx.f30.f64 * ctx.f9.f64));
	// fmadds f9,f5,f31,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 + ctx.f9.f64));
	// fmadds f5,f4,f13,f12
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f12.f64));
	// bne cr6,0x82c7bdf8
	if (!ctx.cr6.eq) goto loc_82C7BDF8;
	// fcmpu cr6,f9,f27
	ctx.cr6.compare(ctx.f9.f64, ctx.f27.f64);
	// blt cr6,0x82c7bd80
	if (ctx.cr6.lt) goto loc_82C7BD80;
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f28
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// bge cr6,0x82c7bd0c
	if (!ctx.cr6.lt) goto loc_82C7BD0C;
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
	// b 0x82c7bda0
	goto loc_82C7BDA0;
loc_82C7BD0C:
	// fneg f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f5,f11
	ctx.cr6.compare(ctx.f5.f64, ctx.f11.f64);
	// ble cr6,0x82c7bd80
	if (!ctx.cr6.gt) goto loc_82C7BD80;
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmadds f0,f11,f0,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bgt cr6,0x82c7bd80
	if (ctx.cr6.gt) goto loc_82C7BD80;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f10,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,-18204(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18204);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f0,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmadds f0,f10,f31,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x82c7bd80
	if (ctx.cr6.lt) goto loc_82C7BD80;
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82c7bd80
	if (ctx.cr6.gt) goto loc_82C7BD80;
	// lfs f0,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmuls f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f13,-18264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18264);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82c7bd98
	if (!ctx.cr6.eq) goto loc_82C7BD98;
loc_82C7BD80:
	// fcmpu cr6,f9,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f27.f64);
	// blt cr6,0x82c7bf38
	if (ctx.cr6.lt) goto loc_82C7BF38;
	// fcmpu cr6,f5,f27
	ctx.cr6.compare(ctx.f5.f64, ctx.f27.f64);
	// bge cr6,0x82c7bf38
	if (!ctx.cr6.lt) goto loc_82C7BF38;
	// fdivs f0,f9,f5
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f5.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82C7BD98:
	// fcmpu cr6,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// blt cr6,0x82c7bf38
	if (ctx.cr6.lt) goto loc_82C7BF38;
loc_82C7BDA0:
	// lfs f13,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82c7bdc0
	if (!ctx.cr6.gt) goto loc_82C7BDC0;
	// lfs f12,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f25
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f25.f64));
	// fmadds f13,f12,f26,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f26.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82c7bf38
	if (ctx.cr6.gt) goto loc_82C7BF38;
loc_82C7BDC0:
	// lfs f13,256(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f2,f13,f12,f0
	ctx.f2.f64 = double(float(-(ctx.f13.f64 * ctx.f12.f64 - ctx.f0.f64)));
	// fcmpu cr6,f2,f27
	ctx.cr6.compare(ctx.f2.f64, ctx.f27.f64);
	// bge cr6,0x82c7bdd8
	if (!ctx.cr6.lt) goto loc_82C7BDD8;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
loc_82C7BDD8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f25.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7BDF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c7bf38
	goto loc_82C7BF38;
loc_82C7BDF8:
	// lfs f6,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f0,f8,f30
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// fmadds f13,f29,f26,f6
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f26.f64 + ctx.f6.f64));
	// fmadds f0,f7,f31,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f0.f64));
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82c7be44
	if (ctx.cr6.lt) goto loc_82C7BE44;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82c7be44
	if (ctx.cr6.gt) goto loc_82C7BE44;
	// fmuls f13,f11,f30
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fmadds f0,f25,f26,f6
	ctx.f0.f64 = double(float(ctx.f25.f64 * ctx.f26.f64 + ctx.f6.f64));
	// fmadds f13,f10,f31,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f13.f64));
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82c7be44
	if (ctx.cr6.lt) goto loc_82C7BE44;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82c7be44
	if (ctx.cr6.gt) goto loc_82C7BE44;
loc_82C7BE3C:
	// fmr f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f27.f64;
	// b 0x82c7be64
	goto loc_82C7BE64;
loc_82C7BE44:
	// fcmpu cr6,f9,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f27.f64);
	// blt cr6,0x82c7be3c
	if (ctx.cr6.lt) goto loc_82C7BE3C;
	// fcmpu cr6,f5,f27
	ctx.cr6.compare(ctx.f5.f64, ctx.f27.f64);
	// bge cr6,0x82c7bf38
	if (!ctx.cr6.lt) goto loc_82C7BF38;
	// fdivs f0,f9,f5
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f5.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// blt cr6,0x82c7bf38
	if (ctx.cr6.lt) goto loc_82C7BF38;
loc_82C7BE64:
	// lfs f11,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82c7bea0
	if (!ctx.cr6.gt) goto loc_82C7BEA0;
	// fcmpu cr6,f25,f29
	ctx.cr6.compare(ctx.f25.f64, ctx.f29.f64);
	// ble cr6,0x82c7be80
	if (!ctx.cr6.gt) goto loc_82C7BE80;
	// fmr f12,f25
	ctx.f12.f64 = ctx.f25.f64;
	// b 0x82c7be84
	goto loc_82C7BE84;
loc_82C7BE80:
	// fmr f12,f29
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f29.f64;
loc_82C7BE84:
	// lfs f10,256(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f13,16084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16084);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f12,f13,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82c7bf38
	if (ctx.cr6.gt) goto loc_82C7BF38;
loc_82C7BEA0:
	// lfs f13,256(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f13,f6,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f6.f64 - ctx.f0.f64)));
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bge cr6,0x82c7beb4
	if (!ctx.cr6.lt) goto loc_82C7BEB4;
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
loc_82C7BEB4:
	// lfs f12,76(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// lfs f9,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lfs f7,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f7.f64 = double(temp.f32);
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// lfs f13,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lfs f5,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f4,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmr f8,f10
	ctx.f8.f64 = ctx.f10.f64;
	// fmadds f9,f8,f7,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f9.f64));
	// fmuls f3,f9,f13
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fadds f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f13,f5,f12
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7BF38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C7BF38:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6b28
	ctx.lr = 0x82C7BF44;
	__restfpr_25(ctx, base);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C7BF48"))) PPC_WEAK_FUNC(sub_82C7BF48);
PPC_FUNC_IMPL(__imp__sub_82C7BF48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82C7BF50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// stb r30,237(r31)
	PPC_STORE_U8(ctx.r31.u32 + 237, ctx.r30.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c7c1a4
	if (!ctx.cr6.eq) goto loc_82C7C1A4;
	// addi r28,r31,100
	ctx.r28.s64 = ctx.r31.s64 + 100;
	// lfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f9,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82c7bfd0
	if (!ctx.cr6.lt) goto loc_82C7BFD0;
	// lfs f0,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// lfs f0,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// lfs f0,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
loc_82C7BFD0:
	// bl 0x82c0d1b0
	ctx.lr = 0x82C7BFD4;
	sub_82C0D1B0(ctx, base);
	// lbz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 236);
	// lfs f13,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82c7bfec
	if (ctx.cr0.eq) goto loc_82C7BFEC;
	// stb r30,236(r31)
	PPC_STORE_U8(ctx.r31.u32 + 236, ctx.r30.u8);
	// b 0x82c7bff8
	goto loc_82C7BFF8;
loc_82C7BFEC:
	// lfs f0,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82c7c1a4
	if (ctx.cr6.lt) goto loc_82C7C1A4;
loc_82C7BFF8:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-18168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18168);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f0,f12,f11
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82c7c024
	if (!ctx.cr6.lt) goto loc_82C7C024;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r11,1048(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1048);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82c7c1a4
	if (ctx.cr0.eq) goto loc_82C7C1A4;
loc_82C7C024:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// bl 0x82c38320
	ctx.lr = 0x82C7C034;
	sub_82C38320(ctx, base);
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,10592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10592, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// stb r10,237(r31)
	PPC_STORE_U8(ctx.r31.u32 + 237, ctx.r10.u8);
	// lfs f11,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f12,f11,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82c7c068
	if (ctx.cr6.lt) goto loc_82C7C068;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82C7C068:
	// lfs f2,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f2.f64 = double(temp.f32);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// fmr f3,f0
	ctx.f3.f64 = ctx.f0.f64;
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// bl 0x82c6e740
	ctx.lr = 0x82C7C080;
	sub_82C6E740(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c7c0f8
	if (ctx.cr0.eq) goto loc_82C7C0F8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82c0b030
	ctx.lr = 0x82C7C098;
	sub_82C0B030(ctx, base);
	// b 0x82c7c0ec
	goto loc_82C7C0EC;
loc_82C7C09C:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82c7c0e4
	if (ctx.cr6.eq) goto loc_82C7C0E4;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82c7c0cc
	if (ctx.cr0.eq) goto loc_82C7C0CC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7C0C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82c7c0e4
	if (!ctx.cr6.eq) goto loc_82C7C0E4;
loc_82C7C0CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7C0E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C7C0E4:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82c0aa30
	ctx.lr = 0x82C7C0EC;
	sub_82C0AA30(ctx, base);
loc_82C7C0EC:
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82c7c09c
	if (!ctx.cr0.eq) goto loc_82C7C09C;
	// b 0x82c7c1a4
	goto loc_82C7C1A4;
loc_82C7C0F8:
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lwz r11,28104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28104);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82c7c19c
	goto loc_82C7C19C;
loc_82C7C10C:
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82c7c198
	if (ctx.cr6.eq) goto loc_82C7C198;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82c7c140
	if (ctx.cr0.eq) goto loc_82C7C140;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7C134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82c7c198
	if (!ctx.cr6.eq) goto loc_82C7C198;
loc_82C7C140:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82c7c198
	if (!ctx.cr6.lt) goto loc_82C7C198;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7C198;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C7C198:
	// lwz r29,12(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
loc_82C7C19C:
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x82c7c10c
	if (!ctx.cr0.eq) goto loc_82C7C10C;
loc_82C7C1A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C7C1AC"))) PPC_WEAK_FUNC(sub_82C7C1AC);
PPC_FUNC_IMPL(__imp__sub_82C7C1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C7C1B0"))) PPC_WEAK_FUNC(sub_82C7C1B0);
PPC_FUNC_IMPL(__imp__sub_82C7C1B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82C7C1B8;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82cb6ad0
	ctx.lr = 0x82C7C1C0;
	__savefpr_22(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82c38320
	ctx.lr = 0x82C7C1D8;
	sub_82C38320(ctx, base);
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,10592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10592);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82c7c830
	if (!ctx.cr6.eq) goto loc_82C7C830;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// lfs f12,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lfs f11,156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f10,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f27,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f9.f64 = double(temp.f32);
	// addi r26,r11,8896
	ctx.r26.s64 = ctx.r11.s64 + 8896;
	// lfs f8,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lwz r11,60(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fsubs f12,f5,f10
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f10.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fsubs f13,f6,f11
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f9,f7,f12
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f10,f8,f13
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// beq cr6,0x82c7c2a0
	if (ctx.cr6.eq) goto loc_82C7C2A0;
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7C2A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C7C2A0:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r25,8(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi r25,0
	ctx.cr0.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lfs f25,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f25.f64 = double(temp.f32);
	// beq 0x82c7c4f4
	if (ctx.cr0.eq) goto loc_82C7C4F4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r24,3
	ctx.r24.s64 = 3;
	// lfs f28,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f28.f64 = double(temp.f32);
	// lfs f26,-18264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18264);
	ctx.f26.f64 = double(temp.f32);
loc_82C7C2D0:
	// lfs f0,16(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82c7c2e8
	if (ctx.cr6.lt) goto loc_82C7C2E8;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82c7c304
	goto loc_82C7C304;
loc_82C7C2E8:
	// fcmpu cr6,f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bgt cr6,0x82c7c300
	if (ctx.cr6.gt) goto loc_82C7C300;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,255
	ctx.r27.s64 = 255;
	// b 0x82c7c30c
	goto loc_82C7C30C;
loc_82C7C300:
	// li r29,255
	ctx.r29.s64 = 255;
loc_82C7C304:
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,255
	ctx.r28.s64 = 255;
loc_82C7C30C:
	// lbz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82c7c348
	if (ctx.cr0.eq) goto loc_82C7C348;
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// clrlwi r10,r28,16
	ctx.r10.u64 = ctx.r28.u32 & 0xFFFF;
	// clrlwi r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	// addi r9,r9,255
	ctx.r9.s64 = ctx.r9.s64 + 255;
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// divw r9,r9,r24
	ctx.r9.s32 = ctx.r9.s32 / ctx.r24.s32;
	// divw r10,r10,r24
	ctx.r10.s32 = ctx.r10.s32 / ctx.r24.s32;
	// divw r11,r11,r24
	ctx.r11.s32 = ctx.r11.s32 / ctx.r24.s32;
	// clrlwi r29,r9,16
	ctx.r29.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r28,r10,16
	ctx.r28.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r27,r11,16
	ctx.r27.u64 = ctx.r11.u32 & 0xFFFF;
loc_82C7C348:
	// lfs f0,16(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,60(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// lfs f12,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f10,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f7,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f10,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fadds f31,f8,f12
	ctx.f31.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// fadds f30,f11,f7
	ctx.f30.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fadds f29,f0,f6
	ctx.f29.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// fadds f0,f10,f31
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f12,f9,f30
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f30.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// beq cr6,0x82c7c3e0
	if (ctx.cr6.eq) goto loc_82C7C3E0;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7C3E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C7C3E0:
	// lfs f0,12(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,60(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// lfs f13,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// beq cr6,0x82c7c440
	if (ctx.cr6.eq) goto loc_82C7C440;
	// clrlwi r7,r27,16
	ctx.r7.u64 = ctx.r27.u32 & 0xFFFF;
	// clrlwi r6,r28,16
	ctx.r6.u64 = ctx.r28.u32 & 0xFFFF;
	// clrlwi r5,r29,16
	ctx.r5.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7C440;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C7C440:
	// lfs f0,20(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// bge cr6,0x82c7c4e8
	if (!ctx.cr6.lt) goto loc_82C7C4E8;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,60(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fadds f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// lfs f10,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f11,f11,f28
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f0,20(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// beq cr6,0x82c7c4e8
	if (ctx.cr6.eq) goto loc_82C7C4E8;
	// clrlwi r7,r27,16
	ctx.r7.u64 = ctx.r27.u32 & 0xFFFF;
	// clrlwi r6,r28,16
	ctx.r6.u64 = ctx.r28.u32 & 0xFFFF;
	// clrlwi r5,r29,16
	ctx.r5.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7C4E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C7C4E8:
	// lwz r25,32(r25)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// cmplwi r25,0
	ctx.cr0.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne 0x82c7c2d0
	if (!ctx.cr0.eq) goto loc_82C7C2D0;
loc_82C7C4F4:
	// lfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,60(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// lfs f13,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// beq cr6,0x82c7c560
	if (ctx.cr6.eq) goto loc_82C7C560;
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7C560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C7C560:
	// lfs f0,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,60(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// lfs f13,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f11,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// beq cr6,0x82c7c5d0
	if (ctx.cr6.eq) goto loc_82C7C5D0;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7C5D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C7C5D0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// li r10,7
	ctx.r10.s64 = 7;
	// lfs f11,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,152
	ctx.r11.s64 = ctx.r1.s64 + 152;
	// fmuls f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f8,168(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f7,172(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f11,f10,f9
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// lfs f5,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f10,f8,f9
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// lfs f8,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// lfs f7,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmuls f6,f5,f6
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
loc_82C7C638:
	// stfs f25,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f25,-4(r11)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f25,0(r11)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bge 0x82c7c638
	if (!ctx.cr0.lt) goto loc_82C7C638;
	// lfs f5,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// li r28,1
	ctx.r28.s64 = 1;
	// lfs f4,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// lfs f2,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f3,f3,f12
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// lfs f30,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// lfs f27,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// fadds f30,f30,f0
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f27,f27,f0
	ctx.f27.f64 = double(float(ctx.f27.f64 + ctx.f0.f64));
	// lfs f31,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// lfs f29,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f31,f31,f12
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// lfs f28,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f28.f64 = double(temp.f32);
	// fadds f29,f29,f13
	ctx.f29.f64 = double(float(ctx.f29.f64 + ctx.f13.f64));
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f28,f28,f12
	ctx.f28.f64 = double(float(ctx.f28.f64 + ctx.f12.f64));
	// lfs f26,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f26.f64 = double(temp.f32);
	// fadds f25,f0,f12
	ctx.f25.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fadds f26,f26,f13
	ctx.f26.f64 = double(float(ctx.f26.f64 + ctx.f13.f64));
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// fsubs f0,f5,f11
	ctx.f0.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// li r27,4
	ctx.r27.s64 = 4;
	// fsubs f13,f4,f10
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fsubs f12,f3,f9
	ctx.f12.f64 = double(float(ctx.f3.f64 - ctx.f9.f64));
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fadds f5,f2,f11
	ctx.f5.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f4,f1,f10
	ctx.f4.f64 = double(float(ctx.f1.f64 + ctx.f10.f64));
	// stfs f5,156(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fadds f3,f31,f9
	ctx.f3.f64 = double(float(ctx.f31.f64 + ctx.f9.f64));
	// stfs f4,160(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fadds f2,f30,f11
	ctx.f2.f64 = double(float(ctx.f30.f64 + ctx.f11.f64));
	// stfs f3,164(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fadds f1,f29,f10
	ctx.f1.f64 = double(float(ctx.f29.f64 + ctx.f10.f64));
	// stfs f2,168(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fadds f31,f28,f9
	ctx.f31.f64 = double(float(ctx.f28.f64 + ctx.f9.f64));
	// stfs f1,172(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fsubs f11,f27,f11
	ctx.f11.f64 = double(float(ctx.f27.f64 - ctx.f11.f64));
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fsubs f10,f26,f10
	ctx.f10.f64 = double(float(ctx.f26.f64 - ctx.f10.f64));
	// stfs f11,180(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fsubs f9,f25,f9
	ctx.f9.f64 = double(float(ctx.f25.f64 - ctx.f9.f64));
	// stfs f10,184(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fadds f30,f0,f8
	ctx.f30.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// stfs f9,188(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fadds f29,f13,f7
	ctx.f29.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// stfs f30,192(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fadds f28,f12,f6
	ctx.f28.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// stfs f29,196(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fadds f27,f5,f8
	ctx.f27.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// stfs f28,200(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fadds f26,f4,f7
	ctx.f26.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// stfs f27,204(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fadds f25,f3,f6
	ctx.f25.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// stfs f26,208(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fadds f24,f2,f8
	ctx.f24.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// stfs f25,212(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fadds f23,f1,f7
	ctx.f23.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// stfs f24,216(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// fadds f22,f31,f6
	ctx.f22.f64 = double(float(ctx.f31.f64 + ctx.f6.f64));
	// stfs f23,220(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// fadds f8,f11,f8
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// stfs f22,224(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fadds f7,f10,f7
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f8,228(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// fadds f6,f9,f6
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// stfs f7,232(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f6,236(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
loc_82C7C77C:
	// lwz r11,60(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c7c820
	if (ctx.cr6.eq) goto loc_82C7C820;
	// srawi r11,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 2;
	// li r7,200
	ctx.r7.s64 = 200;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// li r6,200
	ctx.r6.s64 = 200;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// subf r10,r10,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r10.s64;
	// li r5,200
	ctx.r5.s64 = 200;
	// mulli r30,r10,12
	ctx.r30.s64 = ctx.r10.s64 * 12;
	// lwz r10,60(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C7C7C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,60(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c7c820
	if (ctx.cr6.eq) goto loc_82C7C820;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,60(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// li r7,200
	ctx.r7.s64 = 200;
	// li r6,200
	ctx.r6.s64 = 200;
	// li r5,200
	ctx.r5.s64 = 200;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7C7F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,60(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c7c820
	if (ctx.cr6.eq) goto loc_82C7C820;
	// li r7,200
	ctx.r7.s64 = 200;
	// li r6,200
	ctx.r6.s64 = 200;
	// li r5,200
	ctx.r5.s64 = 200;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7C820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C7C820:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x82c7c77c
	if (!ctx.cr0.eq) goto loc_82C7C77C;
loc_82C7C830:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82cb6b1c
	ctx.lr = 0x82C7C83C;
	__restfpr_22(ctx, base);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C7C840"))) PPC_WEAK_FUNC(sub_82C7C840);
PPC_FUNC_IMPL(__imp__sub_82C7C840) {
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
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpw cr6,r4,r30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82c7c888
	if (ctx.cr6.eq) goto loc_82C7C888;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82c7c884
	if (ctx.cr0.eq) goto loc_82C7C884;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7C884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C7C884:
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
loc_82C7C888:
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

__attribute__((alias("__imp__sub_82C7C8A0"))) PPC_WEAK_FUNC(sub_82C7C8A0);
PPC_FUNC_IMPL(__imp__sub_82C7C8A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7C8A8"))) PPC_WEAK_FUNC(sub_82C7C8A8);
PPC_FUNC_IMPL(__imp__sub_82C7C8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r11,r11,12720
	ctx.r11.s64 = ctx.r11.s64 + 12720;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7C8BC"))) PPC_WEAK_FUNC(sub_82C7C8BC);
PPC_FUNC_IMPL(__imp__sub_82C7C8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C7C8C0"))) PPC_WEAK_FUNC(sub_82C7C8C0);
PPC_FUNC_IMPL(__imp__sub_82C7C8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,12720
	ctx.r11.s64 = ctx.r11.s64 + 12720;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7C8D8"))) PPC_WEAK_FUNC(sub_82C7C8D8);
PPC_FUNC_IMPL(__imp__sub_82C7C8D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7C8E4"))) PPC_WEAK_FUNC(sub_82C7C8E4);
PPC_FUNC_IMPL(__imp__sub_82C7C8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C7C8E8"))) PPC_WEAK_FUNC(sub_82C7C8E8);
PPC_FUNC_IMPL(__imp__sub_82C7C8E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7C8F8"))) PPC_WEAK_FUNC(sub_82C7C8F8);
PPC_FUNC_IMPL(__imp__sub_82C7C8F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,12648
	ctx.r11.s64 = ctx.r11.s64 + 12648;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f0,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7C940"))) PPC_WEAK_FUNC(sub_82C7C940);
PPC_FUNC_IMPL(__imp__sub_82C7C940) {
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
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// beq cr6,0x82c7ca1c
	if (ctx.cr6.eq) goto loc_82C7CA1C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82c7ca18
	if (ctx.cr6.eq) goto loc_82C7CA18;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7C99C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c7c9d0
	if (ctx.cr0.eq) goto loc_82C7C9D0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r31,124
	ctx.r5.s64 = ctx.r31.s64 + 124;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7C9C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c7ca18
	if (!ctx.cr0.eq) goto loc_82C7CA18;
loc_82C7C9D0:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82c7c9ec
	if (ctx.cr6.eq) goto loc_82C7C9EC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82c7c9ec
	if (ctx.cr6.eq) goto loc_82C7C9EC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
loc_82C7C9EC:
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c7ca74
	if (!ctx.cr6.eq) goto loc_82C7CA74;
	// li r11,5
	ctx.r11.s64 = 5;
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// b 0x82c7ca74
	goto loc_82C7CA74;
loc_82C7CA18:
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
loc_82C7CA1C:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,208(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,220(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,216(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// lfs f0,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,224(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// stw r10,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r10.u32);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82c7ca74
	if (ctx.cr6.eq) goto loc_82C7CA74;
	// stw r10,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r10.u32);
loc_82C7CA74:
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

__attribute__((alias("__imp__sub_82C7CA88"))) PPC_WEAK_FUNC(sub_82C7CA88);
PPC_FUNC_IMPL(__imp__sub_82C7CA88) {
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
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82c7cae8
	if (ctx.cr6.lt) goto loc_82C7CAE8;
	// beq cr6,0x82c7cae0
	if (ctx.cr6.eq) goto loc_82C7CAE0;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82c7cac4
	if (ctx.cr6.eq) goto loc_82C7CAC4;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x82c7cc60
	if (!ctx.cr6.eq) goto loc_82C7CC60;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x82c7cc58
	goto loc_82C7CC58;
loc_82C7CAC4:
	// li r4,4
	ctx.r4.s64 = 4;
loc_82C7CAC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c7c840
	ctx.lr = 0x82C7CAD0;
	sub_82C7C840(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,224(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// b 0x82c7cc60
	goto loc_82C7CC60;
loc_82C7CAE0:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82c7cac8
	goto loc_82C7CAC8;
loc_82C7CAE8:
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82c7cbd8
	if (ctx.cr0.eq) goto loc_82C7CBD8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// beq cr6,0x82c7cbb8
	if (ctx.cr6.eq) goto loc_82C7CBB8;
	// lfs f12,220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82c7cbb8
	if (!ctx.cr6.lt) goto loc_82C7CBB8;
	// lfs f0,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82c7cb38
	if (ctx.cr6.lt) goto loc_82C7CB38;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82C7CB38:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x82c7cbb8
	if (ctx.cr6.gt) goto loc_82C7CBB8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f12,224(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,7616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7616);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x82c7cbb8
	if (ctx.cr6.gt) goto loc_82C7CBB8;
	// lfs f0,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82c7cb90
	if (!ctx.cr6.gt) goto loc_82C7CB90;
	// stfs f11,224(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stfs f0,240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// b 0x82c7cc58
	goto loc_82C7CC58;
loc_82C7CB90:
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82c7cbb0
	if (!ctx.cr6.gt) goto loc_82C7CBB0;
	// stfs f13,224(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stfs f0,240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// b 0x82c7cc5c
	goto loc_82C7CC5C;
loc_82C7CBB0:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82c7cc5c
	goto loc_82C7CC5C;
loc_82C7CBB8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,224(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82c7cbb0
	if (!ctx.cr6.lt) goto loc_82C7CBB0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82c7cc5c
	goto loc_82C7CC5C;
loc_82C7CBD8:
	// lfs f13,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82c7cbfc
	if (ctx.cr6.lt) goto loc_82C7CBFC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82C7CBFC:
	// lfs f13,220(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82c7cc54
	if (!ctx.cr6.lt) goto loc_82C7CC54;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82c7cc2c
	if (!ctx.cr6.gt) goto loc_82C7CC2C;
	// stfs f0,224(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stfs f13,240(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// b 0x82c7cc58
	goto loc_82C7CC58;
loc_82C7CC2C:
	// lfs f13,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82c7cbb0
	if (!ctx.cr6.gt) goto loc_82C7CBB0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,4
	ctx.r4.s64 = 4;
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,224(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// stfs f13,240(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// b 0x82c7cc5c
	goto loc_82C7CC5C;
loc_82C7CC54:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82C7CC58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C7CC5C:
	// bl 0x82c7c840
	ctx.lr = 0x82C7CC60;
	sub_82C7C840(ctx, base);
loc_82C7CC60:
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

__attribute__((alias("__imp__sub_82C7CC74"))) PPC_WEAK_FUNC(sub_82C7CC74);
PPC_FUNC_IMPL(__imp__sub_82C7CC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C7CC78"))) PPC_WEAK_FUNC(sub_82C7CC78);
PPC_FUNC_IMPL(__imp__sub_82C7CC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82C7CC80;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6acc
	ctx.lr = 0x82C7CC88;
	__savefpr_21(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f25,f0,f13
	ctx.f25.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fmr f22,f0
	ctx.f22.f64 = ctx.f0.f64;
	// lfs f28,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f24,f0,f13
	ctx.f24.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f21,224(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f21.f64 = double(temp.f32);
	// lfs f23,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f23.f64 = double(temp.f32);
	// lfs f27,140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	ctx.f27.f64 = double(temp.f32);
	// fcmpu cr6,f25,f28
	ctx.cr6.compare(ctx.f25.f64, ctx.f28.f64);
	// bne cr6,0x82c7ccd4
	if (!ctx.cr6.eq) goto loc_82C7CCD4;
	// fcmpu cr6,f24,f28
	ctx.cr6.compare(ctx.f24.f64, ctx.f28.f64);
	// beq cr6,0x82c7cdf4
	if (ctx.cr6.eq) goto loc_82C7CDF4;
loc_82C7CCD4:
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82c7cdf4
	if (ctx.cr0.eq) goto loc_82C7CDF4;
	// fmuls f0,f25,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f25.f64 * ctx.f25.f64));
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f25
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f25.f64));
	// lfs f12,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f31,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f31.f64 = double(temp.f32);
	// lfs f11,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f24,f24,f0
	ctx.f0.f64 = double(float(ctx.f24.f64 * ctx.f24.f64 + ctx.f0.f64));
	// fmadds f13,f12,f24,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f24.f64 + ctx.f13.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// fmadds f13,f11,f28,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f28.f64 + ctx.f13.f64));
	// fmuls f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fcmpu cr6,f30,f28
	ctx.cr6.compare(ctx.f30.f64, ctx.f28.f64);
	// bge cr6,0x82c7cd28
	if (!ctx.cr6.lt) goto loc_82C7CD28;
	// fmr f30,f28
	ctx.f30.f64 = ctx.f28.f64;
	// b 0x82c7cd34
	goto loc_82C7CD34;
loc_82C7CD28:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// ble cr6,0x82c7cd34
	if (!ctx.cr6.gt) goto loc_82C7CD34;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
loc_82C7CD34:
	// bl 0x82c0d1b0
	ctx.lr = 0x82C7CD38;
	sub_82C0D1B0(ctx, base);
	// lfs f0,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82c7cd48
	if (!ctx.cr6.gt) goto loc_82C7CD48;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82C7CD48:
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lfs f12,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,10612(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10612);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,16088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16088);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82c7cd70
	if (!ctx.cr6.gt) goto loc_82C7CD70;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82C7CD70:
	// fmr f26,f0
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f0.f64;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x82cb4940
	ctx.lr = 0x82C7CD7C;
	sub_82CB4940(ctx, base);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f30,f29
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// bgt cr6,0x82c7cdf4
	if (ctx.cr6.gt) goto loc_82C7CDF4;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// lfs f30,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f30.f64 = double(temp.f32);
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// lfs f31,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f31.f64 = double(temp.f32);
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// lfs f27,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// fmsubs f0,f13,f24,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f24.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// blt cr6,0x82c7cdc0
	if (ctx.cr6.lt) goto loc_82C7CDC0;
	// bl 0x82cb4860
	ctx.lr = 0x82C7CDB8;
	sub_82CB4860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// b 0x82c7cdcc
	goto loc_82C7CDCC;
loc_82C7CDC0:
	// bl 0x82cb4860
	ctx.lr = 0x82C7CDC4;
	sub_82CB4860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82C7CDCC:
	// fmuls f13,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f11,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f30,f29
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f29.f64));
	// lfs f10,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// fmsubs f13,f31,f29,f13
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64 - ctx.f13.f64));
	// fmadds f0,f0,f31,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f12.f64));
	// lfs f12,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fadds f27,f12,f27
	ctx.f27.f64 = double(float(ctx.f12.f64 + ctx.f27.f64));
	// fadds f23,f13,f11
	ctx.f23.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fadds f22,f10,f0
	ctx.f22.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
loc_82C7CDF4:
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,11416
	ctx.r4.s64 = ctx.r11.s64 + 11416;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c56a30
	ctx.lr = 0x82C7CE08;
	sub_82C56A30(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82c7ce9c
	if (ctx.cr0.eq) goto loc_82C7CE9C;
	// addi r4,r31,176
	ctx.r4.s64 = ctx.r31.s64 + 176;
	// lbz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 244);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f24,f0
	ctx.f0.f64 = double(float(ctx.f24.f64 * ctx.f0.f64));
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f0,f13,f25,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f25.f64 - ctx.f0.f64));
	// lfs f13,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,7508(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7508);
	ctx.f0.f64 = double(temp.f32);
	// beq 0x82c7ce48
	if (ctx.cr0.eq) goto loc_82C7CE48;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82C7CE48:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c7ce58
	if (ctx.cr6.eq) goto loc_82C7CE58;
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82c7ce60
	goto loc_82C7CE60;
loc_82C7CE58:
	// lfs f11,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
loc_82C7CE60:
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82c7ce9c
	if (!ctx.cr6.gt) goto loc_82C7CE9C;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82c7ce9c
	if (!ctx.cr6.lt) goto loc_82C7CE9C;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r29,244(r31)
	PPC_STORE_U8(ctx.r31.u32 + 244, ctx.r29.u8);
	// bl 0x82c4a710
	ctx.lr = 0x82C7CE80;
	sub_82C4A710(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stb r29,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r29.u8);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stb r29,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r29.u8);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// b 0x82c7cea0
	goto loc_82C7CEA0;
loc_82C7CE9C:
	// stb r28,244(r31)
	PPC_STORE_U8(ctx.r31.u32 + 244, ctx.r28.u8);
loc_82C7CEA0:
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r10,r10,5496
	ctx.r10.s64 = ctx.r10.s64 + 5496;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r3,620(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// stfs f23,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f27,104(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f22,108(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82C7CED0:
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82c7ced0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C7CED0;
	// stb r28,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r28.u8);
	// lfs f1,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f21
	ctx.f2.f64 = ctx.f21.f64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7CF08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6b18
	ctx.lr = 0x82C7CF14;
	__restfpr_21(ctx, base);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C7CF18"))) PPC_WEAK_FUNC(sub_82C7CF18);
PPC_FUNC_IMPL(__imp__sub_82C7CF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r11,r11,12720
	ctx.r11.s64 = ctx.r11.s64 + 12720;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7CF30"))) PPC_WEAK_FUNC(sub_82C7CF30);
PPC_FUNC_IMPL(__imp__sub_82C7CF30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f0,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7CF6C"))) PPC_WEAK_FUNC(sub_82C7CF6C);
PPC_FUNC_IMPL(__imp__sub_82C7CF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C7CF70"))) PPC_WEAK_FUNC(sub_82C7CF70);
PPC_FUNC_IMPL(__imp__sub_82C7CF70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f6,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f6.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f1,f6
	ctx.cr6.compare(ctx.f1.f64, ctx.f6.f64);
	// addi r11,r11,12648
	ctx.r11.s64 = ctx.r11.s64 + 12648;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f6,4(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f6,8(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f6,12(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f6,16(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f5,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f5.f64 = double(temp.f32);
	// stfs f6,20(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f6,24(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f6,28(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// bne cr6,0x82c7cfc4
	if (!ctx.cr6.eq) goto loc_82C7CFC4;
	// lfs f0,196(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,256(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f2,f13
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// bgt cr6,0x82c7cfd8
	if (ctx.cr6.gt) goto loc_82C7CFD8;
loc_82C7CFC4:
	// lfs f0,120(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// fmuls f13,f0,f5
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f0,f0,f2,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f2.f64 - ctx.f13.f64));
loc_82C7CFD8:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lfs f12,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f4,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82c7d000
	if (!ctx.cr6.lt) goto loc_82C7D000;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82C7D000:
	// lfs f10,184(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f9,180(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,176(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f13,160(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f12,156(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfs f11,152(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmuls f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// lfs f7,108(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,104(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// lfs f8,-18264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18264);
	ctx.f8.f64 = double(temp.f32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fadds f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fadds f12,f3,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fadds f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f1,20(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lfs f13,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,120(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f5,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f5.f64 + ctx.f13.f64));
	// lfs f13,188(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// mr. r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c7d0c8
	if (ctx.cr0.eq) goto loc_82C7D0C8;
loc_82C7D090:
	// lfs f12,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x82c7d0c8
	if (ctx.cr6.gt) goto loc_82C7D0C8;
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82c7d0ac
	if (!ctx.cr6.lt) goto loc_82C7D0AC;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_82C7D0AC:
	// lfs f12,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f8
	ctx.cr6.compare(ctx.f12.f64, ctx.f8.f64);
	// bge cr6,0x82c7d0bc
	if (!ctx.cr6.lt) goto loc_82C7D0BC;
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
loc_82C7D0BC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82c7d090
	if (!ctx.cr0.eq) goto loc_82C7D090;
loc_82C7D0C8:
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// b 0x82c7d100
	goto loc_82C7D100;
loc_82C7D0D0:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x82c7d108
	if (ctx.cr6.lt) goto loc_82C7D108;
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82c7d0ec
	if (!ctx.cr6.lt) goto loc_82C7D0EC;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82C7D0EC:
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bge cr6,0x82c7d0fc
	if (!ctx.cr6.lt) goto loc_82C7D0FC;
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
loc_82C7D0FC:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_82C7D100:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82c7d0d0
	if (!ctx.cr0.eq) goto loc_82C7D0D0;
loc_82C7D108:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lfs f0,80(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f6
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// lfs f11,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// beq cr6,0x82c7d170
	if (ctx.cr6.eq) goto loc_82C7D170;
	// lfs f12,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82c7d170
	if (!ctx.cr6.lt) goto loc_82C7D170;
	// fcmpu cr6,f8,f6
	ctx.cr6.compare(ctx.f8.f64, ctx.f6.f64);
	// bgt cr6,0x82c7d14c
	if (ctx.cr6.gt) goto loc_82C7D14C;
	// lfs f0,252(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fsubs f12,f4,f0
	ctx.f12.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// b 0x82c7d168
	goto loc_82C7D168;
loc_82C7D14C:
	// fcmpu cr6,f8,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f11.f64);
	// bge cr6,0x82c7d170
	if (!ctx.cr6.lt) goto loc_82C7D170;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,252(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 252);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f0,f0,f8,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f10.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
loc_82C7D168:
	// stfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// b 0x82c7d174
	goto loc_82C7D174;
loc_82C7D170:
	// stfs f11,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
loc_82C7D174:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f1,f6
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f6.f64);
	// lfs f7,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f7.f64 = double(temp.f32);
	// bne cr6,0x82c7d1b4
	if (!ctx.cr6.eq) goto loc_82C7D1B4;
	// lbz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82c7d1b0
	if (ctx.cr0.eq) goto loc_82C7D1B0;
	// lfs f0,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f6
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// ble cr6,0x82c7d1b0
	if (!ctx.cr6.gt) goto loc_82C7D1B0;
	// fsubs f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// lfs f12,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82c7d1b4
	if (!ctx.cr6.lt) goto loc_82C7D1B4;
loc_82C7D1B0:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82C7D1B4:
	// stfs f13,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c7d1d0
	if (ctx.cr0.eq) goto loc_82C7D1D0;
	// lfs f0,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f4,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f4.f64 + ctx.f13.f64));
	// b 0x82c7d1d4
	goto loc_82C7D1D4;
loc_82C7D1D0:
	// fmr f0,f6
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f6.f64;
loc_82C7D1D4:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82c7d1e4
	if (!ctx.cr6.gt) goto loc_82C7D1E4;
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// b 0x82c7d1e8
	goto loc_82C7D1E8;
loc_82C7D1E4:
	// fsubs f12,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
loc_82C7D1E8:
	// lfs f0,248(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,208(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f0,f12
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x82c7d204
	if (!ctx.cr6.lt) goto loc_82C7D204;
	// fsubs f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// b 0x82c7d208
	goto loc_82C7D208;
loc_82C7D204:
	// fsubs f13,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
loc_82C7D208:
	// lbz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 32);
	// fmuls f9,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82c7d228
	if (ctx.cr0.eq) goto loc_82C7D228;
	// lfs f0,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// b 0x82c7d22c
	goto loc_82C7D22C;
loc_82C7D228:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
loc_82C7D22C:
	// lfs f13,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82c7d240
	if (ctx.cr6.lt) goto loc_82C7D240;
	// fmr f10,f6
	ctx.f10.f64 = ctx.f6.f64;
	// b 0x82c7d248
	goto loc_82C7D248;
loc_82C7D240:
	// fdivs f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fsubs f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
loc_82C7D248:
	// lwz r11,88(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// lfs f11,188(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 188);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f1,f6
	ctx.cr6.compare(ctx.f1.f64, ctx.f6.f64);
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c7d2d4
	if (!ctx.cr6.gt) goto loc_82C7D2D4;
	// beq 0x82c7d368
	if (ctx.cr0.eq) goto loc_82C7D368;
loc_82C7D26C:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f6
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// bgt cr6,0x82c7d284
	if (ctx.cr6.gt) goto loc_82C7D284;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82c7d26c
	if (!ctx.cr0.eq) goto loc_82C7D26C;
loc_82C7D284:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c7d368
	if (ctx.cr6.eq) goto loc_82C7D368;
loc_82C7D28C:
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// bgt cr6,0x82c7d368
	if (ctx.cr6.gt) goto loc_82C7D368;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x82c7d2b4
	if (!ctx.cr6.gt) goto loc_82C7D2B4;
	// fmuls f3,f1,f4
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f3
	ctx.cr6.compare(ctx.f0.f64, ctx.f3.f64);
	// bgt cr6,0x82c7d368
	if (ctx.cr6.gt) goto loc_82C7D368;
loc_82C7D2B4:
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82c7d2c4
	if (!ctx.cr6.lt) goto loc_82C7D2C4;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_82C7D2C4:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82c7d28c
	if (!ctx.cr0.eq) goto loc_82C7D28C;
	// b 0x82c7d368
	goto loc_82C7D368;
loc_82C7D2D4:
	// fcmpu cr6,f1,f6
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f6.f64);
	// bge cr6,0x82c7d348
	if (!ctx.cr6.lt) goto loc_82C7D348;
	// beq 0x82c7d368
	if (ctx.cr0.eq) goto loc_82C7D368;
loc_82C7D2E0:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f6
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// bgt cr6,0x82c7d2f8
	if (ctx.cr6.gt) goto loc_82C7D2F8;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82c7d2e0
	if (!ctx.cr0.eq) goto loc_82C7D2E0;
loc_82C7D2F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c7d368
	if (ctx.cr6.eq) goto loc_82C7D368;
loc_82C7D300:
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// blt cr6,0x82c7d368
	if (ctx.cr6.lt) goto loc_82C7D368;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x82c7d328
	if (!ctx.cr6.lt) goto loc_82C7D328;
	// fmuls f3,f1,f4
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f3
	ctx.cr6.compare(ctx.f0.f64, ctx.f3.f64);
	// blt cr6,0x82c7d368
	if (ctx.cr6.lt) goto loc_82C7D368;
loc_82C7D328:
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82c7d338
	if (!ctx.cr6.lt) goto loc_82C7D338;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_82C7D338:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82c7d300
	if (!ctx.cr0.eq) goto loc_82C7D300;
	// b 0x82c7d368
	goto loc_82C7D368;
loc_82C7D348:
	// beq 0x82c7d364
	if (ctx.cr0.eq) goto loc_82C7D364;
loc_82C7D34C:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f6
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// bgt cr6,0x82c7d364
	if (ctx.cr6.gt) goto loc_82C7D364;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82c7d34c
	if (!ctx.cr0.eq) goto loc_82C7D34C;
loc_82C7D364:
	// lfs f12,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
loc_82C7D368:
	// fcmpu cr6,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x82c7d388
	if (!ctx.cr6.lt) goto loc_82C7D388;
	// lfs f0,188(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fsubs f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// fmuls f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// b 0x82c7d38c
	goto loc_82C7D38C;
loc_82C7D388:
	// fmr f0,f6
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f6.f64;
loc_82C7D38C:
	// fadds f13,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,7640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7640);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmadds f0,f13,f0,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fadds f13,f0,f8
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// lfs f0,-18392(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18392);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f13,120(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f13,f5,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f11.f64));
	// lfs f0,208(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82c7d3d0
	if (!ctx.cr6.gt) goto loc_82C7D3D0;
	// fcmpu cr6,f1,f6
	ctx.cr6.compare(ctx.f1.f64, ctx.f6.f64);
	// blt cr6,0x82c7d3e4
	if (ctx.cr6.lt) goto loc_82C7D3E4;
loc_82C7D3D0:
	// fneg f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// fcmpu cr6,f1,f6
	ctx.cr6.compare(ctx.f1.f64, ctx.f6.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_82C7D3E4:
	// fadds f0,f12,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7D3F0"))) PPC_WEAK_FUNC(sub_82C7D3F0);
PPC_FUNC_IMPL(__imp__sub_82C7D3F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x82C7D3F8;
	__savegprlr_20(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82cb6acc
	ctx.lr = 0x82C7D400;
	__savefpr_21(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r10,204(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 204);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r20,r11,-1
	ctx.r20.s64 = ctx.r11.s64 + -1;
	// bne 0x82c7d420
	if (!ctx.cr0.eq) goto loc_82C7D420;
	// li r20,0
	ctx.r20.s64 = 0;
loc_82C7D420:
	// cmplwi cr6,r20,2
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 2, ctx.xer);
	// ble cr6,0x82c7d458
	if (!ctx.cr6.gt) goto loc_82C7D458;
	// clrldi r11,r20,32
	ctx.r11.u64 = ctx.r20.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,8084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8084);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f21,f0,f13
	ctx.f21.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// b 0x82c7d460
	goto loc_82C7D460;
loc_82C7D458:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f21,8084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8084);
	ctx.f21.f64 = double(temp.f32);
loc_82C7D460:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r24,8(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi r24,0
	ctx.cr0.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// lfs f22,-18308(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18308);
	ctx.f22.f64 = double(temp.f32);
	// beq 0x82c7d758
	if (ctx.cr0.eq) goto loc_82C7D758;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r29,r11,8896
	ctx.r29.s64 = ctx.r11.s64 + 8896;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r27,r11,9328
	ctx.r27.s64 = ctx.r11.s64 + 9328;
	// lfs f23,8080(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8080);
	ctx.f23.f64 = double(temp.f32);
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// clrlwi r21,r4,24
	ctx.r21.u64 = ctx.r4.u32 & 0xFF;
	// lfs f25,8076(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8076);
	ctx.f25.f64 = double(temp.f32);
	// addi r23,r25,100
	ctx.r23.s64 = ctx.r25.s64 + 100;
	// lfs f24,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f24.f64 = double(temp.f32);
	// addi r26,r11,9340
	ctx.r26.s64 = ctx.r11.s64 + 9340;
loc_82C7D4B0:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82c7d4c4
	if (!ctx.cr6.eq) goto loc_82C7D4C4;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,255
	ctx.r28.s64 = 255;
	// b 0x82c7d4d4
	goto loc_82C7D4D4;
loc_82C7D4C4:
	// cmplw cr6,r22,r20
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r20.u32, ctx.xer);
	// li r30,255
	ctx.r30.s64 = 255;
	// bne cr6,0x82c7d4dc
	if (!ctx.cr6.eq) goto loc_82C7D4DC;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82C7D4D4:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// b 0x82c7d4f0
	goto loc_82C7D4F0;
loc_82C7D4DC:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fctidz f0,f22
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f22.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f22.f64));
	// fsubs f22,f22,f21
	ctx.f22.f64 = double(float(ctx.f22.f64 - ctx.f21.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82C7D4F0:
	// lfs f0,120(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r24,8
	ctx.r31.s64 = ctx.r24.s64 + 8;
	// fmuls f31,f0,f24
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
	// fmr f30,f25
	ctx.f30.f64 = ctx.f25.f64;
loc_82C7D500:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82cb4860
	ctx.lr = 0x82C7D508;
	sub_82CB4860(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lfs f13,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f28,f0,f13
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f27,f0,f13
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f26,f0,f13
	ctx.f26.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x82cb4940
	ctx.lr = 0x82C7D534;
	sub_82CB4940(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f29,f30,f25
	ctx.f29.f64 = double(float(ctx.f30.f64 - ctx.f25.f64));
	// lfs f11,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fadds f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f13,f12,f27
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f27.f64));
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fadds f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f26.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x82cb4860
	ctx.lr = 0x82C7D590;
	sub_82CB4860(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lfs f13,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f29,f0,f13
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f28,f0,f13
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f27,f0,f13
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x82cb4940
	ctx.lr = 0x82C7D5BC;
	sub_82CB4940(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// lfs f11,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fadds f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f13,f12,f28
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f28.f64));
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// beq cr6,0x82c7d63c
	if (ctx.cr6.eq) goto loc_82C7D63C;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7D638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
loc_82C7D63C:
	// fadds f30,f30,f25
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f25.f64));
	// fcmpu cr6,f30,f23
	ctx.cr6.compare(ctx.f30.f64, ctx.f23.f64);
	// ble cr6,0x82c7d500
	if (!ctx.cr6.gt) goto loc_82C7D500;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82c7d6b8
	if (ctx.cr6.eq) goto loc_82C7D6B8;
	// lfs f0,32(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f13,180(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,184(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f9,176(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 176);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// beq cr6,0x82c7d6b8
	if (ctx.cr6.eq) goto loc_82C7D6B8;
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// li r7,128
	ctx.r7.s64 = 128;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7D6B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C7D6B8:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7D6D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c7d6f4
	if (!ctx.cr0.eq) goto loc_82C7D6F4;
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c7d748
	if (ctx.cr6.eq) goto loc_82C7D748;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x82c7d730
	goto loc_82C7D730;
loc_82C7D6F4:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r30,r25,124
	ctx.r30.s64 = ctx.r25.s64 + 124;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7D714;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c7d748
	if (!ctx.cr0.eq) goto loc_82C7D748;
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c7d748
	if (ctx.cr6.eq) goto loc_82C7D748;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C7D730:
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// li r5,255
	ctx.r5.s64 = 255;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7D748;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C7D748:
	// lwz r24,40(r24)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmplwi r24,0
	ctx.cr0.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne 0x82c7d4b0
	if (!ctx.cr0.eq) goto loc_82C7D4B0;
loc_82C7D758:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82cb6b18
	ctx.lr = 0x82C7D764;
	__restfpr_21(ctx, base);
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C7D768"))) PPC_WEAK_FUNC(sub_82C7D768);
PPC_FUNC_IMPL(__imp__sub_82C7D768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82c7d79c
	if (!ctx.cr0.eq) goto loc_82C7D79C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r11,r11,12720
	ctx.r11.s64 = ctx.r11.s64 + 12720;
	// addi r10,r10,-21672
	ctx.r10.s64 = ctx.r10.s64 + -21672;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
loc_82C7D79C:
	// lwz r8,20(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r8,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r8.u32);
	// lwz r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r8,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r8.u32);
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f0,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f0,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f0,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f0,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f0,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// stb r7,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r7.u8);
	// bne cr6,0x82c7d84c
	if (!ctx.cr6.eq) goto loc_82C7D84C;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82c7d830
	if (!ctx.cr0.eq) goto loc_82C7D830;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, ctx.r10.u32);
	// b 0x82c7d870
	goto loc_82C7D870;
loc_82C7D830:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// b 0x82c7d870
	goto loc_82C7D870;
loc_82C7D84C:
	// lwz r10,36(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// stw r11,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r11.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// beq 0x82c7d86c
	if (ctx.cr0.eq) goto loc_82C7D86C;
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// b 0x82c7d870
	goto loc_82C7D870;
loc_82C7D86C:
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
loc_82C7D870:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r10,r10,12720
	ctx.r10.s64 = ctx.r10.s64 + 12720;
	// addi r9,r9,-21672
	ctx.r9.s64 = ctx.r9.s64 + -21672;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7D890"))) PPC_WEAK_FUNC(sub_82C7D890);
PPC_FUNC_IMPL(__imp__sub_82C7D890) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82cb6ae4
	ctx.lr = 0x82C7D8A8;
	__savefpr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,238(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 238);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82c7d8cc
	if (ctx.cr0.eq) goto loc_82C7D8CC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,238(r31)
	PPC_STORE_U8(ctx.r31.u32 + 238, ctx.r11.u8);
	// b 0x82c7dbe8
	goto loc_82C7DBE8;
loc_82C7D8CC:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82c7d8e4
	if (!ctx.cr6.lt) goto loc_82C7D8E4;
loc_82C7D8DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c7dbe8
	goto loc_82C7DBE8;
loc_82C7D8E4:
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r31,136
	ctx.r30.s64 = ctx.r31.s64 + 136;
	// lfs f11,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f28,f12,f13
	ctx.f28.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fsubs f27,f13,f12
	ctx.f27.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f9,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f13,f27,f27
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f27.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f13,f28,f28,f13
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f28.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82c7d8dc
	if (ctx.cr6.lt) goto loc_82C7D8DC;
	// lfs f0,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmuls f0,f27,f0
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// lfs f13,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// lfs f6,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f0,f13,f28,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f28.f64 + ctx.f0.f64));
	// fmuls f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// lfs f0,-18324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// blt cr6,0x82c7d8dc
	if (ctx.cr6.lt) goto loc_82C7D8DC;
	// lfs f10,208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f10.f64 = double(temp.f32);
	// fabs f13,f10
	ctx.f13.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// lfs f0,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82c7d8dc
	if (ctx.cr6.gt) goto loc_82C7D8DC;
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82c7d998
	if (ctx.cr0.eq) goto loc_82C7D998;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x82c7d99c
	goto loc_82C7D99C;
loc_82C7D998:
	// fmr f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64;
loc_82C7D99C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lfs f0,7712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7712);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f30.f64 = double(temp.f32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// fsel f0,f10,f0,f30
	ctx.f0.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f30.f64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// mr. r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c7d8dc
	if (ctx.cr0.eq) goto loc_82C7D8DC;
loc_82C7D9C8:
	// lfs f8,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bgt cr6,0x82c7d9e0
	if (ctx.cr6.gt) goto loc_82C7D9E0;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82c7d9c8
	if (!ctx.cr0.eq) goto loc_82C7D9C8;
loc_82C7D9E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c7d8dc
	if (ctx.cr6.eq) goto loc_82C7D8DC;
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82c7d8dc
	if (ctx.cr6.lt) goto loc_82C7D8DC;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82c7da04
	if (!ctx.cr6.gt) goto loc_82C7DA04;
	// fmr f29,f13
	ctx.f29.f64 = ctx.f13.f64;
	// b 0x82c7da08
	goto loc_82C7DA08;
loc_82C7DA04:
	// fmr f29,f0
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f0.f64;
loc_82C7DA08:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fsel f13,f10,f30,f10
	ctx.f13.f64 = ctx.f10.f64 >= 0.0 ? ctx.f30.f64 : ctx.f10.f64;
	// fcmpu cr6,f10,f30
	ctx.cr6.compare(ctx.f10.f64, ctx.f30.f64);
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f8
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fsubs f4,f13,f0
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// ble cr6,0x82c7da34
	if (!ctx.cr6.gt) goto loc_82C7DA34;
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
	// b 0x82c7da38
	goto loc_82C7DA38;
loc_82C7DA34:
	// fmr f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f30.f64;
loc_82C7DA38:
	// fmuls f11,f11,f9
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfs f12,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f12.f64 = double(temp.f32);
	// fadds f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmadds f13,f0,f6,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f11.f64));
	// fadds f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82c7da58
	if (ctx.cr6.lt) goto loc_82C7DA58;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_82C7DA58:
	// lfs f31,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f31.f64 = double(temp.f32);
	// mr. r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// beq 0x82c7daa8
	if (ctx.cr0.eq) goto loc_82C7DAA8;
loc_82C7DA68:
	// lfs f8,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f8,f4
	ctx.cr6.compare(ctx.f8.f64, ctx.f4.f64);
	// blt cr6,0x82c7da9c
	if (ctx.cr6.lt) goto loc_82C7DA9C;
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f8,f7
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// bgt cr6,0x82c7daa8
	if (ctx.cr6.gt) goto loc_82C7DAA8;
	// lbz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82c7da9c
	if (!ctx.cr0.eq) goto loc_82C7DA9C;
	// lfs f8,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bge cr6,0x82c7da9c
	if (!ctx.cr6.lt) goto loc_82C7DA9C;
	// fmr f9,f8
	ctx.f9.f64 = ctx.f8.f64;
loc_82C7DA9C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82c7da68
	if (!ctx.cr0.eq) goto loc_82C7DA68;
loc_82C7DAA8:
	// fcmpu cr6,f9,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// blt cr6,0x82c7d8dc
	if (ctx.cr6.lt) goto loc_82C7D8DC;
	// fmadds f13,f0,f6,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f11.f64));
	// fsubs f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fadds f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fadds f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82c7dacc
	if (ctx.cr6.lt) goto loc_82C7DACC;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_82C7DACC:
	// mr. r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c7db08
	if (ctx.cr0.eq) goto loc_82C7DB08;
loc_82C7DAD4:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x82c7dafc
	if (ctx.cr6.lt) goto loc_82C7DAFC;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x82c7db08
	if (ctx.cr6.gt) goto loc_82C7DB08;
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82c7dafc
	if (!ctx.cr6.lt) goto loc_82C7DAFC;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_82C7DAFC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82c7dad4
	if (!ctx.cr0.eq) goto loc_82C7DAD4;
loc_82C7DB08:
	// fcmpu cr6,f31,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// blt cr6,0x82c7d8dc
	if (ctx.cr6.lt) goto loc_82C7D8DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7DB24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c7d8dc
	if (ctx.cr0.eq) goto loc_82C7D8DC;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82c7db5c
	goto loc_82C7DB5C;
loc_82C7DB38:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r10,44(r9)
	PPC_STORE_U8(ctx.r9.u32 + 44, ctx.r10.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// stw r7,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, ctx.r7.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
loc_82C7DB5C:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c7db38
	if (!ctx.cr6.eq) goto loc_82C7DB38;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lfs f0,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f27,f0
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r9,r9,12648
	ctx.r9.s64 = ctx.r9.s64 + 12648;
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r8,12720
	ctx.r8.s64 = ctx.r8.s64 + 12720;
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f13,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r4,204(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stfs f29,124(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// fmadds f0,f13,f28,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f28.f64 + ctx.f0.f64));
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x82c7d768
	ctx.lr = 0x82C7DBD8;
	sub_82C7D768(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
loc_82C7DBE8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82cb6b30
	ctx.lr = 0x82C7DBF4;
	__restfpr_27(ctx, base);
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

__attribute__((alias("__imp__sub_82C7DC08"))) PPC_WEAK_FUNC(sub_82C7DC08);
PPC_FUNC_IMPL(__imp__sub_82C7DC08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82C7DC10;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82cb6ae0
	ctx.lr = 0x82C7DC18;
	__savefpr_26(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// b 0x82c7dc50
	goto loc_82C7DC50;
loc_82C7DC2C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r30,44(r10)
	PPC_STORE_U8(ctx.r10.u32 + 44, ctx.r30.u8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r8,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r8.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_82C7DC50:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c7dc2c
	if (!ctx.cr6.eq) goto loc_82C7DC2C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lfs f0,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lfs f30,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f30.f64 = double(temp.f32);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// lfs f26,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f26.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmadds f13,f0,f26,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f26.f64 + ctx.f13.f64));
	// addi r29,r10,8040
	ctx.r29.s64 = ctx.r10.s64 + 8040;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f27,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f27.f64 = double(temp.f32);
	// b 0x82c7dd10
	goto loc_82C7DD10;
loc_82C7DCB0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c7dcc8
	if (!ctx.cr6.eq) goto loc_82C7DCC8;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// blt cr6,0x82c7dcc8
	if (ctx.cr6.lt) goto loc_82C7DCC8;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82C7DCC8:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82c7dcf0
	if (!ctx.cr6.eq) goto loc_82C7DCF0;
	// fneg f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82c7dd0c
	if (!ctx.cr6.gt) goto loc_82C7DD0C;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// beq cr6,0x82c7dd0c
	if (ctx.cr6.eq) goto loc_82C7DD0C;
loc_82C7DCF0:
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82c7dd00
	if (!ctx.cr6.lt) goto loc_82C7DD00;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_82C7DD00:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82c7dd1c
	if (ctx.cr6.gt) goto loc_82C7DD1C;
loc_82C7DD0C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
loc_82C7DD10:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82c7dcb0
	if (!ctx.cr0.eq) goto loc_82C7DCB0;
	// b 0x82c7dd20
	goto loc_82C7DD20;
loc_82C7DD1C:
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_82C7DD20:
	// lbz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 24);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r28,r11,12720
	ctx.r28.s64 = ctx.r11.s64 + 12720;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r27,r11,-21672
	ctx.r27.s64 = ctx.r11.s64 + -21672;
	// beq 0x82c7dd54
	if (ctx.cr0.eq) goto loc_82C7DD54;
	// lfs f0,256(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// ble cr6,0x82c7de14
	if (!ctx.cr6.gt) goto loc_82C7DE14;
loc_82C7DD54:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7DD7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lwz r4,204(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// bl 0x82c7d768
	ctx.lr = 0x82C7DD98;
	sub_82C7D768(ctx, base);
	// lfs f0,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// beq cr6,0x82c7dff8
	if (ctx.cr6.eq) goto loc_82C7DFF8;
	// lfs f0,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bgt cr6,0x82c7dff8
	if (ctx.cr6.gt) goto loc_82C7DFF8;
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82c7de08
	if (ctx.cr0.eq) goto loc_82C7DE08;
	// lfs f0,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// ble cr6,0x82c7de08
	if (!ctx.cr6.gt) goto loc_82C7DE08;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lfs f13,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82c7de00
	if (!ctx.cr6.lt) goto loc_82C7DE00;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82C7DE00:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c7de0c
	if (ctx.cr0.eq) goto loc_82C7DE0C;
loc_82C7DE08:
	// li r26,1
	ctx.r26.s64 = 1;
loc_82C7DE0C:
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
loc_82C7DE14:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lfs f0,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lfs f31,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f31.f64 = double(temp.f32);
	// fmr f29,f30
	ctx.f29.f64 = ctx.f30.f64;
	// fnmsubs f28,f0,f26,f13
	ctx.f28.f64 = double(float(-(ctx.f0.f64 * ctx.f26.f64 - ctx.f13.f64)));
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x82c7df04
	goto loc_82C7DF04;
loc_82C7DE38:
	// lfs f0,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f0,f26,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f26.f64 + ctx.f31.f64));
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82c7de78
	if (!ctx.cr6.gt) goto loc_82C7DE78;
loc_82C7DE4C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82c7de6c
	if (!ctx.cr6.lt) goto loc_82C7DE6C;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// fcmpu cr6,f29,f27
	ctx.cr6.compare(ctx.f29.f64, ctx.f27.f64);
	// beq cr6,0x82c7df0c
	if (ctx.cr6.eq) goto loc_82C7DF0C;
loc_82C7DE6C:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82c7de4c
	if (ctx.cr6.gt) goto loc_82C7DE4C;
loc_82C7DE78:
	// fcmpu cr6,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f27.f64);
	// beq cr6,0x82c7df0c
	if (ctx.cr6.eq) goto loc_82C7DF0C;
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82c7defc
	if (!ctx.cr0.eq) goto loc_82C7DEFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7DEB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,204(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// b 0x82c7ded4
	goto loc_82C7DED4;
loc_82C7DEC0:
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82c7dedc
	if (!ctx.cr6.lt) goto loc_82C7DEDC;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
loc_82C7DED4:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82c7dec0
	if (!ctx.cr0.eq) goto loc_82C7DEC0;
loc_82C7DEDC:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82c7d768
	ctx.lr = 0x82C7DEF4;
	sub_82C7D768(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
loc_82C7DEFC:
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
loc_82C7DF04:
	// fcmpu cr6,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f28.f64);
	// blt cr6,0x82c7de38
	if (ctx.cr6.lt) goto loc_82C7DE38;
loc_82C7DF0C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fneg f29,f28
	ctx.f29.u64 = ctx.f28.u64 ^ 0x8000000000000000;
	// fneg f31,f0
	ctx.f31.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x82c7dff0
	goto loc_82C7DFF0;
loc_82C7DF24:
	// lfs f0,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f13,f0,f26,f31
	ctx.f13.f64 = double(float(-(ctx.f0.f64 * ctx.f26.f64 - ctx.f31.f64)));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82c7df64
	if (!ctx.cr6.lt) goto loc_82C7DF64;
loc_82C7DF38:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82c7df58
	if (!ctx.cr6.lt) goto loc_82C7DF58;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// fcmpu cr6,f30,f27
	ctx.cr6.compare(ctx.f30.f64, ctx.f27.f64);
	// beq cr6,0x82c7dff8
	if (ctx.cr6.eq) goto loc_82C7DFF8;
loc_82C7DF58:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82c7df38
	if (ctx.cr6.lt) goto loc_82C7DF38;
loc_82C7DF64:
	// fcmpu cr6,f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f27.f64);
	// beq cr6,0x82c7dff8
	if (ctx.cr6.eq) goto loc_82C7DFF8;
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82c7dfe8
	if (!ctx.cr0.eq) goto loc_82C7DFE8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7DFA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,204(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// b 0x82c7dfc0
	goto loc_82C7DFC0;
loc_82C7DFAC:
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82c7dfc8
	if (!ctx.cr6.lt) goto loc_82C7DFC8;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
loc_82C7DFC0:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82c7dfac
	if (!ctx.cr0.eq) goto loc_82C7DFAC;
loc_82C7DFC8:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82c7d768
	ctx.lr = 0x82C7DFE0;
	sub_82C7D768(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
loc_82C7DFE8:
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
loc_82C7DFF0:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bgt cr6,0x82c7df24
	if (ctx.cr6.gt) goto loc_82C7DF24;
loc_82C7DFF8:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82cb6b2c
	ctx.lr = 0x82C7E004;
	__restfpr_26(ctx, base);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C7E008"))) PPC_WEAK_FUNC(sub_82C7E008);
PPC_FUNC_IMPL(__imp__sub_82C7E008) {
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
	// lbz r11,237(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 237);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82c7e098
	if (ctx.cr0.eq) goto loc_82C7E098;
	// stb r30,237(r31)
	PPC_STORE_U8(ctx.r31.u32 + 237, ctx.r30.u8);
	// bl 0x82c7d890
	ctx.lr = 0x82C7E038;
	sub_82C7D890(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c7e0a4
	if (!ctx.cr0.eq) goto loc_82C7E0A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c7dc08
	ctx.lr = 0x82C7E048;
	sub_82C7DC08(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c7e098
	if (!ctx.cr6.eq) goto loc_82C7E098;
	// li r11,5
	ctx.r11.s64 = 5;
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// b 0x82c7e098
	goto loc_82C7E098;
loc_82C7E074:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82c7e0a4
	if (!ctx.cr6.lt) goto loc_82C7E0A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C7E094;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82C7E098:
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c7e074
	if (!ctx.cr6.eq) goto loc_82C7E074;
loc_82C7E0A4:
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

__attribute__((alias("__imp__sub_82C7E0BC"))) PPC_WEAK_FUNC(sub_82C7E0BC);
PPC_FUNC_IMPL(__imp__sub_82C7E0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C7E0C0"))) PPC_WEAK_FUNC(sub_82C7E0C0);
PPC_FUNC_IMPL(__imp__sub_82C7E0C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,404(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7E0C8"))) PPC_WEAK_FUNC(sub_82C7E0C8);
PPC_FUNC_IMPL(__imp__sub_82C7E0C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,416(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7E0D0"))) PPC_WEAK_FUNC(sub_82C7E0D0);
PPC_FUNC_IMPL(__imp__sub_82C7E0D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7E0D8"))) PPC_WEAK_FUNC(sub_82C7E0D8);
PPC_FUNC_IMPL(__imp__sub_82C7E0D8) {
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
	// bl 0x82ca4b88
	ctx.lr = 0x82C7E0F0;
	sub_82CA4B88(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r10,r11,16096
	ctx.r10.s64 = ctx.r11.s64 + 16096;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-18264(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18264);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82C7E130"))) PPC_WEAK_FUNC(sub_82C7E130);
PPC_FUNC_IMPL(__imp__sub_82C7E130) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C7E140"))) PPC_WEAK_FUNC(sub_82C7E140);
PPC_FUNC_IMPL(__imp__sub_82C7E140) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C7E150"))) PPC_WEAK_FUNC(sub_82C7E150);
PPC_FUNC_IMPL(__imp__sub_82C7E150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31902
	ctx.r11.s64 = -2090729472;
	// addi r3,r11,-31676
	ctx.r3.s64 = ctx.r11.s64 + -31676;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7E15C"))) PPC_WEAK_FUNC(sub_82C7E15C);
PPC_FUNC_IMPL(__imp__sub_82C7E15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C7E160"))) PPC_WEAK_FUNC(sub_82C7E160);
PPC_FUNC_IMPL(__imp__sub_82C7E160) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ca4c18
	sub_82CA4C18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C7E164"))) PPC_WEAK_FUNC(sub_82C7E164);
PPC_FUNC_IMPL(__imp__sub_82C7E164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C7E168"))) PPC_WEAK_FUNC(sub_82C7E168);
PPC_FUNC_IMPL(__imp__sub_82C7E168) {
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
	// bl 0x82ca5650
	ctx.lr = 0x82C7E178;
	sub_82CA5650(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7E198"))) PPC_WEAK_FUNC(sub_82C7E198);
PPC_FUNC_IMPL(__imp__sub_82C7E198) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r4.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x82ca46d0
	sub_82CA46D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C7E1B8"))) PPC_WEAK_FUNC(sub_82C7E1B8);
PPC_FUNC_IMPL(__imp__sub_82C7E1B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7E1BC"))) PPC_WEAK_FUNC(sub_82C7E1BC);
PPC_FUNC_IMPL(__imp__sub_82C7E1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C7E1C0"))) PPC_WEAK_FUNC(sub_82C7E1C0);
PPC_FUNC_IMPL(__imp__sub_82C7E1C0) {
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
	// lfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82c7e21c
	if (!ctx.cr6.eq) goto loc_82C7E21C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// bl 0x82c0d1b0
	ctx.lr = 0x82C7E200;
	sub_82C0D1B0(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,472(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82c0e508
	ctx.lr = 0x82C7E214;
	sub_82C0E508(ctx, base);
loc_82C7E214:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82c7e2a0
	goto loc_82C7E2A0;
loc_82C7E21C:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C7E23C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82c7e29c
	if (!ctx.cr6.eq) goto loc_82C7E29C;
	// lfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82c7e270
	if (ctx.cr6.gt) goto loc_82C7E270;
	// lfs f12,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x82c7e270
	if (ctx.cr6.gt) goto loc_82C7E270;
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82c7e294
	goto loc_82C7E294;
loc_82C7E270:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82c7e290
	if (!ctx.cr6.lt) goto loc_82C7E290;
	// lfs f0,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82c7e290
	if (ctx.cr6.gt) goto loc_82C7E290;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stfs f13,92(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// b 0x82c7e294
	goto loc_82C7E294;
loc_82C7E290:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
loc_82C7E294:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x82c7e214
	goto loc_82C7E214;
loc_82C7E29C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C7E2A0:
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

