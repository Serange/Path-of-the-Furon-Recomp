#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82D7EAFC"))) PPC_WEAK_FUNC(sub_82D7EAFC);
PPC_FUNC_IMPL(__imp__sub_82D7EAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EB00"))) PPC_WEAK_FUNC(sub_82D7EB00);
PPC_FUNC_IMPL(__imp__sub_82D7EB00) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7eb10
	if (!ctx.cr6.eq) goto loc_82D7EB10;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7EB10:
	// b 0x82d83750
	sub_82D83750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EB14"))) PPC_WEAK_FUNC(sub_82D7EB14);
PPC_FUNC_IMPL(__imp__sub_82D7EB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EB18"))) PPC_WEAK_FUNC(sub_82D7EB18);
PPC_FUNC_IMPL(__imp__sub_82D7EB18) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7eb28
	if (!ctx.cr6.eq) goto loc_82D7EB28;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7EB28:
	// b 0x82d837a8
	sub_82D837A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EB2C"))) PPC_WEAK_FUNC(sub_82D7EB2C);
PPC_FUNC_IMPL(__imp__sub_82D7EB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EB30"))) PPC_WEAK_FUNC(sub_82D7EB30);
PPC_FUNC_IMPL(__imp__sub_82D7EB30) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7eb40
	if (!ctx.cr6.eq) goto loc_82D7EB40;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7EB40:
	// b 0x82d83810
	sub_82D83810(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EB44"))) PPC_WEAK_FUNC(sub_82D7EB44);
PPC_FUNC_IMPL(__imp__sub_82D7EB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EB48"))) PPC_WEAK_FUNC(sub_82D7EB48);
PPC_FUNC_IMPL(__imp__sub_82D7EB48) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7eb58
	if (!ctx.cr6.eq) goto loc_82D7EB58;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7EB58:
	// b 0x82d83858
	sub_82D83858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EB5C"))) PPC_WEAK_FUNC(sub_82D7EB5C);
PPC_FUNC_IMPL(__imp__sub_82D7EB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EB60"))) PPC_WEAK_FUNC(sub_82D7EB60);
PPC_FUNC_IMPL(__imp__sub_82D7EB60) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7eb70
	if (!ctx.cr6.eq) goto loc_82D7EB70;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7EB70:
	// b 0x82d838a0
	sub_82D838A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EB74"))) PPC_WEAK_FUNC(sub_82D7EB74);
PPC_FUNC_IMPL(__imp__sub_82D7EB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EB78"))) PPC_WEAK_FUNC(sub_82D7EB78);
PPC_FUNC_IMPL(__imp__sub_82D7EB78) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7eb88
	if (!ctx.cr6.eq) goto loc_82D7EB88;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7EB88:
	// b 0x82d838e8
	sub_82D838E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EB8C"))) PPC_WEAK_FUNC(sub_82D7EB8C);
PPC_FUNC_IMPL(__imp__sub_82D7EB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EB90"))) PPC_WEAK_FUNC(sub_82D7EB90);
PPC_FUNC_IMPL(__imp__sub_82D7EB90) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7eba0
	if (!ctx.cr6.eq) goto loc_82D7EBA0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7EBA0:
	// b 0x82d83950
	sub_82D83950(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EBA4"))) PPC_WEAK_FUNC(sub_82D7EBA4);
PPC_FUNC_IMPL(__imp__sub_82D7EBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EBA8"))) PPC_WEAK_FUNC(sub_82D7EBA8);
PPC_FUNC_IMPL(__imp__sub_82D7EBA8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7ebb8
	if (!ctx.cr6.eq) goto loc_82D7EBB8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7EBB8:
	// b 0x82d83998
	sub_82D83998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EBBC"))) PPC_WEAK_FUNC(sub_82D7EBBC);
PPC_FUNC_IMPL(__imp__sub_82D7EBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EBC0"))) PPC_WEAK_FUNC(sub_82D7EBC0);
PPC_FUNC_IMPL(__imp__sub_82D7EBC0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7ebd0
	if (!ctx.cr6.eq) goto loc_82D7EBD0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7EBD0:
	// b 0x82d839f0
	sub_82D839F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EBD4"))) PPC_WEAK_FUNC(sub_82D7EBD4);
PPC_FUNC_IMPL(__imp__sub_82D7EBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EBD8"))) PPC_WEAK_FUNC(sub_82D7EBD8);
PPC_FUNC_IMPL(__imp__sub_82D7EBD8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7ebe8
	if (!ctx.cr6.eq) goto loc_82D7EBE8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7EBE8:
	// b 0x82d83a78
	sub_82D83A78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EBEC"))) PPC_WEAK_FUNC(sub_82D7EBEC);
PPC_FUNC_IMPL(__imp__sub_82D7EBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EBF0"))) PPC_WEAK_FUNC(sub_82D7EBF0);
PPC_FUNC_IMPL(__imp__sub_82D7EBF0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7ec00
	if (!ctx.cr6.eq) goto loc_82D7EC00;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7EC00:
	// b 0x82d83ad0
	sub_82D83AD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EC04"))) PPC_WEAK_FUNC(sub_82D7EC04);
PPC_FUNC_IMPL(__imp__sub_82D7EC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EC08"))) PPC_WEAK_FUNC(sub_82D7EC08);
PPC_FUNC_IMPL(__imp__sub_82D7EC08) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7ec18
	if (!ctx.cr6.eq) goto loc_82D7EC18;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7EC18:
	// b 0x82d83b48
	sub_82D83B48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EC1C"))) PPC_WEAK_FUNC(sub_82D7EC1C);
PPC_FUNC_IMPL(__imp__sub_82D7EC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EC20"))) PPC_WEAK_FUNC(sub_82D7EC20);
PPC_FUNC_IMPL(__imp__sub_82D7EC20) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7ec30
	if (!ctx.cr6.eq) goto loc_82D7EC30;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7EC30:
	// b 0x82d83bb0
	sub_82D83BB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EC34"))) PPC_WEAK_FUNC(sub_82D7EC34);
PPC_FUNC_IMPL(__imp__sub_82D7EC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EC38"))) PPC_WEAK_FUNC(sub_82D7EC38);
PPC_FUNC_IMPL(__imp__sub_82D7EC38) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7ec48
	if (!ctx.cr6.eq) goto loc_82D7EC48;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7EC48:
	// b 0x82d83c28
	sub_82D83C28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EC4C"))) PPC_WEAK_FUNC(sub_82D7EC4C);
PPC_FUNC_IMPL(__imp__sub_82D7EC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EC50"))) PPC_WEAK_FUNC(sub_82D7EC50);
PPC_FUNC_IMPL(__imp__sub_82D7EC50) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7ec60
	if (!ctx.cr6.eq) goto loc_82D7EC60;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7EC60:
	// b 0x82d83c70
	sub_82D83C70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EC64"))) PPC_WEAK_FUNC(sub_82D7EC64);
PPC_FUNC_IMPL(__imp__sub_82D7EC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EC68"))) PPC_WEAK_FUNC(sub_82D7EC68);
PPC_FUNC_IMPL(__imp__sub_82D7EC68) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7ec78
	if (!ctx.cr6.eq) goto loc_82D7EC78;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7EC78:
	// b 0x82d83ce8
	sub_82D83CE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EC7C"))) PPC_WEAK_FUNC(sub_82D7EC7C);
PPC_FUNC_IMPL(__imp__sub_82D7EC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EC80"))) PPC_WEAK_FUNC(sub_82D7EC80);
PPC_FUNC_IMPL(__imp__sub_82D7EC80) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7ec90
	if (!ctx.cr6.eq) goto loc_82D7EC90;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7EC90:
	// b 0x82d83d40
	sub_82D83D40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EC94"))) PPC_WEAK_FUNC(sub_82D7EC94);
PPC_FUNC_IMPL(__imp__sub_82D7EC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EC98"))) PPC_WEAK_FUNC(sub_82D7EC98);
PPC_FUNC_IMPL(__imp__sub_82D7EC98) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7eca8
	if (!ctx.cr6.eq) goto loc_82D7ECA8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7ECA8:
	// b 0x82d83db8
	sub_82D83DB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7ECAC"))) PPC_WEAK_FUNC(sub_82D7ECAC);
PPC_FUNC_IMPL(__imp__sub_82D7ECAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7ECB0"))) PPC_WEAK_FUNC(sub_82D7ECB0);
PPC_FUNC_IMPL(__imp__sub_82D7ECB0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7ecc0
	if (!ctx.cr6.eq) goto loc_82D7ECC0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7ECC0:
	// b 0x82d83e10
	sub_82D83E10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7ECC4"))) PPC_WEAK_FUNC(sub_82D7ECC4);
PPC_FUNC_IMPL(__imp__sub_82D7ECC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7ECC8"))) PPC_WEAK_FUNC(sub_82D7ECC8);
PPC_FUNC_IMPL(__imp__sub_82D7ECC8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7ecd8
	if (!ctx.cr6.eq) goto loc_82D7ECD8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7ECD8:
	// b 0x82d83e88
	sub_82D83E88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7ECDC"))) PPC_WEAK_FUNC(sub_82D7ECDC);
PPC_FUNC_IMPL(__imp__sub_82D7ECDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7ECE0"))) PPC_WEAK_FUNC(sub_82D7ECE0);
PPC_FUNC_IMPL(__imp__sub_82D7ECE0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7ecf0
	if (!ctx.cr6.eq) goto loc_82D7ECF0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7ECF0:
	// b 0x82d83ed0
	sub_82D83ED0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7ECF4"))) PPC_WEAK_FUNC(sub_82D7ECF4);
PPC_FUNC_IMPL(__imp__sub_82D7ECF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7ECF8"))) PPC_WEAK_FUNC(sub_82D7ECF8);
PPC_FUNC_IMPL(__imp__sub_82D7ECF8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7ed08
	if (!ctx.cr6.eq) goto loc_82D7ED08;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7ED08:
	// b 0x82d83f40
	sub_82D83F40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7ED0C"))) PPC_WEAK_FUNC(sub_82D7ED0C);
PPC_FUNC_IMPL(__imp__sub_82D7ED0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7ED10"))) PPC_WEAK_FUNC(sub_82D7ED10);
PPC_FUNC_IMPL(__imp__sub_82D7ED10) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7ed20
	if (!ctx.cr6.eq) goto loc_82D7ED20;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7ED20:
	// b 0x82d83f88
	sub_82D83F88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7ED24"))) PPC_WEAK_FUNC(sub_82D7ED24);
PPC_FUNC_IMPL(__imp__sub_82D7ED24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7ED28"))) PPC_WEAK_FUNC(sub_82D7ED28);
PPC_FUNC_IMPL(__imp__sub_82D7ED28) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7ed38
	if (!ctx.cr6.eq) goto loc_82D7ED38;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7ED38:
	// b 0x82d83ff8
	sub_82D83FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7ED3C"))) PPC_WEAK_FUNC(sub_82D7ED3C);
PPC_FUNC_IMPL(__imp__sub_82D7ED3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7ED40"))) PPC_WEAK_FUNC(sub_82D7ED40);
PPC_FUNC_IMPL(__imp__sub_82D7ED40) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7ed50
	if (!ctx.cr6.eq) goto loc_82D7ED50;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7ED50:
	// b 0x82d84040
	sub_82D84040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7ED54"))) PPC_WEAK_FUNC(sub_82D7ED54);
PPC_FUNC_IMPL(__imp__sub_82D7ED54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7ED58"))) PPC_WEAK_FUNC(sub_82D7ED58);
PPC_FUNC_IMPL(__imp__sub_82D7ED58) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7ed68
	if (!ctx.cr6.eq) goto loc_82D7ED68;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7ED68:
	// b 0x82d840b0
	sub_82D840B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7ED6C"))) PPC_WEAK_FUNC(sub_82D7ED6C);
PPC_FUNC_IMPL(__imp__sub_82D7ED6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7ED70"))) PPC_WEAK_FUNC(sub_82D7ED70);
PPC_FUNC_IMPL(__imp__sub_82D7ED70) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7ed80
	if (!ctx.cr6.eq) goto loc_82D7ED80;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7ED80:
	// b 0x82d84118
	sub_82D84118(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7ED84"))) PPC_WEAK_FUNC(sub_82D7ED84);
PPC_FUNC_IMPL(__imp__sub_82D7ED84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7ED88"))) PPC_WEAK_FUNC(sub_82D7ED88);
PPC_FUNC_IMPL(__imp__sub_82D7ED88) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7edbc
	if (!ctx.cr6.eq) goto loc_82D7EDBC;
	// li r3,37
	ctx.r3.s64 = 37;
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
loc_82D7EDBC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d84170
	ctx.lr = 0x82D7EDC4;
	sub_82D84170(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d7ede0
	if (ctx.cr6.eq) goto loc_82D7EDE0;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82D7EDE0:
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

__attribute__((alias("__imp__sub_82D7EDF4"))) PPC_WEAK_FUNC(sub_82D7EDF4);
PPC_FUNC_IMPL(__imp__sub_82D7EDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EDF8"))) PPC_WEAK_FUNC(sub_82D7EDF8);
PPC_FUNC_IMPL(__imp__sub_82D7EDF8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7ee2c
	if (!ctx.cr6.eq) goto loc_82D7EE2C;
	// li r3,37
	ctx.r3.s64 = 37;
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
loc_82D7EE2C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d841d8
	ctx.lr = 0x82D7EE34;
	sub_82D841D8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d7ee50
	if (ctx.cr6.eq) goto loc_82D7EE50;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82D7EE50:
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

__attribute__((alias("__imp__sub_82D7EE64"))) PPC_WEAK_FUNC(sub_82D7EE64);
PPC_FUNC_IMPL(__imp__sub_82D7EE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EE68"))) PPC_WEAK_FUNC(sub_82D7EE68);
PPC_FUNC_IMPL(__imp__sub_82D7EE68) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7ee78
	if (!ctx.cr6.eq) goto loc_82D7EE78;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7EE78:
	// b 0x82d84240
	sub_82D84240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EE7C"))) PPC_WEAK_FUNC(sub_82D7EE7C);
PPC_FUNC_IMPL(__imp__sub_82D7EE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EE80"))) PPC_WEAK_FUNC(sub_82D7EE80);
PPC_FUNC_IMPL(__imp__sub_82D7EE80) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7ee90
	if (!ctx.cr6.eq) goto loc_82D7EE90;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7EE90:
	// b 0x82d842b0
	sub_82D842B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EE94"))) PPC_WEAK_FUNC(sub_82D7EE94);
PPC_FUNC_IMPL(__imp__sub_82D7EE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EE98"))) PPC_WEAK_FUNC(sub_82D7EE98);
PPC_FUNC_IMPL(__imp__sub_82D7EE98) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7eea8
	if (!ctx.cr6.eq) goto loc_82D7EEA8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7EEA8:
	// b 0x82d84318
	sub_82D84318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EEAC"))) PPC_WEAK_FUNC(sub_82D7EEAC);
PPC_FUNC_IMPL(__imp__sub_82D7EEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EEB0"))) PPC_WEAK_FUNC(sub_82D7EEB0);
PPC_FUNC_IMPL(__imp__sub_82D7EEB0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7eec0
	if (!ctx.cr6.eq) goto loc_82D7EEC0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7EEC0:
	// b 0x82d84380
	sub_82D84380(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EEC4"))) PPC_WEAK_FUNC(sub_82D7EEC4);
PPC_FUNC_IMPL(__imp__sub_82D7EEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EEC8"))) PPC_WEAK_FUNC(sub_82D7EEC8);
PPC_FUNC_IMPL(__imp__sub_82D7EEC8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7eed8
	if (!ctx.cr6.eq) goto loc_82D7EED8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7EED8:
	// b 0x82d843e0
	sub_82D843E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EEDC"))) PPC_WEAK_FUNC(sub_82D7EEDC);
PPC_FUNC_IMPL(__imp__sub_82D7EEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EEE0"))) PPC_WEAK_FUNC(sub_82D7EEE0);
PPC_FUNC_IMPL(__imp__sub_82D7EEE0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7eef0
	if (!ctx.cr6.eq) goto loc_82D7EEF0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7EEF0:
	// b 0x82d84448
	sub_82D84448(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EEF4"))) PPC_WEAK_FUNC(sub_82D7EEF4);
PPC_FUNC_IMPL(__imp__sub_82D7EEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EEF8"))) PPC_WEAK_FUNC(sub_82D7EEF8);
PPC_FUNC_IMPL(__imp__sub_82D7EEF8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7ef08
	if (!ctx.cr6.eq) goto loc_82D7EF08;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7EF08:
	// b 0x82d84490
	sub_82D84490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EF0C"))) PPC_WEAK_FUNC(sub_82D7EF0C);
PPC_FUNC_IMPL(__imp__sub_82D7EF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EF10"))) PPC_WEAK_FUNC(sub_82D7EF10);
PPC_FUNC_IMPL(__imp__sub_82D7EF10) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7ef20
	if (!ctx.cr6.eq) goto loc_82D7EF20;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7EF20:
	// b 0x82d844f8
	sub_82D844F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EF24"))) PPC_WEAK_FUNC(sub_82D7EF24);
PPC_FUNC_IMPL(__imp__sub_82D7EF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EF28"))) PPC_WEAK_FUNC(sub_82D7EF28);
PPC_FUNC_IMPL(__imp__sub_82D7EF28) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7ef38
	if (!ctx.cr6.eq) goto loc_82D7EF38;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7EF38:
	// b 0x82d84540
	sub_82D84540(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EF3C"))) PPC_WEAK_FUNC(sub_82D7EF3C);
PPC_FUNC_IMPL(__imp__sub_82D7EF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EF40"))) PPC_WEAK_FUNC(sub_82D7EF40);
PPC_FUNC_IMPL(__imp__sub_82D7EF40) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7ef50
	if (!ctx.cr6.eq) goto loc_82D7EF50;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7EF50:
	// b 0x82d845a8
	sub_82D845A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EF54"))) PPC_WEAK_FUNC(sub_82D7EF54);
PPC_FUNC_IMPL(__imp__sub_82D7EF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EF58"))) PPC_WEAK_FUNC(sub_82D7EF58);
PPC_FUNC_IMPL(__imp__sub_82D7EF58) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7ef68
	if (!ctx.cr6.eq) goto loc_82D7EF68;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7EF68:
	// b 0x82d845f8
	sub_82D845F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EF6C"))) PPC_WEAK_FUNC(sub_82D7EF6C);
PPC_FUNC_IMPL(__imp__sub_82D7EF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EF70"))) PPC_WEAK_FUNC(sub_82D7EF70);
PPC_FUNC_IMPL(__imp__sub_82D7EF70) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7ef80
	if (!ctx.cr6.eq) goto loc_82D7EF80;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7EF80:
	// b 0x82d84668
	sub_82D84668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EF84"))) PPC_WEAK_FUNC(sub_82D7EF84);
PPC_FUNC_IMPL(__imp__sub_82D7EF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EF88"))) PPC_WEAK_FUNC(sub_82D7EF88);
PPC_FUNC_IMPL(__imp__sub_82D7EF88) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7ef98
	if (!ctx.cr6.eq) goto loc_82D7EF98;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7EF98:
	// b 0x82d846b0
	sub_82D846B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EF9C"))) PPC_WEAK_FUNC(sub_82D7EF9C);
PPC_FUNC_IMPL(__imp__sub_82D7EF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EFA0"))) PPC_WEAK_FUNC(sub_82D7EFA0);
PPC_FUNC_IMPL(__imp__sub_82D7EFA0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7efb0
	if (!ctx.cr6.eq) goto loc_82D7EFB0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7EFB0:
	// b 0x82d82550
	sub_82D82550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EFB4"))) PPC_WEAK_FUNC(sub_82D7EFB4);
PPC_FUNC_IMPL(__imp__sub_82D7EFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EFB8"))) PPC_WEAK_FUNC(sub_82D7EFB8);
PPC_FUNC_IMPL(__imp__sub_82D7EFB8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7efc8
	if (!ctx.cr6.eq) goto loc_82D7EFC8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7EFC8:
	// b 0x82d82588
	sub_82D82588(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EFCC"))) PPC_WEAK_FUNC(sub_82D7EFCC);
PPC_FUNC_IMPL(__imp__sub_82D7EFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EFD0"))) PPC_WEAK_FUNC(sub_82D7EFD0);
PPC_FUNC_IMPL(__imp__sub_82D7EFD0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7efe0
	if (!ctx.cr6.eq) goto loc_82D7EFE0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7EFE0:
	// b 0x82d825d0
	sub_82D825D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EFE4"))) PPC_WEAK_FUNC(sub_82D7EFE4);
PPC_FUNC_IMPL(__imp__sub_82D7EFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EFE8"))) PPC_WEAK_FUNC(sub_82D7EFE8);
PPC_FUNC_IMPL(__imp__sub_82D7EFE8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7eff8
	if (!ctx.cr6.eq) goto loc_82D7EFF8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7EFF8:
	// b 0x82d82618
	sub_82D82618(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EFFC"))) PPC_WEAK_FUNC(sub_82D7EFFC);
PPC_FUNC_IMPL(__imp__sub_82D7EFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F000"))) PPC_WEAK_FUNC(sub_82D7F000);
PPC_FUNC_IMPL(__imp__sub_82D7F000) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f010
	if (!ctx.cr6.eq) goto loc_82D7F010;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F010:
	// b 0x82d82660
	sub_82D82660(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F014"))) PPC_WEAK_FUNC(sub_82D7F014);
PPC_FUNC_IMPL(__imp__sub_82D7F014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F018"))) PPC_WEAK_FUNC(sub_82D7F018);
PPC_FUNC_IMPL(__imp__sub_82D7F018) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f028
	if (!ctx.cr6.eq) goto loc_82D7F028;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F028:
	// b 0x82d826a8
	sub_82D826A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F02C"))) PPC_WEAK_FUNC(sub_82D7F02C);
PPC_FUNC_IMPL(__imp__sub_82D7F02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F030"))) PPC_WEAK_FUNC(sub_82D7F030);
PPC_FUNC_IMPL(__imp__sub_82D7F030) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f040
	if (!ctx.cr6.eq) goto loc_82D7F040;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F040:
	// b 0x82d826f0
	sub_82D826F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F044"))) PPC_WEAK_FUNC(sub_82D7F044);
PPC_FUNC_IMPL(__imp__sub_82D7F044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F048"))) PPC_WEAK_FUNC(sub_82D7F048);
PPC_FUNC_IMPL(__imp__sub_82D7F048) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f058
	if (!ctx.cr6.eq) goto loc_82D7F058;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F058:
	// b 0x82d82748
	sub_82D82748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F05C"))) PPC_WEAK_FUNC(sub_82D7F05C);
PPC_FUNC_IMPL(__imp__sub_82D7F05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F060"))) PPC_WEAK_FUNC(sub_82D7F060);
PPC_FUNC_IMPL(__imp__sub_82D7F060) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f070
	if (!ctx.cr6.eq) goto loc_82D7F070;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F070:
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = ctx.r11.u64 ^ 1;
	// b 0x82d827a0
	sub_82D827A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F080"))) PPC_WEAK_FUNC(sub_82D7F080);
PPC_FUNC_IMPL(__imp__sub_82D7F080) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f0b4
	if (!ctx.cr6.eq) goto loc_82D7F0B4;
	// li r3,37
	ctx.r3.s64 = 37;
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
loc_82D7F0B4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d827e8
	ctx.lr = 0x82D7F0BC;
	sub_82D827E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d7f0e0
	if (!ctx.cr6.eq) goto loc_82D7F0E0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d7f0e0
	if (ctx.cr6.eq) goto loc_82D7F0E0;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82D7F0E0:
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

__attribute__((alias("__imp__sub_82D7F0F4"))) PPC_WEAK_FUNC(sub_82D7F0F4);
PPC_FUNC_IMPL(__imp__sub_82D7F0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F0F8"))) PPC_WEAK_FUNC(sub_82D7F0F8);
PPC_FUNC_IMPL(__imp__sub_82D7F0F8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f108
	if (!ctx.cr6.eq) goto loc_82D7F108;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F108:
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = ctx.r11.u64 ^ 1;
	// b 0x82d82830
	sub_82D82830(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F118"))) PPC_WEAK_FUNC(sub_82D7F118);
PPC_FUNC_IMPL(__imp__sub_82D7F118) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f14c
	if (!ctx.cr6.eq) goto loc_82D7F14C;
	// li r3,37
	ctx.r3.s64 = 37;
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
loc_82D7F14C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d82878
	ctx.lr = 0x82D7F154;
	sub_82D82878(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d7f178
	if (!ctx.cr6.eq) goto loc_82D7F178;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d7f178
	if (ctx.cr6.eq) goto loc_82D7F178;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82D7F178:
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

__attribute__((alias("__imp__sub_82D7F18C"))) PPC_WEAK_FUNC(sub_82D7F18C);
PPC_FUNC_IMPL(__imp__sub_82D7F18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F190"))) PPC_WEAK_FUNC(sub_82D7F190);
PPC_FUNC_IMPL(__imp__sub_82D7F190) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f1a0
	if (!ctx.cr6.eq) goto loc_82D7F1A0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F1A0:
	// b 0x82d828c0
	sub_82D828C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F1A4"))) PPC_WEAK_FUNC(sub_82D7F1A4);
PPC_FUNC_IMPL(__imp__sub_82D7F1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F1A8"))) PPC_WEAK_FUNC(sub_82D7F1A8);
PPC_FUNC_IMPL(__imp__sub_82D7F1A8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f1b8
	if (!ctx.cr6.eq) goto loc_82D7F1B8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F1B8:
	// b 0x82d828f8
	sub_82D828F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F1BC"))) PPC_WEAK_FUNC(sub_82D7F1BC);
PPC_FUNC_IMPL(__imp__sub_82D7F1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F1C0"))) PPC_WEAK_FUNC(sub_82D7F1C0);
PPC_FUNC_IMPL(__imp__sub_82D7F1C0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f1d0
	if (!ctx.cr6.eq) goto loc_82D7F1D0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F1D0:
	// b 0x82d82940
	sub_82D82940(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F1D4"))) PPC_WEAK_FUNC(sub_82D7F1D4);
PPC_FUNC_IMPL(__imp__sub_82D7F1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F1D8"))) PPC_WEAK_FUNC(sub_82D7F1D8);
PPC_FUNC_IMPL(__imp__sub_82D7F1D8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f1e8
	if (!ctx.cr6.eq) goto loc_82D7F1E8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F1E8:
	// b 0x82d82988
	sub_82D82988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F1EC"))) PPC_WEAK_FUNC(sub_82D7F1EC);
PPC_FUNC_IMPL(__imp__sub_82D7F1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F1F0"))) PPC_WEAK_FUNC(sub_82D7F1F0);
PPC_FUNC_IMPL(__imp__sub_82D7F1F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f200
	if (!ctx.cr6.eq) goto loc_82D7F200;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F200:
	// b 0x82d829d0
	sub_82D829D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F204"))) PPC_WEAK_FUNC(sub_82D7F204);
PPC_FUNC_IMPL(__imp__sub_82D7F204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F208"))) PPC_WEAK_FUNC(sub_82D7F208);
PPC_FUNC_IMPL(__imp__sub_82D7F208) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f218
	if (!ctx.cr6.eq) goto loc_82D7F218;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F218:
	// b 0x82d82a18
	sub_82D82A18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F21C"))) PPC_WEAK_FUNC(sub_82D7F21C);
PPC_FUNC_IMPL(__imp__sub_82D7F21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F220"))) PPC_WEAK_FUNC(sub_82D7F220);
PPC_FUNC_IMPL(__imp__sub_82D7F220) {
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
	// bne cr6,0x82d7f248
	if (!ctx.cr6.eq) goto loc_82D7F248;
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
loc_82D7F248:
	// bl 0x82d82a70
	ctx.lr = 0x82D7F24C;
	sub_82D82A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F25C"))) PPC_WEAK_FUNC(sub_82D7F25C);
PPC_FUNC_IMPL(__imp__sub_82D7F25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F260"))) PPC_WEAK_FUNC(sub_82D7F260);
PPC_FUNC_IMPL(__imp__sub_82D7F260) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f270
	if (!ctx.cr6.eq) goto loc_82D7F270;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F270:
	// b 0x82d82af8
	sub_82D82AF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F274"))) PPC_WEAK_FUNC(sub_82D7F274);
PPC_FUNC_IMPL(__imp__sub_82D7F274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F278"))) PPC_WEAK_FUNC(sub_82D7F278);
PPC_FUNC_IMPL(__imp__sub_82D7F278) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f288
	if (!ctx.cr6.eq) goto loc_82D7F288;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F288:
	// b 0x82d82b40
	sub_82D82B40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F28C"))) PPC_WEAK_FUNC(sub_82D7F28C);
PPC_FUNC_IMPL(__imp__sub_82D7F28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F290"))) PPC_WEAK_FUNC(sub_82D7F290);
PPC_FUNC_IMPL(__imp__sub_82D7F290) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f2a0
	if (!ctx.cr6.eq) goto loc_82D7F2A0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F2A0:
	// b 0x82d82b88
	sub_82D82B88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F2A4"))) PPC_WEAK_FUNC(sub_82D7F2A4);
PPC_FUNC_IMPL(__imp__sub_82D7F2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F2A8"))) PPC_WEAK_FUNC(sub_82D7F2A8);
PPC_FUNC_IMPL(__imp__sub_82D7F2A8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f2b8
	if (!ctx.cr6.eq) goto loc_82D7F2B8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F2B8:
	// b 0x82d82be0
	sub_82D82BE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F2BC"))) PPC_WEAK_FUNC(sub_82D7F2BC);
PPC_FUNC_IMPL(__imp__sub_82D7F2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F2C0"))) PPC_WEAK_FUNC(sub_82D7F2C0);
PPC_FUNC_IMPL(__imp__sub_82D7F2C0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f2d0
	if (!ctx.cr6.eq) goto loc_82D7F2D0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F2D0:
	// b 0x82d82c28
	sub_82D82C28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F2D4"))) PPC_WEAK_FUNC(sub_82D7F2D4);
PPC_FUNC_IMPL(__imp__sub_82D7F2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F2D8"))) PPC_WEAK_FUNC(sub_82D7F2D8);
PPC_FUNC_IMPL(__imp__sub_82D7F2D8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f2e8
	if (!ctx.cr6.eq) goto loc_82D7F2E8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F2E8:
	// b 0x82d82c70
	sub_82D82C70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F2EC"))) PPC_WEAK_FUNC(sub_82D7F2EC);
PPC_FUNC_IMPL(__imp__sub_82D7F2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F2F0"))) PPC_WEAK_FUNC(sub_82D7F2F0);
PPC_FUNC_IMPL(__imp__sub_82D7F2F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f300
	if (!ctx.cr6.eq) goto loc_82D7F300;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F300:
	// b 0x82d82cc8
	sub_82D82CC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F304"))) PPC_WEAK_FUNC(sub_82D7F304);
PPC_FUNC_IMPL(__imp__sub_82D7F304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F308"))) PPC_WEAK_FUNC(sub_82D7F308);
PPC_FUNC_IMPL(__imp__sub_82D7F308) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f318
	if (!ctx.cr6.eq) goto loc_82D7F318;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F318:
	// b 0x82d82d20
	sub_82D82D20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F31C"))) PPC_WEAK_FUNC(sub_82D7F31C);
PPC_FUNC_IMPL(__imp__sub_82D7F31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F320"))) PPC_WEAK_FUNC(sub_82D7F320);
PPC_FUNC_IMPL(__imp__sub_82D7F320) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f330
	if (!ctx.cr6.eq) goto loc_82D7F330;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F330:
	// b 0x82d82d68
	sub_82D82D68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F334"))) PPC_WEAK_FUNC(sub_82D7F334);
PPC_FUNC_IMPL(__imp__sub_82D7F334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F338"))) PPC_WEAK_FUNC(sub_82D7F338);
PPC_FUNC_IMPL(__imp__sub_82D7F338) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f348
	if (!ctx.cr6.eq) goto loc_82D7F348;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F348:
	// b 0x82d82dc0
	sub_82D82DC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F34C"))) PPC_WEAK_FUNC(sub_82D7F34C);
PPC_FUNC_IMPL(__imp__sub_82D7F34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F350"))) PPC_WEAK_FUNC(sub_82D7F350);
PPC_FUNC_IMPL(__imp__sub_82D7F350) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f360
	if (!ctx.cr6.eq) goto loc_82D7F360;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F360:
	// b 0x82d82e10
	sub_82D82E10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F364"))) PPC_WEAK_FUNC(sub_82D7F364);
PPC_FUNC_IMPL(__imp__sub_82D7F364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F368"))) PPC_WEAK_FUNC(sub_82D7F368);
PPC_FUNC_IMPL(__imp__sub_82D7F368) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f378
	if (!ctx.cr6.eq) goto loc_82D7F378;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F378:
	// b 0x82d82e58
	sub_82D82E58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F37C"))) PPC_WEAK_FUNC(sub_82D7F37C);
PPC_FUNC_IMPL(__imp__sub_82D7F37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F380"))) PPC_WEAK_FUNC(sub_82D7F380);
PPC_FUNC_IMPL(__imp__sub_82D7F380) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f390
	if (!ctx.cr6.eq) goto loc_82D7F390;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F390:
	// b 0x82d82ea0
	sub_82D82EA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F394"))) PPC_WEAK_FUNC(sub_82D7F394);
PPC_FUNC_IMPL(__imp__sub_82D7F394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F398"))) PPC_WEAK_FUNC(sub_82D7F398);
PPC_FUNC_IMPL(__imp__sub_82D7F398) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f3a8
	if (!ctx.cr6.eq) goto loc_82D7F3A8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F3A8:
	// b 0x82d92748
	sub_82D92748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F3AC"))) PPC_WEAK_FUNC(sub_82D7F3AC);
PPC_FUNC_IMPL(__imp__sub_82D7F3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F3B0"))) PPC_WEAK_FUNC(sub_82D7F3B0);
PPC_FUNC_IMPL(__imp__sub_82D7F3B0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f3c0
	if (!ctx.cr6.eq) goto loc_82D7F3C0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F3C0:
	// b 0x82d92780
	sub_82D92780(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F3C4"))) PPC_WEAK_FUNC(sub_82D7F3C4);
PPC_FUNC_IMPL(__imp__sub_82D7F3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F3C8"))) PPC_WEAK_FUNC(sub_82D7F3C8);
PPC_FUNC_IMPL(__imp__sub_82D7F3C8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f3d8
	if (!ctx.cr6.eq) goto loc_82D7F3D8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F3D8:
	// b 0x82d927c8
	sub_82D927C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F3DC"))) PPC_WEAK_FUNC(sub_82D7F3DC);
PPC_FUNC_IMPL(__imp__sub_82D7F3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F3E0"))) PPC_WEAK_FUNC(sub_82D7F3E0);
PPC_FUNC_IMPL(__imp__sub_82D7F3E0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f3f0
	if (!ctx.cr6.eq) goto loc_82D7F3F0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F3F0:
	// b 0x82d92810
	sub_82D92810(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F3F4"))) PPC_WEAK_FUNC(sub_82D7F3F4);
PPC_FUNC_IMPL(__imp__sub_82D7F3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F3F8"))) PPC_WEAK_FUNC(sub_82D7F3F8);
PPC_FUNC_IMPL(__imp__sub_82D7F3F8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f408
	if (!ctx.cr6.eq) goto loc_82D7F408;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F408:
	// b 0x82d92858
	sub_82D92858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F40C"))) PPC_WEAK_FUNC(sub_82D7F40C);
PPC_FUNC_IMPL(__imp__sub_82D7F40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F410"))) PPC_WEAK_FUNC(sub_82D7F410);
PPC_FUNC_IMPL(__imp__sub_82D7F410) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f420
	if (!ctx.cr6.eq) goto loc_82D7F420;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F420:
	// b 0x82d928a0
	sub_82D928A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F424"))) PPC_WEAK_FUNC(sub_82D7F424);
PPC_FUNC_IMPL(__imp__sub_82D7F424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F428"))) PPC_WEAK_FUNC(sub_82D7F428);
PPC_FUNC_IMPL(__imp__sub_82D7F428) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f438
	if (!ctx.cr6.eq) goto loc_82D7F438;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F438:
	// b 0x82d928e8
	sub_82D928E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F43C"))) PPC_WEAK_FUNC(sub_82D7F43C);
PPC_FUNC_IMPL(__imp__sub_82D7F43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F440"))) PPC_WEAK_FUNC(sub_82D7F440);
PPC_FUNC_IMPL(__imp__sub_82D7F440) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f450
	if (!ctx.cr6.eq) goto loc_82D7F450;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F450:
	// b 0x82d92930
	sub_82D92930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F454"))) PPC_WEAK_FUNC(sub_82D7F454);
PPC_FUNC_IMPL(__imp__sub_82D7F454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F458"))) PPC_WEAK_FUNC(sub_82D7F458);
PPC_FUNC_IMPL(__imp__sub_82D7F458) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f468
	if (!ctx.cr6.eq) goto loc_82D7F468;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F468:
	// b 0x82d92978
	sub_82D92978(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F46C"))) PPC_WEAK_FUNC(sub_82D7F46C);
PPC_FUNC_IMPL(__imp__sub_82D7F46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F470"))) PPC_WEAK_FUNC(sub_82D7F470);
PPC_FUNC_IMPL(__imp__sub_82D7F470) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f480
	if (!ctx.cr6.eq) goto loc_82D7F480;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F480:
	// b 0x82d929c0
	sub_82D929C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F484"))) PPC_WEAK_FUNC(sub_82D7F484);
PPC_FUNC_IMPL(__imp__sub_82D7F484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F488"))) PPC_WEAK_FUNC(sub_82D7F488);
PPC_FUNC_IMPL(__imp__sub_82D7F488) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f498
	if (!ctx.cr6.eq) goto loc_82D7F498;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F498:
	// b 0x82d92a08
	sub_82D92A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F49C"))) PPC_WEAK_FUNC(sub_82D7F49C);
PPC_FUNC_IMPL(__imp__sub_82D7F49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F4A0"))) PPC_WEAK_FUNC(sub_82D7F4A0);
PPC_FUNC_IMPL(__imp__sub_82D7F4A0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f4b0
	if (!ctx.cr6.eq) goto loc_82D7F4B0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F4B0:
	// b 0x82d92a40
	sub_82D92A40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F4B4"))) PPC_WEAK_FUNC(sub_82D7F4B4);
PPC_FUNC_IMPL(__imp__sub_82D7F4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F4B8"))) PPC_WEAK_FUNC(sub_82D7F4B8);
PPC_FUNC_IMPL(__imp__sub_82D7F4B8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f4c8
	if (!ctx.cr6.eq) goto loc_82D7F4C8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F4C8:
	// b 0x82d92a98
	sub_82D92A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F4CC"))) PPC_WEAK_FUNC(sub_82D7F4CC);
PPC_FUNC_IMPL(__imp__sub_82D7F4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F4D0"))) PPC_WEAK_FUNC(sub_82D7F4D0);
PPC_FUNC_IMPL(__imp__sub_82D7F4D0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f4e0
	if (!ctx.cr6.eq) goto loc_82D7F4E0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F4E0:
	// b 0x82d92ae0
	sub_82D92AE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F4E4"))) PPC_WEAK_FUNC(sub_82D7F4E4);
PPC_FUNC_IMPL(__imp__sub_82D7F4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F4E8"))) PPC_WEAK_FUNC(sub_82D7F4E8);
PPC_FUNC_IMPL(__imp__sub_82D7F4E8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f4f8
	if (!ctx.cr6.eq) goto loc_82D7F4F8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F4F8:
	// b 0x82d92b38
	sub_82D92B38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F4FC"))) PPC_WEAK_FUNC(sub_82D7F4FC);
PPC_FUNC_IMPL(__imp__sub_82D7F4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F500"))) PPC_WEAK_FUNC(sub_82D7F500);
PPC_FUNC_IMPL(__imp__sub_82D7F500) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f510
	if (!ctx.cr6.eq) goto loc_82D7F510;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F510:
	// b 0x82d92b80
	sub_82D92B80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F514"))) PPC_WEAK_FUNC(sub_82D7F514);
PPC_FUNC_IMPL(__imp__sub_82D7F514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F518"))) PPC_WEAK_FUNC(sub_82D7F518);
PPC_FUNC_IMPL(__imp__sub_82D7F518) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f528
	if (!ctx.cr6.eq) goto loc_82D7F528;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F528:
	// b 0x82d92bc8
	sub_82D92BC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F52C"))) PPC_WEAK_FUNC(sub_82D7F52C);
PPC_FUNC_IMPL(__imp__sub_82D7F52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F530"))) PPC_WEAK_FUNC(sub_82D7F530);
PPC_FUNC_IMPL(__imp__sub_82D7F530) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f540
	if (!ctx.cr6.eq) goto loc_82D7F540;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F540:
	// b 0x82d81cd8
	sub_82D81CD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F544"))) PPC_WEAK_FUNC(sub_82D7F544);
PPC_FUNC_IMPL(__imp__sub_82D7F544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F548"))) PPC_WEAK_FUNC(sub_82D7F548);
PPC_FUNC_IMPL(__imp__sub_82D7F548) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f558
	if (!ctx.cr6.eq) goto loc_82D7F558;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F558:
	// b 0x82d81d20
	sub_82D81D20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F55C"))) PPC_WEAK_FUNC(sub_82D7F55C);
PPC_FUNC_IMPL(__imp__sub_82D7F55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F560"))) PPC_WEAK_FUNC(sub_82D7F560);
PPC_FUNC_IMPL(__imp__sub_82D7F560) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f570
	if (!ctx.cr6.eq) goto loc_82D7F570;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F570:
	// b 0x82d81d70
	sub_82D81D70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F574"))) PPC_WEAK_FUNC(sub_82D7F574);
PPC_FUNC_IMPL(__imp__sub_82D7F574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F578"))) PPC_WEAK_FUNC(sub_82D7F578);
PPC_FUNC_IMPL(__imp__sub_82D7F578) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f588
	if (!ctx.cr6.eq) goto loc_82D7F588;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F588:
	// b 0x82d81dd0
	sub_82D81DD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F58C"))) PPC_WEAK_FUNC(sub_82D7F58C);
PPC_FUNC_IMPL(__imp__sub_82D7F58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F590"))) PPC_WEAK_FUNC(sub_82D7F590);
PPC_FUNC_IMPL(__imp__sub_82D7F590) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f5a0
	if (!ctx.cr6.eq) goto loc_82D7F5A0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F5A0:
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// xori r4,r10,1
	ctx.r4.u64 = ctx.r10.u64 ^ 1;
	// b 0x82d81e18
	sub_82D81E18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F5BC"))) PPC_WEAK_FUNC(sub_82D7F5BC);
PPC_FUNC_IMPL(__imp__sub_82D7F5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F5C0"))) PPC_WEAK_FUNC(sub_82D7F5C0);
PPC_FUNC_IMPL(__imp__sub_82D7F5C0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f5d0
	if (!ctx.cr6.eq) goto loc_82D7F5D0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F5D0:
	// b 0x82d81e70
	sub_82D81E70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F5D4"))) PPC_WEAK_FUNC(sub_82D7F5D4);
PPC_FUNC_IMPL(__imp__sub_82D7F5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F5D8"))) PPC_WEAK_FUNC(sub_82D7F5D8);
PPC_FUNC_IMPL(__imp__sub_82D7F5D8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f5e8
	if (!ctx.cr6.eq) goto loc_82D7F5E8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F5E8:
	// b 0x82d81eb0
	sub_82D81EB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F5EC"))) PPC_WEAK_FUNC(sub_82D7F5EC);
PPC_FUNC_IMPL(__imp__sub_82D7F5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F5F0"))) PPC_WEAK_FUNC(sub_82D7F5F0);
PPC_FUNC_IMPL(__imp__sub_82D7F5F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f600
	if (!ctx.cr6.eq) goto loc_82D7F600;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F600:
	// b 0x82d81ef8
	sub_82D81EF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F604"))) PPC_WEAK_FUNC(sub_82D7F604);
PPC_FUNC_IMPL(__imp__sub_82D7F604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F608"))) PPC_WEAK_FUNC(sub_82D7F608);
PPC_FUNC_IMPL(__imp__sub_82D7F608) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f618
	if (!ctx.cr6.eq) goto loc_82D7F618;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F618:
	// b 0x82d81f40
	sub_82D81F40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F61C"))) PPC_WEAK_FUNC(sub_82D7F61C);
PPC_FUNC_IMPL(__imp__sub_82D7F61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F620"))) PPC_WEAK_FUNC(sub_82D7F620);
PPC_FUNC_IMPL(__imp__sub_82D7F620) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f630
	if (!ctx.cr6.eq) goto loc_82D7F630;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F630:
	// b 0x82d81f88
	sub_82D81F88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F634"))) PPC_WEAK_FUNC(sub_82D7F634);
PPC_FUNC_IMPL(__imp__sub_82D7F634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F638"))) PPC_WEAK_FUNC(sub_82D7F638);
PPC_FUNC_IMPL(__imp__sub_82D7F638) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f648
	if (!ctx.cr6.eq) goto loc_82D7F648;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F648:
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = ctx.r11.u64 ^ 1;
	// b 0x82d81fd0
	sub_82D81FD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F658"))) PPC_WEAK_FUNC(sub_82D7F658);
PPC_FUNC_IMPL(__imp__sub_82D7F658) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f68c
	if (!ctx.cr6.eq) goto loc_82D7F68C;
	// li r3,37
	ctx.r3.s64 = 37;
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
loc_82D7F68C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d82030
	ctx.lr = 0x82D7F694;
	sub_82D82030(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d7f6b8
	if (!ctx.cr6.eq) goto loc_82D7F6B8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d7f6b8
	if (ctx.cr6.eq) goto loc_82D7F6B8;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82D7F6B8:
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

__attribute__((alias("__imp__sub_82D7F6CC"))) PPC_WEAK_FUNC(sub_82D7F6CC);
PPC_FUNC_IMPL(__imp__sub_82D7F6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F6D0"))) PPC_WEAK_FUNC(sub_82D7F6D0);
PPC_FUNC_IMPL(__imp__sub_82D7F6D0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f6e0
	if (!ctx.cr6.eq) goto loc_82D7F6E0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F6E0:
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = ctx.r11.u64 ^ 1;
	// b 0x82d82078
	sub_82D82078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F6F0"))) PPC_WEAK_FUNC(sub_82D7F6F0);
PPC_FUNC_IMPL(__imp__sub_82D7F6F0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f724
	if (!ctx.cr6.eq) goto loc_82D7F724;
	// li r3,37
	ctx.r3.s64 = 37;
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
loc_82D7F724:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d820d8
	ctx.lr = 0x82D7F72C;
	sub_82D820D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d7f750
	if (!ctx.cr6.eq) goto loc_82D7F750;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d7f750
	if (ctx.cr6.eq) goto loc_82D7F750;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82D7F750:
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

__attribute__((alias("__imp__sub_82D7F764"))) PPC_WEAK_FUNC(sub_82D7F764);
PPC_FUNC_IMPL(__imp__sub_82D7F764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F768"))) PPC_WEAK_FUNC(sub_82D7F768);
PPC_FUNC_IMPL(__imp__sub_82D7F768) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f778
	if (!ctx.cr6.eq) goto loc_82D7F778;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F778:
	// b 0x82d82120
	sub_82D82120(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F77C"))) PPC_WEAK_FUNC(sub_82D7F77C);
PPC_FUNC_IMPL(__imp__sub_82D7F77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F780"))) PPC_WEAK_FUNC(sub_82D7F780);
PPC_FUNC_IMPL(__imp__sub_82D7F780) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f790
	if (!ctx.cr6.eq) goto loc_82D7F790;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F790:
	// b 0x82d82160
	sub_82D82160(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F794"))) PPC_WEAK_FUNC(sub_82D7F794);
PPC_FUNC_IMPL(__imp__sub_82D7F794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F798"))) PPC_WEAK_FUNC(sub_82D7F798);
PPC_FUNC_IMPL(__imp__sub_82D7F798) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f7a8
	if (!ctx.cr6.eq) goto loc_82D7F7A8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F7A8:
	// b 0x82d821c0
	sub_82D821C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F7AC"))) PPC_WEAK_FUNC(sub_82D7F7AC);
PPC_FUNC_IMPL(__imp__sub_82D7F7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F7B0"))) PPC_WEAK_FUNC(sub_82D7F7B0);
PPC_FUNC_IMPL(__imp__sub_82D7F7B0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f7c0
	if (!ctx.cr6.eq) goto loc_82D7F7C0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F7C0:
	// b 0x82d82218
	sub_82D82218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F7C4"))) PPC_WEAK_FUNC(sub_82D7F7C4);
PPC_FUNC_IMPL(__imp__sub_82D7F7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F7C8"))) PPC_WEAK_FUNC(sub_82D7F7C8);
PPC_FUNC_IMPL(__imp__sub_82D7F7C8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f7d8
	if (!ctx.cr6.eq) goto loc_82D7F7D8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F7D8:
	// b 0x82d82268
	sub_82D82268(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F7DC"))) PPC_WEAK_FUNC(sub_82D7F7DC);
PPC_FUNC_IMPL(__imp__sub_82D7F7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F7E0"))) PPC_WEAK_FUNC(sub_82D7F7E0);
PPC_FUNC_IMPL(__imp__sub_82D7F7E0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f7f0
	if (!ctx.cr6.eq) goto loc_82D7F7F0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F7F0:
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// b 0x82d822d8
	sub_82D822D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F800"))) PPC_WEAK_FUNC(sub_82D7F800);
PPC_FUNC_IMPL(__imp__sub_82D7F800) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f810
	if (!ctx.cr6.eq) goto loc_82D7F810;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F810:
	// b 0x82d82338
	sub_82D82338(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F814"))) PPC_WEAK_FUNC(sub_82D7F814);
PPC_FUNC_IMPL(__imp__sub_82D7F814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F818"))) PPC_WEAK_FUNC(sub_82D7F818);
PPC_FUNC_IMPL(__imp__sub_82D7F818) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f828
	if (!ctx.cr6.eq) goto loc_82D7F828;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F828:
	// b 0x82d82398
	sub_82D82398(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F82C"))) PPC_WEAK_FUNC(sub_82D7F82C);
PPC_FUNC_IMPL(__imp__sub_82D7F82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F830"))) PPC_WEAK_FUNC(sub_82D7F830);
PPC_FUNC_IMPL(__imp__sub_82D7F830) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f840
	if (!ctx.cr6.eq) goto loc_82D7F840;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F840:
	// b 0x82d823e8
	sub_82D823E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F844"))) PPC_WEAK_FUNC(sub_82D7F844);
PPC_FUNC_IMPL(__imp__sub_82D7F844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F848"))) PPC_WEAK_FUNC(sub_82D7F848);
PPC_FUNC_IMPL(__imp__sub_82D7F848) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f858
	if (!ctx.cr6.eq) goto loc_82D7F858;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F858:
	// b 0x82d82468
	sub_82D82468(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F85C"))) PPC_WEAK_FUNC(sub_82D7F85C);
PPC_FUNC_IMPL(__imp__sub_82D7F85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F860"))) PPC_WEAK_FUNC(sub_82D7F860);
PPC_FUNC_IMPL(__imp__sub_82D7F860) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f870
	if (!ctx.cr6.eq) goto loc_82D7F870;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F870:
	// b 0x82d824c0
	sub_82D824C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F874"))) PPC_WEAK_FUNC(sub_82D7F874);
PPC_FUNC_IMPL(__imp__sub_82D7F874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F878"))) PPC_WEAK_FUNC(sub_82D7F878);
PPC_FUNC_IMPL(__imp__sub_82D7F878) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f888
	if (!ctx.cr6.eq) goto loc_82D7F888;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F888:
	// b 0x82d82508
	sub_82D82508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F88C"))) PPC_WEAK_FUNC(sub_82D7F88C);
PPC_FUNC_IMPL(__imp__sub_82D7F88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F890"))) PPC_WEAK_FUNC(sub_82D7F890);
PPC_FUNC_IMPL(__imp__sub_82D7F890) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f8a0
	if (!ctx.cr6.eq) goto loc_82D7F8A0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F8A0:
	// b 0x82d92c10
	sub_82D92C10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F8A4"))) PPC_WEAK_FUNC(sub_82D7F8A4);
PPC_FUNC_IMPL(__imp__sub_82D7F8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F8A8"))) PPC_WEAK_FUNC(sub_82D7F8A8);
PPC_FUNC_IMPL(__imp__sub_82D7F8A8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f8b8
	if (!ctx.cr6.eq) goto loc_82D7F8B8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F8B8:
	// b 0x82d92c58
	sub_82D92C58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F8BC"))) PPC_WEAK_FUNC(sub_82D7F8BC);
PPC_FUNC_IMPL(__imp__sub_82D7F8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F8C0"))) PPC_WEAK_FUNC(sub_82D7F8C0);
PPC_FUNC_IMPL(__imp__sub_82D7F8C0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f8d0
	if (!ctx.cr6.eq) goto loc_82D7F8D0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F8D0:
	// b 0x82d92ca0
	sub_82D92CA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F8D4"))) PPC_WEAK_FUNC(sub_82D7F8D4);
PPC_FUNC_IMPL(__imp__sub_82D7F8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F8D8"))) PPC_WEAK_FUNC(sub_82D7F8D8);
PPC_FUNC_IMPL(__imp__sub_82D7F8D8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f8e8
	if (!ctx.cr6.eq) goto loc_82D7F8E8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F8E8:
	// b 0x82d92ce8
	sub_82D92CE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F8EC"))) PPC_WEAK_FUNC(sub_82D7F8EC);
PPC_FUNC_IMPL(__imp__sub_82D7F8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F8F0"))) PPC_WEAK_FUNC(sub_82D7F8F0);
PPC_FUNC_IMPL(__imp__sub_82D7F8F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f900
	if (!ctx.cr6.eq) goto loc_82D7F900;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F900:
	// b 0x82d92d30
	sub_82D92D30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F904"))) PPC_WEAK_FUNC(sub_82D7F904);
PPC_FUNC_IMPL(__imp__sub_82D7F904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F908"))) PPC_WEAK_FUNC(sub_82D7F908);
PPC_FUNC_IMPL(__imp__sub_82D7F908) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f918
	if (!ctx.cr6.eq) goto loc_82D7F918;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F918:
	// b 0x82d92d78
	sub_82D92D78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F91C"))) PPC_WEAK_FUNC(sub_82D7F91C);
PPC_FUNC_IMPL(__imp__sub_82D7F91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F920"))) PPC_WEAK_FUNC(sub_82D7F920);
PPC_FUNC_IMPL(__imp__sub_82D7F920) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f930
	if (!ctx.cr6.eq) goto loc_82D7F930;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F930:
	// b 0x82d92dc0
	sub_82D92DC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F934"))) PPC_WEAK_FUNC(sub_82D7F934);
PPC_FUNC_IMPL(__imp__sub_82D7F934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F938"))) PPC_WEAK_FUNC(sub_82D7F938);
PPC_FUNC_IMPL(__imp__sub_82D7F938) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f948
	if (!ctx.cr6.eq) goto loc_82D7F948;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F948:
	// b 0x82d92e08
	sub_82D92E08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F94C"))) PPC_WEAK_FUNC(sub_82D7F94C);
PPC_FUNC_IMPL(__imp__sub_82D7F94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F950"))) PPC_WEAK_FUNC(sub_82D7F950);
PPC_FUNC_IMPL(__imp__sub_82D7F950) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f960
	if (!ctx.cr6.eq) goto loc_82D7F960;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F960:
	// b 0x82d92e50
	sub_82D92E50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F964"))) PPC_WEAK_FUNC(sub_82D7F964);
PPC_FUNC_IMPL(__imp__sub_82D7F964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F968"))) PPC_WEAK_FUNC(sub_82D7F968);
PPC_FUNC_IMPL(__imp__sub_82D7F968) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f978
	if (!ctx.cr6.eq) goto loc_82D7F978;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F978:
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r6,r11,1
	ctx.r6.u64 = ctx.r11.u64 ^ 1;
	// b 0x82d92e88
	sub_82D92E88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F988"))) PPC_WEAK_FUNC(sub_82D7F988);
PPC_FUNC_IMPL(__imp__sub_82D7F988) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f998
	if (!ctx.cr6.eq) goto loc_82D7F998;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F998:
	// b 0x82d92ef8
	sub_82D92EF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F99C"))) PPC_WEAK_FUNC(sub_82D7F99C);
PPC_FUNC_IMPL(__imp__sub_82D7F99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F9A0"))) PPC_WEAK_FUNC(sub_82D7F9A0);
PPC_FUNC_IMPL(__imp__sub_82D7F9A0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f9b0
	if (!ctx.cr6.eq) goto loc_82D7F9B0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F9B0:
	// b 0x82d92f40
	sub_82D92F40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F9B4"))) PPC_WEAK_FUNC(sub_82D7F9B4);
PPC_FUNC_IMPL(__imp__sub_82D7F9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F9B8"))) PPC_WEAK_FUNC(sub_82D7F9B8);
PPC_FUNC_IMPL(__imp__sub_82D7F9B8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f9c8
	if (!ctx.cr6.eq) goto loc_82D7F9C8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F9C8:
	// b 0x82d92f98
	sub_82D92F98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F9CC"))) PPC_WEAK_FUNC(sub_82D7F9CC);
PPC_FUNC_IMPL(__imp__sub_82D7F9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F9D0"))) PPC_WEAK_FUNC(sub_82D7F9D0);
PPC_FUNC_IMPL(__imp__sub_82D7F9D0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f9e0
	if (!ctx.cr6.eq) goto loc_82D7F9E0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F9E0:
	// b 0x82d92ff0
	sub_82D92FF0(ctx, base);
	return;
}

