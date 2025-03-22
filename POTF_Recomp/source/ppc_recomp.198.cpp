#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82728898"))) PPC_WEAK_FUNC(sub_82728898);
PPC_FUNC_IMPL(__imp__sub_82728898) {
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
	// bl 0x8272b9f0
	ctx.lr = 0x827288B0;
	sub_8272B9F0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r11,-32180
	ctx.r9.s64 = ctx.r11.s64 + -32180;
	// addi r8,r10,-32136
	ctx.r8.s64 = ctx.r10.s64 + -32136;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,290(r31)
	PPC_STORE_U16(ctx.r31.u32 + 290, ctx.r11.u16);
	// sth r11,294(r31)
	PPC_STORE_U16(ctx.r31.u32 + 294, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_827288EC"))) PPC_WEAK_FUNC(sub_827288EC);
PPC_FUNC_IMPL(__imp__sub_827288EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827288F0"))) PPC_WEAK_FUNC(sub_827288F0);
PPC_FUNC_IMPL(__imp__sub_827288F0) {
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
	// bl 0x8272b890
	ctx.lr = 0x82728910;
	sub_8272B890(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r11,-32180
	ctx.r9.s64 = ctx.r11.s64 + -32180;
	// addi r8,r10,-32136
	ctx.r8.s64 = ctx.r10.s64 + -32136;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// addi r5,r31,288
	ctx.r5.s64 = ctx.r31.s64 + 288;
	// sth r11,290(r31)
	PPC_STORE_U16(ctx.r31.u32 + 290, ctx.r11.u16);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// sth r11,294(r31)
	PPC_STORE_U16(ctx.r31.u32 + 294, ctx.r11.u16);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r7,31204
	ctx.r4.s64 = ctx.r7.s64 + 31204;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82384520
	ctx.lr = 0x8272894C;
	sub_82384520(ctx, base);
	// addi r5,r31,292
	ctx.r5.s64 = ctx.r31.s64 + 292;
	// lis r4,-32235
	ctx.r4.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r4,31244
	ctx.r4.s64 = ctx.r4.s64 + 31244;
	// bl 0x82384520
	ctx.lr = 0x82728964;
	sub_82384520(ctx, base);
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

__attribute__((alias("__imp__sub_82728980"))) PPC_WEAK_FUNC(sub_82728980);
PPC_FUNC_IMPL(__imp__sub_82728980) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82728994
	if (ctx.cr6.eq) goto loc_82728994;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82728994:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272899C"))) PPC_WEAK_FUNC(sub_8272899C);
PPC_FUNC_IMPL(__imp__sub_8272899C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827289A0"))) PPC_WEAK_FUNC(sub_827289A0);
PPC_FUNC_IMPL(__imp__sub_827289A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x827289A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,20944
	ctx.r27.s64 = ctx.r11.s64 + 20944;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// bl 0x8232e868
	ctx.lr = 0x827289CC;
	sub_8232E868(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r25,r11,11272
	ctx.r25.s64 = ctx.r11.s64 + 11272;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r30,120(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827289e8
	if (!ctx.cr6.eq) goto loc_827289E8;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_827289E8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,31456
	ctx.r4.s64 = ctx.r11.s64 + 31456;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233e028
	ctx.lr = 0x82728A04;
	sub_8233E028(ctx, base);
	// addi r31,r28,20
	ctx.r31.s64 = ctx.r28.s64 + 20;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c3050
	ctx.lr = 0x82728A18;
	sub_822C3050(ctx, base);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// beq cr6,0x82728a40
	if (ctx.cr6.eq) goto loc_82728A40;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294520
	ctx.lr = 0x82728A40;
	sub_82294520(ctx, base);
loc_82728A40:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294cc8
	ctx.lr = 0x82728A48;
	sub_82294CC8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// bl 0x8232e868
	ctx.lr = 0x82728A5C;
	sub_8232E868(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r30,120(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bne cr6,0x82728a70
	if (!ctx.cr6.eq) goto loc_82728A70;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82728A70:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,31512
	ctx.r4.s64 = ctx.r11.s64 + 31512;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233e028
	ctx.lr = 0x82728A8C;
	sub_8233E028(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// bl 0x822c3050
	ctx.lr = 0x82728A9C;
	sub_822C3050(ctx, base);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82728ac0
	if (ctx.cr6.eq) goto loc_82728AC0;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294520
	ctx.lr = 0x82728AC0;
	sub_82294520(ctx, base);
loc_82728AC0:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294cc8
	ctx.lr = 0x82728AC8;
	sub_82294CC8(ctx, base);
	// addi r3,r28,40
	ctx.r3.s64 = ctx.r28.s64 + 40;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82294ac0
	ctx.lr = 0x82728AE0;
	sub_82294AC0(ctx, base);
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82728af4
	if (ctx.cr0.eq) goto loc_82728AF4;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
loc_82728AF4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82728AFC"))) PPC_WEAK_FUNC(sub_82728AFC);
PPC_FUNC_IMPL(__imp__sub_82728AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82728B00"))) PPC_WEAK_FUNC(sub_82728B00);
PPC_FUNC_IMPL(__imp__sub_82728B00) {
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
	// bl 0x8272bc28
	ctx.lr = 0x82728B18;
	sub_8272BC28(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r11,-32036
	ctx.r9.s64 = ctx.r11.s64 + -32036;
	// addi r8,r10,-31992
	ctx.r8.s64 = ctx.r10.s64 + -31992;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,194(r31)
	PPC_STORE_U16(ctx.r31.u32 + 194, ctx.r11.u16);
	// sth r11,198(r31)
	PPC_STORE_U16(ctx.r31.u32 + 198, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_82728B54"))) PPC_WEAK_FUNC(sub_82728B54);
PPC_FUNC_IMPL(__imp__sub_82728B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82728B58"))) PPC_WEAK_FUNC(sub_82728B58);
PPC_FUNC_IMPL(__imp__sub_82728B58) {
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
	// bl 0x8272bac8
	ctx.lr = 0x82728B78;
	sub_8272BAC8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r11,-32036
	ctx.r9.s64 = ctx.r11.s64 + -32036;
	// addi r8,r10,-31992
	ctx.r8.s64 = ctx.r10.s64 + -31992;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// addi r5,r31,192
	ctx.r5.s64 = ctx.r31.s64 + 192;
	// sth r11,194(r31)
	PPC_STORE_U16(ctx.r31.u32 + 194, ctx.r11.u16);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// sth r11,198(r31)
	PPC_STORE_U16(ctx.r31.u32 + 198, ctx.r11.u16);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r7,31204
	ctx.r4.s64 = ctx.r7.s64 + 31204;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82384520
	ctx.lr = 0x82728BB4;
	sub_82384520(ctx, base);
	// addi r5,r31,196
	ctx.r5.s64 = ctx.r31.s64 + 196;
	// lis r4,-32235
	ctx.r4.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r4,31244
	ctx.r4.s64 = ctx.r4.s64 + 31244;
	// bl 0x82384520
	ctx.lr = 0x82728BCC;
	sub_82384520(ctx, base);
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

__attribute__((alias("__imp__sub_82728BE8"))) PPC_WEAK_FUNC(sub_82728BE8);
PPC_FUNC_IMPL(__imp__sub_82728BE8) {
	PPC_FUNC_PROLOGUE();
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82728BF4"))) PPC_WEAK_FUNC(sub_82728BF4);
PPC_FUNC_IMPL(__imp__sub_82728BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82728BF8"))) PPC_WEAK_FUNC(sub_82728BF8);
PPC_FUNC_IMPL(__imp__sub_82728BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82728C00;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,20944
	ctx.r27.s64 = ctx.r11.s64 + 20944;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// bl 0x8232e868
	ctx.lr = 0x82728C24;
	sub_8232E868(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r25,r11,11272
	ctx.r25.s64 = ctx.r11.s64 + 11272;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r30,120(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82728c40
	if (!ctx.cr6.eq) goto loc_82728C40;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82728C40:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,31456
	ctx.r4.s64 = ctx.r11.s64 + 31456;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233e028
	ctx.lr = 0x82728C5C;
	sub_8233E028(ctx, base);
	// addi r31,r28,20
	ctx.r31.s64 = ctx.r28.s64 + 20;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c3050
	ctx.lr = 0x82728C70;
	sub_822C3050(ctx, base);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// beq cr6,0x82728c98
	if (ctx.cr6.eq) goto loc_82728C98;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294520
	ctx.lr = 0x82728C98;
	sub_82294520(ctx, base);
loc_82728C98:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294cc8
	ctx.lr = 0x82728CA0;
	sub_82294CC8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// bl 0x8232e868
	ctx.lr = 0x82728CB4;
	sub_8232E868(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r30,120(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bne cr6,0x82728cc8
	if (!ctx.cr6.eq) goto loc_82728CC8;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82728CC8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,31512
	ctx.r4.s64 = ctx.r11.s64 + 31512;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233e028
	ctx.lr = 0x82728CE4;
	sub_8233E028(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// bl 0x822c3050
	ctx.lr = 0x82728CF4;
	sub_822C3050(ctx, base);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82728d18
	if (ctx.cr6.eq) goto loc_82728D18;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294520
	ctx.lr = 0x82728D18;
	sub_82294520(ctx, base);
loc_82728D18:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294cc8
	ctx.lr = 0x82728D20;
	sub_82294CC8(ctx, base);
	// addi r3,r28,40
	ctx.r3.s64 = ctx.r28.s64 + 40;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82294ac0
	ctx.lr = 0x82728D38;
	sub_82294AC0(ctx, base);
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82728d4c
	if (ctx.cr0.eq) goto loc_82728D4C;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
loc_82728D4C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82728D54"))) PPC_WEAK_FUNC(sub_82728D54);
PPC_FUNC_IMPL(__imp__sub_82728D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82728D58"))) PPC_WEAK_FUNC(sub_82728D58);
PPC_FUNC_IMPL(__imp__sub_82728D58) {
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
	// bl 0x8272be60
	ctx.lr = 0x82728D70;
	sub_8272BE60(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r11,-31892
	ctx.r9.s64 = ctx.r11.s64 + -31892;
	// addi r8,r10,-31848
	ctx.r8.s64 = ctx.r10.s64 + -31848;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,226(r31)
	PPC_STORE_U16(ctx.r31.u32 + 226, ctx.r11.u16);
	// sth r11,230(r31)
	PPC_STORE_U16(ctx.r31.u32 + 230, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_82728DAC"))) PPC_WEAK_FUNC(sub_82728DAC);
PPC_FUNC_IMPL(__imp__sub_82728DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82728DB0"))) PPC_WEAK_FUNC(sub_82728DB0);
PPC_FUNC_IMPL(__imp__sub_82728DB0) {
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
	// bl 0x8272bd00
	ctx.lr = 0x82728DD0;
	sub_8272BD00(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r11,-31892
	ctx.r9.s64 = ctx.r11.s64 + -31892;
	// addi r8,r10,-31848
	ctx.r8.s64 = ctx.r10.s64 + -31848;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// addi r5,r31,224
	ctx.r5.s64 = ctx.r31.s64 + 224;
	// sth r11,226(r31)
	PPC_STORE_U16(ctx.r31.u32 + 226, ctx.r11.u16);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// sth r11,230(r31)
	PPC_STORE_U16(ctx.r31.u32 + 230, ctx.r11.u16);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r7,31204
	ctx.r4.s64 = ctx.r7.s64 + 31204;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82384520
	ctx.lr = 0x82728E0C;
	sub_82384520(ctx, base);
	// addi r5,r31,228
	ctx.r5.s64 = ctx.r31.s64 + 228;
	// lis r4,-32235
	ctx.r4.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r4,31244
	ctx.r4.s64 = ctx.r4.s64 + 31244;
	// bl 0x82384520
	ctx.lr = 0x82728E24;
	sub_82384520(ctx, base);
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

__attribute__((alias("__imp__sub_82728E40"))) PPC_WEAK_FUNC(sub_82728E40);
PPC_FUNC_IMPL(__imp__sub_82728E40) {
	PPC_FUNC_PROLOGUE();
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82728E4C"))) PPC_WEAK_FUNC(sub_82728E4C);
PPC_FUNC_IMPL(__imp__sub_82728E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82728E50"))) PPC_WEAK_FUNC(sub_82728E50);
PPC_FUNC_IMPL(__imp__sub_82728E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82728E58;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,20944
	ctx.r27.s64 = ctx.r11.s64 + 20944;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// bl 0x8232e868
	ctx.lr = 0x82728E7C;
	sub_8232E868(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r25,r11,11272
	ctx.r25.s64 = ctx.r11.s64 + 11272;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r30,120(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82728e98
	if (!ctx.cr6.eq) goto loc_82728E98;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82728E98:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,31456
	ctx.r4.s64 = ctx.r11.s64 + 31456;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233e028
	ctx.lr = 0x82728EB4;
	sub_8233E028(ctx, base);
	// addi r31,r28,20
	ctx.r31.s64 = ctx.r28.s64 + 20;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c3050
	ctx.lr = 0x82728EC8;
	sub_822C3050(ctx, base);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// beq cr6,0x82728ef0
	if (ctx.cr6.eq) goto loc_82728EF0;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294520
	ctx.lr = 0x82728EF0;
	sub_82294520(ctx, base);
loc_82728EF0:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294cc8
	ctx.lr = 0x82728EF8;
	sub_82294CC8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// bl 0x8232e868
	ctx.lr = 0x82728F0C;
	sub_8232E868(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r30,120(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bne cr6,0x82728f20
	if (!ctx.cr6.eq) goto loc_82728F20;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82728F20:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,31512
	ctx.r4.s64 = ctx.r11.s64 + 31512;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233e028
	ctx.lr = 0x82728F3C;
	sub_8233E028(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// bl 0x822c3050
	ctx.lr = 0x82728F4C;
	sub_822C3050(ctx, base);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82728f70
	if (ctx.cr6.eq) goto loc_82728F70;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294520
	ctx.lr = 0x82728F70;
	sub_82294520(ctx, base);
loc_82728F70:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294cc8
	ctx.lr = 0x82728F78;
	sub_82294CC8(ctx, base);
	// addi r3,r28,40
	ctx.r3.s64 = ctx.r28.s64 + 40;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82294ac0
	ctx.lr = 0x82728F90;
	sub_82294AC0(ctx, base);
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82728fa4
	if (ctx.cr0.eq) goto loc_82728FA4;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
loc_82728FA4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82728FAC"))) PPC_WEAK_FUNC(sub_82728FAC);
PPC_FUNC_IMPL(__imp__sub_82728FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82728FB0"))) PPC_WEAK_FUNC(sub_82728FB0);
PPC_FUNC_IMPL(__imp__sub_82728FB0) {
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
	// bl 0x8272c098
	ctx.lr = 0x82728FC8;
	sub_8272C098(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r11,-31748
	ctx.r9.s64 = ctx.r11.s64 + -31748;
	// addi r8,r10,-31704
	ctx.r8.s64 = ctx.r10.s64 + -31704;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,290(r31)
	PPC_STORE_U16(ctx.r31.u32 + 290, ctx.r11.u16);
	// sth r11,294(r31)
	PPC_STORE_U16(ctx.r31.u32 + 294, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_82729004"))) PPC_WEAK_FUNC(sub_82729004);
PPC_FUNC_IMPL(__imp__sub_82729004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82729008"))) PPC_WEAK_FUNC(sub_82729008);
PPC_FUNC_IMPL(__imp__sub_82729008) {
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
	// bl 0x8272bf38
	ctx.lr = 0x82729028;
	sub_8272BF38(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r11,-31748
	ctx.r9.s64 = ctx.r11.s64 + -31748;
	// addi r8,r10,-31704
	ctx.r8.s64 = ctx.r10.s64 + -31704;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// addi r5,r31,288
	ctx.r5.s64 = ctx.r31.s64 + 288;
	// sth r11,290(r31)
	PPC_STORE_U16(ctx.r31.u32 + 290, ctx.r11.u16);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// sth r11,294(r31)
	PPC_STORE_U16(ctx.r31.u32 + 294, ctx.r11.u16);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r7,31204
	ctx.r4.s64 = ctx.r7.s64 + 31204;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82384520
	ctx.lr = 0x82729064;
	sub_82384520(ctx, base);
	// addi r5,r31,292
	ctx.r5.s64 = ctx.r31.s64 + 292;
	// lis r4,-32235
	ctx.r4.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r4,31244
	ctx.r4.s64 = ctx.r4.s64 + 31244;
	// bl 0x82384520
	ctx.lr = 0x8272907C;
	sub_82384520(ctx, base);
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

__attribute__((alias("__imp__sub_82729098"))) PPC_WEAK_FUNC(sub_82729098);
PPC_FUNC_IMPL(__imp__sub_82729098) {
	PPC_FUNC_PROLOGUE();
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827290A4"))) PPC_WEAK_FUNC(sub_827290A4);
PPC_FUNC_IMPL(__imp__sub_827290A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827290A8"))) PPC_WEAK_FUNC(sub_827290A8);
PPC_FUNC_IMPL(__imp__sub_827290A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x827290B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,20944
	ctx.r27.s64 = ctx.r11.s64 + 20944;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// bl 0x8232e868
	ctx.lr = 0x827290D4;
	sub_8232E868(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r25,r11,11272
	ctx.r25.s64 = ctx.r11.s64 + 11272;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r30,120(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827290f0
	if (!ctx.cr6.eq) goto loc_827290F0;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_827290F0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,31456
	ctx.r4.s64 = ctx.r11.s64 + 31456;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233e028
	ctx.lr = 0x8272910C;
	sub_8233E028(ctx, base);
	// addi r31,r28,20
	ctx.r31.s64 = ctx.r28.s64 + 20;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c3050
	ctx.lr = 0x82729120;
	sub_822C3050(ctx, base);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// beq cr6,0x82729148
	if (ctx.cr6.eq) goto loc_82729148;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294520
	ctx.lr = 0x82729148;
	sub_82294520(ctx, base);
loc_82729148:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294cc8
	ctx.lr = 0x82729150;
	sub_82294CC8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// bl 0x8232e868
	ctx.lr = 0x82729164;
	sub_8232E868(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r30,120(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bne cr6,0x82729178
	if (!ctx.cr6.eq) goto loc_82729178;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82729178:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,31512
	ctx.r4.s64 = ctx.r11.s64 + 31512;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233e028
	ctx.lr = 0x82729194;
	sub_8233E028(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// bl 0x822c3050
	ctx.lr = 0x827291A4;
	sub_822C3050(ctx, base);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827291c8
	if (ctx.cr6.eq) goto loc_827291C8;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294520
	ctx.lr = 0x827291C8;
	sub_82294520(ctx, base);
loc_827291C8:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294cc8
	ctx.lr = 0x827291D0;
	sub_82294CC8(ctx, base);
	// addi r3,r28,40
	ctx.r3.s64 = ctx.r28.s64 + 40;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82294ac0
	ctx.lr = 0x827291E8;
	sub_82294AC0(ctx, base);
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827291fc
	if (ctx.cr0.eq) goto loc_827291FC;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
loc_827291FC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82729204"))) PPC_WEAK_FUNC(sub_82729204);
PPC_FUNC_IMPL(__imp__sub_82729204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82729208"))) PPC_WEAK_FUNC(sub_82729208);
PPC_FUNC_IMPL(__imp__sub_82729208) {
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
	// bl 0x8272c2d0
	ctx.lr = 0x82729220;
	sub_8272C2D0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r11,-31604
	ctx.r9.s64 = ctx.r11.s64 + -31604;
	// addi r8,r10,-31560
	ctx.r8.s64 = ctx.r10.s64 + -31560;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,258(r31)
	PPC_STORE_U16(ctx.r31.u32 + 258, ctx.r11.u16);
	// sth r11,262(r31)
	PPC_STORE_U16(ctx.r31.u32 + 262, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_8272925C"))) PPC_WEAK_FUNC(sub_8272925C);
PPC_FUNC_IMPL(__imp__sub_8272925C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82729260"))) PPC_WEAK_FUNC(sub_82729260);
PPC_FUNC_IMPL(__imp__sub_82729260) {
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
	// bl 0x8272c170
	ctx.lr = 0x82729280;
	sub_8272C170(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r11,-31604
	ctx.r9.s64 = ctx.r11.s64 + -31604;
	// addi r8,r10,-31560
	ctx.r8.s64 = ctx.r10.s64 + -31560;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// addi r5,r31,256
	ctx.r5.s64 = ctx.r31.s64 + 256;
	// sth r11,258(r31)
	PPC_STORE_U16(ctx.r31.u32 + 258, ctx.r11.u16);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// sth r11,262(r31)
	PPC_STORE_U16(ctx.r31.u32 + 262, ctx.r11.u16);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r7,31204
	ctx.r4.s64 = ctx.r7.s64 + 31204;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82384520
	ctx.lr = 0x827292BC;
	sub_82384520(ctx, base);
	// addi r5,r31,260
	ctx.r5.s64 = ctx.r31.s64 + 260;
	// lis r4,-32235
	ctx.r4.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r4,31244
	ctx.r4.s64 = ctx.r4.s64 + 31244;
	// bl 0x82384520
	ctx.lr = 0x827292D4;
	sub_82384520(ctx, base);
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

__attribute__((alias("__imp__sub_827292F0"))) PPC_WEAK_FUNC(sub_827292F0);
PPC_FUNC_IMPL(__imp__sub_827292F0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82729304"))) PPC_WEAK_FUNC(sub_82729304);
PPC_FUNC_IMPL(__imp__sub_82729304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82729308"))) PPC_WEAK_FUNC(sub_82729308);
PPC_FUNC_IMPL(__imp__sub_82729308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82729310;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,20944
	ctx.r27.s64 = ctx.r11.s64 + 20944;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// bl 0x8232e868
	ctx.lr = 0x82729334;
	sub_8232E868(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r25,r11,11272
	ctx.r25.s64 = ctx.r11.s64 + 11272;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r30,120(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82729350
	if (!ctx.cr6.eq) goto loc_82729350;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82729350:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,31456
	ctx.r4.s64 = ctx.r11.s64 + 31456;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233e028
	ctx.lr = 0x8272936C;
	sub_8233E028(ctx, base);
	// addi r31,r28,20
	ctx.r31.s64 = ctx.r28.s64 + 20;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c3050
	ctx.lr = 0x82729380;
	sub_822C3050(ctx, base);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// beq cr6,0x827293a8
	if (ctx.cr6.eq) goto loc_827293A8;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294520
	ctx.lr = 0x827293A8;
	sub_82294520(ctx, base);
loc_827293A8:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294cc8
	ctx.lr = 0x827293B0;
	sub_82294CC8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// bl 0x8232e868
	ctx.lr = 0x827293C4;
	sub_8232E868(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r30,120(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bne cr6,0x827293d8
	if (!ctx.cr6.eq) goto loc_827293D8;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_827293D8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,31512
	ctx.r4.s64 = ctx.r11.s64 + 31512;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233e028
	ctx.lr = 0x827293F4;
	sub_8233E028(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// bl 0x822c3050
	ctx.lr = 0x82729404;
	sub_822C3050(ctx, base);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82729428
	if (ctx.cr6.eq) goto loc_82729428;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294520
	ctx.lr = 0x82729428;
	sub_82294520(ctx, base);
loc_82729428:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294cc8
	ctx.lr = 0x82729430;
	sub_82294CC8(ctx, base);
	// addi r3,r28,40
	ctx.r3.s64 = ctx.r28.s64 + 40;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82294ac0
	ctx.lr = 0x82729448;
	sub_82294AC0(ctx, base);
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8272945c
	if (ctx.cr0.eq) goto loc_8272945C;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
loc_8272945C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82729464"))) PPC_WEAK_FUNC(sub_82729464);
PPC_FUNC_IMPL(__imp__sub_82729464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82729468"))) PPC_WEAK_FUNC(sub_82729468);
PPC_FUNC_IMPL(__imp__sub_82729468) {
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
	// bl 0x8272c508
	ctx.lr = 0x82729480;
	sub_8272C508(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r11,-31460
	ctx.r9.s64 = ctx.r11.s64 + -31460;
	// addi r8,r10,-31416
	ctx.r8.s64 = ctx.r10.s64 + -31416;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,386(r31)
	PPC_STORE_U16(ctx.r31.u32 + 386, ctx.r11.u16);
	// sth r11,390(r31)
	PPC_STORE_U16(ctx.r31.u32 + 390, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_827294BC"))) PPC_WEAK_FUNC(sub_827294BC);
PPC_FUNC_IMPL(__imp__sub_827294BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827294C0"))) PPC_WEAK_FUNC(sub_827294C0);
PPC_FUNC_IMPL(__imp__sub_827294C0) {
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
	// bl 0x8272c3a8
	ctx.lr = 0x827294E0;
	sub_8272C3A8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r11,-31460
	ctx.r9.s64 = ctx.r11.s64 + -31460;
	// addi r8,r10,-31416
	ctx.r8.s64 = ctx.r10.s64 + -31416;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// addi r5,r31,384
	ctx.r5.s64 = ctx.r31.s64 + 384;
	// sth r11,386(r31)
	PPC_STORE_U16(ctx.r31.u32 + 386, ctx.r11.u16);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// sth r11,390(r31)
	PPC_STORE_U16(ctx.r31.u32 + 390, ctx.r11.u16);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r7,31204
	ctx.r4.s64 = ctx.r7.s64 + 31204;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82384520
	ctx.lr = 0x8272951C;
	sub_82384520(ctx, base);
	// addi r5,r31,388
	ctx.r5.s64 = ctx.r31.s64 + 388;
	// lis r4,-32235
	ctx.r4.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r4,31244
	ctx.r4.s64 = ctx.r4.s64 + 31244;
	// bl 0x82384520
	ctx.lr = 0x82729534;
	sub_82384520(ctx, base);
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

__attribute__((alias("__imp__sub_82729550"))) PPC_WEAK_FUNC(sub_82729550);
PPC_FUNC_IMPL(__imp__sub_82729550) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82729564"))) PPC_WEAK_FUNC(sub_82729564);
PPC_FUNC_IMPL(__imp__sub_82729564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82729568"))) PPC_WEAK_FUNC(sub_82729568);
PPC_FUNC_IMPL(__imp__sub_82729568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82729570;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,20944
	ctx.r27.s64 = ctx.r11.s64 + 20944;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// bl 0x8232e868
	ctx.lr = 0x82729594;
	sub_8232E868(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r25,r11,11272
	ctx.r25.s64 = ctx.r11.s64 + 11272;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r30,120(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827295b0
	if (!ctx.cr6.eq) goto loc_827295B0;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_827295B0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,31456
	ctx.r4.s64 = ctx.r11.s64 + 31456;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233e028
	ctx.lr = 0x827295CC;
	sub_8233E028(ctx, base);
	// addi r31,r28,20
	ctx.r31.s64 = ctx.r28.s64 + 20;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c3050
	ctx.lr = 0x827295E0;
	sub_822C3050(ctx, base);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// beq cr6,0x82729608
	if (ctx.cr6.eq) goto loc_82729608;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294520
	ctx.lr = 0x82729608;
	sub_82294520(ctx, base);
loc_82729608:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294cc8
	ctx.lr = 0x82729610;
	sub_82294CC8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// bl 0x8232e868
	ctx.lr = 0x82729624;
	sub_8232E868(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r30,120(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bne cr6,0x82729638
	if (!ctx.cr6.eq) goto loc_82729638;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82729638:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,31512
	ctx.r4.s64 = ctx.r11.s64 + 31512;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233e028
	ctx.lr = 0x82729654;
	sub_8233E028(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// bl 0x822c3050
	ctx.lr = 0x82729664;
	sub_822C3050(ctx, base);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82729688
	if (ctx.cr6.eq) goto loc_82729688;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294520
	ctx.lr = 0x82729688;
	sub_82294520(ctx, base);
loc_82729688:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294cc8
	ctx.lr = 0x82729690;
	sub_82294CC8(ctx, base);
	// addi r3,r28,40
	ctx.r3.s64 = ctx.r28.s64 + 40;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82294ac0
	ctx.lr = 0x827296A8;
	sub_82294AC0(ctx, base);
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827296bc
	if (ctx.cr0.eq) goto loc_827296BC;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
loc_827296BC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827296C4"))) PPC_WEAK_FUNC(sub_827296C4);
PPC_FUNC_IMPL(__imp__sub_827296C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827296C8"))) PPC_WEAK_FUNC(sub_827296C8);
PPC_FUNC_IMPL(__imp__sub_827296C8) {
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
	// bl 0x8272c740
	ctx.lr = 0x827296E0;
	sub_8272C740(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r11,-31316
	ctx.r9.s64 = ctx.r11.s64 + -31316;
	// addi r8,r10,-31272
	ctx.r8.s64 = ctx.r10.s64 + -31272;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,450(r31)
	PPC_STORE_U16(ctx.r31.u32 + 450, ctx.r11.u16);
	// sth r11,454(r31)
	PPC_STORE_U16(ctx.r31.u32 + 454, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_8272971C"))) PPC_WEAK_FUNC(sub_8272971C);
PPC_FUNC_IMPL(__imp__sub_8272971C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82729720"))) PPC_WEAK_FUNC(sub_82729720);
PPC_FUNC_IMPL(__imp__sub_82729720) {
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
	// bl 0x8272c5e0
	ctx.lr = 0x82729740;
	sub_8272C5E0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r11,-31316
	ctx.r9.s64 = ctx.r11.s64 + -31316;
	// addi r8,r10,-31272
	ctx.r8.s64 = ctx.r10.s64 + -31272;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// addi r5,r31,448
	ctx.r5.s64 = ctx.r31.s64 + 448;
	// sth r11,450(r31)
	PPC_STORE_U16(ctx.r31.u32 + 450, ctx.r11.u16);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// sth r11,454(r31)
	PPC_STORE_U16(ctx.r31.u32 + 454, ctx.r11.u16);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r7,31204
	ctx.r4.s64 = ctx.r7.s64 + 31204;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82384520
	ctx.lr = 0x8272977C;
	sub_82384520(ctx, base);
	// addi r5,r31,452
	ctx.r5.s64 = ctx.r31.s64 + 452;
	// lis r4,-32235
	ctx.r4.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r4,31244
	ctx.r4.s64 = ctx.r4.s64 + 31244;
	// bl 0x82384520
	ctx.lr = 0x82729794;
	sub_82384520(ctx, base);
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

__attribute__((alias("__imp__sub_827297B0"))) PPC_WEAK_FUNC(sub_827297B0);
PPC_FUNC_IMPL(__imp__sub_827297B0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827297C4"))) PPC_WEAK_FUNC(sub_827297C4);
PPC_FUNC_IMPL(__imp__sub_827297C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827297C8"))) PPC_WEAK_FUNC(sub_827297C8);
PPC_FUNC_IMPL(__imp__sub_827297C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x827297D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,20944
	ctx.r27.s64 = ctx.r11.s64 + 20944;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// bl 0x8232e868
	ctx.lr = 0x827297F4;
	sub_8232E868(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r25,r11,11272
	ctx.r25.s64 = ctx.r11.s64 + 11272;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r30,120(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82729810
	if (!ctx.cr6.eq) goto loc_82729810;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82729810:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,31456
	ctx.r4.s64 = ctx.r11.s64 + 31456;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233e028
	ctx.lr = 0x8272982C;
	sub_8233E028(ctx, base);
	// addi r31,r28,20
	ctx.r31.s64 = ctx.r28.s64 + 20;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c3050
	ctx.lr = 0x82729840;
	sub_822C3050(ctx, base);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// beq cr6,0x82729868
	if (ctx.cr6.eq) goto loc_82729868;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294520
	ctx.lr = 0x82729868;
	sub_82294520(ctx, base);
loc_82729868:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294cc8
	ctx.lr = 0x82729870;
	sub_82294CC8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// bl 0x8232e868
	ctx.lr = 0x82729884;
	sub_8232E868(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r30,120(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bne cr6,0x82729898
	if (!ctx.cr6.eq) goto loc_82729898;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82729898:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,31512
	ctx.r4.s64 = ctx.r11.s64 + 31512;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233e028
	ctx.lr = 0x827298B4;
	sub_8233E028(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// bl 0x822c3050
	ctx.lr = 0x827298C4;
	sub_822C3050(ctx, base);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827298e8
	if (ctx.cr6.eq) goto loc_827298E8;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294520
	ctx.lr = 0x827298E8;
	sub_82294520(ctx, base);
loc_827298E8:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294cc8
	ctx.lr = 0x827298F0;
	sub_82294CC8(ctx, base);
	// addi r3,r28,40
	ctx.r3.s64 = ctx.r28.s64 + 40;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82294ac0
	ctx.lr = 0x82729908;
	sub_82294AC0(ctx, base);
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8272991c
	if (ctx.cr0.eq) goto loc_8272991C;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
loc_8272991C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82729924"))) PPC_WEAK_FUNC(sub_82729924);
PPC_FUNC_IMPL(__imp__sub_82729924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82729928"))) PPC_WEAK_FUNC(sub_82729928);
PPC_FUNC_IMPL(__imp__sub_82729928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82729930;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r8,r11,31812
	ctx.r8.s64 = ctx.r11.s64 + 31812;
	// addi r7,r9,32144
	ctx.r7.s64 = ctx.r9.s64 + 32144;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// rlwimi r11,r10,0,1,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x7FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFF80000000);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// rlwimi r10,r11,0,2,0
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFFFBFFFFFFF) | (ctx.r10.u64 & 0x40000000);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// rlwimi r9,r10,0,3,1
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFDFFFFFFF) | (ctx.r9.u64 & 0x20000000);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// lwz r8,16(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lwz r7,20(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// lwz r6,24(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// bl 0x8272ada8
	ctx.lr = 0x827299B0;
	sub_8272ADA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r31,72
	ctx.r29.s64 = ctx.r31.s64 + 72;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827299DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8238fb58
	ctx.lr = 0x827299E8;
	sub_8238FB58(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358a60
	ctx.lr = 0x827299F0;
	sub_82358A60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827299FC"))) PPC_WEAK_FUNC(sub_827299FC);
PPC_FUNC_IMPL(__imp__sub_827299FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82729A00"))) PPC_WEAK_FUNC(sub_82729A00);
PPC_FUNC_IMPL(__imp__sub_82729A00) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82729a4c
	if (ctx.cr6.eq) goto loc_82729A4C;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x826d1908
	ctx.lr = 0x82729A34;
	sub_826D1908(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8272c908
	ctx.lr = 0x82729A48;
	sub_8272C908(ctx, base);
	// b 0x82729a74
	goto loc_82729A74;
loc_82729A4C:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82729A64;
	sub_82294AC0(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8283ce40
	ctx.lr = 0x82729A74;
	sub_8283CE40(ctx, base);
loc_82729A74:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// slw r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r7.u8 & 0x3F));
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// or r9,r5,r4
	ctx.r9.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82729ABC"))) PPC_WEAK_FUNC(sub_82729ABC);
PPC_FUNC_IMPL(__imp__sub_82729ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82729AC0"))) PPC_WEAK_FUNC(sub_82729AC0);
PPC_FUNC_IMPL(__imp__sub_82729AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82729AC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82729b08
	if (!ctx.cr6.gt) goto loc_82729B08;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82729AE8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x8272c908
	ctx.lr = 0x82729AF4;
	sub_8272C908(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82729ae8
	if (ctx.cr6.lt) goto loc_82729AE8;
loc_82729B08:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82729b40
	if (ctx.cr6.eq) goto loc_82729B40;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82729b2c
	if (!ctx.cr6.eq) goto loc_82729B2C;
	// bl 0x822900a0
	ctx.lr = 0x82729B28;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82729B2C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82729B40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82729B40:
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82729B54"))) PPC_WEAK_FUNC(sub_82729B54);
PPC_FUNC_IMPL(__imp__sub_82729B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82729B58"))) PPC_WEAK_FUNC(sub_82729B58);
PPC_FUNC_IMPL(__imp__sub_82729B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82729B60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x822959a8
	ctx.lr = 0x82729B8C;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82729bb8
	if (ctx.cr6.eq) goto loc_82729BB8;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// addi r9,r11,32252
	ctx.r9.s64 = ctx.r11.s64 + 32252;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x82729bbc
	goto loc_82729BBC;
loc_82729BB8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82729BBC:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82729bd8
	if (ctx.cr6.eq) goto loc_82729BD8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82729BD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82729BE0"))) PPC_WEAK_FUNC(sub_82729BE0);
PPC_FUNC_IMPL(__imp__sub_82729BE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82729BE8"))) PPC_WEAK_FUNC(sub_82729BE8);
PPC_FUNC_IMPL(__imp__sub_82729BE8) {
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
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// addi r4,r4,24
	ctx.r4.s64 = ctx.r4.s64 + 24;
	// bl 0x823a3938
	ctx.lr = 0x82729C0C;
	sub_823A3938(ctx, base);
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

__attribute__((alias("__imp__sub_82729C24"))) PPC_WEAK_FUNC(sub_82729C24);
PPC_FUNC_IMPL(__imp__sub_82729C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82729C28"))) PPC_WEAK_FUNC(sub_82729C28);
PPC_FUNC_IMPL(__imp__sub_82729C28) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// andc r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82729c88
	if (!ctx.cr6.eq) goto loc_82729C88;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82729C50:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// bgt cr6,0x82729cb4
	if (ctx.cr6.gt) goto loc_82729CB4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// beq cr6,0x82729c50
	if (ctx.cr6.eq) goto loc_82729C50;
loc_82729C88:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// andc r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// subf r10,r5,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r5.s64;
	// addi r4,r10,31
	ctx.r4.s64 = ctx.r10.s64 + 31;
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// blr 
	return;
loc_82729CB4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82729CC0"))) PPC_WEAK_FUNC(sub_82729CC0);
PPC_FUNC_IMPL(__imp__sub_82729CC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82729CC8"))) PPC_WEAK_FUNC(sub_82729CC8);
PPC_FUNC_IMPL(__imp__sub_82729CC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82729CE0"))) PPC_WEAK_FUNC(sub_82729CE0);
PPC_FUNC_IMPL(__imp__sub_82729CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82729CE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r8,r11,31812
	ctx.r8.s64 = ctx.r11.s64 + 31812;
	// addi r7,r9,32260
	ctx.r7.s64 = ctx.r9.s64 + 32260;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// rlwimi r11,r10,0,1,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x7FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFF80000000);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// rlwimi r10,r11,0,2,0
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFFFBFFFFFFF) | (ctx.r10.u64 & 0x40000000);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// rlwimi r9,r10,0,3,1
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFDFFFFFFF) | (ctx.r9.u64 & 0x20000000);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// lwz r8,16(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lwz r7,20(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// lwz r6,24(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// lwz r5,28(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// stw r5,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
	// bl 0x8272aee8
	ctx.lr = 0x82729D70;
	sub_8272AEE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r31,72
	ctx.r29.s64 = ctx.r31.s64 + 72;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82729D9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8238fb58
	ctx.lr = 0x82729DA8;
	sub_8238FB58(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358a60
	ctx.lr = 0x82729DB0;
	sub_82358A60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82729DBC"))) PPC_WEAK_FUNC(sub_82729DBC);
PPC_FUNC_IMPL(__imp__sub_82729DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82729DC0"))) PPC_WEAK_FUNC(sub_82729DC0);
PPC_FUNC_IMPL(__imp__sub_82729DC0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82729e0c
	if (ctx.cr6.eq) goto loc_82729E0C;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x826d1908
	ctx.lr = 0x82729DF4;
	sub_826D1908(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8272ca40
	ctx.lr = 0x82729E08;
	sub_8272CA40(ctx, base);
	// b 0x82729e34
	goto loc_82729E34;
loc_82729E0C:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82729E24;
	sub_82294AC0(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8283ce40
	ctx.lr = 0x82729E34;
	sub_8283CE40(ctx, base);
loc_82729E34:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// slw r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r7.u8 & 0x3F));
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// or r9,r5,r4
	ctx.r9.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82729E7C"))) PPC_WEAK_FUNC(sub_82729E7C);
PPC_FUNC_IMPL(__imp__sub_82729E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82729E80"))) PPC_WEAK_FUNC(sub_82729E80);
PPC_FUNC_IMPL(__imp__sub_82729E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82729E88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82729ec8
	if (!ctx.cr6.gt) goto loc_82729EC8;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82729EA8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x8272ca40
	ctx.lr = 0x82729EB4;
	sub_8272CA40(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82729ea8
	if (ctx.cr6.lt) goto loc_82729EA8;
loc_82729EC8:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82729f00
	if (ctx.cr6.eq) goto loc_82729F00;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82729eec
	if (!ctx.cr6.eq) goto loc_82729EEC;
	// bl 0x822900a0
	ctx.lr = 0x82729EE8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82729EEC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82729F00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82729F00:
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82729F14"))) PPC_WEAK_FUNC(sub_82729F14);
PPC_FUNC_IMPL(__imp__sub_82729F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82729F18"))) PPC_WEAK_FUNC(sub_82729F18);
PPC_FUNC_IMPL(__imp__sub_82729F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82729F20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x822959a8
	ctx.lr = 0x82729F50;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82729f7c
	if (ctx.cr6.eq) goto loc_82729F7C;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// addi r9,r11,32368
	ctx.r9.s64 = ctx.r11.s64 + 32368;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x82729f80
	goto loc_82729F80;
loc_82729F7C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82729F80:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82729f98
	if (ctx.cr6.eq) goto loc_82729F98;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82729F98:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lwz r7,12(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82729FC8"))) PPC_WEAK_FUNC(sub_82729FC8);
PPC_FUNC_IMPL(__imp__sub_82729FC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82729FD0"))) PPC_WEAK_FUNC(sub_82729FD0);
PPC_FUNC_IMPL(__imp__sub_82729FD0) {
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
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// addi r4,r4,24
	ctx.r4.s64 = ctx.r4.s64 + 24;
	// bl 0x823a3938
	ctx.lr = 0x82729FF4;
	sub_823A3938(ctx, base);
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

__attribute__((alias("__imp__sub_8272A00C"))) PPC_WEAK_FUNC(sub_8272A00C);
PPC_FUNC_IMPL(__imp__sub_8272A00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272A010"))) PPC_WEAK_FUNC(sub_8272A010);
PPC_FUNC_IMPL(__imp__sub_8272A010) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// andc r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8272a070
	if (!ctx.cr6.eq) goto loc_8272A070;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8272A038:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// bgt cr6,0x8272a09c
	if (ctx.cr6.gt) goto loc_8272A09C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// beq cr6,0x8272a038
	if (ctx.cr6.eq) goto loc_8272A038;
loc_8272A070:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// andc r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// subf r10,r5,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r5.s64;
	// addi r4,r10,31
	ctx.r4.s64 = ctx.r10.s64 + 31;
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// blr 
	return;
loc_8272A09C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272A0A8"))) PPC_WEAK_FUNC(sub_8272A0A8);
PPC_FUNC_IMPL(__imp__sub_8272A0A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272A0B0"))) PPC_WEAK_FUNC(sub_8272A0B0);
PPC_FUNC_IMPL(__imp__sub_8272A0B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mulli r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 * 28;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272A0C8"))) PPC_WEAK_FUNC(sub_8272A0C8);
PPC_FUNC_IMPL(__imp__sub_8272A0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8272A0D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r8,r11,31812
	ctx.r8.s64 = ctx.r11.s64 + 31812;
	// addi r7,r9,32376
	ctx.r7.s64 = ctx.r9.s64 + 32376;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// rlwimi r11,r10,0,1,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x7FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFF80000000);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// rlwimi r10,r11,0,2,0
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFFFBFFFFFFF) | (ctx.r10.u64 & 0x40000000);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// rlwimi r9,r10,0,3,1
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFDFFFFFFF) | (ctx.r9.u64 & 0x20000000);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// lwz r8,16(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lwz r7,20(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// lwz r6,24(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// lwz r5,28(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// stw r5,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
	// bl 0x8272b028
	ctx.lr = 0x8272A158;
	sub_8272B028(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r31,72
	ctx.r29.s64 = ctx.r31.s64 + 72;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8272A184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8238fb58
	ctx.lr = 0x8272A190;
	sub_8238FB58(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358a60
	ctx.lr = 0x8272A198;
	sub_82358A60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8272A1A4"))) PPC_WEAK_FUNC(sub_8272A1A4);
PPC_FUNC_IMPL(__imp__sub_8272A1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272A1A8"))) PPC_WEAK_FUNC(sub_8272A1A8);
PPC_FUNC_IMPL(__imp__sub_8272A1A8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8272a1f4
	if (ctx.cr6.eq) goto loc_8272A1F4;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x826d1908
	ctx.lr = 0x8272A1DC;
	sub_826D1908(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8272cb78
	ctx.lr = 0x8272A1F0;
	sub_8272CB78(ctx, base);
	// b 0x8272a21c
	goto loc_8272A21C;
loc_8272A1F4:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x8272A20C;
	sub_82294AC0(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8283ce40
	ctx.lr = 0x8272A21C;
	sub_8283CE40(ctx, base);
loc_8272A21C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// slw r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r7.u8 & 0x3F));
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// or r9,r5,r4
	ctx.r9.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8272A264"))) PPC_WEAK_FUNC(sub_8272A264);
PPC_FUNC_IMPL(__imp__sub_8272A264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272A268"))) PPC_WEAK_FUNC(sub_8272A268);
PPC_FUNC_IMPL(__imp__sub_8272A268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8272A270;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8272a2b0
	if (!ctx.cr6.gt) goto loc_8272A2B0;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8272A290:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x8272cb78
	ctx.lr = 0x8272A29C;
	sub_8272CB78(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8272a290
	if (ctx.cr6.lt) goto loc_8272A290;
loc_8272A2B0:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8272a2e8
	if (ctx.cr6.eq) goto loc_8272A2E8;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8272a2d4
	if (!ctx.cr6.eq) goto loc_8272A2D4;
	// bl 0x822900a0
	ctx.lr = 0x8272A2D0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8272A2D4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8272A2E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8272A2E8:
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8272A2FC"))) PPC_WEAK_FUNC(sub_8272A2FC);
PPC_FUNC_IMPL(__imp__sub_8272A2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272A300"))) PPC_WEAK_FUNC(sub_8272A300);
PPC_FUNC_IMPL(__imp__sub_8272A300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8272A308;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x822959a8
	ctx.lr = 0x8272A334;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8272a360
	if (ctx.cr6.eq) goto loc_8272A360;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// addi r9,r11,32484
	ctx.r9.s64 = ctx.r11.s64 + 32484;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x8272a364
	goto loc_8272A364;
loc_8272A360:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8272A364:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8272a380
	if (ctx.cr6.eq) goto loc_8272A380;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8272A380:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8272A388"))) PPC_WEAK_FUNC(sub_8272A388);
PPC_FUNC_IMPL(__imp__sub_8272A388) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272A390"))) PPC_WEAK_FUNC(sub_8272A390);
PPC_FUNC_IMPL(__imp__sub_8272A390) {
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
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// addi r4,r4,24
	ctx.r4.s64 = ctx.r4.s64 + 24;
	// bl 0x823a3938
	ctx.lr = 0x8272A3B4;
	sub_823A3938(ctx, base);
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

__attribute__((alias("__imp__sub_8272A3CC"))) PPC_WEAK_FUNC(sub_8272A3CC);
PPC_FUNC_IMPL(__imp__sub_8272A3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272A3D0"))) PPC_WEAK_FUNC(sub_8272A3D0);
PPC_FUNC_IMPL(__imp__sub_8272A3D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// andc r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8272a430
	if (!ctx.cr6.eq) goto loc_8272A430;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8272A3F8:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// bgt cr6,0x8272a45c
	if (ctx.cr6.gt) goto loc_8272A45C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// beq cr6,0x8272a3f8
	if (ctx.cr6.eq) goto loc_8272A3F8;
loc_8272A430:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// andc r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// subf r10,r5,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r5.s64;
	// addi r4,r10,31
	ctx.r4.s64 = ctx.r10.s64 + 31;
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// blr 
	return;
loc_8272A45C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272A468"))) PPC_WEAK_FUNC(sub_8272A468);
PPC_FUNC_IMPL(__imp__sub_8272A468) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272A470"))) PPC_WEAK_FUNC(sub_8272A470);
PPC_FUNC_IMPL(__imp__sub_8272A470) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272A488"))) PPC_WEAK_FUNC(sub_8272A488);
PPC_FUNC_IMPL(__imp__sub_8272A488) {
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
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,18472
	ctx.r30.s64 = ctx.r11.s64 + 18472;
	// lwz r11,18468(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18468);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8272a4d8
	if (!ctx.cr6.eq) goto loc_8272A4D8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,18468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18468, ctx.r11.u32);
	// bl 0x8272d050
	ctx.lr = 0x8272A4CC;
	sub_8272D050(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-8504
	ctx.r3.s64 = ctx.r11.s64 + -8504;
	// bl 0x82cb0ae8
	ctx.lr = 0x8272A4D8;
	sub_82CB0AE8(ctx, base);
loc_8272A4D8:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8272a508
	if (ctx.cr6.eq) goto loc_8272A508;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_8272A508:
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

__attribute__((alias("__imp__sub_8272A520"))) PPC_WEAK_FUNC(sub_8272A520);
PPC_FUNC_IMPL(__imp__sub_8272A520) {
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
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,18500
	ctx.r30.s64 = ctx.r11.s64 + 18500;
	// lwz r11,18496(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18496);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8272a570
	if (!ctx.cr6.eq) goto loc_8272A570;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,18496(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18496, ctx.r11.u32);
	// bl 0x8272d170
	ctx.lr = 0x8272A564;
	sub_8272D170(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-8576
	ctx.r3.s64 = ctx.r11.s64 + -8576;
	// bl 0x82cb0ae8
	ctx.lr = 0x8272A570;
	sub_82CB0AE8(ctx, base);
loc_8272A570:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8272a5a0
	if (ctx.cr6.eq) goto loc_8272A5A0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_8272A5A0:
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

__attribute__((alias("__imp__sub_8272A5B8"))) PPC_WEAK_FUNC(sub_8272A5B8);
PPC_FUNC_IMPL(__imp__sub_8272A5B8) {
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
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r10,-31112
	ctx.r9.s64 = ctx.r10.s64 + -31112;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r7,r8,1
	ctx.r7.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82832788
	ctx.lr = 0x8272A5F8;
	sub_82832788(ctx, base);
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

__attribute__((alias("__imp__sub_8272A610"))) PPC_WEAK_FUNC(sub_8272A610);
PPC_FUNC_IMPL(__imp__sub_8272A610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x8283bf50
	ctx.lr = 0x8272A64C;
	sub_8283BF50(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825fee00
	ctx.lr = 0x8272A65C;
	sub_825FEE00(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8272a694
	if (ctx.cr6.eq) goto loc_8272A694;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne 0x8272a694
	if (!ctx.cr0.eq) goto loc_8272A694;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8272A694;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8272A694:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272A6A8"))) PPC_WEAK_FUNC(sub_8272A6A8);
PPC_FUNC_IMPL(__imp__sub_8272A6A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8272A6EC"))) PPC_WEAK_FUNC(sub_8272A6EC);
PPC_FUNC_IMPL(__imp__sub_8272A6EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272A6F0"))) PPC_WEAK_FUNC(sub_8272A6F0);
PPC_FUNC_IMPL(__imp__sub_8272A6F0) {
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
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r10,-31084
	ctx.r9.s64 = ctx.r10.s64 + -31084;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r7,r8,1
	ctx.r7.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82832788
	ctx.lr = 0x8272A730;
	sub_82832788(ctx, base);
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

__attribute__((alias("__imp__sub_8272A748"))) PPC_WEAK_FUNC(sub_8272A748);
PPC_FUNC_IMPL(__imp__sub_8272A748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x8283bf50
	ctx.lr = 0x8272A780;
	sub_8283BF50(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825fee00
	ctx.lr = 0x8272A790;
	sub_825FEE00(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8272a7c8
	if (ctx.cr6.eq) goto loc_8272A7C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne 0x8272a7c8
	if (!ctx.cr0.eq) goto loc_8272A7C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8272A7C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8272A7C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272A7DC"))) PPC_WEAK_FUNC(sub_8272A7DC);
PPC_FUNC_IMPL(__imp__sub_8272A7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272A7E0"))) PPC_WEAK_FUNC(sub_8272A7E0);
PPC_FUNC_IMPL(__imp__sub_8272A7E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8272A824"))) PPC_WEAK_FUNC(sub_8272A824);
PPC_FUNC_IMPL(__imp__sub_8272A824) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272A828"))) PPC_WEAK_FUNC(sub_8272A828);
PPC_FUNC_IMPL(__imp__sub_8272A828) {
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
	// bl 0x82725e90
	ctx.lr = 0x8272A840;
	sub_82725E90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x8272A848;
	sub_82294A58(ctx, base);
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

__attribute__((alias("__imp__sub_8272A860"))) PPC_WEAK_FUNC(sub_8272A860);
PPC_FUNC_IMPL(__imp__sub_8272A860) {
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
	// bl 0x82725ef8
	ctx.lr = 0x8272A878;
	sub_82725EF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x8272A880;
	sub_82294A58(ctx, base);
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

__attribute__((alias("__imp__sub_8272A898"))) PPC_WEAK_FUNC(sub_8272A898);
PPC_FUNC_IMPL(__imp__sub_8272A898) {
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
	// bl 0x82725f60
	ctx.lr = 0x8272A8B0;
	sub_82725F60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x8272A8B8;
	sub_82294A58(ctx, base);
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

__attribute__((alias("__imp__sub_8272A8D0"))) PPC_WEAK_FUNC(sub_8272A8D0);
PPC_FUNC_IMPL(__imp__sub_8272A8D0) {
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
	// bl 0x82384f38
	ctx.lr = 0x8272A8F0;
	sub_82384F38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8272a908
	if (ctx.cr6.eq) goto loc_8272A908;
	// bl 0x82294a58
	ctx.lr = 0x8272A904;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8272A908:
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

__attribute__((alias("__imp__sub_8272A920"))) PPC_WEAK_FUNC(sub_8272A920);
PPC_FUNC_IMPL(__imp__sub_8272A920) {
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
	// bl 0x82384f38
	ctx.lr = 0x8272A940;
	sub_82384F38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8272a958
	if (ctx.cr6.eq) goto loc_8272A958;
	// bl 0x82294a58
	ctx.lr = 0x8272A954;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8272A958:
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

__attribute__((alias("__imp__sub_8272A970"))) PPC_WEAK_FUNC(sub_8272A970);
PPC_FUNC_IMPL(__imp__sub_8272A970) {
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
	// bl 0x82384f38
	ctx.lr = 0x8272A990;
	sub_82384F38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8272a9a8
	if (ctx.cr6.eq) goto loc_8272A9A8;
	// bl 0x82294a58
	ctx.lr = 0x8272A9A4;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8272A9A8:
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

__attribute__((alias("__imp__sub_8272A9C0"))) PPC_WEAK_FUNC(sub_8272A9C0);
PPC_FUNC_IMPL(__imp__sub_8272A9C0) {
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
	// bl 0x82384f38
	ctx.lr = 0x8272A9E0;
	sub_82384F38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8272a9f8
	if (ctx.cr6.eq) goto loc_8272A9F8;
	// bl 0x82294a58
	ctx.lr = 0x8272A9F4;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8272A9F8:
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

__attribute__((alias("__imp__sub_8272AA10"))) PPC_WEAK_FUNC(sub_8272AA10);
PPC_FUNC_IMPL(__imp__sub_8272AA10) {
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
	// bl 0x82384f38
	ctx.lr = 0x8272AA30;
	sub_82384F38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8272aa48
	if (ctx.cr6.eq) goto loc_8272AA48;
	// bl 0x82294a58
	ctx.lr = 0x8272AA44;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8272AA48:
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

__attribute__((alias("__imp__sub_8272AA60"))) PPC_WEAK_FUNC(sub_8272AA60);
PPC_FUNC_IMPL(__imp__sub_8272AA60) {
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
	// bl 0x82384f38
	ctx.lr = 0x8272AA80;
	sub_82384F38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8272aa98
	if (ctx.cr6.eq) goto loc_8272AA98;
	// bl 0x82294a58
	ctx.lr = 0x8272AA94;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8272AA98:
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

__attribute__((alias("__imp__sub_8272AAB0"))) PPC_WEAK_FUNC(sub_8272AAB0);
PPC_FUNC_IMPL(__imp__sub_8272AAB0) {
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
	// bl 0x82384f38
	ctx.lr = 0x8272AAD0;
	sub_82384F38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8272aae8
	if (ctx.cr6.eq) goto loc_8272AAE8;
	// bl 0x82294a58
	ctx.lr = 0x8272AAE4;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8272AAE8:
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

__attribute__((alias("__imp__sub_8272AB00"))) PPC_WEAK_FUNC(sub_8272AB00);
PPC_FUNC_IMPL(__imp__sub_8272AB00) {
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
	// bl 0x82384f38
	ctx.lr = 0x8272AB20;
	sub_82384F38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8272ab38
	if (ctx.cr6.eq) goto loc_8272AB38;
	// bl 0x82294a58
	ctx.lr = 0x8272AB34;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8272AB38:
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

__attribute__((alias("__imp__sub_8272AB50"))) PPC_WEAK_FUNC(sub_8272AB50);
PPC_FUNC_IMPL(__imp__sub_8272AB50) {
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
	// bl 0x82384f38
	ctx.lr = 0x8272AB70;
	sub_82384F38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8272ab88
	if (ctx.cr6.eq) goto loc_8272AB88;
	// bl 0x82294a58
	ctx.lr = 0x8272AB84;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8272AB88:
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

__attribute__((alias("__imp__sub_8272ABA0"))) PPC_WEAK_FUNC(sub_8272ABA0);
PPC_FUNC_IMPL(__imp__sub_8272ABA0) {
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
	// bl 0x82384f38
	ctx.lr = 0x8272ABC0;
	sub_82384F38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8272abd8
	if (ctx.cr6.eq) goto loc_8272ABD8;
	// bl 0x82294a58
	ctx.lr = 0x8272ABD4;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8272ABD8:
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

__attribute__((alias("__imp__sub_8272ABF0"))) PPC_WEAK_FUNC(sub_8272ABF0);
PPC_FUNC_IMPL(__imp__sub_8272ABF0) {
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
	// bl 0x82384f38
	ctx.lr = 0x8272AC10;
	sub_82384F38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8272ac28
	if (ctx.cr6.eq) goto loc_8272AC28;
	// bl 0x82294a58
	ctx.lr = 0x8272AC24;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8272AC28:
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

__attribute__((alias("__imp__sub_8272AC40"))) PPC_WEAK_FUNC(sub_8272AC40);
PPC_FUNC_IMPL(__imp__sub_8272AC40) {
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
	// bl 0x82384f38
	ctx.lr = 0x8272AC60;
	sub_82384F38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8272ac78
	if (ctx.cr6.eq) goto loc_8272AC78;
	// bl 0x82294a58
	ctx.lr = 0x8272AC74;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8272AC78:
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

__attribute__((alias("__imp__sub_8272AC90"))) PPC_WEAK_FUNC(sub_8272AC90);
PPC_FUNC_IMPL(__imp__sub_8272AC90) {
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
	// bl 0x82384f38
	ctx.lr = 0x8272ACB0;
	sub_82384F38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8272acc8
	if (ctx.cr6.eq) goto loc_8272ACC8;
	// bl 0x82294a58
	ctx.lr = 0x8272ACC4;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8272ACC8:
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

__attribute__((alias("__imp__sub_8272ACE0"))) PPC_WEAK_FUNC(sub_8272ACE0);
PPC_FUNC_IMPL(__imp__sub_8272ACE0) {
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
	// bl 0x82384f38
	ctx.lr = 0x8272AD00;
	sub_82384F38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8272ad18
	if (ctx.cr6.eq) goto loc_8272AD18;
	// bl 0x82294a58
	ctx.lr = 0x8272AD14;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8272AD18:
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

__attribute__((alias("__imp__sub_8272AD30"))) PPC_WEAK_FUNC(sub_8272AD30);
PPC_FUNC_IMPL(__imp__sub_8272AD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r8,r11,31812
	ctx.r8.s64 = ctx.r11.s64 + 31812;
	// addi r7,r9,32144
	ctx.r7.s64 = ctx.r9.s64 + 32144;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwimi r11,r10,0,1,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x7FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFF80000000);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwimi r9,r10,0,1,1
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x40000000) | (ctx.r9.u64 & 0xFFFFFFFFBFFFFFFF);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwimi r6,r8,0,2,2
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x20000000) | (ctx.r6.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// lwz r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272ADA4"))) PPC_WEAK_FUNC(sub_8272ADA4);
PPC_FUNC_IMPL(__imp__sub_8272ADA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272ADA8"))) PPC_WEAK_FUNC(sub_8272ADA8);
PPC_FUNC_IMPL(__imp__sub_8272ADA8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x8283cf20
	ctx.lr = 0x8272ADF4;
	sub_8283CF20(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8272ae1c
	if (ctx.cr6.eq) goto loc_8272AE1C;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82e640b8
	ctx.lr = 0x8272AE1C;
	sub_82E640B8(ctx, base);
loc_8272AE1C:
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

__attribute__((alias("__imp__sub_8272AE38"))) PPC_WEAK_FUNC(sub_8272AE38);
PPC_FUNC_IMPL(__imp__sub_8272AE38) {
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
	// bl 0x8272c908
	ctx.lr = 0x8272AE50;
	sub_8272C908(ctx, base);
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

__attribute__((alias("__imp__sub_8272AE68"))) PPC_WEAK_FUNC(sub_8272AE68);
PPC_FUNC_IMPL(__imp__sub_8272AE68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r8,r11,31812
	ctx.r8.s64 = ctx.r11.s64 + 31812;
	// addi r7,r9,32260
	ctx.r7.s64 = ctx.r9.s64 + 32260;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwimi r11,r10,0,1,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x7FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFF80000000);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwimi r9,r10,0,1,1
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x40000000) | (ctx.r9.u64 & 0xFFFFFFFFBFFFFFFF);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwimi r6,r8,0,2,2
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x20000000) | (ctx.r6.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// lwz r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lwz r9,28(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272AEE4"))) PPC_WEAK_FUNC(sub_8272AEE4);
PPC_FUNC_IMPL(__imp__sub_8272AEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272AEE8"))) PPC_WEAK_FUNC(sub_8272AEE8);
PPC_FUNC_IMPL(__imp__sub_8272AEE8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x8283cf20
	ctx.lr = 0x8272AF34;
	sub_8283CF20(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8272af5c
	if (ctx.cr6.eq) goto loc_8272AF5C;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82e640b8
	ctx.lr = 0x8272AF5C;
	sub_82E640B8(ctx, base);
loc_8272AF5C:
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

__attribute__((alias("__imp__sub_8272AF78"))) PPC_WEAK_FUNC(sub_8272AF78);
PPC_FUNC_IMPL(__imp__sub_8272AF78) {
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
	// bl 0x8272ca40
	ctx.lr = 0x8272AF90;
	sub_8272CA40(ctx, base);
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

__attribute__((alias("__imp__sub_8272AFA8"))) PPC_WEAK_FUNC(sub_8272AFA8);
PPC_FUNC_IMPL(__imp__sub_8272AFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r8,r11,31812
	ctx.r8.s64 = ctx.r11.s64 + 31812;
	// addi r7,r9,32376
	ctx.r7.s64 = ctx.r9.s64 + 32376;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwimi r11,r10,0,1,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x7FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFF80000000);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwimi r9,r10,0,1,1
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x40000000) | (ctx.r9.u64 & 0xFFFFFFFFBFFFFFFF);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwimi r6,r8,0,2,2
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x20000000) | (ctx.r6.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// lwz r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lwz r9,28(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272B024"))) PPC_WEAK_FUNC(sub_8272B024);
PPC_FUNC_IMPL(__imp__sub_8272B024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272B028"))) PPC_WEAK_FUNC(sub_8272B028);
PPC_FUNC_IMPL(__imp__sub_8272B028) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x8283cf20
	ctx.lr = 0x8272B074;
	sub_8283CF20(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8272b09c
	if (ctx.cr6.eq) goto loc_8272B09C;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82e640b8
	ctx.lr = 0x8272B09C;
	sub_82E640B8(ctx, base);
loc_8272B09C:
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

__attribute__((alias("__imp__sub_8272B0B8"))) PPC_WEAK_FUNC(sub_8272B0B8);
PPC_FUNC_IMPL(__imp__sub_8272B0B8) {
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
	// bl 0x8272cb78
	ctx.lr = 0x8272B0D0;
	sub_8272CB78(ctx, base);
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

__attribute__((alias("__imp__sub_8272B0E8"))) PPC_WEAK_FUNC(sub_8272B0E8);
PPC_FUNC_IMPL(__imp__sub_8272B0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,18472
	ctx.r10.s64 = ctx.r11.s64 + 18472;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8272B12C"))) PPC_WEAK_FUNC(sub_8272B12C);
PPC_FUNC_IMPL(__imp__sub_8272B12C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272B130"))) PPC_WEAK_FUNC(sub_8272B130);
PPC_FUNC_IMPL(__imp__sub_8272B130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,18500
	ctx.r10.s64 = ctx.r11.s64 + 18500;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8272B174"))) PPC_WEAK_FUNC(sub_8272B174);
PPC_FUNC_IMPL(__imp__sub_8272B174) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272B178"))) PPC_WEAK_FUNC(sub_8272B178);
PPC_FUNC_IMPL(__imp__sub_8272B178) {
	PPC_FUNC_PROLOGUE();
	// b 0x82725e90
	sub_82725E90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8272B17C"))) PPC_WEAK_FUNC(sub_8272B17C);
PPC_FUNC_IMPL(__imp__sub_8272B17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272B180"))) PPC_WEAK_FUNC(sub_8272B180);
PPC_FUNC_IMPL(__imp__sub_8272B180) {
	PPC_FUNC_PROLOGUE();
	// b 0x82725ef8
	sub_82725EF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8272B184"))) PPC_WEAK_FUNC(sub_8272B184);
PPC_FUNC_IMPL(__imp__sub_8272B184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272B188"))) PPC_WEAK_FUNC(sub_8272B188);
PPC_FUNC_IMPL(__imp__sub_8272B188) {
	PPC_FUNC_PROLOGUE();
	// b 0x82725f60
	sub_82725F60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8272B18C"))) PPC_WEAK_FUNC(sub_8272B18C);
PPC_FUNC_IMPL(__imp__sub_8272B18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272B190"))) PPC_WEAK_FUNC(sub_8272B190);
PPC_FUNC_IMPL(__imp__sub_8272B190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,31812
	ctx.r9.s64 = ctx.r11.s64 + 31812;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwimi r6,r10,0,1,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x7FFFFFFF) | (ctx.r6.u64 & 0xFFFFFFFF80000000);
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwimi r5,r11,0,1,1
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x40000000) | (ctx.r5.u64 & 0xFFFFFFFFBFFFFFFF);
	// rotlwi r10,r5,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwimi r10,r9,0,2,2
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x20000000) | (ctx.r10.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272B1E0"))) PPC_WEAK_FUNC(sub_8272B1E0);
PPC_FUNC_IMPL(__imp__sub_8272B1E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82725e90
	sub_82725E90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8272B1E4"))) PPC_WEAK_FUNC(sub_8272B1E4);
PPC_FUNC_IMPL(__imp__sub_8272B1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272B1E8"))) PPC_WEAK_FUNC(sub_8272B1E8);
PPC_FUNC_IMPL(__imp__sub_8272B1E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82725ef8
	sub_82725EF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8272B1EC"))) PPC_WEAK_FUNC(sub_8272B1EC);
PPC_FUNC_IMPL(__imp__sub_8272B1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272B1F0"))) PPC_WEAK_FUNC(sub_8272B1F0);
PPC_FUNC_IMPL(__imp__sub_8272B1F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82725f60
	sub_82725F60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8272B1F4"))) PPC_WEAK_FUNC(sub_8272B1F4);
PPC_FUNC_IMPL(__imp__sub_8272B1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272B1F8"))) PPC_WEAK_FUNC(sub_8272B1F8);
PPC_FUNC_IMPL(__imp__sub_8272B1F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r4,r6,26,0,5
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0xFC000000;
	// subfic r11,r5,32
	ctx.xer.ca = ctx.r5.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r5.s64;
	// srawi r8,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 31;
	// andc r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// slw r11,r10,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r7.u8 & 0x3F));
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// b 0x8272d6d8
	sub_8272D6D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8272B240"))) PPC_WEAK_FUNC(sub_8272B240);
PPC_FUNC_IMPL(__imp__sub_8272B240) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272B244"))) PPC_WEAK_FUNC(sub_8272B244);
PPC_FUNC_IMPL(__imp__sub_8272B244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272B248"))) PPC_WEAK_FUNC(sub_8272B248);
PPC_FUNC_IMPL(__imp__sub_8272B248) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x8272d6d8
	sub_8272D6D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8272B258"))) PPC_WEAK_FUNC(sub_8272B258);
PPC_FUNC_IMPL(__imp__sub_8272B258) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272B25C"))) PPC_WEAK_FUNC(sub_8272B25C);
PPC_FUNC_IMPL(__imp__sub_8272B25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272B260"))) PPC_WEAK_FUNC(sub_8272B260);
PPC_FUNC_IMPL(__imp__sub_8272B260) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272B268"))) PPC_WEAK_FUNC(sub_8272B268);
PPC_FUNC_IMPL(__imp__sub_8272B268) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8272B278"))) PPC_WEAK_FUNC(sub_8272B278);
PPC_FUNC_IMPL(__imp__sub_8272B278) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8272ea80
	sub_8272EA80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8272B284"))) PPC_WEAK_FUNC(sub_8272B284);
PPC_FUNC_IMPL(__imp__sub_8272B284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272B288"))) PPC_WEAK_FUNC(sub_8272B288);
PPC_FUNC_IMPL(__imp__sub_8272B288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r4,r6,26,0,5
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0xFC000000;
	// subfic r11,r5,32
	ctx.xer.ca = ctx.r5.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r5.s64;
	// srawi r8,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 31;
	// andc r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// slw r11,r10,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r7.u8 & 0x3F));
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// b 0x8272d860
	sub_8272D860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8272B2D0"))) PPC_WEAK_FUNC(sub_8272B2D0);
PPC_FUNC_IMPL(__imp__sub_8272B2D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272B2D4"))) PPC_WEAK_FUNC(sub_8272B2D4);
PPC_FUNC_IMPL(__imp__sub_8272B2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272B2D8"))) PPC_WEAK_FUNC(sub_8272B2D8);
PPC_FUNC_IMPL(__imp__sub_8272B2D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x8272d860
	sub_8272D860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8272B2E8"))) PPC_WEAK_FUNC(sub_8272B2E8);
PPC_FUNC_IMPL(__imp__sub_8272B2E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272B2EC"))) PPC_WEAK_FUNC(sub_8272B2EC);
PPC_FUNC_IMPL(__imp__sub_8272B2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272B2F0"))) PPC_WEAK_FUNC(sub_8272B2F0);
PPC_FUNC_IMPL(__imp__sub_8272B2F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272B2F8"))) PPC_WEAK_FUNC(sub_8272B2F8);
PPC_FUNC_IMPL(__imp__sub_8272B2F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8272B308"))) PPC_WEAK_FUNC(sub_8272B308);
PPC_FUNC_IMPL(__imp__sub_8272B308) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8272ea80
	sub_8272EA80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8272B314"))) PPC_WEAK_FUNC(sub_8272B314);
PPC_FUNC_IMPL(__imp__sub_8272B314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272B318"))) PPC_WEAK_FUNC(sub_8272B318);
PPC_FUNC_IMPL(__imp__sub_8272B318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r4,r6,26,0,5
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0xFC000000;
	// subfic r11,r5,32
	ctx.xer.ca = ctx.r5.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r5.s64;
	// srawi r8,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 31;
	// andc r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// slw r11,r10,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r7.u8 & 0x3F));
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// b 0x8272d9e8
	sub_8272D9E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8272B360"))) PPC_WEAK_FUNC(sub_8272B360);
PPC_FUNC_IMPL(__imp__sub_8272B360) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272B364"))) PPC_WEAK_FUNC(sub_8272B364);
PPC_FUNC_IMPL(__imp__sub_8272B364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272B368"))) PPC_WEAK_FUNC(sub_8272B368);
PPC_FUNC_IMPL(__imp__sub_8272B368) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x8272d9e8
	sub_8272D9E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8272B378"))) PPC_WEAK_FUNC(sub_8272B378);
PPC_FUNC_IMPL(__imp__sub_8272B378) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272B37C"))) PPC_WEAK_FUNC(sub_8272B37C);
PPC_FUNC_IMPL(__imp__sub_8272B37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272B380"))) PPC_WEAK_FUNC(sub_8272B380);
PPC_FUNC_IMPL(__imp__sub_8272B380) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272B388"))) PPC_WEAK_FUNC(sub_8272B388);
PPC_FUNC_IMPL(__imp__sub_8272B388) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8272B398"))) PPC_WEAK_FUNC(sub_8272B398);
PPC_FUNC_IMPL(__imp__sub_8272B398) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8272ea80
	sub_8272EA80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8272B3A4"))) PPC_WEAK_FUNC(sub_8272B3A4);
PPC_FUNC_IMPL(__imp__sub_8272B3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272B3A8"))) PPC_WEAK_FUNC(sub_8272B3A8);
PPC_FUNC_IMPL(__imp__sub_8272B3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r11,-3152
	ctx.r4.s64 = ctx.r11.s64 + -3152;
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// b 0x82bea998
	sub_82BEA998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8272B3BC"))) PPC_WEAK_FUNC(sub_8272B3BC);
PPC_FUNC_IMPL(__imp__sub_8272B3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272B3C0"))) PPC_WEAK_FUNC(sub_8272B3C0);
PPC_FUNC_IMPL(__imp__sub_8272B3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r11,-3152
	ctx.r4.s64 = ctx.r11.s64 + -3152;
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// b 0x82bea998
	sub_82BEA998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8272B3D4"))) PPC_WEAK_FUNC(sub_8272B3D4);
PPC_FUNC_IMPL(__imp__sub_8272B3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272B3D8"))) PPC_WEAK_FUNC(sub_8272B3D8);
PPC_FUNC_IMPL(__imp__sub_8272B3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r11,-3280
	ctx.r4.s64 = ctx.r11.s64 + -3280;
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// b 0x82bea998
	sub_82BEA998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8272B3EC"))) PPC_WEAK_FUNC(sub_8272B3EC);
PPC_FUNC_IMPL(__imp__sub_8272B3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272B3F0"))) PPC_WEAK_FUNC(sub_8272B3F0);
PPC_FUNC_IMPL(__imp__sub_8272B3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r11,-3280
	ctx.r4.s64 = ctx.r11.s64 + -3280;
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// b 0x82bea998
	sub_82BEA998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8272B404"))) PPC_WEAK_FUNC(sub_8272B404);
PPC_FUNC_IMPL(__imp__sub_8272B404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272B408"))) PPC_WEAK_FUNC(sub_8272B408);
PPC_FUNC_IMPL(__imp__sub_8272B408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r11,-3280
	ctx.r4.s64 = ctx.r11.s64 + -3280;
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// b 0x82bea998
	sub_82BEA998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8272B41C"))) PPC_WEAK_FUNC(sub_8272B41C);
PPC_FUNC_IMPL(__imp__sub_8272B41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272B420"))) PPC_WEAK_FUNC(sub_8272B420);
PPC_FUNC_IMPL(__imp__sub_8272B420) {
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
	// bl 0x82384e58
	ctx.lr = 0x8272B440;
	sub_82384E58(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r11,-32420
	ctx.r9.s64 = ctx.r11.s64 + -32420;
	// addi r8,r10,-32376
	ctx.r8.s64 = ctx.r10.s64 + -32376;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// addi r3,r31,146
	ctx.r3.s64 = ctx.r31.s64 + 146;
	// sth r11,148(r31)
	PPC_STORE_U16(ctx.r31.u32 + 148, ctx.r11.u16);
	// sth r11,152(r31)
	PPC_STORE_U16(ctx.r31.u32 + 152, ctx.r11.u16);
	// sth r11,156(r31)
	PPC_STORE_U16(ctx.r31.u32 + 156, ctx.r11.u16);
	// sth r11,160(r31)
	PPC_STORE_U16(ctx.r31.u32 + 160, ctx.r11.u16);
	// sth r11,164(r31)
	PPC_STORE_U16(ctx.r31.u32 + 164, ctx.r11.u16);
	// sth r11,168(r31)
	PPC_STORE_U16(ctx.r31.u32 + 168, ctx.r11.u16);
	// sth r11,172(r31)
	PPC_STORE_U16(ctx.r31.u32 + 172, ctx.r11.u16);
	// sth r11,176(r31)
	PPC_STORE_U16(ctx.r31.u32 + 176, ctx.r11.u16);
	// sth r11,180(r31)
	PPC_STORE_U16(ctx.r31.u32 + 180, ctx.r11.u16);
	// sth r11,184(r31)
	PPC_STORE_U16(ctx.r31.u32 + 184, ctx.r11.u16);
	// sth r11,188(r31)
	PPC_STORE_U16(ctx.r31.u32 + 188, ctx.r11.u16);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8287e0c8
	ctx.lr = 0x8272B494;
	sub_8287E0C8(ctx, base);
	// addi r5,r31,162
	ctx.r5.s64 = ctx.r31.s64 + 162;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r7,31308
	ctx.r4.s64 = ctx.r7.s64 + 31308;
	// bl 0x82384520
	ctx.lr = 0x8272B4AC;
	sub_82384520(ctx, base);
	// addi r5,r31,182
	ctx.r5.s64 = ctx.r31.s64 + 182;
	// lis r4,-32235
	ctx.r4.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r4,31560
	ctx.r4.s64 = ctx.r4.s64 + 31560;
	// bl 0x82384520
	ctx.lr = 0x8272B4C4;
	sub_82384520(ctx, base);
	// addi r5,r31,166
	ctx.r5.s64 = ctx.r31.s64 + 166;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r11,31352
	ctx.r4.s64 = ctx.r11.s64 + 31352;
	// bl 0x82384520
	ctx.lr = 0x8272B4DC;
	sub_82384520(ctx, base);
	// addi r5,r31,170
	ctx.r5.s64 = ctx.r31.s64 + 170;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r10,31612
	ctx.r4.s64 = ctx.r10.s64 + 31612;
	// bl 0x82384520
	ctx.lr = 0x8272B4F4;
	sub_82384520(ctx, base);
	// addi r5,r31,174
	ctx.r5.s64 = ctx.r31.s64 + 174;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r9,31652
	ctx.r4.s64 = ctx.r9.s64 + 31652;
	// bl 0x82384520
	ctx.lr = 0x8272B50C;
	sub_82384520(ctx, base);
	// addi r5,r31,178
	ctx.r5.s64 = ctx.r31.s64 + 178;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r8,31696
	ctx.r4.s64 = ctx.r8.s64 + 31696;
	// bl 0x82384520
	ctx.lr = 0x8272B524;
	sub_82384520(ctx, base);
	// addi r5,r31,186
	ctx.r5.s64 = ctx.r31.s64 + 186;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r7,31420
	ctx.r4.s64 = ctx.r7.s64 + 31420;
	// bl 0x82384520
	ctx.lr = 0x8272B53C;
	sub_82384520(ctx, base);
	// lis r6,-31905
	ctx.r6.s64 = -2090926080;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r6,-3120
	ctx.r4.s64 = ctx.r6.s64 + -3120;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82bea998
	ctx.lr = 0x8272B550;
	sub_82BEA998(ctx, base);
	// lis r5,-31905
	ctx.r5.s64 = -2090926080;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r5,-3024
	ctx.r4.s64 = ctx.r5.s64 + -3024;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82bea998
	ctx.lr = 0x8272B564;
	sub_82BEA998(ctx, base);
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

__attribute__((alias("__imp__sub_8272B580"))) PPC_WEAK_FUNC(sub_8272B580);
PPC_FUNC_IMPL(__imp__sub_8272B580) {
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
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r8,r10,-18820
	ctx.r8.s64 = ctx.r10.s64 + -18820;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r10,r9,-32420
	ctx.r10.s64 = ctx.r9.s64 + -32420;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// addi r9,r5,-32376
	ctx.r9.s64 = ctx.r5.s64 + -32376;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lis r8,-31905
	ctx.r8.s64 = -2090926080;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r4,r8,-3120
	ctx.r4.s64 = ctx.r8.s64 + -3120;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// sth r11,148(r31)
	PPC_STORE_U16(ctx.r31.u32 + 148, ctx.r11.u16);
	// sth r11,152(r31)
	PPC_STORE_U16(ctx.r31.u32 + 152, ctx.r11.u16);
	// sth r11,156(r31)
	PPC_STORE_U16(ctx.r31.u32 + 156, ctx.r11.u16);
	// sth r11,160(r31)
	PPC_STORE_U16(ctx.r31.u32 + 160, ctx.r11.u16);
	// sth r11,164(r31)
	PPC_STORE_U16(ctx.r31.u32 + 164, ctx.r11.u16);
	// sth r11,168(r31)
	PPC_STORE_U16(ctx.r31.u32 + 168, ctx.r11.u16);
	// sth r11,172(r31)
	PPC_STORE_U16(ctx.r31.u32 + 172, ctx.r11.u16);
	// sth r11,176(r31)
	PPC_STORE_U16(ctx.r31.u32 + 176, ctx.r11.u16);
	// sth r11,180(r31)
	PPC_STORE_U16(ctx.r31.u32 + 180, ctx.r11.u16);
	// sth r11,184(r31)
	PPC_STORE_U16(ctx.r31.u32 + 184, ctx.r11.u16);
	// sth r11,188(r31)
	PPC_STORE_U16(ctx.r31.u32 + 188, ctx.r11.u16);
	// bl 0x82bea998
	ctx.lr = 0x8272B62C;
	sub_82BEA998(ctx, base);
	// lis r7,-31905
	ctx.r7.s64 = -2090926080;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r7,-3024
	ctx.r4.s64 = ctx.r7.s64 + -3024;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82bea998
	ctx.lr = 0x8272B640;
	sub_82BEA998(ctx, base);
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

__attribute__((alias("__imp__sub_8272B658"))) PPC_WEAK_FUNC(sub_8272B658);
PPC_FUNC_IMPL(__imp__sub_8272B658) {
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
	// bl 0x82384e58
	ctx.lr = 0x8272B678;
	sub_82384E58(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r11,-32276
	ctx.r9.s64 = ctx.r11.s64 + -32276;
	// addi r8,r10,-32232
	ctx.r8.s64 = ctx.r10.s64 + -32232;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// addi r3,r31,178
	ctx.r3.s64 = ctx.r31.s64 + 178;
	// sth r11,180(r31)
	PPC_STORE_U16(ctx.r31.u32 + 180, ctx.r11.u16);
	// sth r11,184(r31)
	PPC_STORE_U16(ctx.r31.u32 + 184, ctx.r11.u16);
	// sth r11,188(r31)
	PPC_STORE_U16(ctx.r31.u32 + 188, ctx.r11.u16);
	// sth r11,192(r31)
	PPC_STORE_U16(ctx.r31.u32 + 192, ctx.r11.u16);
	// sth r11,196(r31)
	PPC_STORE_U16(ctx.r31.u32 + 196, ctx.r11.u16);
	// sth r11,200(r31)
	PPC_STORE_U16(ctx.r31.u32 + 200, ctx.r11.u16);
	// sth r11,204(r31)
	PPC_STORE_U16(ctx.r31.u32 + 204, ctx.r11.u16);
	// sth r11,208(r31)
	PPC_STORE_U16(ctx.r31.u32 + 208, ctx.r11.u16);
	// sth r11,212(r31)
	PPC_STORE_U16(ctx.r31.u32 + 212, ctx.r11.u16);
	// sth r11,216(r31)
	PPC_STORE_U16(ctx.r31.u32 + 216, ctx.r11.u16);
	// sth r11,220(r31)
	PPC_STORE_U16(ctx.r31.u32 + 220, ctx.r11.u16);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8287e0c8
	ctx.lr = 0x8272B6CC;
	sub_8287E0C8(ctx, base);
	// addi r5,r31,194
	ctx.r5.s64 = ctx.r31.s64 + 194;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r7,31308
	ctx.r4.s64 = ctx.r7.s64 + 31308;
	// bl 0x82384520
	ctx.lr = 0x8272B6E4;
	sub_82384520(ctx, base);
	// addi r5,r31,214
	ctx.r5.s64 = ctx.r31.s64 + 214;
	// lis r4,-32235
	ctx.r4.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r4,31560
	ctx.r4.s64 = ctx.r4.s64 + 31560;
	// bl 0x82384520
	ctx.lr = 0x8272B6FC;
	sub_82384520(ctx, base);
	// addi r5,r31,198
	ctx.r5.s64 = ctx.r31.s64 + 198;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r11,31352
	ctx.r4.s64 = ctx.r11.s64 + 31352;
	// bl 0x82384520
	ctx.lr = 0x8272B714;
	sub_82384520(ctx, base);
	// addi r5,r31,202
	ctx.r5.s64 = ctx.r31.s64 + 202;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r10,31612
	ctx.r4.s64 = ctx.r10.s64 + 31612;
	// bl 0x82384520
	ctx.lr = 0x8272B72C;
	sub_82384520(ctx, base);
	// addi r5,r31,206
	ctx.r5.s64 = ctx.r31.s64 + 206;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r9,31652
	ctx.r4.s64 = ctx.r9.s64 + 31652;
	// bl 0x82384520
	ctx.lr = 0x8272B744;
	sub_82384520(ctx, base);
	// addi r5,r31,210
	ctx.r5.s64 = ctx.r31.s64 + 210;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r8,31696
	ctx.r4.s64 = ctx.r8.s64 + 31696;
	// bl 0x82384520
	ctx.lr = 0x8272B75C;
	sub_82384520(ctx, base);
	// addi r5,r31,218
	ctx.r5.s64 = ctx.r31.s64 + 218;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r7,31420
	ctx.r4.s64 = ctx.r7.s64 + 31420;
	// bl 0x82384520
	ctx.lr = 0x8272B774;
	sub_82384520(ctx, base);
	// lis r6,-31905
	ctx.r6.s64 = -2090926080;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r6,-3120
	ctx.r4.s64 = ctx.r6.s64 + -3120;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82bea998
	ctx.lr = 0x8272B788;
	sub_82BEA998(ctx, base);
	// lis r5,-31905
	ctx.r5.s64 = -2090926080;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r5,-2992
	ctx.r4.s64 = ctx.r5.s64 + -2992;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82bea998
	ctx.lr = 0x8272B79C;
	sub_82BEA998(ctx, base);
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

__attribute__((alias("__imp__sub_8272B7B8"))) PPC_WEAK_FUNC(sub_8272B7B8);
PPC_FUNC_IMPL(__imp__sub_8272B7B8) {
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
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r8,r10,-18820
	ctx.r8.s64 = ctx.r10.s64 + -18820;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r10,r9,-32276
	ctx.r10.s64 = ctx.r9.s64 + -32276;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// addi r9,r5,-32232
	ctx.r9.s64 = ctx.r5.s64 + -32232;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lis r8,-31905
	ctx.r8.s64 = -2090926080;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r4,r8,-3120
	ctx.r4.s64 = ctx.r8.s64 + -3120;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// sth r11,180(r31)
	PPC_STORE_U16(ctx.r31.u32 + 180, ctx.r11.u16);
	// sth r11,184(r31)
	PPC_STORE_U16(ctx.r31.u32 + 184, ctx.r11.u16);
	// sth r11,188(r31)
	PPC_STORE_U16(ctx.r31.u32 + 188, ctx.r11.u16);
	// sth r11,192(r31)
	PPC_STORE_U16(ctx.r31.u32 + 192, ctx.r11.u16);
	// sth r11,196(r31)
	PPC_STORE_U16(ctx.r31.u32 + 196, ctx.r11.u16);
	// sth r11,200(r31)
	PPC_STORE_U16(ctx.r31.u32 + 200, ctx.r11.u16);
	// sth r11,204(r31)
	PPC_STORE_U16(ctx.r31.u32 + 204, ctx.r11.u16);
	// sth r11,208(r31)
	PPC_STORE_U16(ctx.r31.u32 + 208, ctx.r11.u16);
	// sth r11,212(r31)
	PPC_STORE_U16(ctx.r31.u32 + 212, ctx.r11.u16);
	// sth r11,216(r31)
	PPC_STORE_U16(ctx.r31.u32 + 216, ctx.r11.u16);
	// sth r11,220(r31)
	PPC_STORE_U16(ctx.r31.u32 + 220, ctx.r11.u16);
	// bl 0x82bea998
	ctx.lr = 0x8272B864;
	sub_82BEA998(ctx, base);
	// lis r7,-31905
	ctx.r7.s64 = -2090926080;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r7,-2992
	ctx.r4.s64 = ctx.r7.s64 + -2992;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82bea998
	ctx.lr = 0x8272B878;
	sub_82BEA998(ctx, base);
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

__attribute__((alias("__imp__sub_8272B890"))) PPC_WEAK_FUNC(sub_8272B890);
PPC_FUNC_IMPL(__imp__sub_8272B890) {
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
	// bl 0x82384e58
	ctx.lr = 0x8272B8B0;
	sub_82384E58(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r11,-32132
	ctx.r9.s64 = ctx.r11.s64 + -32132;
	// addi r8,r10,-32088
	ctx.r8.s64 = ctx.r10.s64 + -32088;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// addi r3,r31,242
	ctx.r3.s64 = ctx.r31.s64 + 242;
	// sth r11,244(r31)
	PPC_STORE_U16(ctx.r31.u32 + 244, ctx.r11.u16);
	// sth r11,248(r31)
	PPC_STORE_U16(ctx.r31.u32 + 248, ctx.r11.u16);
	// sth r11,252(r31)
	PPC_STORE_U16(ctx.r31.u32 + 252, ctx.r11.u16);
	// sth r11,256(r31)
	PPC_STORE_U16(ctx.r31.u32 + 256, ctx.r11.u16);
	// sth r11,260(r31)
	PPC_STORE_U16(ctx.r31.u32 + 260, ctx.r11.u16);
	// sth r11,264(r31)
	PPC_STORE_U16(ctx.r31.u32 + 264, ctx.r11.u16);
	// sth r11,268(r31)
	PPC_STORE_U16(ctx.r31.u32 + 268, ctx.r11.u16);
	// sth r11,272(r31)
	PPC_STORE_U16(ctx.r31.u32 + 272, ctx.r11.u16);
	// sth r11,276(r31)
	PPC_STORE_U16(ctx.r31.u32 + 276, ctx.r11.u16);
	// sth r11,280(r31)
	PPC_STORE_U16(ctx.r31.u32 + 280, ctx.r11.u16);
	// sth r11,284(r31)
	PPC_STORE_U16(ctx.r31.u32 + 284, ctx.r11.u16);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8287e0c8
	ctx.lr = 0x8272B904;
	sub_8287E0C8(ctx, base);
	// addi r5,r31,258
	ctx.r5.s64 = ctx.r31.s64 + 258;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r7,31308
	ctx.r4.s64 = ctx.r7.s64 + 31308;
	// bl 0x82384520
	ctx.lr = 0x8272B91C;
	sub_82384520(ctx, base);
	// addi r5,r31,278
	ctx.r5.s64 = ctx.r31.s64 + 278;
	// lis r4,-32235
	ctx.r4.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r4,31560
	ctx.r4.s64 = ctx.r4.s64 + 31560;
	// bl 0x82384520
	ctx.lr = 0x8272B934;
	sub_82384520(ctx, base);
	// addi r5,r31,262
	ctx.r5.s64 = ctx.r31.s64 + 262;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r11,31352
	ctx.r4.s64 = ctx.r11.s64 + 31352;
	// bl 0x82384520
	ctx.lr = 0x8272B94C;
	sub_82384520(ctx, base);
	// addi r5,r31,266
	ctx.r5.s64 = ctx.r31.s64 + 266;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r10,31612
	ctx.r4.s64 = ctx.r10.s64 + 31612;
	// bl 0x82384520
	ctx.lr = 0x8272B964;
	sub_82384520(ctx, base);
	// addi r5,r31,270
	ctx.r5.s64 = ctx.r31.s64 + 270;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r9,31652
	ctx.r4.s64 = ctx.r9.s64 + 31652;
	// bl 0x82384520
	ctx.lr = 0x8272B97C;
	sub_82384520(ctx, base);
	// addi r5,r31,274
	ctx.r5.s64 = ctx.r31.s64 + 274;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r8,31696
	ctx.r4.s64 = ctx.r8.s64 + 31696;
	// bl 0x82384520
	ctx.lr = 0x8272B994;
	sub_82384520(ctx, base);
	// addi r5,r31,282
	ctx.r5.s64 = ctx.r31.s64 + 282;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r7,31420
	ctx.r4.s64 = ctx.r7.s64 + 31420;
	// bl 0x82384520
	ctx.lr = 0x8272B9AC;
	sub_82384520(ctx, base);
	// lis r6,-31905
	ctx.r6.s64 = -2090926080;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r6,-3088
	ctx.r4.s64 = ctx.r6.s64 + -3088;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82bea998
	ctx.lr = 0x8272B9C0;
	sub_82BEA998(ctx, base);
	// lis r5,-31905
	ctx.r5.s64 = -2090926080;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// addi r4,r5,-2928
	ctx.r4.s64 = ctx.r5.s64 + -2928;
	// li r5,96
	ctx.r5.s64 = 96;
	// bl 0x82bea998
	ctx.lr = 0x8272B9D4;
	sub_82BEA998(ctx, base);
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

__attribute__((alias("__imp__sub_8272B9F0"))) PPC_WEAK_FUNC(sub_8272B9F0);
PPC_FUNC_IMPL(__imp__sub_8272B9F0) {
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
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r8,r10,-18820
	ctx.r8.s64 = ctx.r10.s64 + -18820;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r10,r9,-32132
	ctx.r10.s64 = ctx.r9.s64 + -32132;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// addi r9,r5,-32088
	ctx.r9.s64 = ctx.r5.s64 + -32088;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lis r8,-31905
	ctx.r8.s64 = -2090926080;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r4,r8,-3088
	ctx.r4.s64 = ctx.r8.s64 + -3088;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// sth r11,244(r31)
	PPC_STORE_U16(ctx.r31.u32 + 244, ctx.r11.u16);
	// sth r11,248(r31)
	PPC_STORE_U16(ctx.r31.u32 + 248, ctx.r11.u16);
	// sth r11,252(r31)
	PPC_STORE_U16(ctx.r31.u32 + 252, ctx.r11.u16);
	// sth r11,256(r31)
	PPC_STORE_U16(ctx.r31.u32 + 256, ctx.r11.u16);
	// sth r11,260(r31)
	PPC_STORE_U16(ctx.r31.u32 + 260, ctx.r11.u16);
	// sth r11,264(r31)
	PPC_STORE_U16(ctx.r31.u32 + 264, ctx.r11.u16);
	// sth r11,268(r31)
	PPC_STORE_U16(ctx.r31.u32 + 268, ctx.r11.u16);
	// sth r11,272(r31)
	PPC_STORE_U16(ctx.r31.u32 + 272, ctx.r11.u16);
	// sth r11,276(r31)
	PPC_STORE_U16(ctx.r31.u32 + 276, ctx.r11.u16);
	// sth r11,280(r31)
	PPC_STORE_U16(ctx.r31.u32 + 280, ctx.r11.u16);
	// sth r11,284(r31)
	PPC_STORE_U16(ctx.r31.u32 + 284, ctx.r11.u16);
	// bl 0x82bea998
	ctx.lr = 0x8272BA9C;
	sub_82BEA998(ctx, base);
	// lis r7,-31905
	ctx.r7.s64 = -2090926080;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// addi r4,r7,-2928
	ctx.r4.s64 = ctx.r7.s64 + -2928;
	// li r5,96
	ctx.r5.s64 = 96;
	// bl 0x82bea998
	ctx.lr = 0x8272BAB0;
	sub_82BEA998(ctx, base);
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

__attribute__((alias("__imp__sub_8272BAC8"))) PPC_WEAK_FUNC(sub_8272BAC8);
PPC_FUNC_IMPL(__imp__sub_8272BAC8) {
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
	// bl 0x82384e58
	ctx.lr = 0x8272BAE8;
	sub_82384E58(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r11,-31988
	ctx.r9.s64 = ctx.r11.s64 + -31988;
	// addi r8,r10,-31944
	ctx.r8.s64 = ctx.r10.s64 + -31944;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// addi r3,r31,146
	ctx.r3.s64 = ctx.r31.s64 + 146;
	// sth r11,148(r31)
	PPC_STORE_U16(ctx.r31.u32 + 148, ctx.r11.u16);
	// sth r11,152(r31)
	PPC_STORE_U16(ctx.r31.u32 + 152, ctx.r11.u16);
	// sth r11,156(r31)
	PPC_STORE_U16(ctx.r31.u32 + 156, ctx.r11.u16);
	// sth r11,160(r31)
	PPC_STORE_U16(ctx.r31.u32 + 160, ctx.r11.u16);
	// sth r11,164(r31)
	PPC_STORE_U16(ctx.r31.u32 + 164, ctx.r11.u16);
	// sth r11,168(r31)
	PPC_STORE_U16(ctx.r31.u32 + 168, ctx.r11.u16);
	// sth r11,172(r31)
	PPC_STORE_U16(ctx.r31.u32 + 172, ctx.r11.u16);
	// sth r11,176(r31)
	PPC_STORE_U16(ctx.r31.u32 + 176, ctx.r11.u16);
	// sth r11,180(r31)
	PPC_STORE_U16(ctx.r31.u32 + 180, ctx.r11.u16);
	// sth r11,184(r31)
	PPC_STORE_U16(ctx.r31.u32 + 184, ctx.r11.u16);
	// sth r11,188(r31)
	PPC_STORE_U16(ctx.r31.u32 + 188, ctx.r11.u16);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8287e0c8
	ctx.lr = 0x8272BB3C;
	sub_8287E0C8(ctx, base);
	// addi r5,r31,162
	ctx.r5.s64 = ctx.r31.s64 + 162;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r7,31308
	ctx.r4.s64 = ctx.r7.s64 + 31308;
	// bl 0x82384520
	ctx.lr = 0x8272BB54;
	sub_82384520(ctx, base);
	// addi r5,r31,182
	ctx.r5.s64 = ctx.r31.s64 + 182;
	// lis r4,-32235
	ctx.r4.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r4,31560
	ctx.r4.s64 = ctx.r4.s64 + 31560;
	// bl 0x82384520
	ctx.lr = 0x8272BB6C;
	sub_82384520(ctx, base);
	// addi r5,r31,166
	ctx.r5.s64 = ctx.r31.s64 + 166;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r11,31352
	ctx.r4.s64 = ctx.r11.s64 + 31352;
	// bl 0x82384520
	ctx.lr = 0x8272BB84;
	sub_82384520(ctx, base);
	// addi r5,r31,170
	ctx.r5.s64 = ctx.r31.s64 + 170;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r10,31612
	ctx.r4.s64 = ctx.r10.s64 + 31612;
	// bl 0x82384520
	ctx.lr = 0x8272BB9C;
	sub_82384520(ctx, base);
	// addi r5,r31,174
	ctx.r5.s64 = ctx.r31.s64 + 174;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r9,31652
	ctx.r4.s64 = ctx.r9.s64 + 31652;
	// bl 0x82384520
	ctx.lr = 0x8272BBB4;
	sub_82384520(ctx, base);
	// addi r5,r31,178
	ctx.r5.s64 = ctx.r31.s64 + 178;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r8,31696
	ctx.r4.s64 = ctx.r8.s64 + 31696;
	// bl 0x82384520
	ctx.lr = 0x8272BBCC;
	sub_82384520(ctx, base);
	// addi r5,r31,186
	ctx.r5.s64 = ctx.r31.s64 + 186;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r7,31420
	ctx.r4.s64 = ctx.r7.s64 + 31420;
	// bl 0x82384520
	ctx.lr = 0x8272BBE4;
	sub_82384520(ctx, base);
	// lis r6,-31905
	ctx.r6.s64 = -2090926080;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r6,-3120
	ctx.r4.s64 = ctx.r6.s64 + -3120;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82bea998
	ctx.lr = 0x8272BBF8;
	sub_82BEA998(ctx, base);
	// lis r5,-31905
	ctx.r5.s64 = -2090926080;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r5,-3024
	ctx.r4.s64 = ctx.r5.s64 + -3024;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82bea998
	ctx.lr = 0x8272BC0C;
	sub_82BEA998(ctx, base);
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

__attribute__((alias("__imp__sub_8272BC28"))) PPC_WEAK_FUNC(sub_8272BC28);
PPC_FUNC_IMPL(__imp__sub_8272BC28) {
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
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r8,r10,-18820
	ctx.r8.s64 = ctx.r10.s64 + -18820;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r10,r9,-31988
	ctx.r10.s64 = ctx.r9.s64 + -31988;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// addi r9,r5,-31944
	ctx.r9.s64 = ctx.r5.s64 + -31944;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lis r8,-31905
	ctx.r8.s64 = -2090926080;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r4,r8,-3120
	ctx.r4.s64 = ctx.r8.s64 + -3120;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// sth r11,148(r31)
	PPC_STORE_U16(ctx.r31.u32 + 148, ctx.r11.u16);
	// sth r11,152(r31)
	PPC_STORE_U16(ctx.r31.u32 + 152, ctx.r11.u16);
	// sth r11,156(r31)
	PPC_STORE_U16(ctx.r31.u32 + 156, ctx.r11.u16);
	// sth r11,160(r31)
	PPC_STORE_U16(ctx.r31.u32 + 160, ctx.r11.u16);
	// sth r11,164(r31)
	PPC_STORE_U16(ctx.r31.u32 + 164, ctx.r11.u16);
	// sth r11,168(r31)
	PPC_STORE_U16(ctx.r31.u32 + 168, ctx.r11.u16);
	// sth r11,172(r31)
	PPC_STORE_U16(ctx.r31.u32 + 172, ctx.r11.u16);
	// sth r11,176(r31)
	PPC_STORE_U16(ctx.r31.u32 + 176, ctx.r11.u16);
	// sth r11,180(r31)
	PPC_STORE_U16(ctx.r31.u32 + 180, ctx.r11.u16);
	// sth r11,184(r31)
	PPC_STORE_U16(ctx.r31.u32 + 184, ctx.r11.u16);
	// sth r11,188(r31)
	PPC_STORE_U16(ctx.r31.u32 + 188, ctx.r11.u16);
	// bl 0x82bea998
	ctx.lr = 0x8272BCD4;
	sub_82BEA998(ctx, base);
	// lis r7,-31905
	ctx.r7.s64 = -2090926080;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r7,-3024
	ctx.r4.s64 = ctx.r7.s64 + -3024;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82bea998
	ctx.lr = 0x8272BCE8;
	sub_82BEA998(ctx, base);
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

__attribute__((alias("__imp__sub_8272BD00"))) PPC_WEAK_FUNC(sub_8272BD00);
PPC_FUNC_IMPL(__imp__sub_8272BD00) {
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
	// bl 0x82384e58
	ctx.lr = 0x8272BD20;
	sub_82384E58(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r11,-31844
	ctx.r9.s64 = ctx.r11.s64 + -31844;
	// addi r8,r10,-31800
	ctx.r8.s64 = ctx.r10.s64 + -31800;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// addi r3,r31,178
	ctx.r3.s64 = ctx.r31.s64 + 178;
	// sth r11,180(r31)
	PPC_STORE_U16(ctx.r31.u32 + 180, ctx.r11.u16);
	// sth r11,184(r31)
	PPC_STORE_U16(ctx.r31.u32 + 184, ctx.r11.u16);
	// sth r11,188(r31)
	PPC_STORE_U16(ctx.r31.u32 + 188, ctx.r11.u16);
	// sth r11,192(r31)
	PPC_STORE_U16(ctx.r31.u32 + 192, ctx.r11.u16);
	// sth r11,196(r31)
	PPC_STORE_U16(ctx.r31.u32 + 196, ctx.r11.u16);
	// sth r11,200(r31)
	PPC_STORE_U16(ctx.r31.u32 + 200, ctx.r11.u16);
	// sth r11,204(r31)
	PPC_STORE_U16(ctx.r31.u32 + 204, ctx.r11.u16);
	// sth r11,208(r31)
	PPC_STORE_U16(ctx.r31.u32 + 208, ctx.r11.u16);
	// sth r11,212(r31)
	PPC_STORE_U16(ctx.r31.u32 + 212, ctx.r11.u16);
	// sth r11,216(r31)
	PPC_STORE_U16(ctx.r31.u32 + 216, ctx.r11.u16);
	// sth r11,220(r31)
	PPC_STORE_U16(ctx.r31.u32 + 220, ctx.r11.u16);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8287e0c8
	ctx.lr = 0x8272BD74;
	sub_8287E0C8(ctx, base);
	// addi r5,r31,194
	ctx.r5.s64 = ctx.r31.s64 + 194;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r7,31308
	ctx.r4.s64 = ctx.r7.s64 + 31308;
	// bl 0x82384520
	ctx.lr = 0x8272BD8C;
	sub_82384520(ctx, base);
	// addi r5,r31,214
	ctx.r5.s64 = ctx.r31.s64 + 214;
	// lis r4,-32235
	ctx.r4.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r4,31560
	ctx.r4.s64 = ctx.r4.s64 + 31560;
	// bl 0x82384520
	ctx.lr = 0x8272BDA4;
	sub_82384520(ctx, base);
	// addi r5,r31,198
	ctx.r5.s64 = ctx.r31.s64 + 198;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r11,31352
	ctx.r4.s64 = ctx.r11.s64 + 31352;
	// bl 0x82384520
	ctx.lr = 0x8272BDBC;
	sub_82384520(ctx, base);
	// addi r5,r31,202
	ctx.r5.s64 = ctx.r31.s64 + 202;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r10,31612
	ctx.r4.s64 = ctx.r10.s64 + 31612;
	// bl 0x82384520
	ctx.lr = 0x8272BDD4;
	sub_82384520(ctx, base);
	// addi r5,r31,206
	ctx.r5.s64 = ctx.r31.s64 + 206;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r9,31652
	ctx.r4.s64 = ctx.r9.s64 + 31652;
	// bl 0x82384520
	ctx.lr = 0x8272BDEC;
	sub_82384520(ctx, base);
	// addi r5,r31,210
	ctx.r5.s64 = ctx.r31.s64 + 210;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r8,31696
	ctx.r4.s64 = ctx.r8.s64 + 31696;
	// bl 0x82384520
	ctx.lr = 0x8272BE04;
	sub_82384520(ctx, base);
	// addi r5,r31,218
	ctx.r5.s64 = ctx.r31.s64 + 218;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r7,31420
	ctx.r4.s64 = ctx.r7.s64 + 31420;
	// bl 0x82384520
	ctx.lr = 0x8272BE1C;
	sub_82384520(ctx, base);
	// lis r6,-31905
	ctx.r6.s64 = -2090926080;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r6,-3120
	ctx.r4.s64 = ctx.r6.s64 + -3120;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82bea998
	ctx.lr = 0x8272BE30;
	sub_82BEA998(ctx, base);
	// lis r5,-31905
	ctx.r5.s64 = -2090926080;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r5,-2992
	ctx.r4.s64 = ctx.r5.s64 + -2992;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82bea998
	ctx.lr = 0x8272BE44;
	sub_82BEA998(ctx, base);
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

__attribute__((alias("__imp__sub_8272BE60"))) PPC_WEAK_FUNC(sub_8272BE60);
PPC_FUNC_IMPL(__imp__sub_8272BE60) {
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
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r8,r10,-18820
	ctx.r8.s64 = ctx.r10.s64 + -18820;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r10,r9,-31844
	ctx.r10.s64 = ctx.r9.s64 + -31844;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// addi r9,r5,-31800
	ctx.r9.s64 = ctx.r5.s64 + -31800;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lis r8,-31905
	ctx.r8.s64 = -2090926080;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r4,r8,-3120
	ctx.r4.s64 = ctx.r8.s64 + -3120;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// sth r11,180(r31)
	PPC_STORE_U16(ctx.r31.u32 + 180, ctx.r11.u16);
	// sth r11,184(r31)
	PPC_STORE_U16(ctx.r31.u32 + 184, ctx.r11.u16);
	// sth r11,188(r31)
	PPC_STORE_U16(ctx.r31.u32 + 188, ctx.r11.u16);
	// sth r11,192(r31)
	PPC_STORE_U16(ctx.r31.u32 + 192, ctx.r11.u16);
	// sth r11,196(r31)
	PPC_STORE_U16(ctx.r31.u32 + 196, ctx.r11.u16);
	// sth r11,200(r31)
	PPC_STORE_U16(ctx.r31.u32 + 200, ctx.r11.u16);
	// sth r11,204(r31)
	PPC_STORE_U16(ctx.r31.u32 + 204, ctx.r11.u16);
	// sth r11,208(r31)
	PPC_STORE_U16(ctx.r31.u32 + 208, ctx.r11.u16);
	// sth r11,212(r31)
	PPC_STORE_U16(ctx.r31.u32 + 212, ctx.r11.u16);
	// sth r11,216(r31)
	PPC_STORE_U16(ctx.r31.u32 + 216, ctx.r11.u16);
	// sth r11,220(r31)
	PPC_STORE_U16(ctx.r31.u32 + 220, ctx.r11.u16);
	// bl 0x82bea998
	ctx.lr = 0x8272BF0C;
	sub_82BEA998(ctx, base);
	// lis r7,-31905
	ctx.r7.s64 = -2090926080;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r7,-2992
	ctx.r4.s64 = ctx.r7.s64 + -2992;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82bea998
	ctx.lr = 0x8272BF20;
	sub_82BEA998(ctx, base);
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

__attribute__((alias("__imp__sub_8272BF38"))) PPC_WEAK_FUNC(sub_8272BF38);
PPC_FUNC_IMPL(__imp__sub_8272BF38) {
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
	// bl 0x82384e58
	ctx.lr = 0x8272BF58;
	sub_82384E58(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r11,-31700
	ctx.r9.s64 = ctx.r11.s64 + -31700;
	// addi r8,r10,-31656
	ctx.r8.s64 = ctx.r10.s64 + -31656;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// addi r3,r31,242
	ctx.r3.s64 = ctx.r31.s64 + 242;
	// sth r11,244(r31)
	PPC_STORE_U16(ctx.r31.u32 + 244, ctx.r11.u16);
	// sth r11,248(r31)
	PPC_STORE_U16(ctx.r31.u32 + 248, ctx.r11.u16);
	// sth r11,252(r31)
	PPC_STORE_U16(ctx.r31.u32 + 252, ctx.r11.u16);
	// sth r11,256(r31)
	PPC_STORE_U16(ctx.r31.u32 + 256, ctx.r11.u16);
	// sth r11,260(r31)
	PPC_STORE_U16(ctx.r31.u32 + 260, ctx.r11.u16);
	// sth r11,264(r31)
	PPC_STORE_U16(ctx.r31.u32 + 264, ctx.r11.u16);
	// sth r11,268(r31)
	PPC_STORE_U16(ctx.r31.u32 + 268, ctx.r11.u16);
	// sth r11,272(r31)
	PPC_STORE_U16(ctx.r31.u32 + 272, ctx.r11.u16);
	// sth r11,276(r31)
	PPC_STORE_U16(ctx.r31.u32 + 276, ctx.r11.u16);
	// sth r11,280(r31)
	PPC_STORE_U16(ctx.r31.u32 + 280, ctx.r11.u16);
	// sth r11,284(r31)
	PPC_STORE_U16(ctx.r31.u32 + 284, ctx.r11.u16);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8287e0c8
	ctx.lr = 0x8272BFAC;
	sub_8287E0C8(ctx, base);
	// addi r5,r31,258
	ctx.r5.s64 = ctx.r31.s64 + 258;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r7,31308
	ctx.r4.s64 = ctx.r7.s64 + 31308;
	// bl 0x82384520
	ctx.lr = 0x8272BFC4;
	sub_82384520(ctx, base);
	// addi r5,r31,278
	ctx.r5.s64 = ctx.r31.s64 + 278;
	// lis r4,-32235
	ctx.r4.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r4,31560
	ctx.r4.s64 = ctx.r4.s64 + 31560;
	// bl 0x82384520
	ctx.lr = 0x8272BFDC;
	sub_82384520(ctx, base);
	// addi r5,r31,262
	ctx.r5.s64 = ctx.r31.s64 + 262;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r11,31352
	ctx.r4.s64 = ctx.r11.s64 + 31352;
	// bl 0x82384520
	ctx.lr = 0x8272BFF4;
	sub_82384520(ctx, base);
	// addi r5,r31,266
	ctx.r5.s64 = ctx.r31.s64 + 266;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r10,31612
	ctx.r4.s64 = ctx.r10.s64 + 31612;
	// bl 0x82384520
	ctx.lr = 0x8272C00C;
	sub_82384520(ctx, base);
	// addi r5,r31,270
	ctx.r5.s64 = ctx.r31.s64 + 270;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r9,31652
	ctx.r4.s64 = ctx.r9.s64 + 31652;
	// bl 0x82384520
	ctx.lr = 0x8272C024;
	sub_82384520(ctx, base);
	// addi r5,r31,274
	ctx.r5.s64 = ctx.r31.s64 + 274;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r8,31696
	ctx.r4.s64 = ctx.r8.s64 + 31696;
	// bl 0x82384520
	ctx.lr = 0x8272C03C;
	sub_82384520(ctx, base);
	// addi r5,r31,282
	ctx.r5.s64 = ctx.r31.s64 + 282;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r7,31420
	ctx.r4.s64 = ctx.r7.s64 + 31420;
	// bl 0x82384520
	ctx.lr = 0x8272C054;
	sub_82384520(ctx, base);
	// lis r6,-31905
	ctx.r6.s64 = -2090926080;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r6,-3088
	ctx.r4.s64 = ctx.r6.s64 + -3088;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82bea998
	ctx.lr = 0x8272C068;
	sub_82BEA998(ctx, base);
	// lis r5,-31905
	ctx.r5.s64 = -2090926080;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// addi r4,r5,-2928
	ctx.r4.s64 = ctx.r5.s64 + -2928;
	// li r5,96
	ctx.r5.s64 = 96;
	// bl 0x82bea998
	ctx.lr = 0x8272C07C;
	sub_82BEA998(ctx, base);
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

__attribute__((alias("__imp__sub_8272C098"))) PPC_WEAK_FUNC(sub_8272C098);
PPC_FUNC_IMPL(__imp__sub_8272C098) {
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
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r8,r10,-18820
	ctx.r8.s64 = ctx.r10.s64 + -18820;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r10,r9,-31700
	ctx.r10.s64 = ctx.r9.s64 + -31700;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// addi r9,r5,-31656
	ctx.r9.s64 = ctx.r5.s64 + -31656;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lis r8,-31905
	ctx.r8.s64 = -2090926080;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r4,r8,-3088
	ctx.r4.s64 = ctx.r8.s64 + -3088;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// sth r11,244(r31)
	PPC_STORE_U16(ctx.r31.u32 + 244, ctx.r11.u16);
	// sth r11,248(r31)
	PPC_STORE_U16(ctx.r31.u32 + 248, ctx.r11.u16);
	// sth r11,252(r31)
	PPC_STORE_U16(ctx.r31.u32 + 252, ctx.r11.u16);
	// sth r11,256(r31)
	PPC_STORE_U16(ctx.r31.u32 + 256, ctx.r11.u16);
	// sth r11,260(r31)
	PPC_STORE_U16(ctx.r31.u32 + 260, ctx.r11.u16);
	// sth r11,264(r31)
	PPC_STORE_U16(ctx.r31.u32 + 264, ctx.r11.u16);
	// sth r11,268(r31)
	PPC_STORE_U16(ctx.r31.u32 + 268, ctx.r11.u16);
	// sth r11,272(r31)
	PPC_STORE_U16(ctx.r31.u32 + 272, ctx.r11.u16);
	// sth r11,276(r31)
	PPC_STORE_U16(ctx.r31.u32 + 276, ctx.r11.u16);
	// sth r11,280(r31)
	PPC_STORE_U16(ctx.r31.u32 + 280, ctx.r11.u16);
	// sth r11,284(r31)
	PPC_STORE_U16(ctx.r31.u32 + 284, ctx.r11.u16);
	// bl 0x82bea998
	ctx.lr = 0x8272C144;
	sub_82BEA998(ctx, base);
	// lis r7,-31905
	ctx.r7.s64 = -2090926080;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// addi r4,r7,-2928
	ctx.r4.s64 = ctx.r7.s64 + -2928;
	// li r5,96
	ctx.r5.s64 = 96;
	// bl 0x82bea998
	ctx.lr = 0x8272C158;
	sub_82BEA998(ctx, base);
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

__attribute__((alias("__imp__sub_8272C170"))) PPC_WEAK_FUNC(sub_8272C170);
PPC_FUNC_IMPL(__imp__sub_8272C170) {
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
	// bl 0x82384e58
	ctx.lr = 0x8272C190;
	sub_82384E58(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r11,-31556
	ctx.r9.s64 = ctx.r11.s64 + -31556;
	// addi r8,r10,-31512
	ctx.r8.s64 = ctx.r10.s64 + -31512;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// addi r3,r31,210
	ctx.r3.s64 = ctx.r31.s64 + 210;
	// sth r11,212(r31)
	PPC_STORE_U16(ctx.r31.u32 + 212, ctx.r11.u16);
	// sth r11,216(r31)
	PPC_STORE_U16(ctx.r31.u32 + 216, ctx.r11.u16);
	// sth r11,220(r31)
	PPC_STORE_U16(ctx.r31.u32 + 220, ctx.r11.u16);
	// sth r11,224(r31)
	PPC_STORE_U16(ctx.r31.u32 + 224, ctx.r11.u16);
	// sth r11,228(r31)
	PPC_STORE_U16(ctx.r31.u32 + 228, ctx.r11.u16);
	// sth r11,232(r31)
	PPC_STORE_U16(ctx.r31.u32 + 232, ctx.r11.u16);
	// sth r11,236(r31)
	PPC_STORE_U16(ctx.r31.u32 + 236, ctx.r11.u16);
	// sth r11,240(r31)
	PPC_STORE_U16(ctx.r31.u32 + 240, ctx.r11.u16);
	// sth r11,244(r31)
	PPC_STORE_U16(ctx.r31.u32 + 244, ctx.r11.u16);
	// sth r11,248(r31)
	PPC_STORE_U16(ctx.r31.u32 + 248, ctx.r11.u16);
	// sth r11,252(r31)
	PPC_STORE_U16(ctx.r31.u32 + 252, ctx.r11.u16);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8287e0c8
	ctx.lr = 0x8272C1E4;
	sub_8287E0C8(ctx, base);
	// addi r5,r31,226
	ctx.r5.s64 = ctx.r31.s64 + 226;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r7,31308
	ctx.r4.s64 = ctx.r7.s64 + 31308;
	// bl 0x82384520
	ctx.lr = 0x8272C1FC;
	sub_82384520(ctx, base);
	// addi r5,r31,246
	ctx.r5.s64 = ctx.r31.s64 + 246;
	// lis r4,-32235
	ctx.r4.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r4,31560
	ctx.r4.s64 = ctx.r4.s64 + 31560;
	// bl 0x82384520
	ctx.lr = 0x8272C214;
	sub_82384520(ctx, base);
	// addi r5,r31,230
	ctx.r5.s64 = ctx.r31.s64 + 230;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r11,31352
	ctx.r4.s64 = ctx.r11.s64 + 31352;
	// bl 0x82384520
	ctx.lr = 0x8272C22C;
	sub_82384520(ctx, base);
	// addi r5,r31,234
	ctx.r5.s64 = ctx.r31.s64 + 234;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r10,31612
	ctx.r4.s64 = ctx.r10.s64 + 31612;
	// bl 0x82384520
	ctx.lr = 0x8272C244;
	sub_82384520(ctx, base);
	// addi r5,r31,238
	ctx.r5.s64 = ctx.r31.s64 + 238;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r9,31652
	ctx.r4.s64 = ctx.r9.s64 + 31652;
	// bl 0x82384520
	ctx.lr = 0x8272C25C;
	sub_82384520(ctx, base);
	// addi r5,r31,242
	ctx.r5.s64 = ctx.r31.s64 + 242;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r8,31696
	ctx.r4.s64 = ctx.r8.s64 + 31696;
	// bl 0x82384520
	ctx.lr = 0x8272C274;
	sub_82384520(ctx, base);
	// addi r5,r31,250
	ctx.r5.s64 = ctx.r31.s64 + 250;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r7,31420
	ctx.r4.s64 = ctx.r7.s64 + 31420;
	// bl 0x82384520
	ctx.lr = 0x8272C28C;
	sub_82384520(ctx, base);
	// lis r6,-31905
	ctx.r6.s64 = -2090926080;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r6,-3120
	ctx.r4.s64 = ctx.r6.s64 + -3120;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82bea998
	ctx.lr = 0x8272C2A0;
	sub_82BEA998(ctx, base);
	// lis r5,-31905
	ctx.r5.s64 = -2090926080;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r5,-2928
	ctx.r4.s64 = ctx.r5.s64 + -2928;
	// li r5,96
	ctx.r5.s64 = 96;
	// bl 0x82bea998
	ctx.lr = 0x8272C2B4;
	sub_82BEA998(ctx, base);
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

__attribute__((alias("__imp__sub_8272C2D0"))) PPC_WEAK_FUNC(sub_8272C2D0);
PPC_FUNC_IMPL(__imp__sub_8272C2D0) {
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
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r8,r10,-18820
	ctx.r8.s64 = ctx.r10.s64 + -18820;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r10,r9,-31556
	ctx.r10.s64 = ctx.r9.s64 + -31556;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// addi r9,r5,-31512
	ctx.r9.s64 = ctx.r5.s64 + -31512;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lis r8,-31905
	ctx.r8.s64 = -2090926080;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r4,r8,-3120
	ctx.r4.s64 = ctx.r8.s64 + -3120;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// sth r11,212(r31)
	PPC_STORE_U16(ctx.r31.u32 + 212, ctx.r11.u16);
	// sth r11,216(r31)
	PPC_STORE_U16(ctx.r31.u32 + 216, ctx.r11.u16);
	// sth r11,220(r31)
	PPC_STORE_U16(ctx.r31.u32 + 220, ctx.r11.u16);
	// sth r11,224(r31)
	PPC_STORE_U16(ctx.r31.u32 + 224, ctx.r11.u16);
	// sth r11,228(r31)
	PPC_STORE_U16(ctx.r31.u32 + 228, ctx.r11.u16);
	// sth r11,232(r31)
	PPC_STORE_U16(ctx.r31.u32 + 232, ctx.r11.u16);
	// sth r11,236(r31)
	PPC_STORE_U16(ctx.r31.u32 + 236, ctx.r11.u16);
	// sth r11,240(r31)
	PPC_STORE_U16(ctx.r31.u32 + 240, ctx.r11.u16);
	// sth r11,244(r31)
	PPC_STORE_U16(ctx.r31.u32 + 244, ctx.r11.u16);
	// sth r11,248(r31)
	PPC_STORE_U16(ctx.r31.u32 + 248, ctx.r11.u16);
	// sth r11,252(r31)
	PPC_STORE_U16(ctx.r31.u32 + 252, ctx.r11.u16);
	// bl 0x82bea998
	ctx.lr = 0x8272C37C;
	sub_82BEA998(ctx, base);
	// lis r7,-31905
	ctx.r7.s64 = -2090926080;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r7,-2928
	ctx.r4.s64 = ctx.r7.s64 + -2928;
	// li r5,96
	ctx.r5.s64 = 96;
	// bl 0x82bea998
	ctx.lr = 0x8272C390;
	sub_82BEA998(ctx, base);
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

__attribute__((alias("__imp__sub_8272C3A8"))) PPC_WEAK_FUNC(sub_8272C3A8);
PPC_FUNC_IMPL(__imp__sub_8272C3A8) {
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
	// bl 0x82384e58
	ctx.lr = 0x8272C3C8;
	sub_82384E58(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r11,-31412
	ctx.r9.s64 = ctx.r11.s64 + -31412;
	// addi r8,r10,-31368
	ctx.r8.s64 = ctx.r10.s64 + -31368;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// addi r3,r31,338
	ctx.r3.s64 = ctx.r31.s64 + 338;
	// sth r11,340(r31)
	PPC_STORE_U16(ctx.r31.u32 + 340, ctx.r11.u16);
	// sth r11,344(r31)
	PPC_STORE_U16(ctx.r31.u32 + 344, ctx.r11.u16);
	// sth r11,348(r31)
	PPC_STORE_U16(ctx.r31.u32 + 348, ctx.r11.u16);
	// sth r11,352(r31)
	PPC_STORE_U16(ctx.r31.u32 + 352, ctx.r11.u16);
	// sth r11,356(r31)
	PPC_STORE_U16(ctx.r31.u32 + 356, ctx.r11.u16);
	// sth r11,360(r31)
	PPC_STORE_U16(ctx.r31.u32 + 360, ctx.r11.u16);
	// sth r11,364(r31)
	PPC_STORE_U16(ctx.r31.u32 + 364, ctx.r11.u16);
	// sth r11,368(r31)
	PPC_STORE_U16(ctx.r31.u32 + 368, ctx.r11.u16);
	// sth r11,372(r31)
	PPC_STORE_U16(ctx.r31.u32 + 372, ctx.r11.u16);
	// sth r11,376(r31)
	PPC_STORE_U16(ctx.r31.u32 + 376, ctx.r11.u16);
	// sth r11,380(r31)
	PPC_STORE_U16(ctx.r31.u32 + 380, ctx.r11.u16);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8287e0c8
	ctx.lr = 0x8272C41C;
	sub_8287E0C8(ctx, base);
	// addi r5,r31,354
	ctx.r5.s64 = ctx.r31.s64 + 354;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r7,31308
	ctx.r4.s64 = ctx.r7.s64 + 31308;
	// bl 0x82384520
	ctx.lr = 0x8272C434;
	sub_82384520(ctx, base);
	// addi r5,r31,374
	ctx.r5.s64 = ctx.r31.s64 + 374;
	// lis r4,-32235
	ctx.r4.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r4,31560
	ctx.r4.s64 = ctx.r4.s64 + 31560;
	// bl 0x82384520
	ctx.lr = 0x8272C44C;
	sub_82384520(ctx, base);
	// addi r5,r31,358
	ctx.r5.s64 = ctx.r31.s64 + 358;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r11,31352
	ctx.r4.s64 = ctx.r11.s64 + 31352;
	// bl 0x82384520
	ctx.lr = 0x8272C464;
	sub_82384520(ctx, base);
	// addi r5,r31,362
	ctx.r5.s64 = ctx.r31.s64 + 362;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r10,31612
	ctx.r4.s64 = ctx.r10.s64 + 31612;
	// bl 0x82384520
	ctx.lr = 0x8272C47C;
	sub_82384520(ctx, base);
	// addi r5,r31,366
	ctx.r5.s64 = ctx.r31.s64 + 366;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r9,31652
	ctx.r4.s64 = ctx.r9.s64 + 31652;
	// bl 0x82384520
	ctx.lr = 0x8272C494;
	sub_82384520(ctx, base);
	// addi r5,r31,370
	ctx.r5.s64 = ctx.r31.s64 + 370;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r8,31696
	ctx.r4.s64 = ctx.r8.s64 + 31696;
	// bl 0x82384520
	ctx.lr = 0x8272C4AC;
	sub_82384520(ctx, base);
	// addi r5,r31,378
	ctx.r5.s64 = ctx.r31.s64 + 378;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r7,31420
	ctx.r4.s64 = ctx.r7.s64 + 31420;
	// bl 0x82384520
	ctx.lr = 0x8272C4C4;
	sub_82384520(ctx, base);
	// lis r6,-31905
	ctx.r6.s64 = -2090926080;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r6,-3088
	ctx.r4.s64 = ctx.r6.s64 + -3088;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82bea998
	ctx.lr = 0x8272C4D8;
	sub_82BEA998(ctx, base);
	// lis r5,-31905
	ctx.r5.s64 = -2090926080;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// addi r4,r5,-2832
	ctx.r4.s64 = ctx.r5.s64 + -2832;
	// li r5,192
	ctx.r5.s64 = 192;
	// bl 0x82bea998
	ctx.lr = 0x8272C4EC;
	sub_82BEA998(ctx, base);
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

__attribute__((alias("__imp__sub_8272C508"))) PPC_WEAK_FUNC(sub_8272C508);
PPC_FUNC_IMPL(__imp__sub_8272C508) {
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
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r8,r10,-18820
	ctx.r8.s64 = ctx.r10.s64 + -18820;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r10,r9,-31412
	ctx.r10.s64 = ctx.r9.s64 + -31412;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// addi r9,r5,-31368
	ctx.r9.s64 = ctx.r5.s64 + -31368;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lis r8,-31905
	ctx.r8.s64 = -2090926080;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r4,r8,-3088
	ctx.r4.s64 = ctx.r8.s64 + -3088;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// sth r11,340(r31)
	PPC_STORE_U16(ctx.r31.u32 + 340, ctx.r11.u16);
	// sth r11,344(r31)
	PPC_STORE_U16(ctx.r31.u32 + 344, ctx.r11.u16);
	// sth r11,348(r31)
	PPC_STORE_U16(ctx.r31.u32 + 348, ctx.r11.u16);
	// sth r11,352(r31)
	PPC_STORE_U16(ctx.r31.u32 + 352, ctx.r11.u16);
	// sth r11,356(r31)
	PPC_STORE_U16(ctx.r31.u32 + 356, ctx.r11.u16);
	// sth r11,360(r31)
	PPC_STORE_U16(ctx.r31.u32 + 360, ctx.r11.u16);
	// sth r11,364(r31)
	PPC_STORE_U16(ctx.r31.u32 + 364, ctx.r11.u16);
	// sth r11,368(r31)
	PPC_STORE_U16(ctx.r31.u32 + 368, ctx.r11.u16);
	// sth r11,372(r31)
	PPC_STORE_U16(ctx.r31.u32 + 372, ctx.r11.u16);
	// sth r11,376(r31)
	PPC_STORE_U16(ctx.r31.u32 + 376, ctx.r11.u16);
	// sth r11,380(r31)
	PPC_STORE_U16(ctx.r31.u32 + 380, ctx.r11.u16);
	// bl 0x82bea998
	ctx.lr = 0x8272C5B4;
	sub_82BEA998(ctx, base);
	// lis r7,-31905
	ctx.r7.s64 = -2090926080;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// addi r4,r7,-2832
	ctx.r4.s64 = ctx.r7.s64 + -2832;
	// li r5,192
	ctx.r5.s64 = 192;
	// bl 0x82bea998
	ctx.lr = 0x8272C5C8;
	sub_82BEA998(ctx, base);
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

__attribute__((alias("__imp__sub_8272C5E0"))) PPC_WEAK_FUNC(sub_8272C5E0);
PPC_FUNC_IMPL(__imp__sub_8272C5E0) {
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
	// bl 0x82384e58
	ctx.lr = 0x8272C600;
	sub_82384E58(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r11,-31268
	ctx.r9.s64 = ctx.r11.s64 + -31268;
	// addi r8,r10,-31224
	ctx.r8.s64 = ctx.r10.s64 + -31224;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// addi r3,r31,402
	ctx.r3.s64 = ctx.r31.s64 + 402;
	// sth r11,404(r31)
	PPC_STORE_U16(ctx.r31.u32 + 404, ctx.r11.u16);
	// sth r11,408(r31)
	PPC_STORE_U16(ctx.r31.u32 + 408, ctx.r11.u16);
	// sth r11,412(r31)
	PPC_STORE_U16(ctx.r31.u32 + 412, ctx.r11.u16);
	// sth r11,416(r31)
	PPC_STORE_U16(ctx.r31.u32 + 416, ctx.r11.u16);
	// sth r11,420(r31)
	PPC_STORE_U16(ctx.r31.u32 + 420, ctx.r11.u16);
	// sth r11,424(r31)
	PPC_STORE_U16(ctx.r31.u32 + 424, ctx.r11.u16);
	// sth r11,428(r31)
	PPC_STORE_U16(ctx.r31.u32 + 428, ctx.r11.u16);
	// sth r11,432(r31)
	PPC_STORE_U16(ctx.r31.u32 + 432, ctx.r11.u16);
	// sth r11,436(r31)
	PPC_STORE_U16(ctx.r31.u32 + 436, ctx.r11.u16);
	// sth r11,440(r31)
	PPC_STORE_U16(ctx.r31.u32 + 440, ctx.r11.u16);
	// sth r11,444(r31)
	PPC_STORE_U16(ctx.r31.u32 + 444, ctx.r11.u16);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8287e0c8
	ctx.lr = 0x8272C654;
	sub_8287E0C8(ctx, base);
	// addi r5,r31,418
	ctx.r5.s64 = ctx.r31.s64 + 418;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r7,31308
	ctx.r4.s64 = ctx.r7.s64 + 31308;
	// bl 0x82384520
	ctx.lr = 0x8272C66C;
	sub_82384520(ctx, base);
	// addi r5,r31,438
	ctx.r5.s64 = ctx.r31.s64 + 438;
	// lis r4,-32235
	ctx.r4.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r4,31560
	ctx.r4.s64 = ctx.r4.s64 + 31560;
	// bl 0x82384520
	ctx.lr = 0x8272C684;
	sub_82384520(ctx, base);
	// addi r5,r31,422
	ctx.r5.s64 = ctx.r31.s64 + 422;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r11,31352
	ctx.r4.s64 = ctx.r11.s64 + 31352;
	// bl 0x82384520
	ctx.lr = 0x8272C69C;
	sub_82384520(ctx, base);
	// addi r5,r31,426
	ctx.r5.s64 = ctx.r31.s64 + 426;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r10,31612
	ctx.r4.s64 = ctx.r10.s64 + 31612;
	// bl 0x82384520
	ctx.lr = 0x8272C6B4;
	sub_82384520(ctx, base);
	// addi r5,r31,430
	ctx.r5.s64 = ctx.r31.s64 + 430;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r9,31652
	ctx.r4.s64 = ctx.r9.s64 + 31652;
	// bl 0x82384520
	ctx.lr = 0x8272C6CC;
	sub_82384520(ctx, base);
	// addi r5,r31,434
	ctx.r5.s64 = ctx.r31.s64 + 434;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r8,31696
	ctx.r4.s64 = ctx.r8.s64 + 31696;
	// bl 0x82384520
	ctx.lr = 0x8272C6E4;
	sub_82384520(ctx, base);
	// addi r5,r31,442
	ctx.r5.s64 = ctx.r31.s64 + 442;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r4,r7,31420
	ctx.r4.s64 = ctx.r7.s64 + 31420;
	// bl 0x82384520
	ctx.lr = 0x8272C6FC;
	sub_82384520(ctx, base);
	// lis r6,-31905
	ctx.r6.s64 = -2090926080;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r6,-3088
	ctx.r4.s64 = ctx.r6.s64 + -3088;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82bea998
	ctx.lr = 0x8272C710;
	sub_82BEA998(ctx, base);
	// lis r5,-31905
	ctx.r5.s64 = -2090926080;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// addi r4,r5,-2640
	ctx.r4.s64 = ctx.r5.s64 + -2640;
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x82bea998
	ctx.lr = 0x8272C724;
	sub_82BEA998(ctx, base);
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

__attribute__((alias("__imp__sub_8272C740"))) PPC_WEAK_FUNC(sub_8272C740);
PPC_FUNC_IMPL(__imp__sub_8272C740) {
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
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r8,r10,-18820
	ctx.r8.s64 = ctx.r10.s64 + -18820;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r10,r9,-31268
	ctx.r10.s64 = ctx.r9.s64 + -31268;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// addi r9,r5,-31224
	ctx.r9.s64 = ctx.r5.s64 + -31224;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lis r8,-31905
	ctx.r8.s64 = -2090926080;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r4,r8,-3088
	ctx.r4.s64 = ctx.r8.s64 + -3088;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// sth r11,404(r31)
	PPC_STORE_U16(ctx.r31.u32 + 404, ctx.r11.u16);
	// sth r11,408(r31)
	PPC_STORE_U16(ctx.r31.u32 + 408, ctx.r11.u16);
	// sth r11,412(r31)
	PPC_STORE_U16(ctx.r31.u32 + 412, ctx.r11.u16);
	// sth r11,416(r31)
	PPC_STORE_U16(ctx.r31.u32 + 416, ctx.r11.u16);
	// sth r11,420(r31)
	PPC_STORE_U16(ctx.r31.u32 + 420, ctx.r11.u16);
	// sth r11,424(r31)
	PPC_STORE_U16(ctx.r31.u32 + 424, ctx.r11.u16);
	// sth r11,428(r31)
	PPC_STORE_U16(ctx.r31.u32 + 428, ctx.r11.u16);
	// sth r11,432(r31)
	PPC_STORE_U16(ctx.r31.u32 + 432, ctx.r11.u16);
	// sth r11,436(r31)
	PPC_STORE_U16(ctx.r31.u32 + 436, ctx.r11.u16);
	// sth r11,440(r31)
	PPC_STORE_U16(ctx.r31.u32 + 440, ctx.r11.u16);
	// sth r11,444(r31)
	PPC_STORE_U16(ctx.r31.u32 + 444, ctx.r11.u16);
	// bl 0x82bea998
	ctx.lr = 0x8272C7EC;
	sub_82BEA998(ctx, base);
	// lis r7,-31905
	ctx.r7.s64 = -2090926080;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// addi r4,r7,-2640
	ctx.r4.s64 = ctx.r7.s64 + -2640;
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x82bea998
	ctx.lr = 0x8272C800;
	sub_82BEA998(ctx, base);
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

__attribute__((alias("__imp__sub_8272C818"))) PPC_WEAK_FUNC(sub_8272C818);
PPC_FUNC_IMPL(__imp__sub_8272C818) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8283bf50
	ctx.lr = 0x8272C850;
	sub_8283BF50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8272C868"))) PPC_WEAK_FUNC(sub_8272C868);
PPC_FUNC_IMPL(__imp__sub_8272C868) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8283bf50
	ctx.lr = 0x8272C89C;
	sub_8283BF50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8272C8B4"))) PPC_WEAK_FUNC(sub_8272C8B4);
PPC_FUNC_IMPL(__imp__sub_8272C8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272C8B8"))) PPC_WEAK_FUNC(sub_8272C8B8);
PPC_FUNC_IMPL(__imp__sub_8272C8B8) {
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

__attribute__((alias("__imp__sub_8272C8C8"))) PPC_WEAK_FUNC(sub_8272C8C8);
PPC_FUNC_IMPL(__imp__sub_8272C8C8) {
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

__attribute__((alias("__imp__sub_8272C8DC"))) PPC_WEAK_FUNC(sub_8272C8DC);
PPC_FUNC_IMPL(__imp__sub_8272C8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272C8E0"))) PPC_WEAK_FUNC(sub_8272C8E0);
PPC_FUNC_IMPL(__imp__sub_8272C8E0) {
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

__attribute__((alias("__imp__sub_8272C8F0"))) PPC_WEAK_FUNC(sub_8272C8F0);
PPC_FUNC_IMPL(__imp__sub_8272C8F0) {
	PPC_FUNC_PROLOGUE();
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82294ac0
	sub_82294AC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8272C904"))) PPC_WEAK_FUNC(sub_8272C904);
PPC_FUNC_IMPL(__imp__sub_8272C904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272C908"))) PPC_WEAK_FUNC(sub_8272C908);
PPC_FUNC_IMPL(__imp__sub_8272C908) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8272c930
	if (ctx.cr6.eq) goto loc_8272C930;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8283f258
	ctx.lr = 0x8272C930;
	sub_8283F258(ctx, base);
loc_8272C930:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8272c960
	if (ctx.cr6.eq) goto loc_8272C960;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne 0x8272c960
	if (!ctx.cr0.eq) goto loc_8272C960;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8272C960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8272C960:
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

__attribute__((alias("__imp__sub_8272C974"))) PPC_WEAK_FUNC(sub_8272C974);
PPC_FUNC_IMPL(__imp__sub_8272C974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272C978"))) PPC_WEAK_FUNC(sub_8272C978);
PPC_FUNC_IMPL(__imp__sub_8272C978) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272C98C"))) PPC_WEAK_FUNC(sub_8272C98C);
PPC_FUNC_IMPL(__imp__sub_8272C98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272C990"))) PPC_WEAK_FUNC(sub_8272C990);
PPC_FUNC_IMPL(__imp__sub_8272C990) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8272C9C0"))) PPC_WEAK_FUNC(sub_8272C9C0);
PPC_FUNC_IMPL(__imp__sub_8272C9C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272C9C4"))) PPC_WEAK_FUNC(sub_8272C9C4);
PPC_FUNC_IMPL(__imp__sub_8272C9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272C9C8"))) PPC_WEAK_FUNC(sub_8272C9C8);
PPC_FUNC_IMPL(__imp__sub_8272C9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// addi r9,r11,32252
	ctx.r9.s64 = ctx.r11.s64 + 32252;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272C9E8"))) PPC_WEAK_FUNC(sub_8272C9E8);
PPC_FUNC_IMPL(__imp__sub_8272C9E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272C9F0"))) PPC_WEAK_FUNC(sub_8272C9F0);
PPC_FUNC_IMPL(__imp__sub_8272C9F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272CA00"))) PPC_WEAK_FUNC(sub_8272CA00);
PPC_FUNC_IMPL(__imp__sub_8272CA00) {
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

__attribute__((alias("__imp__sub_8272CA14"))) PPC_WEAK_FUNC(sub_8272CA14);
PPC_FUNC_IMPL(__imp__sub_8272CA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272CA18"))) PPC_WEAK_FUNC(sub_8272CA18);
PPC_FUNC_IMPL(__imp__sub_8272CA18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272CA28"))) PPC_WEAK_FUNC(sub_8272CA28);
PPC_FUNC_IMPL(__imp__sub_8272CA28) {
	PPC_FUNC_PROLOGUE();
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82294ac0
	sub_82294AC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8272CA3C"))) PPC_WEAK_FUNC(sub_8272CA3C);
PPC_FUNC_IMPL(__imp__sub_8272CA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272CA40"))) PPC_WEAK_FUNC(sub_8272CA40);
PPC_FUNC_IMPL(__imp__sub_8272CA40) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8272ca68
	if (ctx.cr6.eq) goto loc_8272CA68;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8283f258
	ctx.lr = 0x8272CA68;
	sub_8283F258(ctx, base);
loc_8272CA68:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8272ca98
	if (ctx.cr6.eq) goto loc_8272CA98;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne 0x8272ca98
	if (!ctx.cr0.eq) goto loc_8272CA98;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8272CA98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8272CA98:
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

__attribute__((alias("__imp__sub_8272CAAC"))) PPC_WEAK_FUNC(sub_8272CAAC);
PPC_FUNC_IMPL(__imp__sub_8272CAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272CAB0"))) PPC_WEAK_FUNC(sub_8272CAB0);
PPC_FUNC_IMPL(__imp__sub_8272CAB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272CAC4"))) PPC_WEAK_FUNC(sub_8272CAC4);
PPC_FUNC_IMPL(__imp__sub_8272CAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272CAC8"))) PPC_WEAK_FUNC(sub_8272CAC8);
PPC_FUNC_IMPL(__imp__sub_8272CAC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8272CAF8"))) PPC_WEAK_FUNC(sub_8272CAF8);
PPC_FUNC_IMPL(__imp__sub_8272CAF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272CAFC"))) PPC_WEAK_FUNC(sub_8272CAFC);
PPC_FUNC_IMPL(__imp__sub_8272CAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272CB00"))) PPC_WEAK_FUNC(sub_8272CB00);
PPC_FUNC_IMPL(__imp__sub_8272CB00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// addi r9,r11,32368
	ctx.r9.s64 = ctx.r11.s64 + 32368;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272CB20"))) PPC_WEAK_FUNC(sub_8272CB20);
PPC_FUNC_IMPL(__imp__sub_8272CB20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272CB28"))) PPC_WEAK_FUNC(sub_8272CB28);
PPC_FUNC_IMPL(__imp__sub_8272CB28) {
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

__attribute__((alias("__imp__sub_8272CB38"))) PPC_WEAK_FUNC(sub_8272CB38);
PPC_FUNC_IMPL(__imp__sub_8272CB38) {
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

__attribute__((alias("__imp__sub_8272CB4C"))) PPC_WEAK_FUNC(sub_8272CB4C);
PPC_FUNC_IMPL(__imp__sub_8272CB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272CB50"))) PPC_WEAK_FUNC(sub_8272CB50);
PPC_FUNC_IMPL(__imp__sub_8272CB50) {
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

__attribute__((alias("__imp__sub_8272CB60"))) PPC_WEAK_FUNC(sub_8272CB60);
PPC_FUNC_IMPL(__imp__sub_8272CB60) {
	PPC_FUNC_PROLOGUE();
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82294ac0
	sub_82294AC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8272CB74"))) PPC_WEAK_FUNC(sub_8272CB74);
PPC_FUNC_IMPL(__imp__sub_8272CB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272CB78"))) PPC_WEAK_FUNC(sub_8272CB78);
PPC_FUNC_IMPL(__imp__sub_8272CB78) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8272cba0
	if (ctx.cr6.eq) goto loc_8272CBA0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8283f258
	ctx.lr = 0x8272CBA0;
	sub_8283F258(ctx, base);
loc_8272CBA0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8272cbd0
	if (ctx.cr6.eq) goto loc_8272CBD0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne 0x8272cbd0
	if (!ctx.cr0.eq) goto loc_8272CBD0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8272CBD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8272CBD0:
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

__attribute__((alias("__imp__sub_8272CBE4"))) PPC_WEAK_FUNC(sub_8272CBE4);
PPC_FUNC_IMPL(__imp__sub_8272CBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272CBE8"))) PPC_WEAK_FUNC(sub_8272CBE8);
PPC_FUNC_IMPL(__imp__sub_8272CBE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272CBFC"))) PPC_WEAK_FUNC(sub_8272CBFC);
PPC_FUNC_IMPL(__imp__sub_8272CBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272CC00"))) PPC_WEAK_FUNC(sub_8272CC00);
PPC_FUNC_IMPL(__imp__sub_8272CC00) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8272CC30"))) PPC_WEAK_FUNC(sub_8272CC30);
PPC_FUNC_IMPL(__imp__sub_8272CC30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272CC34"))) PPC_WEAK_FUNC(sub_8272CC34);
PPC_FUNC_IMPL(__imp__sub_8272CC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8272CC38"))) PPC_WEAK_FUNC(sub_8272CC38);
PPC_FUNC_IMPL(__imp__sub_8272CC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// addi r9,r11,32484
	ctx.r9.s64 = ctx.r11.s64 + 32484;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272CC58"))) PPC_WEAK_FUNC(sub_8272CC58);
PPC_FUNC_IMPL(__imp__sub_8272CC58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272CC60"))) PPC_WEAK_FUNC(sub_8272CC60);
PPC_FUNC_IMPL(__imp__sub_8272CC60) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-15272
	ctx.r10.s64 = ctx.r11.s64 + -15272;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82358828
	ctx.lr = 0x8272CC8C;
	sub_82358828(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8272cca0
	if (ctx.cr6.eq) goto loc_8272CCA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8272cca4
	if (!ctx.cr6.eq) goto loc_8272CCA4;
loc_8272CCA0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8272CCA4:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8272CCC0"))) PPC_WEAK_FUNC(sub_8272CCC0);
PPC_FUNC_IMPL(__imp__sub_8272CCC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272CCC8"))) PPC_WEAK_FUNC(sub_8272CCC8);
PPC_FUNC_IMPL(__imp__sub_8272CCC8) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-15364
	ctx.r10.s64 = ctx.r11.s64 + -15364;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82358828
	ctx.lr = 0x8272CCF4;
	sub_82358828(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8272cd08
	if (ctx.cr6.eq) goto loc_8272CD08;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8272cd0c
	if (!ctx.cr6.eq) goto loc_8272CD0C;
loc_8272CD08:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8272CD0C:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8272CD28"))) PPC_WEAK_FUNC(sub_8272CD28);
PPC_FUNC_IMPL(__imp__sub_8272CD28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272CD30"))) PPC_WEAK_FUNC(sub_8272CD30);
PPC_FUNC_IMPL(__imp__sub_8272CD30) {
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
	// bl 0x8272dfd0
	ctx.lr = 0x8272CD48;
	sub_8272DFD0(ctx, base);
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

