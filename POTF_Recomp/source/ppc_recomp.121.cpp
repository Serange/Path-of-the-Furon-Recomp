#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825583F4"))) PPC_WEAK_FUNC(sub_825583F4);
PPC_FUNC_IMPL(__imp__sub_825583F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825583F8"))) PPC_WEAK_FUNC(sub_825583F8);
PPC_FUNC_IMPL(__imp__sub_825583F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r10,r11,21076
	ctx.r10.s64 = ctx.r11.s64 + 21076;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82558408"))) PPC_WEAK_FUNC(sub_82558408);
PPC_FUNC_IMPL(__imp__sub_82558408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r10,r11,21076
	ctx.r10.s64 = ctx.r11.s64 + 21076;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82558418"))) PPC_WEAK_FUNC(sub_82558418);
PPC_FUNC_IMPL(__imp__sub_82558418) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,21076
	ctx.r9.s64 = ctx.r11.s64 + 21076;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8255844c
	if (ctx.cr6.eq) goto loc_8255844C;
	// bl 0x82294a58
	ctx.lr = 0x82558448;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8255844C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82558460"))) PPC_WEAK_FUNC(sub_82558460);
PPC_FUNC_IMPL(__imp__sub_82558460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r10,r11,21076
	ctx.r10.s64 = ctx.r11.s64 + 21076;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82558470"))) PPC_WEAK_FUNC(sub_82558470);
PPC_FUNC_IMPL(__imp__sub_82558470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r10,r11,21104
	ctx.r10.s64 = ctx.r11.s64 + 21104;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82558480"))) PPC_WEAK_FUNC(sub_82558480);
PPC_FUNC_IMPL(__imp__sub_82558480) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,21076
	ctx.r9.s64 = ctx.r11.s64 + 21076;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825584b4
	if (ctx.cr6.eq) goto loc_825584B4;
	// bl 0x82294a58
	ctx.lr = 0x825584B0;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825584B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825584C8"))) PPC_WEAK_FUNC(sub_825584C8);
PPC_FUNC_IMPL(__imp__sub_825584C8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825584D0"))) PPC_WEAK_FUNC(sub_825584D0);
PPC_FUNC_IMPL(__imp__sub_825584D0) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r10,r11,21136
	ctx.r10.s64 = ctx.r11.s64 + 21136;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x825584F4;
	sub_8229C068(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-2288
	ctx.r8.s64 = ctx.r9.s64 + -2288;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82558508;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229c628
	ctx.lr = 0x82558510;
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

__attribute__((alias("__imp__sub_82558524"))) PPC_WEAK_FUNC(sub_82558524);
PPC_FUNC_IMPL(__imp__sub_82558524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82558528"))) PPC_WEAK_FUNC(sub_82558528);
PPC_FUNC_IMPL(__imp__sub_82558528) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r8,r9,21136
	ctx.r8.s64 = ctx.r9.s64 + 21136;
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

__attribute__((alias("__imp__sub_82558550"))) PPC_WEAK_FUNC(sub_82558550);
PPC_FUNC_IMPL(__imp__sub_82558550) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r8,r9,21136
	ctx.r8.s64 = ctx.r9.s64 + 21136;
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

__attribute__((alias("__imp__sub_82558570"))) PPC_WEAK_FUNC(sub_82558570);
PPC_FUNC_IMPL(__imp__sub_82558570) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,21136
	ctx.r10.s64 = ctx.r11.s64 + 21136;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x8255859C;
	sub_8229C068(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-2288
	ctx.r8.s64 = ctx.r9.s64 + -2288;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x825585B0;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229c628
	ctx.lr = 0x825585B8;
	sub_8229C628(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x825585ec
	if (ctx.cr6.eq) goto loc_825585EC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825585e4
	if (ctx.cr6.lt) goto loc_825585E4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x825585ec
	if (!ctx.cr6.gt) goto loc_825585EC;
loc_825585E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x825585EC;
	sub_82294A58(ctx, base);
loc_825585EC:
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

__attribute__((alias("__imp__sub_82558608"))) PPC_WEAK_FUNC(sub_82558608);
PPC_FUNC_IMPL(__imp__sub_82558608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r10,r11,21400
	ctx.r10.s64 = ctx.r11.s64 + 21400;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82558618"))) PPC_WEAK_FUNC(sub_82558618);
PPC_FUNC_IMPL(__imp__sub_82558618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r10,r11,21400
	ctx.r10.s64 = ctx.r11.s64 + 21400;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82558628"))) PPC_WEAK_FUNC(sub_82558628);
PPC_FUNC_IMPL(__imp__sub_82558628) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,21400
	ctx.r9.s64 = ctx.r11.s64 + 21400;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8255865c
	if (ctx.cr6.eq) goto loc_8255865C;
	// bl 0x82294a58
	ctx.lr = 0x82558658;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8255865C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82558670"))) PPC_WEAK_FUNC(sub_82558670);
PPC_FUNC_IMPL(__imp__sub_82558670) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82558678"))) PPC_WEAK_FUNC(sub_82558678);
PPC_FUNC_IMPL(__imp__sub_82558678) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r10,r11,21416
	ctx.r10.s64 = ctx.r11.s64 + 21416;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x8255869C;
	sub_8229C068(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-2288
	ctx.r8.s64 = ctx.r9.s64 + -2288;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x825586B0;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229c628
	ctx.lr = 0x825586B8;
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

__attribute__((alias("__imp__sub_825586CC"))) PPC_WEAK_FUNC(sub_825586CC);
PPC_FUNC_IMPL(__imp__sub_825586CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825586D0"))) PPC_WEAK_FUNC(sub_825586D0);
PPC_FUNC_IMPL(__imp__sub_825586D0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r8,r9,21416
	ctx.r8.s64 = ctx.r9.s64 + 21416;
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

__attribute__((alias("__imp__sub_825586F8"))) PPC_WEAK_FUNC(sub_825586F8);
PPC_FUNC_IMPL(__imp__sub_825586F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r8,r9,21416
	ctx.r8.s64 = ctx.r9.s64 + 21416;
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

__attribute__((alias("__imp__sub_82558718"))) PPC_WEAK_FUNC(sub_82558718);
PPC_FUNC_IMPL(__imp__sub_82558718) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,21416
	ctx.r10.s64 = ctx.r11.s64 + 21416;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82558744;
	sub_8229C068(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-2288
	ctx.r8.s64 = ctx.r9.s64 + -2288;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82558758;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229c628
	ctx.lr = 0x82558760;
	sub_8229C628(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82558794
	if (ctx.cr6.eq) goto loc_82558794;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8255878c
	if (ctx.cr6.lt) goto loc_8255878C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82558794
	if (!ctx.cr6.gt) goto loc_82558794;
loc_8255878C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82558794;
	sub_82294A58(ctx, base);
loc_82558794:
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

__attribute__((alias("__imp__sub_825587B0"))) PPC_WEAK_FUNC(sub_825587B0);
PPC_FUNC_IMPL(__imp__sub_825587B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825587B4"))) PPC_WEAK_FUNC(sub_825587B4);
PPC_FUNC_IMPL(__imp__sub_825587B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825587B8"))) PPC_WEAK_FUNC(sub_825587B8);
PPC_FUNC_IMPL(__imp__sub_825587B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825587BC"))) PPC_WEAK_FUNC(sub_825587BC);
PPC_FUNC_IMPL(__imp__sub_825587BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825587C0"))) PPC_WEAK_FUNC(sub_825587C0);
PPC_FUNC_IMPL(__imp__sub_825587C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x825587C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stb r7,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r7.u8);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r8,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r8.u8);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,-17620(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + -17620);
	// bl 0x8229e490
	ctx.lr = 0x82558800;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,228(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8255881C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82558824"))) PPC_WEAK_FUNC(sub_82558824);
PPC_FUNC_IMPL(__imp__sub_82558824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82558828"))) PPC_WEAK_FUNC(sub_82558828);
PPC_FUNC_IMPL(__imp__sub_82558828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82558830;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// beq cr6,0x8255884c
	if (ctx.cr6.eq) goto loc_8255884C;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
loc_8255884C:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// ld r4,-17996(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -17996);
	// bl 0x8229e490
	ctx.lr = 0x8255886C;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,228(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82558888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82558890"))) PPC_WEAK_FUNC(sub_82558890);
PPC_FUNC_IMPL(__imp__sub_82558890) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825588A0"))) PPC_WEAK_FUNC(sub_825588A0);
PPC_FUNC_IMPL(__imp__sub_825588A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x825588A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,-17548(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + -17548);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x8229e490
	ctx.lr = 0x825588D0;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,228(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825588EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825588F4"))) PPC_WEAK_FUNC(sub_825588F4);
PPC_FUNC_IMPL(__imp__sub_825588F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825588F8"))) PPC_WEAK_FUNC(sub_825588F8);
PPC_FUNC_IMPL(__imp__sub_825588F8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82558900"))) PPC_WEAK_FUNC(sub_82558900);
PPC_FUNC_IMPL(__imp__sub_82558900) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r10,r11,20488
	ctx.r10.s64 = ctx.r11.s64 + 20488;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82558924;
	sub_8229C068(ctx, base);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,19264
	ctx.r8.s64 = ctx.r9.s64 + 19264;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82558938;
	sub_8229C068(ctx, base);
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// bl 0x82586bc8
	ctx.lr = 0x82558940;
	sub_82586BC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557578
	ctx.lr = 0x82558948;
	sub_82557578(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255895C"))) PPC_WEAK_FUNC(sub_8255895C);
PPC_FUNC_IMPL(__imp__sub_8255895C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82558960"))) PPC_WEAK_FUNC(sub_82558960);
PPC_FUNC_IMPL(__imp__sub_82558960) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r8,r9,20488
	ctx.r8.s64 = ctx.r9.s64 + 20488;
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

__attribute__((alias("__imp__sub_82558988"))) PPC_WEAK_FUNC(sub_82558988);
PPC_FUNC_IMPL(__imp__sub_82558988) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255898C"))) PPC_WEAK_FUNC(sub_8255898C);
PPC_FUNC_IMPL(__imp__sub_8255898C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82558990"))) PPC_WEAK_FUNC(sub_82558990);
PPC_FUNC_IMPL(__imp__sub_82558990) {
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
	// bl 0x82558900
	ctx.lr = 0x825589B0;
	sub_82558900(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825589e4
	if (ctx.cr6.eq) goto loc_825589E4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825589dc
	if (ctx.cr6.lt) goto loc_825589DC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x825589e4
	if (!ctx.cr6.gt) goto loc_825589E4;
loc_825589DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x825589E4;
	sub_82294A58(ctx, base);
loc_825589E4:
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

__attribute__((alias("__imp__sub_82558A00"))) PPC_WEAK_FUNC(sub_82558A00);
PPC_FUNC_IMPL(__imp__sub_82558A00) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r8,r9,20488
	ctx.r8.s64 = ctx.r9.s64 + 20488;
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

__attribute__((alias("__imp__sub_82558A20"))) PPC_WEAK_FUNC(sub_82558A20);
PPC_FUNC_IMPL(__imp__sub_82558A20) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82558A28"))) PPC_WEAK_FUNC(sub_82558A28);
PPC_FUNC_IMPL(__imp__sub_82558A28) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,22328
	ctx.r9.s64 = ctx.r11.s64 + 22328;
	// addi r8,r10,22920
	ctx.r8.s64 = ctx.r10.s64 + 22920;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r30,r31,816
	ctx.r30.s64 = ctx.r31.s64 + 816;
	// stw r8,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82558A60;
	sub_8229C068(ctx, base);
	// addi r3,r31,984
	ctx.r3.s64 = ctx.r31.s64 + 984;
	// bl 0x825872f0
	ctx.lr = 0x82558A68;
	sub_825872F0(ctx, base);
	// addi r3,r31,972
	ctx.r3.s64 = ctx.r31.s64 + 972;
	// bl 0x825872f0
	ctx.lr = 0x82558A70;
	sub_825872F0(ctx, base);
	// addi r3,r31,820
	ctx.r3.s64 = ctx.r31.s64 + 820;
	// bl 0x82558b90
	ctx.lr = 0x82558A78;
	sub_82558B90(ctx, base);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// addi r5,r7,21076
	ctx.r5.s64 = ctx.r7.s64 + 21076;
	// addi r4,r6,19264
	ctx.r4.s64 = ctx.r6.s64 + 19264;
	// stw r5,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// bl 0x8229c068
	ctx.lr = 0x82558A98;
	sub_8229C068(ctx, base);
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// bl 0x82586bc8
	ctx.lr = 0x82558AA0;
	sub_82586BC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557578
	ctx.lr = 0x82558AA8;
	sub_82557578(ctx, base);
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

__attribute__((alias("__imp__sub_82558AC0"))) PPC_WEAK_FUNC(sub_82558AC0);
PPC_FUNC_IMPL(__imp__sub_82558AC0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// addi r4,r7,21104
	ctx.r4.s64 = ctx.r7.s64 + 21104;
	// addi r10,r6,22328
	ctx.r10.s64 = ctx.r6.s64 + 22328;
	// lis r5,-32239
	ctx.r5.s64 = -2112815104;
	// lwz r11,-25660(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25660);
	// stw r4,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r4.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r7,r5,22920
	ctx.r7.s64 = ctx.r5.s64 + 22920;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r7,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r7.u32);
	// addi r11,r3,816
	ctx.r11.s64 = ctx.r3.s64 + 816;
	// stw r9,820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 820, ctx.r9.u32);
	// stw r9,824(r3)
	PPC_STORE_U32(ctx.r3.u32 + 824, ctx.r9.u32);
	// stw r10,-25660(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25660, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82558B10"))) PPC_WEAK_FUNC(sub_82558B10);
PPC_FUNC_IMPL(__imp__sub_82558B10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82558B14"))) PPC_WEAK_FUNC(sub_82558B14);
PPC_FUNC_IMPL(__imp__sub_82558B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82558B18"))) PPC_WEAK_FUNC(sub_82558B18);
PPC_FUNC_IMPL(__imp__sub_82558B18) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-816
	ctx.r3.s64 = ctx.r3.s64 + -816;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82558B20"))) PPC_WEAK_FUNC(sub_82558B20);
PPC_FUNC_IMPL(__imp__sub_82558B20) {
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
	// bl 0x82558a28
	ctx.lr = 0x82558B40;
	sub_82558A28(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82558b74
	if (ctx.cr6.eq) goto loc_82558B74;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82558b6c
	if (ctx.cr6.lt) goto loc_82558B6C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82558b74
	if (!ctx.cr6.gt) goto loc_82558B74;
loc_82558B6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82558B74;
	sub_82294A58(ctx, base);
loc_82558B74:
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

__attribute__((alias("__imp__sub_82558B90"))) PPC_WEAK_FUNC(sub_82558B90);
PPC_FUNC_IMPL(__imp__sub_82558B90) {
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
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82558bcc
	if (ctx.cr6.eq) goto loc_82558BCC;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x82558BCC;
	sub_82294520(ctx, base);
loc_82558BCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x82558BD4;
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

__attribute__((alias("__imp__sub_82558BE8"))) PPC_WEAK_FUNC(sub_82558BE8);
PPC_FUNC_IMPL(__imp__sub_82558BE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x825872f0
	sub_825872F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82558BEC"))) PPC_WEAK_FUNC(sub_82558BEC);
PPC_FUNC_IMPL(__imp__sub_82558BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82558BF0"))) PPC_WEAK_FUNC(sub_82558BF0);
PPC_FUNC_IMPL(__imp__sub_82558BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// addi r4,r7,21104
	ctx.r4.s64 = ctx.r7.s64 + 21104;
	// addi r10,r6,22328
	ctx.r10.s64 = ctx.r6.s64 + 22328;
	// lis r5,-32239
	ctx.r5.s64 = -2112815104;
	// lwz r11,-25660(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25660);
	// stw r4,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r4.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r7,r5,22920
	ctx.r7.s64 = ctx.r5.s64 + 22920;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r7,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r7.u32);
	// addi r11,r3,816
	ctx.r11.s64 = ctx.r3.s64 + 816;
	// stw r9,820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 820, ctx.r9.u32);
	// stw r9,824(r3)
	PPC_STORE_U32(ctx.r3.u32 + 824, ctx.r9.u32);
	// stw r10,-25660(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25660, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82558C38"))) PPC_WEAK_FUNC(sub_82558C38);
PPC_FUNC_IMPL(__imp__sub_82558C38) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82558C40"))) PPC_WEAK_FUNC(sub_82558C40);
PPC_FUNC_IMPL(__imp__sub_82558C40) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r10,r11,23848
	ctx.r10.s64 = ctx.r11.s64 + 23848;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82558C64;
	sub_8229C068(ctx, base);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,19264
	ctx.r8.s64 = ctx.r9.s64 + 19264;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82558C78;
	sub_8229C068(ctx, base);
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// bl 0x82586bc8
	ctx.lr = 0x82558C80;
	sub_82586BC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557578
	ctx.lr = 0x82558C88;
	sub_82557578(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82558C9C"))) PPC_WEAK_FUNC(sub_82558C9C);
PPC_FUNC_IMPL(__imp__sub_82558C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82558CA0"))) PPC_WEAK_FUNC(sub_82558CA0);
PPC_FUNC_IMPL(__imp__sub_82558CA0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,23848
	ctx.r7.s64 = ctx.r9.s64 + 23848;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r8,840(r3)
	PPC_STORE_U8(ctx.r3.u32 + 840, ctx.r8.u8);
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82558CD0"))) PPC_WEAK_FUNC(sub_82558CD0);
PPC_FUNC_IMPL(__imp__sub_82558CD0) {
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
	// bl 0x82558c40
	ctx.lr = 0x82558CF0;
	sub_82558C40(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82558d24
	if (ctx.cr6.eq) goto loc_82558D24;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82558d1c
	if (ctx.cr6.lt) goto loc_82558D1C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82558d24
	if (!ctx.cr6.gt) goto loc_82558D24;
loc_82558D1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82558D24;
	sub_82294A58(ctx, base);
loc_82558D24:
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

__attribute__((alias("__imp__sub_82558D40"))) PPC_WEAK_FUNC(sub_82558D40);
PPC_FUNC_IMPL(__imp__sub_82558D40) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,23848
	ctx.r7.s64 = ctx.r9.s64 + 23848;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r8,840(r3)
	PPC_STORE_U8(ctx.r3.u32 + 840, ctx.r8.u8);
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82558D68"))) PPC_WEAK_FUNC(sub_82558D68);
PPC_FUNC_IMPL(__imp__sub_82558D68) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82558D70"))) PPC_WEAK_FUNC(sub_82558D70);
PPC_FUNC_IMPL(__imp__sub_82558D70) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,24440
	ctx.r9.s64 = ctx.r11.s64 + 24440;
	// addi r8,r10,25040
	ctx.r8.s64 = ctx.r10.s64 + 25040;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r30,r31,864
	ctx.r30.s64 = ctx.r31.s64 + 864;
	// stw r8,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82558DA8;
	sub_8229C068(ctx, base);
	// addi r3,r31,868
	ctx.r3.s64 = ctx.r31.s64 + 868;
	// bl 0x82558b90
	ctx.lr = 0x82558DB0;
	sub_82558B90(ctx, base);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,21076
	ctx.r6.s64 = ctx.r7.s64 + 21076;
	// stw r6,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r6.u32);
	// bl 0x82558c40
	ctx.lr = 0x82558DC4;
	sub_82558C40(ctx, base);
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

__attribute__((alias("__imp__sub_82558DDC"))) PPC_WEAK_FUNC(sub_82558DDC);
PPC_FUNC_IMPL(__imp__sub_82558DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82558DE0"))) PPC_WEAK_FUNC(sub_82558DE0);
PPC_FUNC_IMPL(__imp__sub_82558DE0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// lis r5,-32239
	ctx.r5.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r7,21104
	ctx.r4.s64 = ctx.r7.s64 + 21104;
	// lwz r10,-25660(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25660);
	// addi r7,r6,24440
	ctx.r7.s64 = ctx.r6.s64 + 24440;
	// stb r11,840(r3)
	PPC_STORE_U8(ctx.r3.u32 + 840, ctx.r11.u8);
	// addi r6,r5,25040
	ctx.r6.s64 = ctx.r5.s64 + 25040;
	// stw r4,864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 864, ctx.r4.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r6,864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 864, ctx.r6.u32);
	// addi r10,r3,864
	ctx.r10.s64 = ctx.r3.s64 + 864;
	// stw r11,868(r3)
	PPC_STORE_U32(ctx.r3.u32 + 868, ctx.r11.u32);
	// stw r11,872(r3)
	PPC_STORE_U32(ctx.r3.u32 + 872, ctx.r11.u32);
	// stb r11,936(r3)
	PPC_STORE_U8(ctx.r3.u32 + 936, ctx.r11.u8);
	// stw r9,-25660(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25660, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82558E38"))) PPC_WEAK_FUNC(sub_82558E38);
PPC_FUNC_IMPL(__imp__sub_82558E38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82558E3C"))) PPC_WEAK_FUNC(sub_82558E3C);
PPC_FUNC_IMPL(__imp__sub_82558E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82558E40"))) PPC_WEAK_FUNC(sub_82558E40);
PPC_FUNC_IMPL(__imp__sub_82558E40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-864
	ctx.r3.s64 = ctx.r3.s64 + -864;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82558E48"))) PPC_WEAK_FUNC(sub_82558E48);
PPC_FUNC_IMPL(__imp__sub_82558E48) {
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
	// bl 0x82558d70
	ctx.lr = 0x82558E68;
	sub_82558D70(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82558e9c
	if (ctx.cr6.eq) goto loc_82558E9C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82558e94
	if (ctx.cr6.lt) goto loc_82558E94;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82558e9c
	if (!ctx.cr6.gt) goto loc_82558E9C;
loc_82558E94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82558E9C;
	sub_82294A58(ctx, base);
loc_82558E9C:
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

__attribute__((alias("__imp__sub_82558EB8"))) PPC_WEAK_FUNC(sub_82558EB8);
PPC_FUNC_IMPL(__imp__sub_82558EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r7,21104
	ctx.r4.s64 = ctx.r7.s64 + 21104;
	// lis r5,-32239
	ctx.r5.s64 = -2112815104;
	// lwz r10,-25660(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25660);
	// addi r9,r6,24440
	ctx.r9.s64 = ctx.r6.s64 + 24440;
	// stb r11,840(r3)
	PPC_STORE_U8(ctx.r3.u32 + 840, ctx.r11.u8);
	// stw r4,864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 864, ctx.r4.u32);
	// addi r7,r5,25040
	ctx.r7.s64 = ctx.r5.s64 + 25040;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r7,864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 864, ctx.r7.u32);
	// addi r10,r3,864
	ctx.r10.s64 = ctx.r3.s64 + 864;
	// stw r11,868(r3)
	PPC_STORE_U32(ctx.r3.u32 + 868, ctx.r11.u32);
	// stw r11,872(r3)
	PPC_STORE_U32(ctx.r3.u32 + 872, ctx.r11.u32);
	// stb r11,936(r3)
	PPC_STORE_U8(ctx.r3.u32 + 936, ctx.r11.u8);
	// stw r9,-25660(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25660, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82558F08"))) PPC_WEAK_FUNC(sub_82558F08);
PPC_FUNC_IMPL(__imp__sub_82558F08) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82558F10"))) PPC_WEAK_FUNC(sub_82558F10);
PPC_FUNC_IMPL(__imp__sub_82558F10) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,25072
	ctx.r9.s64 = ctx.r11.s64 + 25072;
	// addi r8,r10,25676
	ctx.r8.s64 = ctx.r10.s64 + 25676;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r30,r31,864
	ctx.r30.s64 = ctx.r31.s64 + 864;
	// stw r8,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82558F48;
	sub_8229C068(ctx, base);
	// addi r3,r31,868
	ctx.r3.s64 = ctx.r31.s64 + 868;
	// bl 0x82558b90
	ctx.lr = 0x82558F50;
	sub_82558B90(ctx, base);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,21076
	ctx.r6.s64 = ctx.r7.s64 + 21076;
	// stw r6,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r6.u32);
	// bl 0x82558c40
	ctx.lr = 0x82558F64;
	sub_82558C40(ctx, base);
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

__attribute__((alias("__imp__sub_82558F7C"))) PPC_WEAK_FUNC(sub_82558F7C);
PPC_FUNC_IMPL(__imp__sub_82558F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82558F80"))) PPC_WEAK_FUNC(sub_82558F80);
PPC_FUNC_IMPL(__imp__sub_82558F80) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// lis r5,-32239
	ctx.r5.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,-25660(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25660);
	// addi r4,r7,21104
	ctx.r4.s64 = ctx.r7.s64 + 21104;
	// addi r7,r6,25072
	ctx.r7.s64 = ctx.r6.s64 + 25072;
	// stb r11,840(r3)
	PPC_STORE_U8(ctx.r3.u32 + 840, ctx.r11.u8);
	// addi r6,r5,25676
	ctx.r6.s64 = ctx.r5.s64 + 25676;
	// stw r4,864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 864, ctx.r4.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r6,864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 864, ctx.r6.u32);
	// addi r10,r3,864
	ctx.r10.s64 = ctx.r3.s64 + 864;
	// stw r11,868(r3)
	PPC_STORE_U32(ctx.r3.u32 + 868, ctx.r11.u32);
	// stw r11,872(r3)
	PPC_STORE_U32(ctx.r3.u32 + 872, ctx.r11.u32);
	// stw r9,-25660(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25660, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82558FD4"))) PPC_WEAK_FUNC(sub_82558FD4);
PPC_FUNC_IMPL(__imp__sub_82558FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82558FD8"))) PPC_WEAK_FUNC(sub_82558FD8);
PPC_FUNC_IMPL(__imp__sub_82558FD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82558FDC"))) PPC_WEAK_FUNC(sub_82558FDC);
PPC_FUNC_IMPL(__imp__sub_82558FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82558FE0"))) PPC_WEAK_FUNC(sub_82558FE0);
PPC_FUNC_IMPL(__imp__sub_82558FE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-864
	ctx.r3.s64 = ctx.r3.s64 + -864;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82558FE8"))) PPC_WEAK_FUNC(sub_82558FE8);
PPC_FUNC_IMPL(__imp__sub_82558FE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x825640c0
	sub_825640C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82558FEC"))) PPC_WEAK_FUNC(sub_82558FEC);
PPC_FUNC_IMPL(__imp__sub_82558FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82558FF0"))) PPC_WEAK_FUNC(sub_82558FF0);
PPC_FUNC_IMPL(__imp__sub_82558FF0) {
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
	// bl 0x82558f10
	ctx.lr = 0x82559010;
	sub_82558F10(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82559044
	if (ctx.cr6.eq) goto loc_82559044;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8255903c
	if (ctx.cr6.lt) goto loc_8255903C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82559044
	if (!ctx.cr6.gt) goto loc_82559044;
loc_8255903C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82559044;
	sub_82294A58(ctx, base);
loc_82559044:
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

__attribute__((alias("__imp__sub_82559060"))) PPC_WEAK_FUNC(sub_82559060);
PPC_FUNC_IMPL(__imp__sub_82559060) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// lis r5,-32239
	ctx.r5.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,-25660(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25660);
	// addi r4,r7,21104
	ctx.r4.s64 = ctx.r7.s64 + 21104;
	// addi r7,r6,25072
	ctx.r7.s64 = ctx.r6.s64 + 25072;
	// stb r11,840(r3)
	PPC_STORE_U8(ctx.r3.u32 + 840, ctx.r11.u8);
	// addi r6,r5,25676
	ctx.r6.s64 = ctx.r5.s64 + 25676;
	// stw r4,864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 864, ctx.r4.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r6,864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 864, ctx.r6.u32);
	// addi r10,r3,864
	ctx.r10.s64 = ctx.r3.s64 + 864;
	// stw r11,868(r3)
	PPC_STORE_U32(ctx.r3.u32 + 868, ctx.r11.u32);
	// stw r11,872(r3)
	PPC_STORE_U32(ctx.r3.u32 + 872, ctx.r11.u32);
	// stw r9,-25660(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25660, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825590AC"))) PPC_WEAK_FUNC(sub_825590AC);
PPC_FUNC_IMPL(__imp__sub_825590AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825590B0"))) PPC_WEAK_FUNC(sub_825590B0);
PPC_FUNC_IMPL(__imp__sub_825590B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825590B4"))) PPC_WEAK_FUNC(sub_825590B4);
PPC_FUNC_IMPL(__imp__sub_825590B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825590B8"))) PPC_WEAK_FUNC(sub_825590B8);
PPC_FUNC_IMPL(__imp__sub_825590B8) {
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
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r3,932
	ctx.r5.s64 = ctx.r3.s64 + 932;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,-17892(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + -17892);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,232(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825590FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559110"))) PPC_WEAK_FUNC(sub_82559110);
PPC_FUNC_IMPL(__imp__sub_82559110) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559118"))) PPC_WEAK_FUNC(sub_82559118);
PPC_FUNC_IMPL(__imp__sub_82559118) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,25712
	ctx.r9.s64 = ctx.r11.s64 + 25712;
	// addi r8,r10,26320
	ctx.r8.s64 = ctx.r10.s64 + 26320;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82559148;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558f10
	ctx.lr = 0x82559150;
	sub_82558F10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559164"))) PPC_WEAK_FUNC(sub_82559164);
PPC_FUNC_IMPL(__imp__sub_82559164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559168"))) PPC_WEAK_FUNC(sub_82559168);
PPC_FUNC_IMPL(__imp__sub_82559168) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// stb r11,840(r3)
	PPC_STORE_U8(ctx.r3.u32 + 840, ctx.r11.u8);
	// lwz r10,-25660(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25660);
	// addi r5,r8,21104
	ctx.r5.s64 = ctx.r8.s64 + 21104;
	// addi r4,r7,25712
	ctx.r4.s64 = ctx.r7.s64 + 25712;
	// addi r8,r6,26320
	ctx.r8.s64 = ctx.r6.s64 + 26320;
	// stw r5,864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 864, ctx.r5.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,868(r3)
	PPC_STORE_U32(ctx.r3.u32 + 868, ctx.r11.u32);
	// stw r11,872(r3)
	PPC_STORE_U32(ctx.r3.u32 + 872, ctx.r11.u32);
	// addi r11,r3,864
	ctx.r11.s64 = ctx.r3.s64 + 864;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r8,864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 864, ctx.r8.u32);
	// stw r10,-25660(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25660, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825591BC"))) PPC_WEAK_FUNC(sub_825591BC);
PPC_FUNC_IMPL(__imp__sub_825591BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825591C0"))) PPC_WEAK_FUNC(sub_825591C0);
PPC_FUNC_IMPL(__imp__sub_825591C0) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,25712
	ctx.r9.s64 = ctx.r11.s64 + 25712;
	// addi r8,r10,26320
	ctx.r8.s64 = ctx.r10.s64 + 26320;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r8,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x825591F8;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558f10
	ctx.lr = 0x82559200;
	sub_82558F10(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82559234
	if (ctx.cr6.eq) goto loc_82559234;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8255922c
	if (ctx.cr6.lt) goto loc_8255922C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82559234
	if (!ctx.cr6.gt) goto loc_82559234;
loc_8255922C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82559234;
	sub_82294A58(ctx, base);
loc_82559234:
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

__attribute__((alias("__imp__sub_82559250"))) PPC_WEAK_FUNC(sub_82559250);
PPC_FUNC_IMPL(__imp__sub_82559250) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// stb r11,840(r3)
	PPC_STORE_U8(ctx.r3.u32 + 840, ctx.r11.u8);
	// lwz r10,-25660(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25660);
	// addi r5,r8,21104
	ctx.r5.s64 = ctx.r8.s64 + 21104;
	// addi r4,r7,25712
	ctx.r4.s64 = ctx.r7.s64 + 25712;
	// addi r8,r6,26320
	ctx.r8.s64 = ctx.r6.s64 + 26320;
	// stw r5,864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 864, ctx.r5.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,868(r3)
	PPC_STORE_U32(ctx.r3.u32 + 868, ctx.r11.u32);
	// stw r11,872(r3)
	PPC_STORE_U32(ctx.r3.u32 + 872, ctx.r11.u32);
	// addi r11,r3,864
	ctx.r11.s64 = ctx.r3.s64 + 864;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r8,864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 864, ctx.r8.u32);
	// stw r10,-25660(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25660, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255929C"))) PPC_WEAK_FUNC(sub_8255929C);
PPC_FUNC_IMPL(__imp__sub_8255929C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825592A0"))) PPC_WEAK_FUNC(sub_825592A0);
PPC_FUNC_IMPL(__imp__sub_825592A0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825592A8"))) PPC_WEAK_FUNC(sub_825592A8);
PPC_FUNC_IMPL(__imp__sub_825592A8) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,26968
	ctx.r9.s64 = ctx.r11.s64 + 26968;
	// addi r8,r10,27572
	ctx.r8.s64 = ctx.r10.s64 + 27572;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x825592D8;
	sub_8229C068(ctx, base);
	// addi r3,r31,928
	ctx.r3.s64 = ctx.r31.s64 + 928;
	// bl 0x82558b90
	ctx.lr = 0x825592E0;
	sub_82558B90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558f10
	ctx.lr = 0x825592E8;
	sub_82558F10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825592FC"))) PPC_WEAK_FUNC(sub_825592FC);
PPC_FUNC_IMPL(__imp__sub_825592FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559300"))) PPC_WEAK_FUNC(sub_82559300);
PPC_FUNC_IMPL(__imp__sub_82559300) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r5,-32239
	ctx.r5.s64 = -2112815104;
	// lwz r10,-25660(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25660);
	// addi r4,r7,21104
	ctx.r4.s64 = ctx.r7.s64 + 21104;
	// addi r7,r6,26968
	ctx.r7.s64 = ctx.r6.s64 + 26968;
	// stb r11,840(r3)
	PPC_STORE_U8(ctx.r3.u32 + 840, ctx.r11.u8);
	// addi r6,r5,27572
	ctx.r6.s64 = ctx.r5.s64 + 27572;
	// stw r4,864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 864, ctx.r4.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r11,868(r3)
	PPC_STORE_U32(ctx.r3.u32 + 868, ctx.r11.u32);
	// stw r11,872(r3)
	PPC_STORE_U32(ctx.r3.u32 + 872, ctx.r11.u32);
	// addi r10,r3,864
	ctx.r10.s64 = ctx.r3.s64 + 864;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r6,864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 864, ctx.r6.u32);
	// stw r11,928(r3)
	PPC_STORE_U32(ctx.r3.u32 + 928, ctx.r11.u32);
	// stw r11,932(r3)
	PPC_STORE_U32(ctx.r3.u32 + 932, ctx.r11.u32);
	// stw r9,-25660(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25660, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255935C"))) PPC_WEAK_FUNC(sub_8255935C);
PPC_FUNC_IMPL(__imp__sub_8255935C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559360"))) PPC_WEAK_FUNC(sub_82559360);
PPC_FUNC_IMPL(__imp__sub_82559360) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,26968
	ctx.r9.s64 = ctx.r11.s64 + 26968;
	// addi r8,r10,27572
	ctx.r8.s64 = ctx.r10.s64 + 27572;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r8,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82559398;
	sub_8229C068(ctx, base);
	// addi r3,r31,928
	ctx.r3.s64 = ctx.r31.s64 + 928;
	// bl 0x82558b90
	ctx.lr = 0x825593A0;
	sub_82558B90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558f10
	ctx.lr = 0x825593A8;
	sub_82558F10(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x825593dc
	if (ctx.cr6.eq) goto loc_825593DC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825593d4
	if (ctx.cr6.lt) goto loc_825593D4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x825593dc
	if (!ctx.cr6.gt) goto loc_825593DC;
loc_825593D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x825593DC;
	sub_82294A58(ctx, base);
loc_825593DC:
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

__attribute__((alias("__imp__sub_825593F8"))) PPC_WEAK_FUNC(sub_825593F8);
PPC_FUNC_IMPL(__imp__sub_825593F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r5,-32239
	ctx.r5.s64 = -2112815104;
	// lwz r10,-25660(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25660);
	// addi r4,r7,21104
	ctx.r4.s64 = ctx.r7.s64 + 21104;
	// addi r7,r6,26968
	ctx.r7.s64 = ctx.r6.s64 + 26968;
	// stb r11,840(r3)
	PPC_STORE_U8(ctx.r3.u32 + 840, ctx.r11.u8);
	// addi r6,r5,27572
	ctx.r6.s64 = ctx.r5.s64 + 27572;
	// stw r4,864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 864, ctx.r4.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r11,868(r3)
	PPC_STORE_U32(ctx.r3.u32 + 868, ctx.r11.u32);
	// stw r11,872(r3)
	PPC_STORE_U32(ctx.r3.u32 + 872, ctx.r11.u32);
	// addi r10,r3,864
	ctx.r10.s64 = ctx.r3.s64 + 864;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r6,864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 864, ctx.r6.u32);
	// stw r11,928(r3)
	PPC_STORE_U32(ctx.r3.u32 + 928, ctx.r11.u32);
	// stw r11,932(r3)
	PPC_STORE_U32(ctx.r3.u32 + 932, ctx.r11.u32);
	// stw r9,-25660(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25660, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255944C"))) PPC_WEAK_FUNC(sub_8255944C);
PPC_FUNC_IMPL(__imp__sub_8255944C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559450"))) PPC_WEAK_FUNC(sub_82559450);
PPC_FUNC_IMPL(__imp__sub_82559450) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559458"))) PPC_WEAK_FUNC(sub_82559458);
PPC_FUNC_IMPL(__imp__sub_82559458) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r10,r11,27608
	ctx.r10.s64 = ctx.r11.s64 + 27608;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x8255947C;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558c40
	ctx.lr = 0x82559484;
	sub_82558C40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559498"))) PPC_WEAK_FUNC(sub_82559498);
PPC_FUNC_IMPL(__imp__sub_82559498) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,27608
	ctx.r7.s64 = ctx.r9.s64 + 27608;
	// stb r8,840(r3)
	PPC_STORE_U8(ctx.r3.u32 + 840, ctx.r8.u8);
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825594C8"))) PPC_WEAK_FUNC(sub_825594C8);
PPC_FUNC_IMPL(__imp__sub_825594C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,27608
	ctx.r7.s64 = ctx.r9.s64 + 27608;
	// stb r8,840(r3)
	PPC_STORE_U8(ctx.r3.u32 + 840, ctx.r8.u8);
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825594F0"))) PPC_WEAK_FUNC(sub_825594F0);
PPC_FUNC_IMPL(__imp__sub_825594F0) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,27608
	ctx.r10.s64 = ctx.r11.s64 + 27608;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x8255951C;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558c40
	ctx.lr = 0x82559524;
	sub_82558C40(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82559558
	if (ctx.cr6.eq) goto loc_82559558;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82559550
	if (ctx.cr6.lt) goto loc_82559550;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82559558
	if (!ctx.cr6.gt) goto loc_82559558;
loc_82559550:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82559558;
	sub_82294A58(ctx, base);
loc_82559558:
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

__attribute__((alias("__imp__sub_82559574"))) PPC_WEAK_FUNC(sub_82559574);
PPC_FUNC_IMPL(__imp__sub_82559574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559578"))) PPC_WEAK_FUNC(sub_82559578);
PPC_FUNC_IMPL(__imp__sub_82559578) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559580"))) PPC_WEAK_FUNC(sub_82559580);
PPC_FUNC_IMPL(__imp__sub_82559580) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r10,r11,28200
	ctx.r10.s64 = ctx.r11.s64 + 28200;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x825595A4;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558c40
	ctx.lr = 0x825595AC;
	sub_82558C40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825595C0"))) PPC_WEAK_FUNC(sub_825595C0);
PPC_FUNC_IMPL(__imp__sub_825595C0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,28200
	ctx.r7.s64 = ctx.r9.s64 + 28200;
	// stb r8,840(r3)
	PPC_STORE_U8(ctx.r3.u32 + 840, ctx.r8.u8);
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825595F0"))) PPC_WEAK_FUNC(sub_825595F0);
PPC_FUNC_IMPL(__imp__sub_825595F0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,28200
	ctx.r7.s64 = ctx.r9.s64 + 28200;
	// stb r8,840(r3)
	PPC_STORE_U8(ctx.r3.u32 + 840, ctx.r8.u8);
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559618"))) PPC_WEAK_FUNC(sub_82559618);
PPC_FUNC_IMPL(__imp__sub_82559618) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,28200
	ctx.r10.s64 = ctx.r11.s64 + 28200;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82559644;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558c40
	ctx.lr = 0x8255964C;
	sub_82558C40(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82559680
	if (ctx.cr6.eq) goto loc_82559680;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82559678
	if (ctx.cr6.lt) goto loc_82559678;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82559680
	if (!ctx.cr6.gt) goto loc_82559680;
loc_82559678:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82559680;
	sub_82294A58(ctx, base);
loc_82559680:
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

__attribute__((alias("__imp__sub_8255969C"))) PPC_WEAK_FUNC(sub_8255969C);
PPC_FUNC_IMPL(__imp__sub_8255969C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825596A0"))) PPC_WEAK_FUNC(sub_825596A0);
PPC_FUNC_IMPL(__imp__sub_825596A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825596A4"))) PPC_WEAK_FUNC(sub_825596A4);
PPC_FUNC_IMPL(__imp__sub_825596A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825596A8"))) PPC_WEAK_FUNC(sub_825596A8);
PPC_FUNC_IMPL(__imp__sub_825596A8) {
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
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r5,r3,864
	ctx.r5.s64 = ctx.r3.s64 + 864;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,-17836(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + -17836);
	// lwz r8,232(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 232);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825596E4;
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

__attribute__((alias("__imp__sub_825596F4"))) PPC_WEAK_FUNC(sub_825596F4);
PPC_FUNC_IMPL(__imp__sub_825596F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825596F8"))) PPC_WEAK_FUNC(sub_825596F8);
PPC_FUNC_IMPL(__imp__sub_825596F8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559700"))) PPC_WEAK_FUNC(sub_82559700);
PPC_FUNC_IMPL(__imp__sub_82559700) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r10,r11,29384
	ctx.r10.s64 = ctx.r11.s64 + 29384;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82559724;
	sub_8229C068(ctx, base);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,28200
	ctx.r8.s64 = ctx.r9.s64 + 28200;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82559738;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558c40
	ctx.lr = 0x82559740;
	sub_82558C40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559754"))) PPC_WEAK_FUNC(sub_82559754);
PPC_FUNC_IMPL(__imp__sub_82559754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559758"))) PPC_WEAK_FUNC(sub_82559758);
PPC_FUNC_IMPL(__imp__sub_82559758) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,29384
	ctx.r7.s64 = ctx.r9.s64 + 29384;
	// stb r8,840(r3)
	PPC_STORE_U8(ctx.r3.u32 + 840, ctx.r8.u8);
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559788"))) PPC_WEAK_FUNC(sub_82559788);
PPC_FUNC_IMPL(__imp__sub_82559788) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,29384
	ctx.r10.s64 = ctx.r11.s64 + 29384;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x825597B4;
	sub_8229C068(ctx, base);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,28200
	ctx.r8.s64 = ctx.r9.s64 + 28200;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x825597C8;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558c40
	ctx.lr = 0x825597D0;
	sub_82558C40(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82559804
	if (ctx.cr6.eq) goto loc_82559804;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825597fc
	if (ctx.cr6.lt) goto loc_825597FC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82559804
	if (!ctx.cr6.gt) goto loc_82559804;
loc_825597FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82559804;
	sub_82294A58(ctx, base);
loc_82559804:
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

__attribute__((alias("__imp__sub_82559820"))) PPC_WEAK_FUNC(sub_82559820);
PPC_FUNC_IMPL(__imp__sub_82559820) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,29384
	ctx.r7.s64 = ctx.r9.s64 + 29384;
	// stb r8,840(r3)
	PPC_STORE_U8(ctx.r3.u32 + 840, ctx.r8.u8);
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559848"))) PPC_WEAK_FUNC(sub_82559848);
PPC_FUNC_IMPL(__imp__sub_82559848) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255984C"))) PPC_WEAK_FUNC(sub_8255984C);
PPC_FUNC_IMPL(__imp__sub_8255984C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559850"))) PPC_WEAK_FUNC(sub_82559850);
PPC_FUNC_IMPL(__imp__sub_82559850) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559854"))) PPC_WEAK_FUNC(sub_82559854);
PPC_FUNC_IMPL(__imp__sub_82559854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559858"))) PPC_WEAK_FUNC(sub_82559858);
PPC_FUNC_IMPL(__imp__sub_82559858) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255985C"))) PPC_WEAK_FUNC(sub_8255985C);
PPC_FUNC_IMPL(__imp__sub_8255985C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559860"))) PPC_WEAK_FUNC(sub_82559860);
PPC_FUNC_IMPL(__imp__sub_82559860) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559864"))) PPC_WEAK_FUNC(sub_82559864);
PPC_FUNC_IMPL(__imp__sub_82559864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559868"))) PPC_WEAK_FUNC(sub_82559868);
PPC_FUNC_IMPL(__imp__sub_82559868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82559870;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,-17908(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + -17908);
	// bl 0x8229e490
	ctx.lr = 0x82559898;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,228(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825598B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825598BC"))) PPC_WEAK_FUNC(sub_825598BC);
PPC_FUNC_IMPL(__imp__sub_825598BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825598C0"))) PPC_WEAK_FUNC(sub_825598C0);
PPC_FUNC_IMPL(__imp__sub_825598C0) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r5,r3,940
	ctx.r5.s64 = ctx.r3.s64 + 940;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,-18020(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18020);
	// lwz r8,232(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825598FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559910"))) PPC_WEAK_FUNC(sub_82559910);
PPC_FUNC_IMPL(__imp__sub_82559910) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r5,r3,928
	ctx.r5.s64 = ctx.r3.s64 + 928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,-18036(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18036);
	// lwz r8,232(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8255994C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559960"))) PPC_WEAK_FUNC(sub_82559960);
PPC_FUNC_IMPL(__imp__sub_82559960) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r5,r3,916
	ctx.r5.s64 = ctx.r3.s64 + 916;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,-18028(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18028);
	// lwz r8,232(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8255999C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825599B0"))) PPC_WEAK_FUNC(sub_825599B0);
PPC_FUNC_IMPL(__imp__sub_825599B0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825599B8"))) PPC_WEAK_FUNC(sub_825599B8);
PPC_FUNC_IMPL(__imp__sub_825599B8) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,29976
	ctx.r9.s64 = ctx.r11.s64 + 29976;
	// addi r8,r10,30568
	ctx.r8.s64 = ctx.r10.s64 + 30568;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r30,r31,816
	ctx.r30.s64 = ctx.r31.s64 + 816;
	// stw r8,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x825599F0;
	sub_8229C068(ctx, base);
	// addi r3,r31,852
	ctx.r3.s64 = ctx.r31.s64 + 852;
	// bl 0x82558b90
	ctx.lr = 0x825599F8;
	sub_82558B90(ctx, base);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// addi r5,r7,21076
	ctx.r5.s64 = ctx.r7.s64 + 21076;
	// addi r4,r6,19264
	ctx.r4.s64 = ctx.r6.s64 + 19264;
	// stw r5,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// bl 0x8229c068
	ctx.lr = 0x82559A18;
	sub_8229C068(ctx, base);
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// bl 0x82586bc8
	ctx.lr = 0x82559A20;
	sub_82586BC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557578
	ctx.lr = 0x82559A28;
	sub_82557578(ctx, base);
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

__attribute__((alias("__imp__sub_82559A40"))) PPC_WEAK_FUNC(sub_82559A40);
PPC_FUNC_IMPL(__imp__sub_82559A40) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// addi r5,r8,21076
	ctx.r5.s64 = ctx.r8.s64 + 21076;
	// lwz r11,-25660(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25660);
	// addi r4,r7,29976
	ctx.r4.s64 = ctx.r7.s64 + 29976;
	// addi r8,r6,30568
	ctx.r8.s64 = ctx.r6.s64 + 30568;
	// stw r5,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r8,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r8.u32);
	// stw r10,852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 852, ctx.r10.u32);
	// stw r10,856(r3)
	PPC_STORE_U32(ctx.r3.u32 + 856, ctx.r10.u32);
	// stw r11,-25660(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559A8C"))) PPC_WEAK_FUNC(sub_82559A8C);
PPC_FUNC_IMPL(__imp__sub_82559A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559A90"))) PPC_WEAK_FUNC(sub_82559A90);
PPC_FUNC_IMPL(__imp__sub_82559A90) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-816
	ctx.r3.s64 = ctx.r3.s64 + -816;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559A98"))) PPC_WEAK_FUNC(sub_82559A98);
PPC_FUNC_IMPL(__imp__sub_82559A98) {
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
	// bl 0x825599b8
	ctx.lr = 0x82559AB8;
	sub_825599B8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82559aec
	if (ctx.cr6.eq) goto loc_82559AEC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82559ae4
	if (ctx.cr6.lt) goto loc_82559AE4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82559aec
	if (!ctx.cr6.gt) goto loc_82559AEC;
loc_82559AE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82559AEC;
	sub_82294A58(ctx, base);
loc_82559AEC:
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

__attribute__((alias("__imp__sub_82559B08"))) PPC_WEAK_FUNC(sub_82559B08);
PPC_FUNC_IMPL(__imp__sub_82559B08) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// addi r5,r8,21076
	ctx.r5.s64 = ctx.r8.s64 + 21076;
	// lwz r11,-25660(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25660);
	// addi r4,r7,29976
	ctx.r4.s64 = ctx.r7.s64 + 29976;
	// addi r8,r6,30568
	ctx.r8.s64 = ctx.r6.s64 + 30568;
	// stw r5,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r8,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r8.u32);
	// stw r10,852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 852, ctx.r10.u32);
	// stw r10,856(r3)
	PPC_STORE_U32(ctx.r3.u32 + 856, ctx.r10.u32);
	// stw r11,-25660(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559B4C"))) PPC_WEAK_FUNC(sub_82559B4C);
PPC_FUNC_IMPL(__imp__sub_82559B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559B50"))) PPC_WEAK_FUNC(sub_82559B50);
PPC_FUNC_IMPL(__imp__sub_82559B50) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559B58"))) PPC_WEAK_FUNC(sub_82559B58);
PPC_FUNC_IMPL(__imp__sub_82559B58) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r10,r11,30600
	ctx.r10.s64 = ctx.r11.s64 + 30600;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82559B7C;
	sub_8229C068(ctx, base);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,19264
	ctx.r8.s64 = ctx.r9.s64 + 19264;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82559B90;
	sub_8229C068(ctx, base);
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// bl 0x82586bc8
	ctx.lr = 0x82559B98;
	sub_82586BC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557578
	ctx.lr = 0x82559BA0;
	sub_82557578(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559BB4"))) PPC_WEAK_FUNC(sub_82559BB4);
PPC_FUNC_IMPL(__imp__sub_82559BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559BB8"))) PPC_WEAK_FUNC(sub_82559BB8);
PPC_FUNC_IMPL(__imp__sub_82559BB8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r8,r9,30600
	ctx.r8.s64 = ctx.r9.s64 + 30600;
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

__attribute__((alias("__imp__sub_82559BE0"))) PPC_WEAK_FUNC(sub_82559BE0);
PPC_FUNC_IMPL(__imp__sub_82559BE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559BE4"))) PPC_WEAK_FUNC(sub_82559BE4);
PPC_FUNC_IMPL(__imp__sub_82559BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559BE8"))) PPC_WEAK_FUNC(sub_82559BE8);
PPC_FUNC_IMPL(__imp__sub_82559BE8) {
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
	// bl 0x82559b58
	ctx.lr = 0x82559C08;
	sub_82559B58(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82559c3c
	if (ctx.cr6.eq) goto loc_82559C3C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82559c34
	if (ctx.cr6.lt) goto loc_82559C34;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82559c3c
	if (!ctx.cr6.gt) goto loc_82559C3C;
loc_82559C34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82559C3C;
	sub_82294A58(ctx, base);
loc_82559C3C:
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

__attribute__((alias("__imp__sub_82559C58"))) PPC_WEAK_FUNC(sub_82559C58);
PPC_FUNC_IMPL(__imp__sub_82559C58) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r8,r9,30600
	ctx.r8.s64 = ctx.r9.s64 + 30600;
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

__attribute__((alias("__imp__sub_82559C78"))) PPC_WEAK_FUNC(sub_82559C78);
PPC_FUNC_IMPL(__imp__sub_82559C78) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559C80"))) PPC_WEAK_FUNC(sub_82559C80);
PPC_FUNC_IMPL(__imp__sub_82559C80) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r10,r11,31192
	ctx.r10.s64 = ctx.r11.s64 + 31192;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82559CA4;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82559b58
	ctx.lr = 0x82559CAC;
	sub_82559B58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559CC0"))) PPC_WEAK_FUNC(sub_82559CC0);
PPC_FUNC_IMPL(__imp__sub_82559CC0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r8,r9,31192
	ctx.r8.s64 = ctx.r9.s64 + 31192;
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

__attribute__((alias("__imp__sub_82559CE8"))) PPC_WEAK_FUNC(sub_82559CE8);
PPC_FUNC_IMPL(__imp__sub_82559CE8) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,31192
	ctx.r10.s64 = ctx.r11.s64 + 31192;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82559D14;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82559b58
	ctx.lr = 0x82559D1C;
	sub_82559B58(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82559d50
	if (ctx.cr6.eq) goto loc_82559D50;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82559d48
	if (ctx.cr6.lt) goto loc_82559D48;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82559d50
	if (!ctx.cr6.gt) goto loc_82559D50;
loc_82559D48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82559D50;
	sub_82294A58(ctx, base);
loc_82559D50:
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

__attribute__((alias("__imp__sub_82559D6C"))) PPC_WEAK_FUNC(sub_82559D6C);
PPC_FUNC_IMPL(__imp__sub_82559D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559D70"))) PPC_WEAK_FUNC(sub_82559D70);
PPC_FUNC_IMPL(__imp__sub_82559D70) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r8,r9,31192
	ctx.r8.s64 = ctx.r9.s64 + 31192;
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

__attribute__((alias("__imp__sub_82559D90"))) PPC_WEAK_FUNC(sub_82559D90);
PPC_FUNC_IMPL(__imp__sub_82559D90) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559D98"))) PPC_WEAK_FUNC(sub_82559D98);
PPC_FUNC_IMPL(__imp__sub_82559D98) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r10,r11,31784
	ctx.r10.s64 = ctx.r11.s64 + 31784;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82559DBC;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82559b58
	ctx.lr = 0x82559DC4;
	sub_82559B58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559DD8"))) PPC_WEAK_FUNC(sub_82559DD8);
PPC_FUNC_IMPL(__imp__sub_82559DD8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,31784
	ctx.r7.s64 = ctx.r9.s64 + 31784;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r8,856(r3)
	PPC_STORE_U8(ctx.r3.u32 + 856, ctx.r8.u8);
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559E08"))) PPC_WEAK_FUNC(sub_82559E08);
PPC_FUNC_IMPL(__imp__sub_82559E08) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,31784
	ctx.r10.s64 = ctx.r11.s64 + 31784;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82559E34;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82559b58
	ctx.lr = 0x82559E3C;
	sub_82559B58(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82559e70
	if (ctx.cr6.eq) goto loc_82559E70;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82559e68
	if (ctx.cr6.lt) goto loc_82559E68;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82559e70
	if (!ctx.cr6.gt) goto loc_82559E70;
loc_82559E68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82559E70;
	sub_82294A58(ctx, base);
loc_82559E70:
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

__attribute__((alias("__imp__sub_82559E8C"))) PPC_WEAK_FUNC(sub_82559E8C);
PPC_FUNC_IMPL(__imp__sub_82559E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559E90"))) PPC_WEAK_FUNC(sub_82559E90);
PPC_FUNC_IMPL(__imp__sub_82559E90) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,31784
	ctx.r7.s64 = ctx.r9.s64 + 31784;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r8,856(r3)
	PPC_STORE_U8(ctx.r3.u32 + 856, ctx.r8.u8);
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559EB8"))) PPC_WEAK_FUNC(sub_82559EB8);
PPC_FUNC_IMPL(__imp__sub_82559EB8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559EC0"))) PPC_WEAK_FUNC(sub_82559EC0);
PPC_FUNC_IMPL(__imp__sub_82559EC0) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r10,r11,32376
	ctx.r10.s64 = ctx.r11.s64 + 32376;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82559EE4;
	sub_8229C068(ctx, base);
	// addi r3,r31,836
	ctx.r3.s64 = ctx.r31.s64 + 836;
	// bl 0x822991c0
	ctx.lr = 0x82559EEC;
	sub_822991C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82559b58
	ctx.lr = 0x82559EF4;
	sub_82559B58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559F08"))) PPC_WEAK_FUNC(sub_82559F08);
PPC_FUNC_IMPL(__imp__sub_82559F08) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r8,r9,32376
	ctx.r8.s64 = ctx.r9.s64 + 32376;
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

__attribute__((alias("__imp__sub_82559F30"))) PPC_WEAK_FUNC(sub_82559F30);
PPC_FUNC_IMPL(__imp__sub_82559F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-988
	ctx.r3.s64 = ctx.r11.s64 + -988;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559F3C"))) PPC_WEAK_FUNC(sub_82559F3C);
PPC_FUNC_IMPL(__imp__sub_82559F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559F40"))) PPC_WEAK_FUNC(sub_82559F40);
PPC_FUNC_IMPL(__imp__sub_82559F40) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559F48"))) PPC_WEAK_FUNC(sub_82559F48);
PPC_FUNC_IMPL(__imp__sub_82559F48) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,32376
	ctx.r10.s64 = ctx.r11.s64 + 32376;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82559F74;
	sub_8229C068(ctx, base);
	// addi r3,r31,836
	ctx.r3.s64 = ctx.r31.s64 + 836;
	// bl 0x822991c0
	ctx.lr = 0x82559F7C;
	sub_822991C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82559b58
	ctx.lr = 0x82559F84;
	sub_82559B58(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82559fb8
	if (ctx.cr6.eq) goto loc_82559FB8;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82559fb0
	if (ctx.cr6.lt) goto loc_82559FB0;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82559fb8
	if (!ctx.cr6.gt) goto loc_82559FB8;
loc_82559FB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82559FB8;
	sub_82294A58(ctx, base);
loc_82559FB8:
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

__attribute__((alias("__imp__sub_82559FD4"))) PPC_WEAK_FUNC(sub_82559FD4);
PPC_FUNC_IMPL(__imp__sub_82559FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559FD8"))) PPC_WEAK_FUNC(sub_82559FD8);
PPC_FUNC_IMPL(__imp__sub_82559FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r8,r9,32376
	ctx.r8.s64 = ctx.r9.s64 + 32376;
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

__attribute__((alias("__imp__sub_82559FF8"))) PPC_WEAK_FUNC(sub_82559FF8);
PPC_FUNC_IMPL(__imp__sub_82559FF8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A000"))) PPC_WEAK_FUNC(sub_8255A000);
PPC_FUNC_IMPL(__imp__sub_8255A000) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r10,r11,-32568
	ctx.r10.s64 = ctx.r11.s64 + -32568;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x8255A024;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82559b58
	ctx.lr = 0x8255A02C;
	sub_82559B58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A040"))) PPC_WEAK_FUNC(sub_8255A040);
PPC_FUNC_IMPL(__imp__sub_8255A040) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-32568
	ctx.r7.s64 = ctx.r9.s64 + -32568;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r8,856(r3)
	PPC_STORE_U8(ctx.r3.u32 + 856, ctx.r8.u8);
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A070"))) PPC_WEAK_FUNC(sub_8255A070);
PPC_FUNC_IMPL(__imp__sub_8255A070) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-32568
	ctx.r10.s64 = ctx.r11.s64 + -32568;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x8255A09C;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82559b58
	ctx.lr = 0x8255A0A4;
	sub_82559B58(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8255a0d8
	if (ctx.cr6.eq) goto loc_8255A0D8;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8255a0d0
	if (ctx.cr6.lt) goto loc_8255A0D0;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8255a0d8
	if (!ctx.cr6.gt) goto loc_8255A0D8;
loc_8255A0D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x8255A0D8;
	sub_82294A58(ctx, base);
loc_8255A0D8:
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

__attribute__((alias("__imp__sub_8255A0F4"))) PPC_WEAK_FUNC(sub_8255A0F4);
PPC_FUNC_IMPL(__imp__sub_8255A0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A0F8"))) PPC_WEAK_FUNC(sub_8255A0F8);
PPC_FUNC_IMPL(__imp__sub_8255A0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-32568
	ctx.r7.s64 = ctx.r9.s64 + -32568;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r8,856(r3)
	PPC_STORE_U8(ctx.r3.u32 + 856, ctx.r8.u8);
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A120"))) PPC_WEAK_FUNC(sub_8255A120);
PPC_FUNC_IMPL(__imp__sub_8255A120) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A124"))) PPC_WEAK_FUNC(sub_8255A124);
PPC_FUNC_IMPL(__imp__sub_8255A124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A128"))) PPC_WEAK_FUNC(sub_8255A128);
PPC_FUNC_IMPL(__imp__sub_8255A128) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A12C"))) PPC_WEAK_FUNC(sub_8255A12C);
PPC_FUNC_IMPL(__imp__sub_8255A12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A130"))) PPC_WEAK_FUNC(sub_8255A130);
PPC_FUNC_IMPL(__imp__sub_8255A130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8255A138;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,-17868(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + -17868);
	// bl 0x8229e490
	ctx.lr = 0x8255A168;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,228(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8255A184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255A190"))) PPC_WEAK_FUNC(sub_8255A190);
PPC_FUNC_IMPL(__imp__sub_8255A190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8255A198;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,-18004(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18004);
	// bl 0x8229e490
	ctx.lr = 0x8255A1C4;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,228(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8255A1E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255A1EC"))) PPC_WEAK_FUNC(sub_8255A1EC);
PPC_FUNC_IMPL(__imp__sub_8255A1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A1F0"))) PPC_WEAK_FUNC(sub_8255A1F0);
PPC_FUNC_IMPL(__imp__sub_8255A1F0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A1F8"))) PPC_WEAK_FUNC(sub_8255A1F8);
PPC_FUNC_IMPL(__imp__sub_8255A1F8) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,26352
	ctx.r9.s64 = ctx.r11.s64 + 26352;
	// addi r8,r10,26940
	ctx.r8.s64 = ctx.r10.s64 + 26940;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r30,r31,832
	ctx.r30.s64 = ctx.r31.s64 + 832;
	// stw r8,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x8255A230;
	sub_8229C068(ctx, base);
	// addi r3,r31,932
	ctx.r3.s64 = ctx.r31.s64 + 932;
	// bl 0x82558b90
	ctx.lr = 0x8255A238;
	sub_82558B90(ctx, base);
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// bl 0x82558b90
	ctx.lr = 0x8255A240;
	sub_82558B90(ctx, base);
	// addi r3,r31,844
	ctx.r3.s64 = ctx.r31.s64 + 844;
	// bl 0x82558b90
	ctx.lr = 0x8255A248;
	sub_82558B90(ctx, base);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,21076
	ctx.r6.s64 = ctx.r7.s64 + 21076;
	// stw r6,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r6.u32);
	// bl 0x82559b58
	ctx.lr = 0x8255A25C;
	sub_82559B58(ctx, base);
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

__attribute__((alias("__imp__sub_8255A274"))) PPC_WEAK_FUNC(sub_8255A274);
PPC_FUNC_IMPL(__imp__sub_8255A274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A278"))) PPC_WEAK_FUNC(sub_8255A278);
PPC_FUNC_IMPL(__imp__sub_8255A278) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// addi r5,r8,21076
	ctx.r5.s64 = ctx.r8.s64 + 21076;
	// lwz r10,-25660(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25660);
	// addi r4,r7,26352
	ctx.r4.s64 = ctx.r7.s64 + 26352;
	// addi r8,r6,26940
	ctx.r8.s64 = ctx.r6.s64 + 26940;
	// stw r5,832(r3)
	PPC_STORE_U32(ctx.r3.u32 + 832, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r8,832(r3)
	PPC_STORE_U32(ctx.r3.u32 + 832, ctx.r8.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,844(r3)
	PPC_STORE_U32(ctx.r3.u32 + 844, ctx.r11.u32);
	// stw r11,848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 848, ctx.r11.u32);
	// stw r11,888(r3)
	PPC_STORE_U32(ctx.r3.u32 + 888, ctx.r11.u32);
	// stw r11,892(r3)
	PPC_STORE_U32(ctx.r3.u32 + 892, ctx.r11.u32);
	// stw r11,932(r3)
	PPC_STORE_U32(ctx.r3.u32 + 932, ctx.r11.u32);
	// stw r11,936(r3)
	PPC_STORE_U32(ctx.r3.u32 + 936, ctx.r11.u32);
	// stw r10,-25660(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25660, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A2D4"))) PPC_WEAK_FUNC(sub_8255A2D4);
PPC_FUNC_IMPL(__imp__sub_8255A2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A2D8"))) PPC_WEAK_FUNC(sub_8255A2D8);
PPC_FUNC_IMPL(__imp__sub_8255A2D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-832
	ctx.r3.s64 = ctx.r3.s64 + -832;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A2E0"))) PPC_WEAK_FUNC(sub_8255A2E0);
PPC_FUNC_IMPL(__imp__sub_8255A2E0) {
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
	// bl 0x8255a1f8
	ctx.lr = 0x8255A300;
	sub_8255A1F8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255a334
	if (ctx.cr6.eq) goto loc_8255A334;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8255a32c
	if (ctx.cr6.lt) goto loc_8255A32C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8255a334
	if (!ctx.cr6.gt) goto loc_8255A334;
loc_8255A32C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x8255A334;
	sub_82294A58(ctx, base);
loc_8255A334:
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

__attribute__((alias("__imp__sub_8255A350"))) PPC_WEAK_FUNC(sub_8255A350);
PPC_FUNC_IMPL(__imp__sub_8255A350) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// addi r5,r8,21076
	ctx.r5.s64 = ctx.r8.s64 + 21076;
	// lwz r10,-25660(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25660);
	// addi r4,r7,26352
	ctx.r4.s64 = ctx.r7.s64 + 26352;
	// addi r8,r6,26940
	ctx.r8.s64 = ctx.r6.s64 + 26940;
	// stw r5,832(r3)
	PPC_STORE_U32(ctx.r3.u32 + 832, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r8,832(r3)
	PPC_STORE_U32(ctx.r3.u32 + 832, ctx.r8.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,844(r3)
	PPC_STORE_U32(ctx.r3.u32 + 844, ctx.r11.u32);
	// stw r11,848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 848, ctx.r11.u32);
	// stw r11,888(r3)
	PPC_STORE_U32(ctx.r3.u32 + 888, ctx.r11.u32);
	// stw r11,892(r3)
	PPC_STORE_U32(ctx.r3.u32 + 892, ctx.r11.u32);
	// stw r11,932(r3)
	PPC_STORE_U32(ctx.r3.u32 + 932, ctx.r11.u32);
	// stw r11,936(r3)
	PPC_STORE_U32(ctx.r3.u32 + 936, ctx.r11.u32);
	// stw r10,-25660(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25660, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A3A4"))) PPC_WEAK_FUNC(sub_8255A3A4);
PPC_FUNC_IMPL(__imp__sub_8255A3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A3A8"))) PPC_WEAK_FUNC(sub_8255A3A8);
PPC_FUNC_IMPL(__imp__sub_8255A3A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A3AC"))) PPC_WEAK_FUNC(sub_8255A3AC);
PPC_FUNC_IMPL(__imp__sub_8255A3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A3B0"))) PPC_WEAK_FUNC(sub_8255A3B0);
PPC_FUNC_IMPL(__imp__sub_8255A3B0) {
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
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r3,920
	ctx.r5.s64 = ctx.r3.s64 + 920;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,-17732(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + -17732);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,232(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255A3F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A408"))) PPC_WEAK_FUNC(sub_8255A408);
PPC_FUNC_IMPL(__imp__sub_8255A408) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A410"))) PPC_WEAK_FUNC(sub_8255A410);
PPC_FUNC_IMPL(__imp__sub_8255A410) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,21680
	ctx.r9.s64 = ctx.r11.s64 + 21680;
	// addi r8,r10,22296
	ctx.r8.s64 = ctx.r10.s64 + 22296;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x8255A444;
	sub_8229C068(ctx, base);
	// lwz r7,904(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r31,896
	ctx.r30.s64 = ctx.r31.s64 + 896;
	// stw r11,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r11.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8255a470
	if (ctx.cr6.eq) goto loc_8255A470;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294520
	ctx.lr = 0x8255A470;
	sub_82294520(ctx, base);
loc_8255A470:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8255A478;
	sub_82294CC8(ctx, base);
	// addi r3,r31,820
	ctx.r3.s64 = ctx.r31.s64 + 820;
	// bl 0x82558b90
	ctx.lr = 0x8255A480;
	sub_82558B90(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,21076
	ctx.r9.s64 = ctx.r11.s64 + 21076;
	// addi r8,r10,19264
	ctx.r8.s64 = ctx.r10.s64 + 19264;
	// stw r9,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x8255A4A0;
	sub_8229C068(ctx, base);
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// bl 0x82586bc8
	ctx.lr = 0x8255A4A8;
	sub_82586BC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557578
	ctx.lr = 0x8255A4B0;
	sub_82557578(ctx, base);
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

__attribute__((alias("__imp__sub_8255A4C8"))) PPC_WEAK_FUNC(sub_8255A4C8);
PPC_FUNC_IMPL(__imp__sub_8255A4C8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// addi r4,r7,21104
	ctx.r4.s64 = ctx.r7.s64 + 21104;
	// lis r5,-32239
	ctx.r5.s64 = -2112815104;
	// addi r9,r6,21680
	ctx.r9.s64 = ctx.r6.s64 + 21680;
	// lwz r10,-25660(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25660);
	// stw r4,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r4.u32);
	// addi r7,r5,22296
	ctx.r7.s64 = ctx.r5.s64 + 22296;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r7,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r7.u32);
	// stw r11,820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 820, ctx.r11.u32);
	// addi r10,r3,816
	ctx.r10.s64 = ctx.r3.s64 + 816;
	// stw r11,824(r3)
	PPC_STORE_U32(ctx.r3.u32 + 824, ctx.r11.u32);
	// stb r11,892(r3)
	PPC_STORE_U8(ctx.r3.u32 + 892, ctx.r11.u8);
	// stw r9,-25660(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25660, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A51C"))) PPC_WEAK_FUNC(sub_8255A51C);
PPC_FUNC_IMPL(__imp__sub_8255A51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A520"))) PPC_WEAK_FUNC(sub_8255A520);
PPC_FUNC_IMPL(__imp__sub_8255A520) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A524"))) PPC_WEAK_FUNC(sub_8255A524);
PPC_FUNC_IMPL(__imp__sub_8255A524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A528"))) PPC_WEAK_FUNC(sub_8255A528);
PPC_FUNC_IMPL(__imp__sub_8255A528) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-816
	ctx.r3.s64 = ctx.r3.s64 + -816;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A530"))) PPC_WEAK_FUNC(sub_8255A530);
PPC_FUNC_IMPL(__imp__sub_8255A530) {
	PPC_FUNC_PROLOGUE();
	// b 0x825640c0
	sub_825640C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255A534"))) PPC_WEAK_FUNC(sub_8255A534);
PPC_FUNC_IMPL(__imp__sub_8255A534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A538"))) PPC_WEAK_FUNC(sub_8255A538);
PPC_FUNC_IMPL(__imp__sub_8255A538) {
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
	// bl 0x8255a410
	ctx.lr = 0x8255A558;
	sub_8255A410(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255a58c
	if (ctx.cr6.eq) goto loc_8255A58C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8255a584
	if (ctx.cr6.lt) goto loc_8255A584;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8255a58c
	if (!ctx.cr6.gt) goto loc_8255A58C;
loc_8255A584:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x8255A58C;
	sub_82294A58(ctx, base);
loc_8255A58C:
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

__attribute__((alias("__imp__sub_8255A5A8"))) PPC_WEAK_FUNC(sub_8255A5A8);
PPC_FUNC_IMPL(__imp__sub_8255A5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// addi r4,r7,21104
	ctx.r4.s64 = ctx.r7.s64 + 21104;
	// lis r5,-32239
	ctx.r5.s64 = -2112815104;
	// addi r9,r6,21680
	ctx.r9.s64 = ctx.r6.s64 + 21680;
	// lwz r10,-25660(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25660);
	// stw r4,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r4.u32);
	// addi r7,r5,22296
	ctx.r7.s64 = ctx.r5.s64 + 22296;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r7,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r7.u32);
	// stw r11,820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 820, ctx.r11.u32);
	// addi r10,r3,816
	ctx.r10.s64 = ctx.r3.s64 + 816;
	// stw r11,824(r3)
	PPC_STORE_U32(ctx.r3.u32 + 824, ctx.r11.u32);
	// stb r11,892(r3)
	PPC_STORE_U8(ctx.r3.u32 + 892, ctx.r11.u8);
	// stw r9,-25660(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25660, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A5F4"))) PPC_WEAK_FUNC(sub_8255A5F4);
PPC_FUNC_IMPL(__imp__sub_8255A5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A5F8"))) PPC_WEAK_FUNC(sub_8255A5F8);
PPC_FUNC_IMPL(__imp__sub_8255A5F8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A600"))) PPC_WEAK_FUNC(sub_8255A600);
PPC_FUNC_IMPL(__imp__sub_8255A600) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r9,r11,-31376
	ctx.r9.s64 = ctx.r11.s64 + -31376;
	// addi r8,r10,-30760
	ctx.r8.s64 = ctx.r10.s64 + -30760;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x8255A630;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255a410
	ctx.lr = 0x8255A638;
	sub_8255A410(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A64C"))) PPC_WEAK_FUNC(sub_8255A64C);
PPC_FUNC_IMPL(__imp__sub_8255A64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A650"))) PPC_WEAK_FUNC(sub_8255A650);
PPC_FUNC_IMPL(__imp__sub_8255A650) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r6,-32238
	ctx.r6.s64 = -2112749568;
	// addi r7,r8,21104
	ctx.r7.s64 = ctx.r8.s64 + 21104;
	// lis r5,-32238
	ctx.r5.s64 = -2112749568;
	// lwz r10,-25660(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25660);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r7.u32);
	// addi r4,r6,-31376
	ctx.r4.s64 = ctx.r6.s64 + -31376;
	// addi r8,r5,-30760
	ctx.r8.s64 = ctx.r5.s64 + -30760;
	// stw r11,820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 820, ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,824(r3)
	PPC_STORE_U32(ctx.r3.u32 + 824, ctx.r11.u32);
	// stb r11,892(r3)
	PPC_STORE_U8(ctx.r3.u32 + 892, ctx.r11.u8);
	// addi r11,r3,816
	ctx.r11.s64 = ctx.r3.s64 + 816;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r8,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r8.u32);
	// stw r10,-25660(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25660, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A6A4"))) PPC_WEAK_FUNC(sub_8255A6A4);
PPC_FUNC_IMPL(__imp__sub_8255A6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A6A8"))) PPC_WEAK_FUNC(sub_8255A6A8);
PPC_FUNC_IMPL(__imp__sub_8255A6A8) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r9,r11,-31376
	ctx.r9.s64 = ctx.r11.s64 + -31376;
	// addi r8,r10,-30760
	ctx.r8.s64 = ctx.r10.s64 + -30760;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r8,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x8255A6E0;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255a410
	ctx.lr = 0x8255A6E8;
	sub_8255A410(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8255a71c
	if (ctx.cr6.eq) goto loc_8255A71C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8255a714
	if (ctx.cr6.lt) goto loc_8255A714;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8255a71c
	if (!ctx.cr6.gt) goto loc_8255A71C;
loc_8255A714:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x8255A71C;
	sub_82294A58(ctx, base);
loc_8255A71C:
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

__attribute__((alias("__imp__sub_8255A738"))) PPC_WEAK_FUNC(sub_8255A738);
PPC_FUNC_IMPL(__imp__sub_8255A738) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// addi r6,r8,21104
	ctx.r6.s64 = ctx.r8.s64 + 21104;
	// lis r5,-32238
	ctx.r5.s64 = -2112749568;
	// lwz r10,-25660(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25660);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r6.u32);
	// addi r4,r7,-31376
	ctx.r4.s64 = ctx.r7.s64 + -31376;
	// addi r8,r5,-30760
	ctx.r8.s64 = ctx.r5.s64 + -30760;
	// stw r11,820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 820, ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,824(r3)
	PPC_STORE_U32(ctx.r3.u32 + 824, ctx.r11.u32);
	// stb r11,892(r3)
	PPC_STORE_U8(ctx.r3.u32 + 892, ctx.r11.u8);
	// addi r11,r3,816
	ctx.r11.s64 = ctx.r3.s64 + 816;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r8,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r8.u32);
	// stw r10,-25660(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25660, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A784"))) PPC_WEAK_FUNC(sub_8255A784);
PPC_FUNC_IMPL(__imp__sub_8255A784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A788"))) PPC_WEAK_FUNC(sub_8255A788);
PPC_FUNC_IMPL(__imp__sub_8255A788) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A790"))) PPC_WEAK_FUNC(sub_8255A790);
PPC_FUNC_IMPL(__imp__sub_8255A790) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,22952
	ctx.r9.s64 = ctx.r11.s64 + 22952;
	// addi r8,r10,23548
	ctx.r8.s64 = ctx.r10.s64 + 23548;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r30,r31,816
	ctx.r30.s64 = ctx.r31.s64 + 816;
	// stw r8,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x8255A7C8;
	sub_8229C068(ctx, base);
	// addi r3,r31,820
	ctx.r3.s64 = ctx.r31.s64 + 820;
	// bl 0x82558b90
	ctx.lr = 0x8255A7D0;
	sub_82558B90(ctx, base);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// addi r5,r7,21076
	ctx.r5.s64 = ctx.r7.s64 + 21076;
	// addi r4,r6,19264
	ctx.r4.s64 = ctx.r6.s64 + 19264;
	// stw r5,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// bl 0x8229c068
	ctx.lr = 0x8255A7F0;
	sub_8229C068(ctx, base);
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// bl 0x82586bc8
	ctx.lr = 0x8255A7F8;
	sub_82586BC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557578
	ctx.lr = 0x8255A800;
	sub_82557578(ctx, base);
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

__attribute__((alias("__imp__sub_8255A818"))) PPC_WEAK_FUNC(sub_8255A818);
PPC_FUNC_IMPL(__imp__sub_8255A818) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// addi r4,r7,21104
	ctx.r4.s64 = ctx.r7.s64 + 21104;
	// lis r5,-32239
	ctx.r5.s64 = -2112815104;
	// addi r9,r6,22952
	ctx.r9.s64 = ctx.r6.s64 + 22952;
	// lwz r10,-25660(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25660);
	// stw r4,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r4.u32);
	// addi r7,r5,23548
	ctx.r7.s64 = ctx.r5.s64 + 23548;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r7,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r7.u32);
	// stw r11,820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 820, ctx.r11.u32);
	// addi r10,r3,816
	ctx.r10.s64 = ctx.r3.s64 + 816;
	// stw r11,824(r3)
	PPC_STORE_U32(ctx.r3.u32 + 824, ctx.r11.u32);
	// stb r11,888(r3)
	PPC_STORE_U8(ctx.r3.u32 + 888, ctx.r11.u8);
	// stw r9,-25660(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25660, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A86C"))) PPC_WEAK_FUNC(sub_8255A86C);
PPC_FUNC_IMPL(__imp__sub_8255A86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A870"))) PPC_WEAK_FUNC(sub_8255A870);
PPC_FUNC_IMPL(__imp__sub_8255A870) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A874"))) PPC_WEAK_FUNC(sub_8255A874);
PPC_FUNC_IMPL(__imp__sub_8255A874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A878"))) PPC_WEAK_FUNC(sub_8255A878);
PPC_FUNC_IMPL(__imp__sub_8255A878) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-816
	ctx.r3.s64 = ctx.r3.s64 + -816;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A880"))) PPC_WEAK_FUNC(sub_8255A880);
PPC_FUNC_IMPL(__imp__sub_8255A880) {
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
	// bl 0x8255a790
	ctx.lr = 0x8255A8A0;
	sub_8255A790(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255a8d4
	if (ctx.cr6.eq) goto loc_8255A8D4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8255a8cc
	if (ctx.cr6.lt) goto loc_8255A8CC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8255a8d4
	if (!ctx.cr6.gt) goto loc_8255A8D4;
loc_8255A8CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x8255A8D4;
	sub_82294A58(ctx, base);
loc_8255A8D4:
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

__attribute__((alias("__imp__sub_8255A8F0"))) PPC_WEAK_FUNC(sub_8255A8F0);
PPC_FUNC_IMPL(__imp__sub_8255A8F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// addi r4,r7,21104
	ctx.r4.s64 = ctx.r7.s64 + 21104;
	// lis r5,-32239
	ctx.r5.s64 = -2112815104;
	// addi r9,r6,22952
	ctx.r9.s64 = ctx.r6.s64 + 22952;
	// lwz r10,-25660(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25660);
	// stw r4,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r4.u32);
	// addi r7,r5,23548
	ctx.r7.s64 = ctx.r5.s64 + 23548;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r7,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r7.u32);
	// stw r11,820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 820, ctx.r11.u32);
	// addi r10,r3,816
	ctx.r10.s64 = ctx.r3.s64 + 816;
	// stw r11,824(r3)
	PPC_STORE_U32(ctx.r3.u32 + 824, ctx.r11.u32);
	// stb r11,888(r3)
	PPC_STORE_U8(ctx.r3.u32 + 888, ctx.r11.u8);
	// stw r9,-25660(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25660, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A93C"))) PPC_WEAK_FUNC(sub_8255A93C);
PPC_FUNC_IMPL(__imp__sub_8255A93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A940"))) PPC_WEAK_FUNC(sub_8255A940);
PPC_FUNC_IMPL(__imp__sub_8255A940) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A948"))) PPC_WEAK_FUNC(sub_8255A948);
PPC_FUNC_IMPL(__imp__sub_8255A948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8255A950;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r8,r11,19856
	ctx.r8.s64 = ctx.r11.s64 + 19856;
	// addi r7,r10,20448
	ctx.r7.s64 = ctx.r10.s64 + 20448;
	// addi r6,r9,20476
	ctx.r6.s64 = ctx.r9.s64 + 20476;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r7.u32);
	// addi r30,r31,816
	ctx.r30.s64 = ctx.r31.s64 + 816;
	// stw r6,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r6.u32);
	// addi r29,r31,820
	ctx.r29.s64 = ctx.r31.s64 + 820;
	// bl 0x8229c068
	ctx.lr = 0x8255A988;
	sub_8229C068(ctx, base);
	// addi r3,r31,824
	ctx.r3.s64 = ctx.r31.s64 + 824;
	// bl 0x82558b90
	ctx.lr = 0x8255A990;
	sub_82558B90(ctx, base);
	// lis r5,-32239
	ctx.r5.s64 = -2112815104;
	// lis r4,-32239
	ctx.r4.s64 = -2112815104;
	// lis r3,-32239
	ctx.r3.s64 = -2112815104;
	// addi r11,r5,21400
	ctx.r11.s64 = ctx.r5.s64 + 21400;
	// addi r10,r4,21076
	ctx.r10.s64 = ctx.r4.s64 + 21076;
	// addi r9,r3,19264
	ctx.r9.s64 = ctx.r3.s64 + 19264;
	// stw r11,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r11.u32);
	// stw r10,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x8229c068
	ctx.lr = 0x8255A9BC;
	sub_8229C068(ctx, base);
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// bl 0x82586bc8
	ctx.lr = 0x8255A9C4;
	sub_82586BC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557578
	ctx.lr = 0x8255A9CC;
	sub_82557578(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255A9D4"))) PPC_WEAK_FUNC(sub_8255A9D4);
PPC_FUNC_IMPL(__imp__sub_8255A9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A9D8"))) PPC_WEAK_FUNC(sub_8255A9D8);
PPC_FUNC_IMPL(__imp__sub_8255A9D8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// addi r10,r8,21076
	ctx.r10.s64 = ctx.r8.s64 + 21076;
	// lis r5,-32239
	ctx.r5.s64 = -2112815104;
	// lwz r11,-25660(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25660);
	// addi r8,r7,21400
	ctx.r8.s64 = ctx.r7.s64 + 21400;
	// stw r10,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r10.u32);
	// lis r4,-32239
	ctx.r4.s64 = -2112815104;
	// addi r7,r6,19856
	ctx.r7.s64 = ctx.r6.s64 + 19856;
	// stw r8,820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 820, ctx.r8.u32);
	// addi r6,r5,20448
	ctx.r6.s64 = ctx.r5.s64 + 20448;
	// addi r5,r4,20476
	ctx.r5.s64 = ctx.r4.s64 + 20476;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r6.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r5,820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 820, ctx.r5.u32);
	// stw r10,824(r3)
	PPC_STORE_U32(ctx.r3.u32 + 824, ctx.r10.u32);
	// stw r10,828(r3)
	PPC_STORE_U32(ctx.r3.u32 + 828, ctx.r10.u32);
	// stw r11,-25660(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255AA3C"))) PPC_WEAK_FUNC(sub_8255AA3C);
PPC_FUNC_IMPL(__imp__sub_8255AA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255AA40"))) PPC_WEAK_FUNC(sub_8255AA40);
PPC_FUNC_IMPL(__imp__sub_8255AA40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-816
	ctx.r3.s64 = ctx.r3.s64 + -816;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255AA48"))) PPC_WEAK_FUNC(sub_8255AA48);
PPC_FUNC_IMPL(__imp__sub_8255AA48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-820
	ctx.r3.s64 = ctx.r3.s64 + -820;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255AA50"))) PPC_WEAK_FUNC(sub_8255AA50);
PPC_FUNC_IMPL(__imp__sub_8255AA50) {
	PPC_FUNC_PROLOGUE();
	// b 0x825640c0
	sub_825640C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255AA54"))) PPC_WEAK_FUNC(sub_8255AA54);
PPC_FUNC_IMPL(__imp__sub_8255AA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255AA58"))) PPC_WEAK_FUNC(sub_8255AA58);
PPC_FUNC_IMPL(__imp__sub_8255AA58) {
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
	// bl 0x8255a948
	ctx.lr = 0x8255AA78;
	sub_8255A948(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255aaac
	if (ctx.cr6.eq) goto loc_8255AAAC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8255aaa4
	if (ctx.cr6.lt) goto loc_8255AAA4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8255aaac
	if (!ctx.cr6.gt) goto loc_8255AAAC;
loc_8255AAA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x8255AAAC;
	sub_82294A58(ctx, base);
loc_8255AAAC:
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

__attribute__((alias("__imp__sub_8255AAC8"))) PPC_WEAK_FUNC(sub_8255AAC8);
PPC_FUNC_IMPL(__imp__sub_8255AAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// addi r10,r8,21076
	ctx.r10.s64 = ctx.r8.s64 + 21076;
	// lis r5,-32239
	ctx.r5.s64 = -2112815104;
	// lwz r11,-25660(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25660);
	// addi r8,r7,21400
	ctx.r8.s64 = ctx.r7.s64 + 21400;
	// stw r10,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r10.u32);
	// lis r4,-32239
	ctx.r4.s64 = -2112815104;
	// addi r7,r6,19856
	ctx.r7.s64 = ctx.r6.s64 + 19856;
	// stw r8,820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 820, ctx.r8.u32);
	// addi r6,r5,20448
	ctx.r6.s64 = ctx.r5.s64 + 20448;
	// addi r5,r4,20476
	ctx.r5.s64 = ctx.r4.s64 + 20476;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r6.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r5,820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 820, ctx.r5.u32);
	// stw r10,824(r3)
	PPC_STORE_U32(ctx.r3.u32 + 824, ctx.r10.u32);
	// stw r10,828(r3)
	PPC_STORE_U32(ctx.r3.u32 + 828, ctx.r10.u32);
	// stw r11,-25660(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255AB24"))) PPC_WEAK_FUNC(sub_8255AB24);
PPC_FUNC_IMPL(__imp__sub_8255AB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255AB28"))) PPC_WEAK_FUNC(sub_8255AB28);
PPC_FUNC_IMPL(__imp__sub_8255AB28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1236(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8255AB54"))) PPC_WEAK_FUNC(sub_8255AB54);
PPC_FUNC_IMPL(__imp__sub_8255AB54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255AB58"))) PPC_WEAK_FUNC(sub_8255AB58);
PPC_FUNC_IMPL(__imp__sub_8255AB58) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255AB60"))) PPC_WEAK_FUNC(sub_8255AB60);
PPC_FUNC_IMPL(__imp__sub_8255AB60) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r10,r11,-30728
	ctx.r10.s64 = ctx.r11.s64 + -30728;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x8255AB84;
	sub_8229C068(ctx, base);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,19264
	ctx.r8.s64 = ctx.r9.s64 + 19264;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x8255AB98;
	sub_8229C068(ctx, base);
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// bl 0x82586bc8
	ctx.lr = 0x8255ABA0;
	sub_82586BC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557578
	ctx.lr = 0x8255ABA8;
	sub_82557578(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255ABBC"))) PPC_WEAK_FUNC(sub_8255ABBC);
PPC_FUNC_IMPL(__imp__sub_8255ABBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255ABC0"))) PPC_WEAK_FUNC(sub_8255ABC0);
PPC_FUNC_IMPL(__imp__sub_8255ABC0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r8,r9,-30728
	ctx.r8.s64 = ctx.r9.s64 + -30728;
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

__attribute__((alias("__imp__sub_8255ABE8"))) PPC_WEAK_FUNC(sub_8255ABE8);
PPC_FUNC_IMPL(__imp__sub_8255ABE8) {
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
	// bl 0x8255ab60
	ctx.lr = 0x8255AC08;
	sub_8255AB60(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255ac3c
	if (ctx.cr6.eq) goto loc_8255AC3C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8255ac34
	if (ctx.cr6.lt) goto loc_8255AC34;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8255ac3c
	if (!ctx.cr6.gt) goto loc_8255AC3C;
loc_8255AC34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x8255AC3C;
	sub_82294A58(ctx, base);
loc_8255AC3C:
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

__attribute__((alias("__imp__sub_8255AC58"))) PPC_WEAK_FUNC(sub_8255AC58);
PPC_FUNC_IMPL(__imp__sub_8255AC58) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r8,r9,-30728
	ctx.r8.s64 = ctx.r9.s64 + -30728;
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

__attribute__((alias("__imp__sub_8255AC78"))) PPC_WEAK_FUNC(sub_8255AC78);
PPC_FUNC_IMPL(__imp__sub_8255AC78) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255AC80"))) PPC_WEAK_FUNC(sub_8255AC80);
PPC_FUNC_IMPL(__imp__sub_8255AC80) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r9,r11,-30136
	ctx.r9.s64 = ctx.r11.s64 + -30136;
	// addi r8,r10,-29544
	ctx.r8.s64 = ctx.r10.s64 + -29544;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r30,r31,816
	ctx.r30.s64 = ctx.r31.s64 + 816;
	// stw r8,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x8255ACB8;
	sub_8229C068(ctx, base);
	// addi r3,r31,972
	ctx.r3.s64 = ctx.r31.s64 + 972;
	// bl 0x82558b90
	ctx.lr = 0x8255ACC0;
	sub_82558B90(ctx, base);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// addi r5,r7,21076
	ctx.r5.s64 = ctx.r7.s64 + 21076;
	// addi r4,r6,19264
	ctx.r4.s64 = ctx.r6.s64 + 19264;
	// stw r5,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// bl 0x8229c068
	ctx.lr = 0x8255ACE0;
	sub_8229C068(ctx, base);
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// bl 0x82586bc8
	ctx.lr = 0x8255ACE8;
	sub_82586BC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557578
	ctx.lr = 0x8255ACF0;
	sub_82557578(ctx, base);
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

__attribute__((alias("__imp__sub_8255AD08"))) PPC_WEAK_FUNC(sub_8255AD08);
PPC_FUNC_IMPL(__imp__sub_8255AD08) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-32238
	ctx.r6.s64 = -2112749568;
	// lis r5,-32238
	ctx.r5.s64 = -2112749568;
	// addi r4,r7,21104
	ctx.r4.s64 = ctx.r7.s64 + 21104;
	// addi r9,r6,-30136
	ctx.r9.s64 = ctx.r6.s64 + -30136;
	// lwz r10,-25660(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25660);
	// addi r7,r5,-29544
	ctx.r7.s64 = ctx.r5.s64 + -29544;
	// stw r4,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r7,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r7.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stb r11,860(r3)
	PPC_STORE_U8(ctx.r3.u32 + 860, ctx.r11.u8);
	// addi r10,r3,816
	ctx.r10.s64 = ctx.r3.s64 + 816;
	// stb r11,880(r3)
	PPC_STORE_U8(ctx.r3.u32 + 880, ctx.r11.u8);
	// stb r11,900(r3)
	PPC_STORE_U8(ctx.r3.u32 + 900, ctx.r11.u8);
	// stw r11,972(r3)
	PPC_STORE_U32(ctx.r3.u32 + 972, ctx.r11.u32);
	// stw r11,976(r3)
	PPC_STORE_U32(ctx.r3.u32 + 976, ctx.r11.u32);
	// stw r9,-25660(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25660, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255AD64"))) PPC_WEAK_FUNC(sub_8255AD64);
PPC_FUNC_IMPL(__imp__sub_8255AD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255AD68"))) PPC_WEAK_FUNC(sub_8255AD68);
PPC_FUNC_IMPL(__imp__sub_8255AD68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255AD6C"))) PPC_WEAK_FUNC(sub_8255AD6C);
PPC_FUNC_IMPL(__imp__sub_8255AD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255AD70"))) PPC_WEAK_FUNC(sub_8255AD70);
PPC_FUNC_IMPL(__imp__sub_8255AD70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-816
	ctx.r3.s64 = ctx.r3.s64 + -816;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255AD78"))) PPC_WEAK_FUNC(sub_8255AD78);
PPC_FUNC_IMPL(__imp__sub_8255AD78) {
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
	// bl 0x8255ac80
	ctx.lr = 0x8255AD98;
	sub_8255AC80(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255adcc
	if (ctx.cr6.eq) goto loc_8255ADCC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8255adc4
	if (ctx.cr6.lt) goto loc_8255ADC4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8255adcc
	if (!ctx.cr6.gt) goto loc_8255ADCC;
loc_8255ADC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x8255ADCC;
	sub_82294A58(ctx, base);
loc_8255ADCC:
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

__attribute__((alias("__imp__sub_8255ADE8"))) PPC_WEAK_FUNC(sub_8255ADE8);
PPC_FUNC_IMPL(__imp__sub_8255ADE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-32238
	ctx.r6.s64 = -2112749568;
	// lis r5,-32238
	ctx.r5.s64 = -2112749568;
	// addi r4,r7,21104
	ctx.r4.s64 = ctx.r7.s64 + 21104;
	// addi r9,r6,-30136
	ctx.r9.s64 = ctx.r6.s64 + -30136;
	// lwz r10,-25660(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25660);
	// addi r7,r5,-29544
	ctx.r7.s64 = ctx.r5.s64 + -29544;
	// stw r4,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r7,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r7.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stb r11,860(r3)
	PPC_STORE_U8(ctx.r3.u32 + 860, ctx.r11.u8);
	// addi r10,r3,816
	ctx.r10.s64 = ctx.r3.s64 + 816;
	// stb r11,880(r3)
	PPC_STORE_U8(ctx.r3.u32 + 880, ctx.r11.u8);
	// stb r11,900(r3)
	PPC_STORE_U8(ctx.r3.u32 + 900, ctx.r11.u8);
	// stw r11,972(r3)
	PPC_STORE_U32(ctx.r3.u32 + 972, ctx.r11.u32);
	// stw r11,976(r3)
	PPC_STORE_U32(ctx.r3.u32 + 976, ctx.r11.u32);
	// stw r9,-25660(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25660, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255AE3C"))) PPC_WEAK_FUNC(sub_8255AE3C);
PPC_FUNC_IMPL(__imp__sub_8255AE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255AE40"))) PPC_WEAK_FUNC(sub_8255AE40);
PPC_FUNC_IMPL(__imp__sub_8255AE40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

