#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82B262A0"))) PPC_WEAK_FUNC(sub_82B262A0);
PPC_FUNC_IMPL(__imp__sub_82B262A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B262A8"))) PPC_WEAK_FUNC(sub_82B262A8);
PPC_FUNC_IMPL(__imp__sub_82B262A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82B262B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x82295bc8
	ctx.lr = 0x82B262C0;
	sub_82295BC8(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b26344
	if (ctx.cr6.eq) goto loc_82B26344;
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// addi r31,r10,-20912
	ctx.r31.s64 = ctx.r10.s64 + -20912;
	// lis r9,-32214
	ctx.r9.s64 = -2111176704;
	// addi r30,r9,-20920
	ctx.r30.s64 = ctx.r9.s64 + -20920;
	// lis r8,-32078
	ctx.r8.s64 = -2102263808;
	// addi r29,r8,32048
	ctx.r29.s64 = ctx.r8.s64 + 32048;
	// li r7,16384
	ctx.r7.s64 = 16384;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// ori r5,r6,16516
	ctx.r5.u64 = ctx.r6.u64 | 16516;
	// rldimi r7,r5,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x822b1680
	ctx.lr = 0x82B26300;
	sub_822B1680(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lis r4,-32224
	ctx.r4.s64 = -2111832064;
	// addi r3,r4,-13080
	ctx.r3.s64 = ctx.r4.s64 + -13080;
	// addi r8,r3,2
	ctx.r8.s64 = ctx.r3.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1360
	ctx.r5.s64 = 1360;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// std r28,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r28.u64);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// bl 0x82398460
	ctx.lr = 0x82B2633C;
	sub_82398460(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// b 0x82b2634c
	goto loc_82B2634C;
loc_82B26344:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_82B2634C:
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B26360"))) PPC_WEAK_FUNC(sub_82B26360);
PPC_FUNC_IMPL(__imp__sub_82B26360) {
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
	// bl 0x829a7b30
	ctx.lr = 0x82B26370;
	sub_829A7B30(ctx, base);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r10,-23720(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23720);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82b26394
	if (ctx.cr6.eq) goto loc_82B26394;
	// bl 0x829a7b30
	ctx.lr = 0x82B26384;
	sub_829A7B30(ctx, base);
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lwz r8,-23720(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23720);
	// stw r3,60(r8)
	PPC_STORE_U32(ctx.r8.u32 + 60, ctx.r3.u32);
	// b 0x82b263a4
	goto loc_82B263A4;
loc_82B26394:
	// lis r7,-31883
	ctx.r7.s64 = -2089484288;
	// lwz r6,-23720(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + -23720);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,60(r6)
	PPC_STORE_U32(ctx.r6.u32 + 60, ctx.r5.u32);
loc_82B263A4:
	// bl 0x822955c8
	ctx.lr = 0x82B263A8;
	sub_822955C8(ctx, base);
	// lis r4,-31883
	ctx.r4.s64 = -2089484288;
	// lwz r11,-23720(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -23720);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x822949a0
	ctx.lr = 0x82B263B8;
	sub_822949A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lwz r3,-23720(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23720);
	// bl 0x822b1678
	ctx.lr = 0x82B263C8;
	sub_822B1678(ctx, base);
	// bl 0x822a8400
	ctx.lr = 0x82B263CC;
	sub_822A8400(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b26414
	if (ctx.cr6.eq) goto loc_82B26414;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lwz r8,-23720(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23720);
	// lwz r7,52(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bl 0x822949a0
	ctx.lr = 0x82B263E8;
	sub_822949A0(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82b26414
	if (!ctx.cr6.eq) goto loc_82B26414;
	// lis r5,-31883
	ctx.r5.s64 = -2089484288;
	// lwz r4,-23720(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + -23720);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lwz r3,-23720(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23720);
	// lwz r9,124(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B26414;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B26414:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B26424"))) PPC_WEAK_FUNC(sub_82B26424);
PPC_FUNC_IMPL(__imp__sub_82B26424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B26428"))) PPC_WEAK_FUNC(sub_82B26428);
PPC_FUNC_IMPL(__imp__sub_82B26428) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// addi r10,r11,5760
	ctx.r10.s64 = ctx.r11.s64 + 5760;
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// lis r9,-32213
	ctx.r9.s64 = -2111111168;
	// addi r8,r9,5760
	ctx.r8.s64 = ctx.r9.s64 + 5760;
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// lwz r7,-12(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// subf r5,r7,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r7.s64;
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2645C"))) PPC_WEAK_FUNC(sub_82B2645C);
PPC_FUNC_IMPL(__imp__sub_82B2645C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B26460"))) PPC_WEAK_FUNC(sub_82B26460);
PPC_FUNC_IMPL(__imp__sub_82B26460) {
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
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x822b3a90
	ctx.lr = 0x82B26484;
	sub_822B3A90(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// bl 0x829a7b30
	ctx.lr = 0x82B2648C;
	sub_829A7B30(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r3,r5,1
	ctx.r3.u64 = ctx.r5.u64 ^ 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B264B8"))) PPC_WEAK_FUNC(sub_82B264B8);
PPC_FUNC_IMPL(__imp__sub_82B264B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r3.u32);
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// bl 0x82b08b98
	ctx.lr = 0x82B264D4;
	sub_82B08B98(ctx, base);
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x82295bc8
	ctx.lr = 0x82B264DC;
	sub_82295BC8(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b264fc
	if (ctx.cr6.eq) goto loc_82B264FC;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82b65a78
	ctx.lr = 0x82B264F4;
	sub_82B65A78(ctx, base);
	// stw r3,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// b 0x82b26504
	goto loc_82B26504;
loc_82B264FC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
loc_82B26504:
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b65ac0
	ctx.lr = 0x82B26514;
	sub_82B65AC0(ctx, base);
	// lwz r8,228(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,1284(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1284);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b65ad0
	ctx.lr = 0x82B26524;
	sub_82B65AD0(ctx, base);
	// lwz r7,228(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// addi r31,r7,1056
	ctx.r31.s64 = ctx.r7.s64 + 1056;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b262a0
	ctx.lr = 0x82B26534;
	sub_82B262A0(ctx, base);
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,228(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwzx r4,r31,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// stw r4,1140(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1140, ctx.r4.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r3,1140(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1140);
	// bl 0x82b64b98
	ctx.lr = 0x82B26558;
	sub_82B64B98(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r9,1268(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1268);
	// lwz r8,1140(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1140);
	// stw r8,896(r9)
	PPC_STORE_U32(ctx.r9.u32 + 896, ctx.r8.u32);
	// lwz r7,228(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,1316(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1316);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b65b60
	ctx.lr = 0x82B2657C;
	sub_82B65B60(ctx, base);
	// lwz r6,228(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,1272(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1272);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b65e38
	ctx.lr = 0x82B2658C;
	sub_82B65E38(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b66258
	ctx.lr = 0x82B26594;
	sub_82B66258(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b66480
	ctx.lr = 0x82B2659C;
	sub_82B66480(ctx, base);
	// lwz r5,228(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r6,1296(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1296);
	// lwz r4,228(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r5,1292(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1292);
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,1288(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1288);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b66a38
	ctx.lr = 0x82B265BC;
	sub_82B66A38(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,1300(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1300);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b66ca0
	ctx.lr = 0x82B265CC;
	sub_82B66CA0(ctx, base);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,1304(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1304);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b66e40
	ctx.lr = 0x82B265DC;
	sub_82B66E40(ctx, base);
	// lwz r9,228(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,1312(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1312);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b65c40
	ctx.lr = 0x82B265EC;
	sub_82B65C40(ctx, base);
	// lwz r8,228(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,1308(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1308);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b65d38
	ctx.lr = 0x82B265FC;
	sub_82B65D38(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// lfs f1,-15120(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r3,1240(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1240);
	// bl 0x82563f48
	ctx.lr = 0x82B2661C;
	sub_82563F48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,2
	ctx.r5.s64 = 2;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f1,-16468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16468);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r3,1240(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1240);
	// bl 0x82563f48
	ctx.lr = 0x82B2663C;
	sub_82563F48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lfs f1,17440(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17440);
	ctx.f1.f64 = double(temp.f32);
	// lwz r8,228(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r3,1280(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1280);
	// bl 0x82563f48
	ctx.lr = 0x82B2665C;
	sub_82563F48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,2
	ctx.r5.s64 = 2;
	// lis r4,-32222
	ctx.r4.s64 = -2111700992;
	// lfs f1,-16472(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -16472);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r3,1280(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	// bl 0x82563f48
	ctx.lr = 0x82B2667C;
	sub_82563F48(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1236(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1236, ctx.r10.u8);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// addi r4,r7,-10880
	ctx.r4.s64 = ctx.r7.s64 + -10880;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8233df70
	ctx.lr = 0x82B266B0;
	sub_8233DF70(ctx, base);
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r5,172(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x82562de8
	ctx.lr = 0x82B266C0;
	sub_82562DE8(ctx, base);
	// lwz r6,228(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r3,1328(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1328, ctx.r3.u32);
	// lwz r5,228(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r4,1332(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1332, ctx.r4.u32);
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r11,1328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1328);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b26804
	if (ctx.cr6.eq) goto loc_82B26804;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// addi r4,r8,-10836
	ctx.r4.s64 = ctx.r8.s64 + -10836;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8233df70
	ctx.lr = 0x82B2670C;
	sub_8233DF70(ctx, base);
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r7,228(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r3,1328(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1328);
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82562de8
	ctx.lr = 0x82B26720;
	sub_82562DE8(ctx, base);
	// lwz r6,228(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r3,1332(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1332, ctx.r3.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stw r5,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r5.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r4,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r4.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r3,-32224
	ctx.r3.s64 = -2111832064;
	// addi r4,r3,-13020
	ctx.r4.s64 = ctx.r3.s64 + -13020;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x8233df70
	ctx.lr = 0x82B26750;
	sub_8233DF70(ctx, base);
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r3,1328(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1328);
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82562de8
	ctx.lr = 0x82B26764;
	sub_82562DE8(ctx, base);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r3,1336(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1336, ctx.r3.u32);
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r8.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r7,-32224
	ctx.r7.s64 = -2111832064;
	// addi r4,r7,-13000
	ctx.r4.s64 = ctx.r7.s64 + -13000;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8233df70
	ctx.lr = 0x82B26794;
	sub_8233DF70(ctx, base);
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r6,228(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r3,1328(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1328);
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x82562de8
	ctx.lr = 0x82B267A8;
	sub_82562DE8(ctx, base);
	// lwz r5,228(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r3,1340(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1340, ctx.r3.u32);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// stw r4,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r3.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r4,r11,-12976
	ctx.r4.s64 = ctx.r11.s64 + -12976;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x8233df70
	ctx.lr = 0x82B267D8;
	sub_8233DF70(ctx, base);
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r3,1328(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1328);
	// lwz r5,188(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// bl 0x82562de8
	ctx.lr = 0x82B267EC;
	sub_82562DE8(ctx, base);
	// lwz r9,228(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r3,1344(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1344, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,228(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r3,1328(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1328);
	// bl 0x82556ff8
	ctx.lr = 0x82B26804;
	sub_82556FF8(ctx, base);
loc_82B26804:
	// lwz r7,228(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r6,916(r7)
	PPC_STORE_U32(ctx.r7.u32 + 916, ctx.r6.u32);
	// lwz r5,228(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// lfs f0,-15120(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1224(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1224, temp.u32);
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1228(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1228, temp.u32);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lfs f12,-15120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1232(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1232, temp.u32);
	// bl 0x82b64238
	ctx.lr = 0x82B26844;
	sub_82B64238(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2685C"))) PPC_WEAK_FUNC(sub_82B2685C);
PPC_FUNC_IMPL(__imp__sub_82B2685C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B26860"))) PPC_WEAK_FUNC(sub_82B26860);
PPC_FUNC_IMPL(__imp__sub_82B26860) {
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
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,1220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1220);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,1188(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1188);
	// bl 0x82b640d0
	ctx.lr = 0x82B26884;
	sub_82B640D0(ctx, base);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lbz r8,1236(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1236);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82b268c8
	if (ctx.cr6.eq) goto loc_82B268C8;
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lbz r6,1236(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1236);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x82b268c0
	if (!ctx.cr6.eq) goto loc_82B268C0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,1328(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1328);
	// bl 0x82556ff8
	ctx.lr = 0x82B268B4;
	sub_82556FF8(ctx, base);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r3,1236(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1236, ctx.r3.u8);
loc_82B268C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b269a4
	goto loc_82B269A4;
loc_82B268C8:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,916(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 916);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b2693c
	if (ctx.cr6.eq) goto loc_82B2693C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b66258
	ctx.lr = 0x82B268E8;
	sub_82B66258(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b65ac8
	ctx.lr = 0x82B268F0;
	sub_82B65AC8(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82b26934
	if (ctx.cr6.eq) goto loc_82B26934;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82b65ab8
	ctx.lr = 0x82B26914;
	sub_82B65AB8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82b26928
	if (ctx.cr6.eq) goto loc_82B26928;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x822990f0
	ctx.lr = 0x82B26928;
	sub_822990F0(ctx, base);
loc_82B26928:
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// b 0x82b2693c
	goto loc_82B2693C;
loc_82B26934:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
loc_82B2693C:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,916(r11)
	PPC_STORE_U32(ctx.r11.u32 + 916, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// b 0x82b26960
	goto loc_82B26960;
loc_82B26954:
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
loc_82B26960:
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r6,20
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 20, ctx.xer);
	// bge cr6,0x82b26988
	if (!ctx.cr6.lt) goto loc_82B26988;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r5,1056
	ctx.r4.s64 = ctx.r5.s64 + 1056;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// bl 0x82b64c60
	ctx.lr = 0x82B26984;
	sub_82B64C60(ctx, base);
	// b 0x82b26954
	goto loc_82B26954;
loc_82B26988:
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,1140(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1140);
	// bl 0x82b64c60
	ctx.lr = 0x82B26994;
	sub_82B64C60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b656d0
	ctx.lr = 0x82B2699C;
	sub_82B656D0(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82b08c00
	ctx.lr = 0x82B269A4;
	sub_82B08C00(ctx, base);
loc_82B269A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B269B4"))) PPC_WEAK_FUNC(sub_82B269B4);
PPC_FUNC_IMPL(__imp__sub_82B269B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B269B8"))) PPC_WEAK_FUNC(sub_82B269B8);
PPC_FUNC_IMPL(__imp__sub_82B269B8) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82b65ab8
	ctx.lr = 0x82B269D4;
	sub_82B65AB8(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b269ec
	if (ctx.cr6.eq) goto loc_82B269EC;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x822990f0
	ctx.lr = 0x82B269EC;
	sub_822990F0(ctx, base);
loc_82B269EC:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B26A00"))) PPC_WEAK_FUNC(sub_82B26A00);
PPC_FUNC_IMPL(__imp__sub_82B26A00) {
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
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82b08c70
	ctx.lr = 0x82B26A18;
	sub_82B08C70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B26A28"))) PPC_WEAK_FUNC(sub_82B26A28);
PPC_FUNC_IMPL(__imp__sub_82B26A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-1552(r1)
	ea = -1552 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,1572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1572, ctx.r3.u32);
	// stb r4,1583(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1583, ctx.r4.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822990d8
	ctx.lr = 0x82B26A44;
	sub_822990D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822990d8
	ctx.lr = 0x82B26A4C;
	sub_822990D8(ctx, base);
	// lbz r11,1583(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1583);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82b26abc
	if (!ctx.cr6.eq) goto loc_82B26ABC;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r4,r10,-12956
	ctx.r4.s64 = ctx.r10.s64 + -12956;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82295680
	ctx.lr = 0x82B26A68;
	sub_82295680(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295908
	ctx.lr = 0x82B26A74;
	sub_82295908(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x82B26A7C;
	sub_82299080(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b64338
	ctx.lr = 0x82B26A88;
	sub_82B64338(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r9,1572(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// lwz r3,1332(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1332);
	// bl 0x82570f58
	ctx.lr = 0x82B26A98;
	sub_82570F58(ctx, base);
	// lwz r8,1572(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// lwz r4,1204(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1204);
	// lwz r7,1572(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// lwz r3,1172(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1172);
	// bl 0x82b640d0
	ctx.lr = 0x82B26AAC;
	sub_82B640D0(ctx, base);
	// lwz r6,1572(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,1236(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1236, ctx.r5.u8);
	// b 0x82b26c78
	goto loc_82B26C78;
loc_82B26ABC:
	// lbz r4,1583(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1583);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82b26b2c
	if (!ctx.cr6.eq) goto loc_82B26B2C;
	// lis r3,-32224
	ctx.r3.s64 = -2111832064;
	// addi r4,r3,-12940
	ctx.r4.s64 = ctx.r3.s64 + -12940;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82295680
	ctx.lr = 0x82B26AD8;
	sub_82295680(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295908
	ctx.lr = 0x82B26AE4;
	sub_82295908(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82299080
	ctx.lr = 0x82B26AEC;
	sub_82299080(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b64338
	ctx.lr = 0x82B26AF8;
	sub_82B64338(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,1572(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// lwz r3,1332(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1332);
	// bl 0x82570f58
	ctx.lr = 0x82B26B08;
	sub_82570F58(ctx, base);
	// lwz r10,1572(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// lwz r4,1212(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1212);
	// lwz r9,1572(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// lwz r3,1180(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1180);
	// bl 0x82b640d0
	ctx.lr = 0x82B26B1C;
	sub_82B640D0(ctx, base);
	// lwz r8,1572(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// li r7,2
	ctx.r7.s64 = 2;
	// stb r7,1236(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1236, ctx.r7.u8);
	// b 0x82b26c78
	goto loc_82B26C78;
loc_82B26B2C:
	// lbz r6,1583(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1583);
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// bne cr6,0x82b26b9c
	if (!ctx.cr6.eq) goto loc_82B26B9C;
	// lis r5,-32224
	ctx.r5.s64 = -2111832064;
	// addi r4,r5,-12924
	ctx.r4.s64 = ctx.r5.s64 + -12924;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82295680
	ctx.lr = 0x82B26B48;
	sub_82295680(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295908
	ctx.lr = 0x82B26B54;
	sub_82295908(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82299080
	ctx.lr = 0x82B26B5C;
	sub_82299080(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b64338
	ctx.lr = 0x82B26B68;
	sub_82B64338(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,1572(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// lwz r3,1332(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1332);
	// bl 0x82570f58
	ctx.lr = 0x82B26B78;
	sub_82570F58(ctx, base);
	// lwz r11,1572(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// lwz r4,1208(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1208);
	// lwz r10,1572(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// lwz r3,1176(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1176);
	// bl 0x82b640d0
	ctx.lr = 0x82B26B8C;
	sub_82B640D0(ctx, base);
	// lwz r9,1572(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// li r8,2
	ctx.r8.s64 = 2;
	// stb r8,1236(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1236, ctx.r8.u8);
	// b 0x82b26c78
	goto loc_82B26C78;
loc_82B26B9C:
	// lbz r7,1583(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1583);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82b26c0c
	if (!ctx.cr6.eq) goto loc_82B26C0C;
	// lis r6,-32224
	ctx.r6.s64 = -2111832064;
	// addi r4,r6,-12904
	ctx.r4.s64 = ctx.r6.s64 + -12904;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82295680
	ctx.lr = 0x82B26BB8;
	sub_82295680(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295908
	ctx.lr = 0x82B26BC4;
	sub_82295908(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x82B26BCC;
	sub_82299080(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b64338
	ctx.lr = 0x82B26BD8;
	sub_82B64338(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,1572(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// lwz r3,1332(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1332);
	// bl 0x82570f58
	ctx.lr = 0x82B26BE8;
	sub_82570F58(ctx, base);
	// lwz r4,1572(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// lwz r4,1216(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1216);
	// lwz r3,1572(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// lwz r3,1184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1184);
	// bl 0x82b640d0
	ctx.lr = 0x82B26BFC;
	sub_82B640D0(ctx, base);
	// lwz r11,1572(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,1236(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1236, ctx.r10.u8);
	// b 0x82b26c78
	goto loc_82B26C78;
loc_82B26C0C:
	// lbz r9,1583(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1583);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82b26c78
	if (!ctx.cr6.eq) goto loc_82B26C78;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// addi r4,r8,-12888
	ctx.r4.s64 = ctx.r8.s64 + -12888;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82295680
	ctx.lr = 0x82B26C28;
	sub_82295680(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295908
	ctx.lr = 0x82B26C34;
	sub_82295908(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82299080
	ctx.lr = 0x82B26C3C;
	sub_82299080(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b64338
	ctx.lr = 0x82B26C48;
	sub_82B64338(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r7,1572(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// lwz r3,1332(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1332);
	// bl 0x82570f58
	ctx.lr = 0x82B26C58;
	sub_82570F58(ctx, base);
	// lwz r6,1572(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// lwz r4,1216(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1216);
	// lwz r5,1572(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// lwz r3,1184(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1184);
	// bl 0x82b640d0
	ctx.lr = 0x82B26C6C;
	sub_82B640D0(ctx, base);
	// lwz r4,1572(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// li r3,2
	ctx.r3.s64 = 2;
	// stb r3,1236(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1236, ctx.r3.u8);
loc_82B26C78:
	// lbz r11,1583(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1583);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82b26cb8
	if (!ctx.cr6.eq) goto loc_82B26CB8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,1572(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// lwz r3,1336(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1336);
	// bl 0x82556ff8
	ctx.lr = 0x82B26C94;
	sub_82556FF8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,1572(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// lwz r3,1340(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1340);
	// bl 0x82556ff8
	ctx.lr = 0x82B26CA4;
	sub_82556FF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,1572(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// lwz r3,1344(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1344);
	// bl 0x82556ff8
	ctx.lr = 0x82B26CB4;
	sub_82556FF8(ctx, base);
	// b 0x82b26ce8
	goto loc_82B26CE8;
loc_82B26CB8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,1572(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// lwz r3,1336(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1336);
	// bl 0x82556ff8
	ctx.lr = 0x82B26CC8;
	sub_82556FF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,1572(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// lwz r3,1340(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1340);
	// bl 0x82556ff8
	ctx.lr = 0x82B26CD8;
	sub_82556FF8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,1572(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// lwz r3,1344(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1344);
	// bl 0x82556ff8
	ctx.lr = 0x82B26CE8;
	sub_82556FF8(ctx, base);
loc_82B26CE8:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,1572(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// lwz r3,1328(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1328);
	// bl 0x82556ff8
	ctx.lr = 0x82B26CF8;
	sub_82556FF8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82B26D00;
	sub_82299080(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82B26D08;
	sub_82299080(ctx, base);
	// addi r1,r1,1552
	ctx.r1.s64 = ctx.r1.s64 + 1552;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B26D18"))) PPC_WEAK_FUNC(sub_82B26D18);
PPC_FUNC_IMPL(__imp__sub_82B26D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// stfs f1,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lfs f1,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x82b08e40
	ctx.lr = 0x82B26D3C;
	sub_82B08E40(ctx, base);
	// lfs f1,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r9,700(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 700);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B26D58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r7,916(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 916);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lbz r5,920(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 920);
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82b26d94
	if (ctx.cr6.lt) goto loc_82B26D94;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82b26db0
	if (ctx.cr6.eq) goto loc_82B26DB0;
	// b 0x82b274a4
	goto loc_82B274A4;
loc_82B26D94:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b26da8
	if (ctx.cr6.eq) goto loc_82B26DA8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b66258
	ctx.lr = 0x82B26DA8;
	sub_82B66258(ctx, base);
loc_82B26DA8:
	// b 0x82b274a4
	goto loc_82B274A4;
	// b 0x82b274a4
	goto loc_82B274A4;
loc_82B26DB0:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b274a4
	if (ctx.cr6.eq) goto loc_82B274A4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b66090
	ctx.lr = 0x82B26DC4;
	sub_82B66090(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lfs f0,1232(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 1232);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// lfs f13,-15120(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82b26de0
	if (ctx.cr6.eq) goto loc_82B26DE0;
	// b 0x82b274a4
	goto loc_82B274A4;
loc_82B26DE0:
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r5,928(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 928);
	// rlwinm r4,r5,0,24,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82b26f0c
	if (ctx.cr6.eq) goto loc_82B26F0C;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lbz r11,1236(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82b26f08
	if (!ctx.cr6.eq) goto loc_82B26F08;
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,1140(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1140);
	// bl 0x82b64c28
	ctx.lr = 0x82B26E10;
	sub_82B64C28(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b66988
	ctx.lr = 0x82B26E18;
	sub_82B66988(ctx, base);
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r31,r9,1056
	ctx.r31.s64 = ctx.r9.s64 + 1056;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b262a0
	ctx.lr = 0x82B26E28;
	sub_82B262A0(ctx, base);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwzx r6,r31,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// stw r6,1140(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1140, ctx.r6.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,1140(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1140);
	// bl 0x82b64b98
	ctx.lr = 0x82B26E4C;
	sub_82B64B98(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r9,1268(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1268);
	// lwz r8,1140(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1140);
	// stw r8,896(r9)
	PPC_STORE_U32(ctx.r9.u32 + 896, ctx.r8.u32);
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r6,1296(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1296);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r5,1292(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1292);
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1288(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1288);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b66a38
	ctx.lr = 0x82B26E80;
	sub_82B66A38(ctx, base);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1300(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1300);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b66ca0
	ctx.lr = 0x82B26E90;
	sub_82B66CA0(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1304(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1304);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b66e40
	ctx.lr = 0x82B26EA0;
	sub_82B66E40(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1312(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1312);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b65c40
	ctx.lr = 0x82B26EB0;
	sub_82B65C40(ctx, base);
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r7,1244(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1244);
	// lwz r6,1148(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1148);
	// stw r6,896(r7)
	PPC_STORE_U32(ctx.r7.u32 + 896, ctx.r6.u32);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// lfs f12,31796(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 31796);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1224(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1224, temp.u32);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,932(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 932);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,892(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 892);
	// bl 0x82b640d0
	ctx.lr = 0x82B26EE8;
	sub_82B640D0(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1308(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1308);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b65d38
	ctx.lr = 0x82B26EF8;
	sub_82B65D38(ctx, base);
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f11,-16368(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -16368);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1232(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 1232, temp.u32);
loc_82B26F08:
	// b 0x82b274a4
	goto loc_82B274A4;
loc_82B26F0C:
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r6,928(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 928);
	// rlwinm r5,r6,0,23,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82b27038
	if (ctx.cr6.eq) goto loc_82B27038;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lbz r3,1236(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1236);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82b27034
	if (!ctx.cr6.eq) goto loc_82B27034;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,1140(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1140);
	// bl 0x82b64c28
	ctx.lr = 0x82B26F3C;
	sub_82B64C28(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b669e0
	ctx.lr = 0x82B26F44;
	sub_82B669E0(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r31,r10,1056
	ctx.r31.s64 = ctx.r10.s64 + 1056;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b262a0
	ctx.lr = 0x82B26F54;
	sub_82B262A0(ctx, base);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwzx r7,r31,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// stw r7,1140(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1140, ctx.r7.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,1140(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1140);
	// bl 0x82b64b98
	ctx.lr = 0x82B26F78;
	sub_82B64B98(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,1268(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1268);
	// lwz r11,1140(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1140);
	// stw r11,896(r3)
	PPC_STORE_U32(ctx.r3.u32 + 896, ctx.r11.u32);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r6,1296(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1296);
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r5,1292(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1292);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1288(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1288);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b66a38
	ctx.lr = 0x82B26FAC;
	sub_82B66A38(ctx, base);
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1300(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1300);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b66ca0
	ctx.lr = 0x82B26FBC;
	sub_82B66CA0(ctx, base);
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1304(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1304);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b66e40
	ctx.lr = 0x82B26FCC;
	sub_82B66E40(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1312(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1312);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b65c40
	ctx.lr = 0x82B26FDC;
	sub_82B65C40(ctx, base);
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,1248(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1248);
	// lwz r10,1156(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1156);
	// stw r10,896(r11)
	PPC_STORE_U32(ctx.r11.u32 + 896, ctx.r10.u32);
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lfs f10,31796(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 31796);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,1228(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 1228, temp.u32);
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,932(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 932);
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,892(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 892);
	// bl 0x82b640d0
	ctx.lr = 0x82B27014;
	sub_82B640D0(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1308(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1308);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b65d38
	ctx.lr = 0x82B27024;
	sub_82B65D38(ctx, base);
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lis r3,-32222
	ctx.r3.s64 = -2111700992;
	// lfs f9,-16368(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -16368);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,1232(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 1232, temp.u32);
loc_82B27034:
	// b 0x82b274a4
	goto loc_82B274A4;
loc_82B27038:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r10,928(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 928);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82b27110
	if (ctx.cr6.eq) goto loc_82B27110;
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r7,1328(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1328);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82b270fc
	if (ctx.cr6.eq) goto loc_82B270FC;
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lbz r5,1236(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1236);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82b27094
	if (!ctx.cr6.eq) goto loc_82B27094;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b67558
	ctx.lr = 0x82B27074;
	sub_82B67558(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r10,704(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B27090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82b270fc
	goto loc_82B270FC;
loc_82B27094:
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lbz r8,1236(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1236);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x82b270fc
	if (!ctx.cr6.eq) goto loc_82B270FC;
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1204(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1204);
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,1172(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1172);
	// bl 0x82b640d0
	ctx.lr = 0x82B270B8;
	sub_82B640D0(ctx, base);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// addi r4,r5,11272
	ctx.r4.s64 = ctx.r5.s64 + 11272;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822960c0
	ctx.lr = 0x82B270C8;
	sub_822960C0(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,1332(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1332);
	// bl 0x82570f58
	ctx.lr = 0x82B270D8;
	sub_82570F58(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82299080
	ctx.lr = 0x82B270E0;
	sub_82299080(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,1328(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1328);
	// bl 0x82556ff8
	ctx.lr = 0x82B270F0;
	sub_82556FF8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,1236(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1236, ctx.r9.u8);
loc_82B270FC:
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lfs f8,-32344(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -32344);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,1232(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + 1232, temp.u32);
	// b 0x82b274a4
	goto loc_82B274A4;
loc_82B27110:
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r5,928(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 928);
	// rlwinm r4,r5,0,26,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82b271d8
	if (ctx.cr6.eq) goto loc_82B271D8;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,1328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1328);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b271c4
	if (ctx.cr6.eq) goto loc_82B271C4;
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lbz r9,1236(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1236);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82b271c4
	if (!ctx.cr6.eq) goto loc_82B271C4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b67608
	ctx.lr = 0x82B2714C;
	sub_82B67608(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82b27194
	if (!ctx.cr6.eq) goto loc_82B27194;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r6,704(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 704);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B27170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1316(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1316);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b65b60
	ctx.lr = 0x82B27180;
	sub_82B65B60(ctx, base);
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1308(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1308);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b65d38
	ctx.lr = 0x82B27190;
	sub_82B65D38(ctx, base);
	// b 0x82b271c4
	goto loc_82B271C4;
loc_82B27194:
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1208(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1208);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,1176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1176);
	// bl 0x82b640d0
	ctx.lr = 0x82B271A8;
	sub_82B640D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,1328(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1328);
	// bl 0x82556ff8
	ctx.lr = 0x82B271B8;
	sub_82556FF8(ctx, base);
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r8,1236(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1236, ctx.r8.u8);
loc_82B271C4:
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lfs f7,-32344(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -32344);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,1232(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 1232, temp.u32);
	// b 0x82b274a4
	goto loc_82B274A4;
loc_82B271D8:
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,928(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 928);
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82b2728c
	if (ctx.cr6.eq) goto loc_82B2728C;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lbz r10,1236(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1236);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82b27288
	if (!ctx.cr6.eq) goto loc_82B27288;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b66fe0
	ctx.lr = 0x82B27204;
	sub_82B66FE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82b27254
	if (!ctx.cr6.eq) goto loc_82B27254;
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1300(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1300);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b66ca0
	ctx.lr = 0x82B2721C;
	sub_82B66CA0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1304(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1304);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b66e40
	ctx.lr = 0x82B2722C;
	sub_82B66E40(ctx, base);
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1312(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1312);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b65c40
	ctx.lr = 0x82B2723C;
	sub_82B65C40(ctx, base);
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1200(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1200);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,1168(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1168);
	// bl 0x82b640d0
	ctx.lr = 0x82B27250;
	sub_82B640D0(ctx, base);
	// b 0x82b27268
	goto loc_82B27268;
loc_82B27254:
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1208(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1208);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,1176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1176);
	// bl 0x82b640d0
	ctx.lr = 0x82B27268;
	sub_82B640D0(ctx, base);
loc_82B27268:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1308(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1308);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b65d38
	ctx.lr = 0x82B27278;
	sub_82B65D38(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lfs f6,31796(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 31796);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,1232(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1232, temp.u32);
loc_82B27288:
	// b 0x82b274a4
	goto loc_82B274A4;
loc_82B2728C:
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r7,928(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 928);
	// rlwinm r6,r7,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82b27340
	if (ctx.cr6.eq) goto loc_82B27340;
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lbz r4,1236(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1236);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82b2733c
	if (!ctx.cr6.eq) goto loc_82B2733C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b67148
	ctx.lr = 0x82B272B8;
	sub_82B67148(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82b27308
	if (!ctx.cr6.eq) goto loc_82B27308;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1300(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1300);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b66ca0
	ctx.lr = 0x82B272D0;
	sub_82B66CA0(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1304(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1304);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b66e40
	ctx.lr = 0x82B272E0;
	sub_82B66E40(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1312(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1312);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b65c40
	ctx.lr = 0x82B272F0;
	sub_82B65C40(ctx, base);
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1200(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1200);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,1168(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1168);
	// bl 0x82b640d0
	ctx.lr = 0x82B27304;
	sub_82B640D0(ctx, base);
	// b 0x82b2731c
	goto loc_82B2731C;
loc_82B27308:
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1208(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1208);
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,1176(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1176);
	// bl 0x82b640d0
	ctx.lr = 0x82B2731C;
	sub_82B640D0(ctx, base);
loc_82B2731C:
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1308(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1308);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b65d38
	ctx.lr = 0x82B2732C;
	sub_82B65D38(ctx, base);
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lis r3,-32246
	ctx.r3.s64 = -2113273856;
	// lfs f5,31796(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 31796);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,1232(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 1232, temp.u32);
loc_82B2733C:
	// b 0x82b274a4
	goto loc_82B274A4;
loc_82B27340:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r10,928(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 928);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82b273f4
	if (ctx.cr6.eq) goto loc_82B273F4;
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lbz r7,1236(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1236);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82b273f0
	if (!ctx.cr6.eq) goto loc_82B273F0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b672e8
	ctx.lr = 0x82B2736C;
	sub_82B672E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82b273bc
	if (!ctx.cr6.eq) goto loc_82B273BC;
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1300(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1300);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b66ca0
	ctx.lr = 0x82B27384;
	sub_82B66CA0(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1304(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1304);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b66e40
	ctx.lr = 0x82B27394;
	sub_82B66E40(ctx, base);
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1312(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1312);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b65c40
	ctx.lr = 0x82B273A4;
	sub_82B65C40(ctx, base);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1200(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1200);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,1168(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1168);
	// bl 0x82b640d0
	ctx.lr = 0x82B273B8;
	sub_82B640D0(ctx, base);
	// b 0x82b273d0
	goto loc_82B273D0;
loc_82B273BC:
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1208(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1208);
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,1176(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1176);
	// bl 0x82b640d0
	ctx.lr = 0x82B273D0;
	sub_82B640D0(ctx, base);
loc_82B273D0:
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1308(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1308);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b65d38
	ctx.lr = 0x82B273E0;
	sub_82B65D38(ctx, base);
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// lfs f4,31796(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 31796);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,1232(r7)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r7.u32 + 1232, temp.u32);
loc_82B273F0:
	// b 0x82b274a4
	goto loc_82B274A4;
loc_82B273F4:
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,928(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 928);
	// rlwinm r3,r4,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82b274a4
	if (ctx.cr6.eq) goto loc_82B274A4;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lbz r10,1236(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1236);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82b274a4
	if (!ctx.cr6.eq) goto loc_82B274A4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b67400
	ctx.lr = 0x82B27420;
	sub_82B67400(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82b27470
	if (!ctx.cr6.eq) goto loc_82B27470;
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1300(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1300);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b66ca0
	ctx.lr = 0x82B27438;
	sub_82B66CA0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1304(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1304);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b66e40
	ctx.lr = 0x82B27448;
	sub_82B66E40(ctx, base);
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1312(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1312);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b65c40
	ctx.lr = 0x82B27458;
	sub_82B65C40(ctx, base);
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1200(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1200);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,1168(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1168);
	// bl 0x82b640d0
	ctx.lr = 0x82B2746C;
	sub_82B640D0(ctx, base);
	// b 0x82b27484
	goto loc_82B27484;
loc_82B27470:
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1208(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1208);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,1176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1176);
	// bl 0x82b640d0
	ctx.lr = 0x82B27484;
	sub_82B640D0(ctx, base);
loc_82B27484:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,1308(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1308);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b65d38
	ctx.lr = 0x82B27494;
	sub_82B65D38(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lfs f3,31796(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 31796);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,1232(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1232, temp.u32);
loc_82B274A4:
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r7,928(r8)
	PPC_STORE_U32(ctx.r8.u32 + 928, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82B274C4"))) PPC_WEAK_FUNC(sub_82B274C4);
PPC_FUNC_IMPL(__imp__sub_82B274C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B274C8"))) PPC_WEAK_FUNC(sub_82B274C8);
PPC_FUNC_IMPL(__imp__sub_82B274C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r3.u32);
	// stw r4,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r4.u32);
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x82b090c0
	ctx.lr = 0x82B274E8;
	sub_82B090C0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f1,17440(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17440);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,1240(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1240);
	// bl 0x82563f48
	ctx.lr = 0x82B27508;
	sub_82563F48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,2
	ctx.r5.s64 = 2;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f1,-16196(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16196);
	ctx.f1.f64 = double(temp.f32);
	// lwz r8,212(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,1240(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1240);
	// bl 0x82563f48
	ctx.lr = 0x82B27528;
	sub_82563F48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// lfs f1,-15120(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,1280(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	// bl 0x82563f48
	ctx.lr = 0x82B27548;
	sub_82563F48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,2
	ctx.r5.s64 = 2;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f1,17440(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17440);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,1280(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1280);
	// bl 0x82563f48
	ctx.lr = 0x82B27568;
	sub_82563F48(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lfs f0,-32444(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// lwz r7,212(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r6,848(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 848);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b275ac
	if (ctx.cr6.eq) goto loc_82B275AC;
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lbz r11,920(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 920);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82b275ac
	if (ctx.cr6.eq) goto loc_82B275AC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
loc_82B275AC:
	// lwz r9,212(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r8,1324(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1324);
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,960(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 960, temp.u32);
	// lwz r7,212(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r6,1320(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1320);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,960(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 960, temp.u32);
	// lwz r5,212(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r4,1316(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1316);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,960(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 960, temp.u32);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r11,1312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1312);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,960(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 960, temp.u32);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r9,1308(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1308);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,960(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 960, temp.u32);
	// lwz r8,212(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r7,1304(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1304);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,960(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 960, temp.u32);
	// lwz r6,212(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r5,1300(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1300);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,960(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 960, temp.u32);
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,1296(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1296);
	// lfs f6,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,960(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 960, temp.u32);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r10,1292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1292);
	// lfs f5,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,960(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 960, temp.u32);
	// lwz r9,212(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r8,1288(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1288);
	// lfs f4,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,960(r8)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r8.u32 + 960, temp.u32);
	// lwz r7,212(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r6,1284(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1284);
	// lfs f3,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,960(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 960, temp.u32);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r5,212(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,1284(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1284);
	// bl 0x82556ff8
	ctx.lr = 0x82B2766C;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,1288(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1288);
	// bl 0x82556ff8
	ctx.lr = 0x82B2767C;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,1292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1292);
	// bl 0x82556ff8
	ctx.lr = 0x82B2768C;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,1296(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1296);
	// bl 0x82556ff8
	ctx.lr = 0x82B2769C;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r9,212(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,1300(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1300);
	// bl 0x82556ff8
	ctx.lr = 0x82B276AC;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r8,212(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,1304(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1304);
	// bl 0x82556ff8
	ctx.lr = 0x82B276BC;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r7,212(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,1308(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1308);
	// bl 0x82556ff8
	ctx.lr = 0x82B276CC;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r6,212(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,1312(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1312);
	// bl 0x82556ff8
	ctx.lr = 0x82B276DC;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r5,212(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,1316(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1316);
	// bl 0x82556ff8
	ctx.lr = 0x82B276EC;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,1320(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1320);
	// bl 0x82556ff8
	ctx.lr = 0x82B276FC;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,1324(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1324);
	// bl 0x82556ff8
	ctx.lr = 0x82B2770C;
	sub_82556FF8(ctx, base);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r9,1276(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1276);
	// lfs f2,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,932(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 932, temp.u32);
	// lwz r8,212(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r7,1268(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1268);
	// lfs f1,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,932(r7)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 932, temp.u32);
	// lwz r6,212(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r5,1248(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1248);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,932(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 932, temp.u32);
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,1244(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1244);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,932(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 932, temp.u32);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r10,1256(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1256);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,932(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 932, temp.u32);
	// lwz r9,212(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r8,1252(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1252);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,932(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 932, temp.u32);
	// lwz r7,212(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r6,1272(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1272);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,932(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 932, temp.u32);
	// lwz r5,212(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r4,1264(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1264);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,932(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 932, temp.u32);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r11,1260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1260);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,932(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 932, temp.u32);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r9,1280(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1280);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,932(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 932, temp.u32);
	// lwz r8,212(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r7,1240(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1240);
	// lfs f6,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,932(r7)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r7.u32 + 932, temp.u32);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r6,212(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,1240(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1240);
	// bl 0x82556ff8
	ctx.lr = 0x82B277CC;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r5,212(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,1280(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1280);
	// bl 0x82556ff8
	ctx.lr = 0x82B277DC;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,1260(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1260);
	// bl 0x82556ff8
	ctx.lr = 0x82B277EC;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,1264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1264);
	// bl 0x82556ff8
	ctx.lr = 0x82B277FC;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,1272(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1272);
	// bl 0x82556ff8
	ctx.lr = 0x82B2780C;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r9,212(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,1252(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1252);
	// bl 0x82556ff8
	ctx.lr = 0x82B2781C;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r8,212(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,1256(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1256);
	// bl 0x82556ff8
	ctx.lr = 0x82B2782C;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r7,212(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,1244(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1244);
	// bl 0x82556ff8
	ctx.lr = 0x82B2783C;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r6,212(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,1248(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1248);
	// bl 0x82556ff8
	ctx.lr = 0x82B2784C;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r5,212(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,1268(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1268);
	// bl 0x82556ff8
	ctx.lr = 0x82B2785C;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,1276(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1276);
	// bl 0x82556ff8
	ctx.lr = 0x82B2786C;
	sub_82556FF8(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r10,916(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 916);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b27894
	if (ctx.cr6.eq) goto loc_82B27894;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r8,212(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,1140(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1140);
	// bl 0x82b64cf8
	ctx.lr = 0x82B27894;
	sub_82B64CF8(ctx, base);
loc_82B27894:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B278A4"))) PPC_WEAK_FUNC(sub_82B278A4);
PPC_FUNC_IMPL(__imp__sub_82B278A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B278A8"))) PPC_WEAK_FUNC(sub_82B278A8);
PPC_FUNC_IMPL(__imp__sub_82B278A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stfs f1,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfs f0,1224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1224);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stfs f12,1224(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1224, temp.u32);
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfs f11,1224(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1224);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lfs f10,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bge cr6,0x82b27904
	if (!ctx.cr6.lt) goto loc_82B27904;
	// lwz r7,20(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r6,20(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r5,1244(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1244);
	// lwz r4,1144(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1144);
	// stw r4,896(r5)
	PPC_STORE_U32(ctx.r5.u32 + 896, ctx.r4.u32);
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f9,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,1224(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1224, temp.u32);
loc_82B27904:
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfs f8,1228(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1228);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stfs f6,1228(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 1228, temp.u32);
	// lwz r8,20(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfs f5,1228(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 1228);
	ctx.f5.f64 = double(temp.f32);
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// lfs f4,-15120(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -15120);
	ctx.f4.f64 = double(temp.f32);
	// fcmpu cr6,f5,f4
	ctx.cr6.compare(ctx.f5.f64, ctx.f4.f64);
	// bge cr6,0x82b27958
	if (!ctx.cr6.lt) goto loc_82B27958;
	// lwz r6,20(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r5,20(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r4,1248(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1248);
	// lwz r3,1152(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1152);
	// stw r3,896(r4)
	PPC_STORE_U32(ctx.r4.u32 + 896, ctx.r3.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f3,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,1228(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1228, temp.u32);
loc_82B27958:
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfs f2,1232(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1232);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lwz r8,20(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stfs f0,1232(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 1232, temp.u32);
	// lwz r7,20(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfs f13,1232(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 1232);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// lfs f12,-15120(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -15120);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82b27998
	if (!ctx.cr6.lt) goto loc_82B27998;
	// lwz r5,20(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// lfs f11,-15120(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -15120);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1232(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1232, temp.u32);
loc_82B27998:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2799C"))) PPC_WEAK_FUNC(sub_82B2799C);
PPC_FUNC_IMPL(__imp__sub_82B2799C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B279A0"))) PPC_WEAK_FUNC(sub_82B279A0);
PPC_FUNC_IMPL(__imp__sub_82B279A0) {
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
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82b650b8
	ctx.lr = 0x82B279B8;
	sub_82B650B8(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r10,r11,-12872
	ctx.r10.s64 = ctx.r11.s64 + -12872;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B279DC"))) PPC_WEAK_FUNC(sub_82B279DC);
PPC_FUNC_IMPL(__imp__sub_82B279DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B279E0"))) PPC_WEAK_FUNC(sub_82B279E0);
PPC_FUNC_IMPL(__imp__sub_82B279E0) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B279EC"))) PPC_WEAK_FUNC(sub_82B279EC);
PPC_FUNC_IMPL(__imp__sub_82B279EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B279F0"))) PPC_WEAK_FUNC(sub_82B279F0);
PPC_FUNC_IMPL(__imp__sub_82B279F0) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B279F8"))) PPC_WEAK_FUNC(sub_82B279F8);
PPC_FUNC_IMPL(__imp__sub_82B279F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stfs f1,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// stfs f2,36(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 36, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfs f0,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfs f13,36(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B27A20"))) PPC_WEAK_FUNC(sub_82B27A20);
PPC_FUNC_IMPL(__imp__sub_82B27A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stfs f1,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfs f0,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B27A38"))) PPC_WEAK_FUNC(sub_82B27A38);
PPC_FUNC_IMPL(__imp__sub_82B27A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stfs f1,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfs f0,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B27A50"))) PPC_WEAK_FUNC(sub_82B27A50);
PPC_FUNC_IMPL(__imp__sub_82B27A50) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,28(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B27A68"))) PPC_WEAK_FUNC(sub_82B27A68);
PPC_FUNC_IMPL(__imp__sub_82B27A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stfs f1,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stfs f12,16(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfs f11,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lfs f10,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bge cr6,0x82b27aa8
	if (!ctx.cr6.lt) goto loc_82B27AA8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82b27ad4
	goto loc_82B27AD4;
loc_82B27AA8:
	// lwz r7,20(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfs f9,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// lfd f8,-18320(r6)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r6.u32 + -18320);
	// fmul f7,f8,f9
	ctx.f7.f64 = ctx.f8.f64 * ctx.f9.f64;
	// lfs f6,28(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fadd f5,f6,f7
	ctx.f5.f64 = ctx.f6.f64 + ctx.f7.f64;
	// lwz r5,20(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// stfs f4,28(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B27AD4:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B27AD8"))) PPC_WEAK_FUNC(sub_82B27AD8);
PPC_FUNC_IMPL(__imp__sub_82B27AD8) {
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
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lfs f9,-32444(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -32444);
	ctx.f9.f64 = double(temp.f32);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lfs f8,-32444(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -32444);
	ctx.f8.f64 = double(temp.f32);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lfs f7,-32444(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -32444);
	ctx.f7.f64 = double(temp.f32);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lfs f6,-32444(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -32444);
	ctx.f6.f64 = double(temp.f32);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lfs f5,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lfs f4,-26236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26236);
	ctx.f4.f64 = double(temp.f32);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lfs f3,-26236(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26236);
	ctx.f3.f64 = double(temp.f32);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lfs f2,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lfs f1,20(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82b64d60
	ctx.lr = 0x82B27B58;
	sub_82B64D60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B27B68"))) PPC_WEAK_FUNC(sub_82B27B68);
PPC_FUNC_IMPL(__imp__sub_82B27B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f2,188(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82b27b98
	goto loc_82B27B98;
loc_82B27B8C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_82B27B98:
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// bge cr6,0x82b27d1c
	if (!ctx.cr6.lt) goto loc_82B27D1C;
	// bl 0x82cb2308
	ctx.lr = 0x82B27BA8;
	sub_82CB2308(ctx, base);
	// li r7,100
	ctx.r7.s64 = 100;
	// divw r6,r3,r7
	ctx.r6.s32 = ctx.r3.s32 / ctx.r7.s32;
	// mulli r5,r6,100
	ctx.r5.s64 = ctx.r6.s64 * 100;
	// subf r4,r5,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r5.s64;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f11,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x82cb2308
	ctx.lr = 0x82B27BDC;
	sub_82CB2308(ctx, base);
	// li r11,100
	ctx.r11.s64 = 100;
	// divw r10,r3,r11
	ctx.r10.s32 = ctx.r3.s32 / ctx.r11.s32;
	// mulli r9,r10,100
	ctx.r9.s64 = ctx.r10.s64 * 100;
	// subf r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f9,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// lfs f6,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82cb2308
	ctx.lr = 0x82B27C10;
	sub_82CB2308(ctx, base);
	// li r6,360
	ctx.r6.s64 = 360;
	// divw r5,r3,r6
	ctx.r5.s32 = ctx.r3.s32 / ctx.r6.s32;
	// mulli r4,r5,360
	ctx.r4.s64 = ctx.r5.s64 * 360;
	// subf r3,r4,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r4.s64;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f4,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// stfs f2,92(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82295bc8
	ctx.lr = 0x82B27C40;
	sub_82295BC8(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b27c74
	if (ctx.cr6.eq) goto loc_82B27C74;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82b650b8
	ctx.lr = 0x82B27C58;
	sub_82B650B8(ctx, base);
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r8,r9,-12872
	ctx.r8.s64 = ctx.r9.s64 + -12872;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r6,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// b 0x82b27c7c
	goto loc_82B27C7C;
loc_82B27C74:
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
loc_82B27C7C:
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,20(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,28(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// bl 0x82cb2308
	ctx.lr = 0x82B27CAC;
	sub_82CB2308(ctx, base);
	// li r9,1000
	ctx.r9.s64 = 1000;
	// divw r8,r3,r9
	ctx.r8.s32 = ctx.r3.s32 / ctx.r9.s32;
	// mulli r7,r8,1000
	ctx.r7.s64 = ctx.r8.s64 * 1000;
	// subf r6,r7,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r7.s64;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// lfd f12,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lfs f9,-29008(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -29008);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// lfs f7,-32444(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -32444);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f5,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,16(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r9,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82b65128
	ctx.lr = 0x82B27D18;
	sub_82B65128(ctx, base);
	// b 0x82b27b8c
	goto loc_82B27B8C;
loc_82B27D1C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B27D2C"))) PPC_WEAK_FUNC(sub_82B27D2C);
PPC_FUNC_IMPL(__imp__sub_82B27D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B27D30"))) PPC_WEAK_FUNC(sub_82B27D30);
PPC_FUNC_IMPL(__imp__sub_82B27D30) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r8,r9,-12856
	ctx.r8.s64 = ctx.r9.s64 + -12856;
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

__attribute__((alias("__imp__sub_82B27D58"))) PPC_WEAK_FUNC(sub_82B27D58);
PPC_FUNC_IMPL(__imp__sub_82B27D58) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B27D60"))) PPC_WEAK_FUNC(sub_82B27D60);
PPC_FUNC_IMPL(__imp__sub_82B27D60) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r8,r9,-12856
	ctx.r8.s64 = ctx.r9.s64 + -12856;
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

__attribute__((alias("__imp__sub_82B27D80"))) PPC_WEAK_FUNC(sub_82B27D80);
PPC_FUNC_IMPL(__imp__sub_82B27D80) {
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
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-12856
	ctx.r10.s64 = ctx.r11.s64 + -12856;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82B27DAC;
	sub_8229C068(ctx, base);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-10712
	ctx.r8.s64 = ctx.r9.s64 + -10712;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82B27DC0;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a60080
	ctx.lr = 0x82B27DC8;
	sub_82A60080(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82b27dfc
	if (ctx.cr6.eq) goto loc_82B27DFC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b27df4
	if (ctx.cr6.lt) goto loc_82B27DF4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82b27dfc
	if (!ctx.cr6.gt) goto loc_82B27DFC;
loc_82B27DF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82B27DFC;
	sub_82294A58(ctx, base);
loc_82B27DFC:
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

__attribute__((alias("__imp__sub_82B27E18"))) PPC_WEAK_FUNC(sub_82B27E18);
PPC_FUNC_IMPL(__imp__sub_82B27E18) {
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
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r10,r11,-12856
	ctx.r10.s64 = ctx.r11.s64 + -12856;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82B27E3C;
	sub_8229C068(ctx, base);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-10712
	ctx.r8.s64 = ctx.r9.s64 + -10712;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82B27E50;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a60080
	ctx.lr = 0x82B27E58;
	sub_82A60080(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82B27E6C"))) PPC_WEAK_FUNC(sub_82B27E6C);
PPC_FUNC_IMPL(__imp__sub_82B27E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B27E70"))) PPC_WEAK_FUNC(sub_82B27E70);
PPC_FUNC_IMPL(__imp__sub_82B27E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82B27E78;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x82295bc8
	ctx.lr = 0x82B27E88;
	sub_82295BC8(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b27f0c
	if (ctx.cr6.eq) goto loc_82B27F0C;
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// addi r31,r10,-20912
	ctx.r31.s64 = ctx.r10.s64 + -20912;
	// lis r9,-32214
	ctx.r9.s64 = -2111176704;
	// addi r30,r9,-20920
	ctx.r30.s64 = ctx.r9.s64 + -20920;
	// lis r8,-32077
	ctx.r8.s64 = -2102198272;
	// addi r29,r8,-25504
	ctx.r29.s64 = ctx.r8.s64 + -25504;
	// li r7,16384
	ctx.r7.s64 = 16384;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// ori r5,r6,16516
	ctx.r5.u64 = ctx.r6.u64 | 16516;
	// rldimi r7,r5,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x822b1680
	ctx.lr = 0x82B27EC8;
	sub_822B1680(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lis r4,-32224
	ctx.r4.s64 = -2111832064;
	// addi r3,r4,-12148
	ctx.r3.s64 = ctx.r4.s64 + -12148;
	// addi r8,r3,2
	ctx.r8.s64 = ctx.r3.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1216
	ctx.r5.s64 = 1216;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// std r28,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r28.u64);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// bl 0x82398460
	ctx.lr = 0x82B27F04;
	sub_82398460(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// b 0x82b27f14
	goto loc_82B27F14;
loc_82B27F0C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_82B27F14:
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B27F28"))) PPC_WEAK_FUNC(sub_82B27F28);
PPC_FUNC_IMPL(__imp__sub_82B27F28) {
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
	// bl 0x829a7b30
	ctx.lr = 0x82B27F38;
	sub_829A7B30(ctx, base);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r10,-23716(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23716);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82b27f5c
	if (ctx.cr6.eq) goto loc_82B27F5C;
	// bl 0x829a7b30
	ctx.lr = 0x82B27F4C;
	sub_829A7B30(ctx, base);
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lwz r8,-23716(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23716);
	// stw r3,60(r8)
	PPC_STORE_U32(ctx.r8.u32 + 60, ctx.r3.u32);
	// b 0x82b27f6c
	goto loc_82B27F6C;
loc_82B27F5C:
	// lis r7,-31883
	ctx.r7.s64 = -2089484288;
	// lwz r6,-23716(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + -23716);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,60(r6)
	PPC_STORE_U32(ctx.r6.u32 + 60, ctx.r5.u32);
loc_82B27F6C:
	// bl 0x822955c8
	ctx.lr = 0x82B27F70;
	sub_822955C8(ctx, base);
	// lis r4,-31883
	ctx.r4.s64 = -2089484288;
	// lwz r11,-23716(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -23716);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x822949a0
	ctx.lr = 0x82B27F80;
	sub_822949A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lwz r3,-23716(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23716);
	// bl 0x822b1678
	ctx.lr = 0x82B27F90;
	sub_822B1678(ctx, base);
	// bl 0x822a8400
	ctx.lr = 0x82B27F94;
	sub_822A8400(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b27fdc
	if (ctx.cr6.eq) goto loc_82B27FDC;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lwz r8,-23716(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23716);
	// lwz r7,52(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bl 0x822949a0
	ctx.lr = 0x82B27FB0;
	sub_822949A0(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82b27fdc
	if (!ctx.cr6.eq) goto loc_82B27FDC;
	// lis r5,-31883
	ctx.r5.s64 = -2089484288;
	// lwz r4,-23716(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + -23716);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lwz r3,-23716(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23716);
	// lwz r9,124(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B27FDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B27FDC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B27FEC"))) PPC_WEAK_FUNC(sub_82B27FEC);
PPC_FUNC_IMPL(__imp__sub_82B27FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B27FF0"))) PPC_WEAK_FUNC(sub_82B27FF0);
PPC_FUNC_IMPL(__imp__sub_82B27FF0) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// addi r10,r11,5760
	ctx.r10.s64 = ctx.r11.s64 + 5760;
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// lis r9,-32213
	ctx.r9.s64 = -2111111168;
	// addi r8,r9,5760
	ctx.r8.s64 = ctx.r9.s64 + 5760;
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// lwz r7,-12(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// subf r5,r7,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r7.s64;
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B28024"))) PPC_WEAK_FUNC(sub_82B28024);
PPC_FUNC_IMPL(__imp__sub_82B28024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B28028"))) PPC_WEAK_FUNC(sub_82B28028);
PPC_FUNC_IMPL(__imp__sub_82B28028) {
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
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x822b3a90
	ctx.lr = 0x82B2804C;
	sub_822B3A90(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// bl 0x829a7b30
	ctx.lr = 0x82B28054;
	sub_829A7B30(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r3,r5,1
	ctx.r3.u64 = ctx.r5.u64 ^ 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B28080"))) PPC_WEAK_FUNC(sub_82B28080);
PPC_FUNC_IMPL(__imp__sub_82B28080) {
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
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x82299080
	ctx.lr = 0x82B2809C;
	sub_82299080(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r3,r10,24
	ctx.r3.s64 = ctx.r10.s64 + 24;
	// bl 0x82299080
	ctx.lr = 0x82B280A8;
	sub_82299080(ctx, base);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r3,r9,12
	ctx.r3.s64 = ctx.r9.s64 + 12;
	// bl 0x82299080
	ctx.lr = 0x82B280B4;
	sub_82299080(ctx, base);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82299080
	ctx.lr = 0x82B280BC;
	sub_82299080(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B280CC"))) PPC_WEAK_FUNC(sub_82B280CC);
PPC_FUNC_IMPL(__imp__sub_82B280CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B280D0"))) PPC_WEAK_FUNC(sub_82B280D0);
PPC_FUNC_IMPL(__imp__sub_82B280D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r3.u32);
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// bl 0x82b08b98
	ctx.lr = 0x82B280E8;
	sub_82B08B98(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r10,1152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1152);
	// clrlwi r9,r10,1
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// lwz r8,244(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r9,1152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1152, ctx.r9.u32);
	// lwz r7,244(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r6,1156(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1156, ctx.r6.u32);
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r4,1160(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1160, ctx.r4.u32);
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1180(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1180, temp.u32);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,1024(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1024);
	// bl 0x82b29528
	ctx.lr = 0x82B28130;
	sub_82B29528(ctx, base);
	// lwz r9,244(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,1028(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1028);
	// bl 0x82b29598
	ctx.lr = 0x82B2813C;
	sub_82B29598(ctx, base);
	// lwz r8,244(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,1032(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1032);
	// bl 0x82b29608
	ctx.lr = 0x82B28148;
	sub_82B29608(ctx, base);
	// lwz r7,244(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,1036(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1036);
	// bl 0x82b29678
	ctx.lr = 0x82B28154;
	sub_82B29678(ctx, base);
	// lwz r6,244(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,1040(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1040);
	// bl 0x82b29710
	ctx.lr = 0x82B28160;
	sub_82B29710(ctx, base);
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r4,1044(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1044);
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,1156(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1156);
	// bl 0x82b29ad0
	ctx.lr = 0x82B28174;
	sub_82B29AD0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r4,1048(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r9,1160(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1160);
	// addi r3,r9,-1
	ctx.r3.s64 = ctx.r9.s64 + -1;
	// bl 0x82b29910
	ctx.lr = 0x82B28190;
	sub_82B29910(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,244(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r4,1052(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1052);
	// lwz r7,244(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,1156(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1156);
	// bl 0x82b29910
	ctx.lr = 0x82B281A8;
	sub_82B29910(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,244(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r4,1056(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1056);
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r11,1156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1156);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x82b29910
	ctx.lr = 0x82B281C4;
	sub_82B29910(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r9,1152(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1152);
	// rlwinm r8,r9,0,2,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// lwz r7,244(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r8,1152(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1152, ctx.r8.u32);
	// lwz r6,244(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r5,1152(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1152);
	// rlwinm r4,r5,0,3,1
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r4,1152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1152, ctx.r4.u32);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r4,r9,-10880
	ctx.r4.s64 = ctx.r9.s64 + -10880;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8233df70
	ctx.lr = 0x82B28214;
	sub_8233DF70(ctx, base);
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x82562de8
	ctx.lr = 0x82B28224;
	sub_82562DE8(ctx, base);
	// lwz r8,244(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r3,1184(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1184, ctx.r3.u32);
	// lwz r7,244(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r6,1188(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1188, ctx.r6.u32);
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r4,1184(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1184);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b28368
	if (ctx.cr6.eq) goto loc_82B28368;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r4,r10,-10836
	ctx.r4.s64 = ctx.r10.s64 + -10836;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8233df70
	ctx.lr = 0x82B28270;
	sub_8233DF70(ctx, base);
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,244(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,1184(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1184);
	// lwz r5,188(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// bl 0x82562de8
	ctx.lr = 0x82B28284;
	sub_82562DE8(ctx, base);
	// lwz r8,244(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r3,1188(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1188, ctx.r3.u32);
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r6,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r6.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r4,-32224
	ctx.r4.s64 = -2111832064;
	// addi r4,r4,-13020
	ctx.r4.s64 = ctx.r4.s64 + -13020;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x8233df70
	ctx.lr = 0x82B282B4;
	sub_8233DF70(ctx, base);
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,1184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1184);
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82562de8
	ctx.lr = 0x82B282C8;
	sub_82562DE8(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r3,1192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1192, ctx.r3.u32);
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// addi r4,r8,-13000
	ctx.r4.s64 = ctx.r8.s64 + -13000;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8233df70
	ctx.lr = 0x82B282F8;
	sub_8233DF70(ctx, base);
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r7,244(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,1184(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1184);
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x82562de8
	ctx.lr = 0x82B2830C;
	sub_82562DE8(ctx, base);
	// lwz r6,244(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r3,1196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1196, ctx.r3.u32);
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// stw r5,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r5.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r4,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r4.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r3,-32224
	ctx.r3.s64 = -2111832064;
	// addi r4,r3,-12976
	ctx.r4.s64 = ctx.r3.s64 + -12976;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x8233df70
	ctx.lr = 0x82B2833C;
	sub_8233DF70(ctx, base);
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,1184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1184);
	// lwz r5,200(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// bl 0x82562de8
	ctx.lr = 0x82B28350;
	sub_82562DE8(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r3,1200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1200, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,244(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,1184(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1184);
	// bl 0x82556ff8
	ctx.lr = 0x82B28368;
	sub_82556FF8(ctx, base);
loc_82B28368:
	// bl 0x82b65068
	ctx.lr = 0x82B2836C;
	sub_82B65068(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b283f4
	if (!ctx.cr6.eq) goto loc_82B283F4;
	// addi r8,r1,168
	ctx.r8.s64 = ctx.r1.s64 + 168;
	// stw r8,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r7,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r7.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r4,-32224
	ctx.r4.s64 = -2111832064;
	// addi r4,r4,-11804
	ctx.r4.s64 = ctx.r4.s64 + -11804;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x8233df70
	ctx.lr = 0x82B2839C;
	sub_8233DF70(ctx, base);
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r5,204(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// bl 0x82562de8
	ctx.lr = 0x82B283AC;
	sub_82562DE8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b283f4
	if (ctx.cr6.eq) goto loc_82B283F4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f1,-16460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16460);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82563f48
	ctx.lr = 0x82B283D8;
	sub_82563F48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,2
	ctx.r5.s64 = 2;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f1,-16464(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16464);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82563f48
	ctx.lr = 0x82B283F4;
	sub_82563F48(ctx, base);
loc_82B283F4:
	// lwz r9,244(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// addi r8,r9,1060
	ctx.r8.s64 = ctx.r9.s64 + 1060;
	// lwz r7,244(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r6,1156(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1156);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,244(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwzx r3,r8,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// stw r3,1084(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1084, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,1084(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1084);
	// bl 0x82b64b98
	ctx.lr = 0x82B28428;
	sub_82B64B98(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r9,244(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r8,1000(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1000);
	// lwz r7,1084(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1084);
	// stw r7,896(r8)
	PPC_STORE_U32(ctx.r8.u32 + 896, ctx.r7.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// lfs f1,-15120(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,976(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 976);
	// bl 0x82563f48
	ctx.lr = 0x82B2845C;
	sub_82563F48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,2
	ctx.r5.s64 = 2;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f1,-16468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16468);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,976(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 976);
	// bl 0x82563f48
	ctx.lr = 0x82B2847C;
	sub_82563F48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lfs f1,17440(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17440);
	ctx.f1.f64 = double(temp.f32);
	// lwz r8,244(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,980(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 980);
	// bl 0x82563f48
	ctx.lr = 0x82B2849C;
	sub_82563F48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,2
	ctx.r5.s64 = 2;
	// lis r4,-32222
	ctx.r4.s64 = -2111700992;
	// lfs f1,-16472(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -16472);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,980(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 980);
	// bl 0x82563f48
	ctx.lr = 0x82B284BC;
	sub_82563F48(ctx, base);
	// bl 0x82b64238
	ctx.lr = 0x82B284C0;
	sub_82B64238(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B284D4"))) PPC_WEAK_FUNC(sub_82B284D4);
PPC_FUNC_IMPL(__imp__sub_82B284D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B284D8"))) PPC_WEAK_FUNC(sub_82B284D8);
PPC_FUNC_IMPL(__imp__sub_82B284D8) {
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
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,1152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1152);
	// rlwinm r9,r10,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82b2856c
	if (ctx.cr6.eq) goto loc_82B2856C;
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r6,1152(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1152);
	// rlwinm r5,r6,3,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0x7;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b28564
	if (ctx.cr6.eq) goto loc_82B28564;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,1144(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1144);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,1120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1120);
	// bl 0x82b640d0
	ctx.lr = 0x82B2852C;
	sub_82B640D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,1184(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1184);
	// bl 0x82556ff8
	ctx.lr = 0x82B2853C;
	sub_82556FF8(ctx, base);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r8,1152(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1152);
	// rlwinm r7,r8,0,2,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r7,1152(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1152, ctx.r7.u32);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,1152(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1152);
	// rlwinm r3,r4,0,3,1
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r3,1152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1152, ctx.r3.u32);
loc_82B28564:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b285e8
	goto loc_82B285E8;
loc_82B2856C:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82b08c00
	ctx.lr = 0x82B28574;
	sub_82B08C00(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b285e4
	if (ctx.cr6.eq) goto loc_82B285E4;
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,1144(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1144);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,1120(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1120);
	// bl 0x82b640d0
	ctx.lr = 0x82B28598;
	sub_82B640D0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// b 0x82b285b0
	goto loc_82B285B0;
loc_82B285A4:
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 1;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
loc_82B285B0:
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bge cr6,0x82b285d8
	if (!ctx.cr6.lt) goto loc_82B285D8;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r11,r3,1060
	ctx.r11.s64 = ctx.r3.s64 + 1060;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x82b64c60
	ctx.lr = 0x82B285D4;
	sub_82B64C60(ctx, base);
	// b 0x82b285a4
	goto loc_82B285A4;
loc_82B285D8:
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,1080(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1080);
	// bl 0x82b64c60
	ctx.lr = 0x82B285E4;
	sub_82B64C60(ctx, base);
loc_82B285E4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82B285E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B285F8"))) PPC_WEAK_FUNC(sub_82B285F8);
PPC_FUNC_IMPL(__imp__sub_82B285F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,1152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1152);
	// rlwinm r9,r10,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82b28794
	if (ctx.cr6.eq) goto loc_82B28794;
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r6,1152(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1152);
	// rlwinm r5,r6,3,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0x7;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b28794
	if (ctx.cr6.eq) goto loc_82B28794;
	// lis r3,-31883
	ctx.r3.s64 = -2089484288;
	// lwz r11,-31264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b2865c
	if (ctx.cr6.eq) goto loc_82B2865C;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lwz r3,-31264(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31264);
	// bl 0x824213c8
	ctx.lr = 0x82B28654;
	sub_824213C8(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// b 0x82b28664
	goto loc_82B28664;
loc_82B2865C:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
loc_82B28664:
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82b2868c
	if (ctx.cr6.eq) goto loc_82B2868C;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,492(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 492);
	// ori r4,r5,8
	ctx.r4.u64 = ctx.r5.u64 | 8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r4,492(r3)
	PPC_STORE_U32(ctx.r3.u32 + 492, ctx.r4.u32);
loc_82B2868C:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,1152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1152);
	// rlwinm r9,r10,0,2,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r9,1152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1152, ctx.r9.u32);
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r6,1152(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1152);
	// rlwinm r5,r6,0,3,1
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r5,1152(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1152, ctx.r5.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,1184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1184);
	// bl 0x82556ff8
	ctx.lr = 0x82B286C4;
	sub_82556FF8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,1152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1152);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r9,1152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1152, ctx.r9.u32);
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r6,2
	ctx.r6.s64 = 2;
	// stb r6,920(r7)
	PPC_STORE_U8(ctx.r7.u32 + 920, ctx.r6.u8);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lfs f0,-32444(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,924(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 924, temp.u32);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// rlwinm r10,r11,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r10,848(r9)
	PPC_STORE_U32(ctx.r9.u32 + 848, ctx.r10.u32);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,921(r8)
	PPC_STORE_U8(ctx.r8.u32 + 921, ctx.r7.u8);
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lfs f13,-32444(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,844(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 844, temp.u32);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,1132(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1132);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,1108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1108);
	// bl 0x82b640d0
	ctx.lr = 0x82B28738;
	sub_82B640D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b64650
	ctx.lr = 0x82B28740;
	sub_82B64650(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x82b28758
	goto loc_82B28758;
loc_82B2874C:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
loc_82B28758:
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// bge cr6,0x82b28780
	if (!ctx.cr6.lt) goto loc_82B28780;
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r6,r7,1060
	ctx.r6.s64 = ctx.r7.s64 + 1060;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r6,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// bl 0x82b64c60
	ctx.lr = 0x82B2877C;
	sub_82B64C60(ctx, base);
	// b 0x82b2874c
	goto loc_82B2874C;
loc_82B28780:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,1080(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1080);
	// bl 0x82b64c60
	ctx.lr = 0x82B2878C;
	sub_82B64C60(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82b28798
	goto loc_82B28798;
loc_82B28794:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B28798:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B287A8"))) PPC_WEAK_FUNC(sub_82B287A8);
PPC_FUNC_IMPL(__imp__sub_82B287A8) {
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
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82b08c70
	ctx.lr = 0x82B287C0;
	sub_82B08C70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B287D0"))) PPC_WEAK_FUNC(sub_82B287D0);
PPC_FUNC_IMPL(__imp__sub_82B287D0) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,1152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1152);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82b287f4
	if (ctx.cr6.eq) goto loc_82B287F4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82b287f8
	goto loc_82B287F8;
loc_82B287F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B287F8:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B287FC"))) PPC_WEAK_FUNC(sub_82B287FC);
PPC_FUNC_IMPL(__imp__sub_82B287FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B28800"))) PPC_WEAK_FUNC(sub_82B28800);
PPC_FUNC_IMPL(__imp__sub_82B28800) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,1156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1156);
	// mulli r9,r10,48
	ctx.r9.s64 = ctx.r10.s64 * 48;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r7,r8,1608
	ctx.r7.s64 = ctx.r8.s64 + 1608;
	// add r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r4,r6,12
	ctx.r4.s64 = ctx.r6.s64 + 12;
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x82295908
	ctx.lr = 0x82B28838;
	sub_82295908(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B28848"))) PPC_WEAK_FUNC(sub_82B28848);
PPC_FUNC_IMPL(__imp__sub_82B28848) {
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
	// stwu r1,-1296(r1)
	ea = -1296 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,1316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1316, ctx.r3.u32);
	// stfs f1,1324(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1324, temp.u32);
	// lfs f1,1324(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1324);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,1316(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// bl 0x82b08e40
	ctx.lr = 0x82B28870;
	sub_82B08E40(ctx, base);
	// lfs f1,1324(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1324);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,1316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,1316(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r9,700(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 700);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B2888C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,1316(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lbz r7,920(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 920);
	// stw r7,1264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1264, ctx.r7.u32);
	// lwz r6,1264(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1264);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x82b288b0
	if (ctx.cr6.eq) goto loc_82B288B0;
	// b 0x82b290d0
	goto loc_82B290D0;
	// b 0x82b290d0
	goto loc_82B290D0;
	// b 0x82b290d0
	goto loc_82B290D0;
loc_82B288B0:
	// lwz r5,1316(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r4,928(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 928);
	// rlwinm r3,r4,0,25,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82b28d30
	if (ctx.cr6.eq) goto loc_82B28D30;
	// lwz r11,1316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lfs f0,1180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1180);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f13,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82b288e0
	if (!ctx.cr6.gt) goto loc_82B288E0;
	// b 0x82b290d0
	goto loc_82B290D0;
loc_82B288E0:
	// lwz r9,1316(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1156(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1156);
	// bl 0x82b29c10
	ctx.lr = 0x82B288EC;
	sub_82B29C10(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82b28a3c
	if (ctx.cr6.eq) goto loc_82B28A3C;
	// lwz r7,1316(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r6,1152(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1152);
	// rlwinm r5,r6,2,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82b289dc
	if (!ctx.cr6.eq) goto loc_82B289DC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822990d8
	ctx.lr = 0x82B28918;
	sub_822990D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822990d8
	ctx.lr = 0x82B28920;
	sub_822990D8(ctx, base);
	// lis r3,-32224
	ctx.r3.s64 = -2111832064;
	// addi r4,r3,-11784
	ctx.r4.s64 = ctx.r3.s64 + -11784;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82295680
	ctx.lr = 0x82B28930;
	sub_82295680(ctx, base);
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295908
	ctx.lr = 0x82B2893C;
	sub_82295908(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82299080
	ctx.lr = 0x82B28944;
	sub_82299080(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b64338
	ctx.lr = 0x82B28950;
	sub_82B64338(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,1316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1188);
	// bl 0x82570f58
	ctx.lr = 0x82B28960;
	sub_82570F58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,1316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1192(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1192);
	// bl 0x82556ff8
	ctx.lr = 0x82B28970;
	sub_82556FF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,1316(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1196(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1196);
	// bl 0x82556ff8
	ctx.lr = 0x82B28980;
	sub_82556FF8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,1316(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1200(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1200);
	// bl 0x82556ff8
	ctx.lr = 0x82B28990;
	sub_82556FF8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r7,1316(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1184(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1184);
	// bl 0x82556ff8
	ctx.lr = 0x82B289A0;
	sub_82556FF8(ctx, base);
	// lwz r6,1316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r4,1140(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1140);
	// lwz r5,1316(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1116(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1116);
	// bl 0x82b640d0
	ctx.lr = 0x82B289B4;
	sub_82B640D0(ctx, base);
	// lwz r4,1316(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1152(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1152);
	// oris r11,r3,16384
	ctx.r11.u64 = ctx.r3.u64 | 1073741824;
	// lwz r10,1316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// stw r11,1152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1152, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82B289D0;
	sub_82299080(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82B289D8;
	sub_82299080(ctx, base);
	// b 0x82b28a24
	goto loc_82B28A24;
loc_82B289DC:
	// lwz r9,1316(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r4,1132(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1132);
	// lwz r8,1316(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1108(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1108);
	// bl 0x82b640d0
	ctx.lr = 0x82B289F0;
	sub_82B640D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,1316(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1200(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1200);
	// bl 0x82556ff8
	ctx.lr = 0x82B28A00;
	sub_82556FF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,1316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1184(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1184);
	// bl 0x82556ff8
	ctx.lr = 0x82B28A10;
	sub_82556FF8(ctx, base);
	// lwz r5,1316(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r4,1152(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1152);
	// rlwinm r3,r4,0,2,0
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// lwz r11,1316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// stw r3,1152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1152, ctx.r3.u32);
loc_82B28A24:
	// lwz r10,1316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r9,1152(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1152);
	// rlwinm r8,r9,0,3,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// lwz r7,1316(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// stw r8,1152(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1152, ctx.r8.u32);
	// b 0x82b28d1c
	goto loc_82B28D1C;
loc_82B28A3C:
	// lwz r6,1316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r5,1040(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1040);
	// addi r4,r5,904
	ctx.r4.s64 = ctx.r5.s64 + 904;
	// lwz r3,1316(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r11,1052(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1052);
	// addi r3,r11,904
	ctx.r3.s64 = ctx.r11.s64 + 904;
	// bl 0x822b21c0
	ctx.lr = 0x82B28A58;
	sub_822B21C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b28ba4
	if (ctx.cr6.eq) goto loc_82B28BA4;
	// lwz r10,1316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r9,1152(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1152);
	// rlwinm r8,r9,2,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82b28b44
	if (!ctx.cr6.eq) goto loc_82B28B44;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822990d8
	ctx.lr = 0x82B28A80;
	sub_822990D8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822990d8
	ctx.lr = 0x82B28A88;
	sub_822990D8(ctx, base);
	// lwz r6,1316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r5,1156(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1156);
	// mulli r4,r5,48
	ctx.r4.s64 = ctx.r5.s64 * 48;
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// addi r11,r3,1608
	ctx.r11.s64 = ctx.r3.s64 + 1608;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r4,r10,36
	ctx.r4.s64 = ctx.r10.s64 + 36;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82295908
	ctx.lr = 0x82B28AAC;
	sub_82295908(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b64338
	ctx.lr = 0x82B28AB8;
	sub_82B64338(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r9,1316(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1188(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1188);
	// bl 0x82570f58
	ctx.lr = 0x82B28AC8;
	sub_82570F58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,1316(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1192(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1192);
	// bl 0x82556ff8
	ctx.lr = 0x82B28AD8;
	sub_82556FF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,1316(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1196(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1196);
	// bl 0x82556ff8
	ctx.lr = 0x82B28AE8;
	sub_82556FF8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,1316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1200(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1200);
	// bl 0x82556ff8
	ctx.lr = 0x82B28AF8;
	sub_82556FF8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,1316(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1184(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1184);
	// bl 0x82556ff8
	ctx.lr = 0x82B28B08;
	sub_82556FF8(ctx, base);
	// lwz r4,1316(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r4,1136(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1136);
	// lwz r3,1316(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1112);
	// bl 0x82b640d0
	ctx.lr = 0x82B28B1C;
	sub_82B640D0(ctx, base);
	// lwz r11,1316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r10,1152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1152);
	// oris r9,r10,16384
	ctx.r9.u64 = ctx.r10.u64 | 1073741824;
	// lwz r8,1316(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// stw r9,1152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1152, ctx.r9.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82299080
	ctx.lr = 0x82B28B38;
	sub_82299080(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x82B28B40;
	sub_82299080(ctx, base);
	// b 0x82b28b8c
	goto loc_82B28B8C;
loc_82B28B44:
	// lwz r7,1316(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r4,1132(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1132);
	// lwz r6,1316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1108(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1108);
	// bl 0x82b640d0
	ctx.lr = 0x82B28B58;
	sub_82B640D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,1316(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1200(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1200);
	// bl 0x82556ff8
	ctx.lr = 0x82B28B68;
	sub_82556FF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1316(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1184);
	// bl 0x82556ff8
	ctx.lr = 0x82B28B78;
	sub_82556FF8(ctx, base);
	// lwz r11,1316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r10,1152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1152);
	// rlwinm r9,r10,0,2,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// lwz r8,1316(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// stw r9,1152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1152, ctx.r9.u32);
loc_82B28B8C:
	// lwz r7,1316(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r6,1152(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1152);
	// rlwinm r5,r6,0,3,1
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// lwz r4,1316(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// stw r5,1152(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1152, ctx.r5.u32);
	// b 0x82b28d1c
	goto loc_82B28D1C;
loc_82B28BA4:
	// lwz r3,1316(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r11,1152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1152);
	// rlwinm r10,r11,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82b28d1c
	if (!ctx.cr6.eq) goto loc_82B28D1C;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822990d8
	ctx.lr = 0x82B28BC4;
	sub_822990D8(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822990d8
	ctx.lr = 0x82B28BCC;
	sub_822990D8(ctx, base);
	// lwz r8,1316(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r7,1156(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1156);
	// mulli r6,r7,48
	ctx.r6.s64 = ctx.r7.s64 * 48;
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// addi r4,r5,1608
	ctx.r4.s64 = ctx.r5.s64 + 1608;
	// add r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 + ctx.r6.u64;
	// addi r4,r3,24
	ctx.r4.s64 = ctx.r3.s64 + 24;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82295908
	ctx.lr = 0x82B28BF0;
	sub_82295908(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82b64338
	ctx.lr = 0x82B28BFC;
	sub_82B64338(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r4,r11,-11764
	ctx.r4.s64 = ctx.r11.s64 + -11764;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82295680
	ctx.lr = 0x82B28C0C;
	sub_82295680(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822990d8
	ctx.lr = 0x82B28C14;
	sub_822990D8(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82b64338
	ctx.lr = 0x82B28C20;
	sub_82B64338(ctx, base);
	// addi r31,r1,160
	ctx.r31.s64 = ctx.r1.s64 + 160;
	// addi r30,r1,264
	ctx.r30.s64 = ctx.r1.s64 + 264;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r4,r10,-11748
	ctx.r4.s64 = ctx.r10.s64 + -11748;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82295680
	ctx.lr = 0x82B28C38;
	sub_82295680(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x822952c8
	ctx.lr = 0x82B28C48;
	sub_822952C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822952c8
	ctx.lr = 0x82B28C58;
	sub_822952C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,1316(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1188(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1188);
	// bl 0x82570f58
	ctx.lr = 0x82B28C68;
	sub_82570F58(ctx, base);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82299080
	ctx.lr = 0x82B28C70;
	sub_82299080(ctx, base);
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x82299080
	ctx.lr = 0x82B28C78;
	sub_82299080(ctx, base);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82299080
	ctx.lr = 0x82B28C80;
	sub_82299080(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,1316(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1192(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1192);
	// bl 0x82556ff8
	ctx.lr = 0x82B28C90;
	sub_82556FF8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r7,1316(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1196(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1196);
	// bl 0x82556ff8
	ctx.lr = 0x82B28CA0;
	sub_82556FF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,1316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1200(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1200);
	// bl 0x82556ff8
	ctx.lr = 0x82B28CB0;
	sub_82556FF8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,1316(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1184(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1184);
	// bl 0x82556ff8
	ctx.lr = 0x82B28CC0;
	sub_82556FF8(ctx, base);
	// lwz r4,1316(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r4,1148(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1148);
	// lwz r3,1316(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1124(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1124);
	// bl 0x82b640d0
	ctx.lr = 0x82B28CD4;
	sub_82B640D0(ctx, base);
	// lwz r11,1316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r10,1152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1152);
	// oris r9,r10,16384
	ctx.r9.u64 = ctx.r10.u64 | 1073741824;
	// lwz r8,1316(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// stw r9,1152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1152, ctx.r9.u32);
	// lwz r7,1316(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r6,1152(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1152);
	// oris r5,r6,8192
	ctx.r5.u64 = ctx.r6.u64 | 536870912;
	// lwz r4,1316(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// stw r5,1152(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1152, ctx.r5.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x82B28D04;
	sub_82299080(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82299080
	ctx.lr = 0x82B28D0C;
	sub_82299080(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82299080
	ctx.lr = 0x82B28D14;
	sub_82299080(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82299080
	ctx.lr = 0x82B28D1C;
	sub_82299080(ctx, base);
loc_82B28D1C:
	// lwz r3,1316(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f12,-16368(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16368);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1180(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1180, temp.u32);
	// b 0x82b290d0
	goto loc_82B290D0;
loc_82B28D30:
	// lwz r10,1316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r9,928(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 928);
	// rlwinm r8,r9,0,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82b28f00
	if (ctx.cr6.eq) goto loc_82B28F00;
	// lwz r7,1316(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r6,1152(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1152);
	// rlwinm r5,r6,2,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82b28efc
	if (!ctx.cr6.eq) goto loc_82B28EFC;
	// lwz r3,1316(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1084(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1084);
	// bl 0x82b64c28
	ctx.lr = 0x82B28D68;
	sub_82B64C28(ctx, base);
	// lwz r11,1316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r10,1156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1156);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// lwz r8,1316(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// stw r9,1156(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1156, ctx.r9.u32);
	// lwz r7,1316(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r6,1156(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1156);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x82b28da0
	if (!ctx.cr6.lt) goto loc_82B28DA0;
	// lwz r5,1316(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r4,1160(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1160);
	// addi r3,r4,-1
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// lwz r11,1316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// stw r3,1156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1156, ctx.r3.u32);
loc_82B28DA0:
	// lwz r10,1316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1156(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1156);
	// bl 0x82b29c10
	ctx.lr = 0x82B28DAC;
	sub_82B29C10(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82b28dcc
	if (ctx.cr6.eq) goto loc_82B28DCC;
	// lwz r8,1316(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r7,1316(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r6,1080(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1080);
	// stw r6,1084(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1084, ctx.r6.u32);
	// b 0x82b28dec
	goto loc_82B28DEC;
loc_82B28DCC:
	// lwz r5,1316(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// addi r4,r5,1060
	ctx.r4.s64 = ctx.r5.s64 + 1060;
	// lwz r3,1316(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r11,1156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1156);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,1316(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwzx r8,r4,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// stw r8,1084(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1084, ctx.r8.u32);
loc_82B28DEC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r7,1316(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1084(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1084);
	// bl 0x82b64b98
	ctx.lr = 0x82B28E00;
	sub_82B64B98(ctx, base);
	// lwz r6,1316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r5,1316(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r4,1000(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1000);
	// lwz r3,1084(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1084);
	// stw r3,896(r4)
	PPC_STORE_U32(ctx.r4.u32 + 896, ctx.r3.u32);
	// lwz r11,1316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r10,1156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1156);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// stw r9,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r9.u32);
	// lwz r8,204(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x82b28e40
	if (!ctx.cr6.lt) goto loc_82B28E40;
	// lwz r7,1316(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r6,1160(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1160);
	// addi r5,r6,-1
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// stw r5,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r5.u32);
loc_82B28E40:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,1316(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r4,1048(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1048);
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// bl 0x82b29910
	ctx.lr = 0x82B28E54;
	sub_82B29910(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,1316(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r4,1052(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1052);
	// lwz r11,1316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1156(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1156);
	// bl 0x82b29910
	ctx.lr = 0x82B28E6C;
	sub_82B29910(ctx, base);
	// lwz r10,1316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r9,1156(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1156);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stw r8,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r8.u32);
	// lwz r7,1316(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r6,1160(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1160);
	// addi r5,r6,-1
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// lwz r4,204(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x82b28e9c
	if (!ctx.cr6.gt) goto loc_82B28E9C;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r3.u32);
loc_82B28E9C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,1316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r4,1056(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1056);
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// bl 0x82b29910
	ctx.lr = 0x82B28EB0;
	sub_82B29910(ctx, base);
	// lwz r10,1316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r9,1316(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r8,1012(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1012);
	// lwz r7,1092(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1092);
	// stw r7,896(r8)
	PPC_STORE_U32(ctx.r8.u32 + 896, ctx.r7.u32);
	// lwz r6,1316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// lfs f11,31796(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 31796);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1172(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 1172, temp.u32);
	// lwz r4,1316(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r4,1044(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1044);
	// lwz r3,1316(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1156(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1156);
	// bl 0x82b29ad0
	ctx.lr = 0x82B28EE8;
	sub_82B29AD0(ctx, base);
	// lwz r11,1316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r4,932(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 932);
	// lwz r10,1316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,892(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 892);
	// bl 0x82b640d0
	ctx.lr = 0x82B28EFC;
	sub_82B640D0(ctx, base);
loc_82B28EFC:
	// b 0x82b290d0
	goto loc_82B290D0;
loc_82B28F00:
	// lwz r9,1316(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r8,928(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 928);
	// rlwinm r7,r8,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82b290d0
	if (ctx.cr6.eq) goto loc_82B290D0;
	// lwz r6,1316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r5,1152(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1152);
	// rlwinm r4,r5,2,30,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b290d0
	if (!ctx.cr6.eq) goto loc_82B290D0;
	// lwz r11,1316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1084(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1084);
	// bl 0x82b64c28
	ctx.lr = 0x82B28F38;
	sub_82B64C28(ctx, base);
	// lwz r10,1316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r9,1156(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1156);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// lwz r7,1316(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// stw r8,1156(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1156, ctx.r8.u32);
	// lwz r6,1316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r5,1316(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r4,1160(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1160);
	// addi r3,r4,-1
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// lwz r11,1156(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1156);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82b28f74
	if (!ctx.cr6.gt) goto loc_82B28F74;
	// lwz r10,1316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,1156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1156, ctx.r9.u32);
loc_82B28F74:
	// lwz r8,1316(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1156(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1156);
	// bl 0x82b29c10
	ctx.lr = 0x82B28F80;
	sub_82B29C10(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82b28fa0
	if (ctx.cr6.eq) goto loc_82B28FA0;
	// lwz r6,1316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r5,1316(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r4,1080(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1080);
	// stw r4,1084(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1084, ctx.r4.u32);
	// b 0x82b28fc0
	goto loc_82B28FC0;
loc_82B28FA0:
	// lwz r3,1316(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// addi r11,r3,1060
	ctx.r11.s64 = ctx.r3.s64 + 1060;
	// lwz r10,1316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r9,1156(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1156);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,1316(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stw r6,1084(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1084, ctx.r6.u32);
loc_82B28FC0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,1316(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1084(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1084);
	// bl 0x82b64b98
	ctx.lr = 0x82B28FD4;
	sub_82B64B98(ctx, base);
	// lwz r11,1316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r10,1316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r9,1000(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1000);
	// lwz r8,1084(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1084);
	// stw r8,896(r9)
	PPC_STORE_U32(ctx.r9.u32 + 896, ctx.r8.u32);
	// lwz r7,1316(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r6,1156(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1156);
	// addi r5,r6,-1
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// stw r5,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r5.u32);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82b29014
	if (!ctx.cr6.lt) goto loc_82B29014;
	// lwz r3,1316(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r11,1160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1160);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
loc_82B29014:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,1316(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r4,1048(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1048);
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x82b29910
	ctx.lr = 0x82B29028;
	sub_82B29910(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,1316(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r4,1052(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1052);
	// lwz r7,1316(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1156(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1156);
	// bl 0x82b29910
	ctx.lr = 0x82B29040;
	sub_82B29910(ctx, base);
	// lwz r6,1316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r5,1156(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1156);
	// addi r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 1;
	// stw r4,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r4.u32);
	// lwz r3,1316(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r11,1160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1160);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r9,208(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82b29070
	if (!ctx.cr6.gt) goto loc_82B29070;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
loc_82B29070:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,1316(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r4,1056(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1056);
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x82b29910
	ctx.lr = 0x82B29084;
	sub_82B29910(ctx, base);
	// lwz r6,1316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r5,1316(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r4,1016(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1016);
	// lwz r3,1100(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1100);
	// stw r3,896(r4)
	PPC_STORE_U32(ctx.r4.u32 + 896, ctx.r3.u32);
	// lwz r11,1316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f10,31796(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31796);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,1176(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1176, temp.u32);
	// lwz r9,1316(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r4,1044(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1044);
	// lwz r8,1316(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,1156(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1156);
	// bl 0x82b29ad0
	ctx.lr = 0x82B290BC;
	sub_82B29AD0(ctx, base);
	// lwz r7,1316(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r4,932(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 932);
	// lwz r6,1316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r3,892(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 892);
	// bl 0x82b640d0
	ctx.lr = 0x82B290D0;
	sub_82B640D0(ctx, base);
loc_82B290D0:
	// lwz r5,1316(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r4,928(r5)
	PPC_STORE_U32(ctx.r5.u32 + 928, ctx.r4.u32);
	// addi r1,r1,1296
	ctx.r1.s64 = ctx.r1.s64 + 1296;
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

__attribute__((alias("__imp__sub_82B290F4"))) PPC_WEAK_FUNC(sub_82B290F4);
PPC_FUNC_IMPL(__imp__sub_82B290F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B290F8"))) PPC_WEAK_FUNC(sub_82B290F8);
PPC_FUNC_IMPL(__imp__sub_82B290F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// lwz r4,188(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82b090c0
	ctx.lr = 0x82B29118;
	sub_82B090C0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f1,17440(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17440);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,976(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 976);
	// bl 0x82563f48
	ctx.lr = 0x82B29138;
	sub_82563F48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,2
	ctx.r5.s64 = 2;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f1,-16196(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16196);
	ctx.f1.f64 = double(temp.f32);
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,976(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 976);
	// bl 0x82563f48
	ctx.lr = 0x82B29158;
	sub_82563F48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// lfs f1,-15120(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,980(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 980);
	// bl 0x82563f48
	ctx.lr = 0x82B29178;
	sub_82563F48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,2
	ctx.r5.s64 = 2;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f1,17440(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17440);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,980(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 980);
	// bl 0x82563f48
	ctx.lr = 0x82B29198;
	sub_82563F48(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r7,848(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 848);
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82b291d0
	if (ctx.cr6.eq) goto loc_82B291D0;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lbz r3,920(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 920);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82b291d0
	if (ctx.cr6.eq) goto loc_82B291D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
loc_82B291D0:
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,976(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 976);
	// bl 0x82556ff8
	ctx.lr = 0x82B291E0;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,980(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 980);
	// bl 0x82556ff8
	ctx.lr = 0x82B291F0;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,988(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 988);
	// bl 0x82556ff8
	ctx.lr = 0x82B29200;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r7,180(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,1004(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1004);
	// bl 0x82556ff8
	ctx.lr = 0x82B29210;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r6,180(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,1008(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1008);
	// bl 0x82556ff8
	ctx.lr = 0x82B29220;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,1012(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1012);
	// bl 0x82556ff8
	ctx.lr = 0x82B29230;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,1016(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1016);
	// bl 0x82556ff8
	ctx.lr = 0x82B29240;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,1020(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// bl 0x82556ff8
	ctx.lr = 0x82B29250;
	sub_82556FF8(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r9,988(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 988);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lfs f0,-32444(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,932(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 932, temp.u32);
	// lwz r7,180(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r6,1004(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1004);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lfs f13,-32444(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,932(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 932, temp.u32);
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,1008(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1008);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f12,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,932(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 932, temp.u32);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r9,1012(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1012);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lfs f11,-32444(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -32444);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,932(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 932, temp.u32);
	// lwz r7,180(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r6,1016(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1016);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lfs f10,-32444(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -32444);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,932(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 932, temp.u32);
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,1020(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1020);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f9,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,932(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 932, temp.u32);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,1024(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1024);
	// bl 0x82556ff8
	ctx.lr = 0x82B292D8;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,1028(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1028);
	// bl 0x82556ff8
	ctx.lr = 0x82B292E8;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,1032(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1032);
	// bl 0x82556ff8
	ctx.lr = 0x82B292F8;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r7,180(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,1036(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1036);
	// bl 0x82556ff8
	ctx.lr = 0x82B29308;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r6,180(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,1040(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1040);
	// bl 0x82556ff8
	ctx.lr = 0x82B29318;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,1048(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1048);
	// bl 0x82556ff8
	ctx.lr = 0x82B29328;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,1052(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1052);
	// bl 0x82556ff8
	ctx.lr = 0x82B29338;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,1056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1056);
	// bl 0x82556ff8
	ctx.lr = 0x82B29348;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,1044(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1044);
	// bl 0x82556ff8
	ctx.lr = 0x82B29358;
	sub_82556FF8(ctx, base);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r8,1024(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1024);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lfs f8,-32444(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -32444);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,960(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + 960, temp.u32);
	// lwz r6,180(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r5,1028(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1028);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lfs f7,-32444(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -32444);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,960(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 960, temp.u32);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r11,1032(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1032);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f6,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,960(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 960, temp.u32);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r8,1036(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1036);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lfs f5,-32444(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -32444);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,960(r8)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r8.u32 + 960, temp.u32);
	// lwz r6,180(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r5,1040(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1040);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lfs f4,-32444(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -32444);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,960(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 960, temp.u32);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r11,1048(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1048);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f3,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,960(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 960, temp.u32);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r8,1052(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1052);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lfs f2,-32444(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -32444);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,960(r8)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r8.u32 + 960, temp.u32);
	// lwz r6,180(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r5,1056(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1056);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lfs f1,-32444(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -32444);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,960(r5)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 960, temp.u32);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r11,1044(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1044);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f0,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,960(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 960, temp.u32);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,1084(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1084);
	// bl 0x82b64cf8
	ctx.lr = 0x82B2941C;
	sub_82B64CF8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2942C"))) PPC_WEAK_FUNC(sub_82B2942C);
PPC_FUNC_IMPL(__imp__sub_82B2942C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B29430"))) PPC_WEAK_FUNC(sub_82B29430);
PPC_FUNC_IMPL(__imp__sub_82B29430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stfs f1,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfs f0,1172(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1172);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stfs f12,1172(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1172, temp.u32);
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfs f11,1172(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1172);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lfs f10,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bge cr6,0x82b2948c
	if (!ctx.cr6.lt) goto loc_82B2948C;
	// lwz r7,20(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r6,20(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r5,1012(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1012);
	// lwz r4,1088(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1088);
	// stw r4,896(r5)
	PPC_STORE_U32(ctx.r5.u32 + 896, ctx.r4.u32);
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f9,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,1172(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1172, temp.u32);
loc_82B2948C:
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfs f8,1176(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1176);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stfs f6,1176(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 1176, temp.u32);
	// lwz r8,20(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfs f5,1176(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 1176);
	ctx.f5.f64 = double(temp.f32);
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// lfs f4,-15120(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -15120);
	ctx.f4.f64 = double(temp.f32);
	// fcmpu cr6,f5,f4
	ctx.cr6.compare(ctx.f5.f64, ctx.f4.f64);
	// bge cr6,0x82b294e0
	if (!ctx.cr6.lt) goto loc_82B294E0;
	// lwz r6,20(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r5,20(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r4,1016(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1016);
	// lwz r3,1096(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1096);
	// stw r3,896(r4)
	PPC_STORE_U32(ctx.r4.u32 + 896, ctx.r3.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f3,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,1176(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1176, temp.u32);
loc_82B294E0:
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfs f2,1180(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1180);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lwz r8,20(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stfs f0,1180(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 1180, temp.u32);
	// lwz r7,20(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfs f13,1180(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 1180);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// lfs f12,-15120(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -15120);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82b29520
	if (!ctx.cr6.lt) goto loc_82B29520;
	// lwz r5,20(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// lfs f11,-15120(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -15120);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1180(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1180, temp.u32);
loc_82B29520:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B29524"))) PPC_WEAK_FUNC(sub_82B29524);
PPC_FUNC_IMPL(__imp__sub_82B29524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B29528"))) PPC_WEAK_FUNC(sub_82B29528);
PPC_FUNC_IMPL(__imp__sub_82B29528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822990d8
	ctx.lr = 0x82B29540;
	sub_822990D8(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r4,r11,-11744
	ctx.r4.s64 = ctx.r11.s64 + -11744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295680
	ctx.lr = 0x82B29550;
	sub_82295680(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b64338
	ctx.lr = 0x82B2955C;
	sub_82B64338(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,436(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,436(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r8,668(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 668);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B29578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82B29580;
	sub_82299080(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82B29588;
	sub_82299080(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B29598"))) PPC_WEAK_FUNC(sub_82B29598);
PPC_FUNC_IMPL(__imp__sub_82B29598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822990d8
	ctx.lr = 0x82B295B0;
	sub_822990D8(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r4,r11,-11724
	ctx.r4.s64 = ctx.r11.s64 + -11724;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295680
	ctx.lr = 0x82B295C0;
	sub_82295680(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b64338
	ctx.lr = 0x82B295CC;
	sub_82B64338(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,436(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,436(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r8,668(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 668);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B295E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82B295F0;
	sub_82299080(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82B295F8;
	sub_82299080(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B29608"))) PPC_WEAK_FUNC(sub_82B29608);
PPC_FUNC_IMPL(__imp__sub_82B29608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822990d8
	ctx.lr = 0x82B29620;
	sub_822990D8(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r4,r11,-11708
	ctx.r4.s64 = ctx.r11.s64 + -11708;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295680
	ctx.lr = 0x82B29630;
	sub_82295680(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b64338
	ctx.lr = 0x82B2963C;
	sub_82B64338(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,436(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,436(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r8,668(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 668);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B29658;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82B29660;
	sub_82299080(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82B29668;
	sub_82299080(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B29678"))) PPC_WEAK_FUNC(sub_82B29678);
PPC_FUNC_IMPL(__imp__sub_82B29678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822990d8
	ctx.lr = 0x82B29690;
	sub_822990D8(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r4,r11,-11692
	ctx.r4.s64 = ctx.r11.s64 + -11692;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295680
	ctx.lr = 0x82B296A0;
	sub_82295680(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b64338
	ctx.lr = 0x82B296AC;
	sub_82B64338(ctx, base);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r4,r10,-11672
	ctx.r4.s64 = ctx.r10.s64 + -11672;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82295680
	ctx.lr = 0x82B296BC;
	sub_82295680(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822951d0
	ctx.lr = 0x82B296C8;
	sub_822951D0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x82B296D0;
	sub_82299080(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r9,740(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r3,740(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// lwz r7,668(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 668);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B296EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82B296F4;
	sub_82299080(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82B296FC;
	sub_82299080(ctx, base);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2970C"))) PPC_WEAK_FUNC(sub_82B2970C);
PPC_FUNC_IMPL(__imp__sub_82B2970C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B29710"))) PPC_WEAK_FUNC(sub_82B29710);
PPC_FUNC_IMPL(__imp__sub_82B29710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822990d8
	ctx.lr = 0x82B29728;
	sub_822990D8(ctx, base);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r10,-31264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r3,84(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// bl 0x8229bf58
	ctx.lr = 0x82B29738;
	sub_8229BF58(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82b29768
	if (!ctx.cr6.eq) goto loc_82B29768;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r4,r8,-27584
	ctx.r4.s64 = ctx.r8.s64 + -27584;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822960c0
	ctx.lr = 0x82B29758;
	sub_822960C0(ctx, base);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// b 0x82b297b0
	goto loc_82B297B0;
	// b 0x82b297b0
	goto loc_82B297B0;
loc_82B29768:
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x82b29798
	if (!ctx.cr6.eq) goto loc_82B29798;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r4,r4,-19580
	ctx.r4.s64 = ctx.r4.s64 + -19580;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822960c0
	ctx.lr = 0x82B29788;
	sub_822960C0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// b 0x82b297b0
	goto loc_82B297B0;
	// b 0x82b297b0
	goto loc_82B297B0;
loc_82B29798:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x82B297A8;
	sub_8233E1A0(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_82B297B0:
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295908
	ctx.lr = 0x82B297BC;
	sub_82295908(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x82B297C4;
	sub_82299080(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// b 0x82b297dc
	goto loc_82B297DC;
loc_82B297D0:
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
loc_82B297DC:
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// bge cr6,0x82b29844
	if (!ctx.cr6.lt) goto loc_82B29844;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mulli r4,r5,48
	ctx.r4.s64 = ctx.r5.s64 * 48;
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// addi r11,r3,1608
	ctx.r11.s64 = ctx.r3.s64 + 1608;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r4,r10,12
	ctx.r4.s64 = ctx.r10.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822b21c0
	ctx.lr = 0x82B29808;
	sub_822B21C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b29840
	if (ctx.cr6.eq) goto loc_82B29840;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mulli r8,r9,48
	ctx.r8.s64 = ctx.r9.s64 * 48;
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,1608
	ctx.r6.s64 = ctx.r7.s64 + 1608;
	// add r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294bb8
	ctx.lr = 0x82B2982C;
	sub_82294BB8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b64338
	ctx.lr = 0x82B29838;
	sub_82B64338(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82B29840;
	sub_82299080(ctx, base);
loc_82B29840:
	// b 0x82b297d0
	goto loc_82B297D0;
loc_82B29844:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,212(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r10,668(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 668);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B29860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82B29868;
	sub_82299080(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B29878"))) PPC_WEAK_FUNC(sub_82B29878);
PPC_FUNC_IMPL(__imp__sub_82B29878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822990d8
	ctx.lr = 0x82B29890;
	sub_822990D8(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r4,r11,-11668
	ctx.r4.s64 = ctx.r11.s64 + -11668;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295680
	ctx.lr = 0x82B298A0;
	sub_82295680(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b64338
	ctx.lr = 0x82B298AC;
	sub_82B64338(ctx, base);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r4,r10,-11672
	ctx.r4.s64 = ctx.r10.s64 + -11672;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82295680
	ctx.lr = 0x82B298BC;
	sub_82295680(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822951d0
	ctx.lr = 0x82B298C8;
	sub_822951D0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x82B298D0;
	sub_82299080(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r9,740(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r3,740(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// lwz r7,668(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 668);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B298EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82B298F4;
	sub_82299080(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82B298FC;
	sub_82299080(ctx, base);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2990C"))) PPC_WEAK_FUNC(sub_82B2990C);
PPC_FUNC_IMPL(__imp__sub_82B2990C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B29910"))) PPC_WEAK_FUNC(sub_82B29910);
PPC_FUNC_IMPL(__imp__sub_82B29910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r3.u32);
	// stw r4,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r4.u32);
	// stb r5,487(r1)
	PPC_STORE_U8(ctx.r1.u32 + 487, ctx.r5.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822990d8
	ctx.lr = 0x82B29930;
	sub_822990D8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r3,468(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// bl 0x82b29c10
	ctx.lr = 0x82B29940;
	sub_82B29C10(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82b29980
	if (!ctx.cr6.eq) goto loc_82B29980;
	// lwz r9,468(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// mulli r8,r9,48
	ctx.r8.s64 = ctx.r9.s64 * 48;
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,1608
	ctx.r6.s64 = ctx.r7.s64 + 1608;
	// add r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82294bb8
	ctx.lr = 0x82B29968;
	sub_82294BB8(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82b64338
	ctx.lr = 0x82B29974;
	sub_82B64338(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82299080
	ctx.lr = 0x82B2997C;
	sub_82299080(ctx, base);
	// b 0x82b299ac
	goto loc_82B299AC;
loc_82B29980:
	// lis r5,-32224
	ctx.r5.s64 = -2111832064;
	// addi r4,r5,-11652
	ctx.r4.s64 = ctx.r5.s64 + -11652;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82295680
	ctx.lr = 0x82B29990;
	sub_82295680(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82b64338
	ctx.lr = 0x82B2999C;
	sub_82B64338(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82299080
	ctx.lr = 0x82B299AC;
	sub_82299080(ctx, base);
loc_82B299AC:
	// lbz r3,487(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 487);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82b29a2c
	if (ctx.cr6.eq) goto loc_82B29A2C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b299f8
	if (ctx.cr6.eq) goto loc_82B299F8;
	// lwz r10,476(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lfs f0,-27768(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27768);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,948(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 948, temp.u32);
	// lwz r8,476(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// lfs f13,-15120(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,956(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 956, temp.u32);
	// lwz r6,476(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// lis r5,-32229
	ctx.r5.s64 = -2112159744;
	// lfs f12,-15120(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -15120);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,952(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 952, temp.u32);
	// b 0x82b29a28
	goto loc_82B29A28;
loc_82B299F8:
	// lwz r4,476(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// lfs f11,-32444(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -32444);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,956(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 956, temp.u32);
	// lwz r11,476(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f10,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,952(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 952, temp.u32);
	// lwz r9,476(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lfs f9,-32444(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -32444);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,948(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 948, temp.u32);
loc_82B29A28:
	// b 0x82b29a9c
	goto loc_82B29A9C;
loc_82B29A2C:
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82b29a6c
	if (ctx.cr6.eq) goto loc_82B29A6C;
	// lwz r6,476(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lfs f8,-28844(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -28844);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,948(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 948, temp.u32);
	// lwz r4,476(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// lis r3,-32229
	ctx.r3.s64 = -2112159744;
	// lfs f7,-15120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -15120);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,956(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 956, temp.u32);
	// lwz r11,476(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f6,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,952(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 952, temp.u32);
	// b 0x82b29a9c
	goto loc_82B29A9C;
loc_82B29A6C:
	// lwz r9,476(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lfs f5,-27768(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27768);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,956(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 956, temp.u32);
	// lwz r7,476(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lfs f4,-27768(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -27768);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,952(r7)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r7.u32 + 952, temp.u32);
	// lwz r5,476(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lfs f3,-27768(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -27768);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,948(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 948, temp.u32);
loc_82B29A9C:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,476(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,476(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// lwz r10,668(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 668);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B29AB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82299080
	ctx.lr = 0x82B29AC0;
	sub_82299080(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B29AD0"))) PPC_WEAK_FUNC(sub_82B29AD0);
PPC_FUNC_IMPL(__imp__sub_82B29AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-1024(r1)
	ea = -1024 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,1044(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1044, ctx.r3.u32);
	// stw r4,1052(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1052, ctx.r4.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822990d8
	ctx.lr = 0x82B29AEC;
	sub_822990D8(ctx, base);
	// lwz r3,1044(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1044);
	// bl 0x82b29c10
	ctx.lr = 0x82B29AF4;
	sub_82B29C10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82b29bb4
	if (!ctx.cr6.eq) goto loc_82B29BB4;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r4,r10,-11640
	ctx.r4.s64 = ctx.r10.s64 + -11640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82295680
	ctx.lr = 0x82B29B10;
	sub_82295680(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b64338
	ctx.lr = 0x82B29B1C;
	sub_82B64338(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822990d8
	ctx.lr = 0x82B29B24;
	sub_822990D8(ctx, base);
	// lwz r9,1044(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1044);
	// mulli r8,r9,48
	ctx.r8.s64 = ctx.r9.s64 * 48;
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,1608
	ctx.r6.s64 = ctx.r7.s64 + 1608;
	// add r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82295908
	ctx.lr = 0x82B29B40;
	sub_82295908(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b64338
	ctx.lr = 0x82B29B4C;
	sub_82B64338(ctx, base);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// addi r4,r5,-12592
	ctx.r4.s64 = ctx.r5.s64 + -12592;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82295680
	ctx.lr = 0x82B29B5C;
	sub_82295680(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822951d0
	ctx.lr = 0x82B29B68;
	sub_822951D0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82299080
	ctx.lr = 0x82B29B70;
	sub_82299080(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822951d0
	ctx.lr = 0x82B29B7C;
	sub_822951D0(ctx, base);
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// addi r4,r4,22512
	ctx.r4.s64 = ctx.r4.s64 + 22512;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82295680
	ctx.lr = 0x82B29B8C;
	sub_82295680(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822951d0
	ctx.lr = 0x82B29B98;
	sub_822951D0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x82B29BA0;
	sub_82299080(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x82B29BA8;
	sub_82299080(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82B29BB0;
	sub_82299080(ctx, base);
	// b 0x82b29bd8
	goto loc_82B29BD8;
loc_82B29BB4:
	// lis r3,-32224
	ctx.r3.s64 = -2111832064;
	// addi r4,r3,-11620
	ctx.r4.s64 = ctx.r3.s64 + -11620;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82295680
	ctx.lr = 0x82B29BC4;
	sub_82295680(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b64338
	ctx.lr = 0x82B29BD0;
	sub_82B64338(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82299080
	ctx.lr = 0x82B29BD8;
	sub_82299080(ctx, base);
loc_82B29BD8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,1052(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1052);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,1052(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1052);
	// lwz r9,668(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 668);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B29BF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82B29BFC;
	sub_82299080(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B29C0C"))) PPC_WEAK_FUNC(sub_82B29C0C);
PPC_FUNC_IMPL(__imp__sub_82B29C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B29C10"))) PPC_WEAK_FUNC(sub_82B29C10);
PPC_FUNC_IMPL(__imp__sub_82B29C10) {
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
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82b29c40
	if (ctx.cr6.lt) goto loc_82B29C40;
	// bl 0x82b645e0
	ctx.lr = 0x82B29C30;
	sub_82B645E0(ctx, base);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82b29c48
	if (!ctx.cr6.gt) goto loc_82B29C48;
loc_82B29C40:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82b29c4c
	goto loc_82B29C4C;
loc_82B29C48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B29C4C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B29C5C"))) PPC_WEAK_FUNC(sub_82B29C5C);
PPC_FUNC_IMPL(__imp__sub_82B29C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B29C60"))) PPC_WEAK_FUNC(sub_82B29C60);
PPC_FUNC_IMPL(__imp__sub_82B29C60) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r8,r9,-11600
	ctx.r8.s64 = ctx.r9.s64 + -11600;
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

__attribute__((alias("__imp__sub_82B29C88"))) PPC_WEAK_FUNC(sub_82B29C88);
PPC_FUNC_IMPL(__imp__sub_82B29C88) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B29C90"))) PPC_WEAK_FUNC(sub_82B29C90);
PPC_FUNC_IMPL(__imp__sub_82B29C90) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r8,r9,-11600
	ctx.r8.s64 = ctx.r9.s64 + -11600;
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

__attribute__((alias("__imp__sub_82B29CB0"))) PPC_WEAK_FUNC(sub_82B29CB0);
PPC_FUNC_IMPL(__imp__sub_82B29CB0) {
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
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-11600
	ctx.r10.s64 = ctx.r11.s64 + -11600;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82B29CDC;
	sub_8229C068(ctx, base);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-10712
	ctx.r8.s64 = ctx.r9.s64 + -10712;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82B29CF0;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a60080
	ctx.lr = 0x82B29CF8;
	sub_82A60080(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82b29d2c
	if (ctx.cr6.eq) goto loc_82B29D2C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b29d24
	if (ctx.cr6.lt) goto loc_82B29D24;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82b29d2c
	if (!ctx.cr6.gt) goto loc_82B29D2C;
loc_82B29D24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82B29D2C;
	sub_82294A58(ctx, base);
loc_82B29D2C:
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

__attribute__((alias("__imp__sub_82B29D48"))) PPC_WEAK_FUNC(sub_82B29D48);
PPC_FUNC_IMPL(__imp__sub_82B29D48) {
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
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r10,r11,-11600
	ctx.r10.s64 = ctx.r11.s64 + -11600;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82B29D6C;
	sub_8229C068(ctx, base);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-10712
	ctx.r8.s64 = ctx.r9.s64 + -10712;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82B29D80;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a60080
	ctx.lr = 0x82B29D88;
	sub_82A60080(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82B29D9C"))) PPC_WEAK_FUNC(sub_82B29D9C);
PPC_FUNC_IMPL(__imp__sub_82B29D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B29DA0"))) PPC_WEAK_FUNC(sub_82B29DA0);
PPC_FUNC_IMPL(__imp__sub_82B29DA0) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x82B29DB8;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b29e3c
	if (ctx.cr6.eq) goto loc_82B29E3C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-10896
	ctx.r11.s64 = ctx.r8.s64 + -10896;
	// lis r5,-32077
	ctx.r5.s64 = -2102198272;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-22960
	ctx.r6.s64 = ctx.r5.s64 + -22960;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r4,-988
	ctx.r10.s64 = ctx.r4.s64 + -988;
	// addi r9,r9,11336
	ctx.r9.s64 = ctx.r9.s64 + 11336;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,648
	ctx.r5.s64 = 648;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82B29E2C;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82B29E3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B29E50"))) PPC_WEAK_FUNC(sub_82B29E50);
PPC_FUNC_IMPL(__imp__sub_82B29E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B29E58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-28652(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28652);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b29e84
	if (!ctx.cr6.eq) goto loc_82B29E84;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82604910
	ctx.lr = 0x82B29E78;
	sub_82604910(ctx, base);
	// stw r3,-28652(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28652, ctx.r3.u32);
	// bl 0x826049d0
	ctx.lr = 0x82B29E80;
	sub_826049D0(ctx, base);
	// lwz r10,-28652(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28652);
loc_82B29E84:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-23712(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23712);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b29ea4
	if (ctx.cr6.eq) goto loc_82B29EA4;
	// bl 0x823109c8
	ctx.lr = 0x82B29E98;
	sub_823109C8(ctx, base);
	// lwz r11,-23712(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23712);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82b29eac
	goto loc_82B29EAC;
loc_82B29EA4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82B29EAC:
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r30,r10,14476
	ctx.r30.s64 = ctx.r10.s64 + 14476;
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b29edc
	if (!ctx.cr6.eq) goto loc_82B29EDC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82B29ECC;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82B29ED4;
	sub_822AADA8(ctx, base);
	// lwz r11,-23712(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23712);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82B29EDC:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b29f08
	if (!ctx.cr6.eq) goto loc_82B29F08;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82B29EF8;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82B29F00;
	sub_82398640(ctx, base);
	// lwz r11,-23712(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23712);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82B29F08:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b29f40
	if (ctx.cr6.eq) goto loc_82B29F40;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82B29F24;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82b29f40
	if (!ctx.cr6.eq) goto loc_82B29F40;
	// lwz r3,-23712(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23712);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B29F40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B29F40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B29F48"))) PPC_WEAK_FUNC(sub_82B29F48);
PPC_FUNC_IMPL(__imp__sub_82B29F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// lis r10,-32213
	ctx.r10.s64 = -2111111168;
	// addi r9,r11,-22976
	ctx.r9.s64 = ctx.r11.s64 + -22976;
	// addi r8,r10,5760
	ctx.r8.s64 = ctx.r10.s64 + 5760;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B29F68"))) PPC_WEAK_FUNC(sub_82B29F68);
PPC_FUNC_IMPL(__imp__sub_82B29F68) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-28652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28652);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b29fac
	if (!ctx.cr6.eq) goto loc_82B29FAC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82604910
	ctx.lr = 0x82B29FA0;
	sub_82604910(ctx, base);
	// stw r3,-28652(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28652, ctx.r3.u32);
	// bl 0x826049d0
	ctx.lr = 0x82B29FA8;
	sub_826049D0(ctx, base);
	// lwz r11,-28652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28652);
loc_82B29FAC:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82B29FD4"))) PPC_WEAK_FUNC(sub_82B29FD4);
PPC_FUNC_IMPL(__imp__sub_82B29FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B29FD8"))) PPC_WEAK_FUNC(sub_82B29FD8);
PPC_FUNC_IMPL(__imp__sub_82B29FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B29FE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b2a064
	if (ctx.cr6.eq) goto loc_82B2A064;
	// lwz r30,40(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x822d6060
	ctx.lr = 0x82B2A008;
	sub_822D6060(ctx, base);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x82b2a018
	if (!ctx.cr6.eq) goto loc_82B2A018;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r30,25104(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25104);
loc_82B2A018:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,28868(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// bl 0x822a93e8
	ctx.lr = 0x82B2A03C;
	sub_822A93E8(ctx, base);
	// stw r3,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r3.u32);
	// lwz r4,544(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// bl 0x82516720
	ctx.lr = 0x82B2A048;
	sub_82516720(ctx, base);
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// lwz r9,504(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-14344(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -14344);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,600(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 600, temp.u32);
	// lwz r4,504(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// bl 0x825d4918
	ctx.lr = 0x82B2A064;
	sub_825D4918(ctx, base);
loc_82B2A064:
	// lwz r3,520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b2a074
	if (ctx.cr6.eq) goto loc_82B2A074;
	// bl 0x825e9648
	ctx.lr = 0x82B2A074;
	sub_825E9648(ctx, base);
loc_82B2A074:
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2a0e4
	if (!ctx.cr6.eq) goto loc_82B2A0E4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82610550
	ctx.lr = 0x82B2A090;
	sub_82610550(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r6,r11,11,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// bl 0x8260e1b0
	ctx.lr = 0x82B2A0A8;
	sub_8260E1B0(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// ld r4,-28(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + -28);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8229e490
	ctx.lr = 0x82B2A0C8;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,228(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B2A0E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B2A0E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2A0EC"))) PPC_WEAK_FUNC(sub_82B2A0EC);
PPC_FUNC_IMPL(__imp__sub_82B2A0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2A0F0"))) PPC_WEAK_FUNC(sub_82B2A0F0);
PPC_FUNC_IMPL(__imp__sub_82B2A0F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2A0F4"))) PPC_WEAK_FUNC(sub_82B2A0F4);
PPC_FUNC_IMPL(__imp__sub_82B2A0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2A0F8"))) PPC_WEAK_FUNC(sub_82B2A0F8);
PPC_FUNC_IMPL(__imp__sub_82B2A0F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2A0FC"))) PPC_WEAK_FUNC(sub_82B2A0FC);
PPC_FUNC_IMPL(__imp__sub_82B2A0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2A100"))) PPC_WEAK_FUNC(sub_82B2A100);
PPC_FUNC_IMPL(__imp__sub_82B2A100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82B2A108;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b2a4cc
	if (ctx.cr6.eq) goto loc_82B2A4CC;
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-31264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b2a164
	if (ctx.cr6.eq) goto loc_82B2A164;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x82b2a14c
	if (ctx.cr6.gt) goto loc_82B2A14C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82b2a154
	goto loc_82B2A154;
loc_82B2A14C:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82B2A154:
	// lwz r11,980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b2a164
	if (ctx.cr6.eq) goto loc_82B2A164;
	// lwz r10,2224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2224);
loc_82B2A164:
	// li r7,1
	ctx.r7.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2a178
	if (!ctx.cr6.eq) goto loc_82B2A178;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82b2a250
	goto loc_82B2A250;
loc_82B2A178:
	// lwz r11,728(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 728);
	// lfs f0,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,724(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 724);
	// lfs f12,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,732(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 732);
	// lfs f11,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// lis r6,-31906
	ctx.r6.s64 = -2090991616;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lfs f10,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lfs f8,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f13,-1468(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -1468);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f6,f10,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fmuls f5,f7,f7
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fsubs f4,f9,f11
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fmadds f3,f6,f6,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fmadds f0,f4,f4,f3
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f3.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82b2a1d4
	if (!ctx.cr6.gt) goto loc_82B2A1D4;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82B2A1D4:
	// lwz r9,504(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b2a250
	if (ctx.cr6.eq) goto loc_82B2A250;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,572
	ctx.r11.s64 = ctx.r31.s64 + 572;
loc_82B2A1EC:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82b2a20c
	if (!ctx.cr6.gt) goto loc_82B2A20C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x82b2a1ec
	if (ctx.cr6.lt) goto loc_82B2A1EC;
	// b 0x82b2a228
	goto loc_82B2A228;
loc_82B2A20C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,620(r9)
	PPC_STORE_U32(ctx.r9.u32 + 620, ctx.r10.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,624(r9)
	PPC_STORE_U32(ctx.r9.u32 + 624, ctx.r6.u32);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r5,628(r9)
	PPC_STORE_U32(ctx.r9.u32 + 628, ctx.r5.u32);
loc_82B2A228:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2a250
	if (!ctx.cr6.eq) goto loc_82B2A250;
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// lwz r10,608(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// stw r10,620(r11)
	PPC_STORE_U32(ctx.r11.u32 + 620, ctx.r10.u32);
	// lwz r9,612(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// stw r9,624(r11)
	PPC_STORE_U32(ctx.r11.u32 + 624, ctx.r9.u32);
	// lwz r8,616(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// stw r8,628(r11)
	PPC_STORE_U32(ctx.r11.u32 + 628, ctx.r8.u32);
loc_82B2A250:
	// lwz r4,368(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,76(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// beq cr6,0x82b2a47c
	if (ctx.cr6.eq) goto loc_82B2A47C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82b2a274
	if (!ctx.cr6.eq) goto loc_82B2A274;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d4918
	ctx.lr = 0x82B2A274;
	sub_825D4918(ctx, base);
loc_82B2A274:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// ld r4,-28(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + -28);
	// bl 0x8229e490
	ctx.lr = 0x82B2A298;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,228(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B2A2B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-31264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r8,132(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x82b2a2d0
	if (ctx.cr6.gt) goto loc_82B2A2D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82b2a2d8
	goto loc_82B2A2D8;
loc_82B2A2D0:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82B2A2D8:
	// lwz r30,980(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b2a33c
	if (ctx.cr6.eq) goto loc_82B2A33C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b2a310
	if (ctx.cr6.eq) goto loc_82B2A310;
	// lwz r10,744(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82b2a310
	if (!ctx.cr6.gt) goto loc_82B2A310;
	// lwz r11,740(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 740);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2a318
	if (!ctx.cr6.eq) goto loc_82B2A318;
loc_82B2A310:
	// lwz r3,2220(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2220);
	// b 0x82b2a320
	goto loc_82B2A320;
loc_82B2A318:
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x829d9328
	ctx.lr = 0x82B2A320;
	sub_829D9328(ctx, base);
loc_82B2A320:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b2a334
	if (ctx.cr6.eq) goto loc_82B2A334;
	// lwz r11,1908(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1908);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2a338
	if (!ctx.cr6.eq) goto loc_82B2A338;
loc_82B2A334:
	// lwz r11,2212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2212);
loc_82B2A338:
	// stw r11,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r11.u32);
loc_82B2A33C:
	// lwz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// beq cr6,0x82b2a424
	if (ctx.cr6.eq) goto loc_82B2A424;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2a370
	if (!ctx.cr6.eq) goto loc_82B2A370;
	// lwz r3,520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b2a370
	if (ctx.cr6.eq) goto loc_82B2A370;
	// ld r4,636(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 636);
	// bl 0x825e5ed0
	ctx.lr = 0x82B2A368;
	sub_825E5ED0(ctx, base);
	// bl 0x8269e478
	ctx.lr = 0x82B2A36C;
	sub_8269E478(ctx, base);
	// stw r3,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r3.u32);
loc_82B2A370:
	// lwz r11,644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b2a4cc
	if (ctx.cr6.eq) goto loc_82B2A4CC;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f12,76(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stfs f12,88(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// lfs f13,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-32444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// stfs f0,84(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// bgt cr6,0x82b2a3a8
	if (ctx.cr6.gt) goto loc_82B2A3A8;
	// stfs f0,72(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// stfs f13,88(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
loc_82B2A3A8:
	// lwz r3,136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b2a3cc
	if (ctx.cr6.eq) goto loc_82B2A3CC;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b2a3cc
	if (ctx.cr6.eq) goto loc_82B2A3CC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826ae108
	ctx.lr = 0x82B2A3CC;
	sub_826AE108(ctx, base);
loc_82B2A3CC:
	// lwz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// lfs f0,628(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,632(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,644(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// lfs f12,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f11.f64 = double(temp.f32);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f9,92(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lfs f10,252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f10.f64 = double(temp.f32);
	// fadds f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f7,244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r7,152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 152, ctx.r7.u32);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r9,156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 156, ctx.r9.u32);
	// stw r8,160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 160, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82B2A424:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b2a4cc
	if (ctx.cr6.eq) goto loc_82B2A4CC;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f13,80(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// lfs f0,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82b2a450
	if (ctx.cr6.gt) goto loc_82B2A450;
	// stfs f0,72(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// stfs f0,88(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
loc_82B2A450:
	// lwz r3,136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b2a4cc
	if (ctx.cr6.eq) goto loc_82B2A4CC;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b2a4cc
	if (ctx.cr6.eq) goto loc_82B2A4CC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826ae108
	ctx.lr = 0x82B2A474;
	sub_826AE108(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82B2A47C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b2a48c
	if (ctx.cr6.eq) goto loc_82B2A48C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d4b78
	ctx.lr = 0x82B2A48C;
	sub_825D4B78(ctx, base);
loc_82B2A48C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r1,84
	ctx.r29.s64 = ctx.r1.s64 + 84;
	// ld r4,-28(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + -28);
	// bl 0x8229e490
	ctx.lr = 0x82B2A4B0;
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
	ctx.lr = 0x82B2A4CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B2A4CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2A4D4"))) PPC_WEAK_FUNC(sub_82B2A4D4);
PPC_FUNC_IMPL(__imp__sub_82B2A4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2A4D8"))) PPC_WEAK_FUNC(sub_82B2A4D8);
PPC_FUNC_IMPL(__imp__sub_82B2A4D8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,552(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 552);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r3,548
	ctx.r30.s64 = ctx.r3.s64 + 548;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82b2a510
	if (ctx.cr6.eq) goto loc_82B2A510;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82b2a514
	goto loc_82B2A514;
loc_82B2A510:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_82B2A514:
	// bl 0x82cb0328
	ctx.lr = 0x82B2A518;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82b2a528
	if (!ctx.cr6.eq) goto loc_82B2A528;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82b2a5b0
	goto loc_82B2A5B0;
loc_82B2A528:
	// lwz r11,492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2a53c
	if (!ctx.cr6.eq) goto loc_82B2A53C;
loc_82B2A534:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b2a5b0
	goto loc_82B2A5B0;
loc_82B2A53C:
	// lwz r11,900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b2a534
	if (ctx.cr6.eq) goto loc_82B2A534;
	// lwz r11,704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2a568
	if (!ctx.cr6.eq) goto loc_82B2A568;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-27584
	ctx.r4.s64 = ctx.r11.s64 + -27584;
	// bl 0x822960c0
	ctx.lr = 0x82B2A564;
	sub_822960C0(ctx, base);
	// b 0x82b2a58c
	goto loc_82B2A58C;
loc_82B2A568:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82b2a584
	if (!ctx.cr6.eq) goto loc_82B2A584;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-19580
	ctx.r4.s64 = ctx.r11.s64 + -19580;
	// bl 0x822960c0
	ctx.lr = 0x82B2A580;
	sub_822960C0(ctx, base);
	// b 0x82b2a58c
	goto loc_82B2A58C;
loc_82B2A584:
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x82B2A58C;
	sub_8233E1A0(ctx, base);
loc_82B2A58C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822b21c0
	ctx.lr = 0x82B2A598;
	sub_822B21C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82B2A5A4;
	sub_82299080(ctx, base);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 ^ 1;
loc_82B2A5B0:
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

__attribute__((alias("__imp__sub_82B2A5C8"))) PPC_WEAK_FUNC(sub_82B2A5C8);
PPC_FUNC_IMPL(__imp__sub_82B2A5C8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,528(r3)
	PPC_STORE_U8(ctx.r3.u32 + 528, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2A5D0"))) PPC_WEAK_FUNC(sub_82B2A5D0);
PPC_FUNC_IMPL(__imp__sub_82B2A5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B2A5D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// bne cr6,0x82b2a5f0
	if (!ctx.cr6.eq) goto loc_82B2A5F0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B2A5F0:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
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
	// ld r4,-28(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -28);
	// bl 0x8229e490
	ctx.lr = 0x82B2A610;
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
	ctx.lr = 0x82B2A62C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2A634"))) PPC_WEAK_FUNC(sub_82B2A634);
PPC_FUNC_IMPL(__imp__sub_82B2A634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2A638"))) PPC_WEAK_FUNC(sub_82B2A638);
PPC_FUNC_IMPL(__imp__sub_82B2A638) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2A63C"))) PPC_WEAK_FUNC(sub_82B2A63C);
PPC_FUNC_IMPL(__imp__sub_82B2A63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2A640"))) PPC_WEAK_FUNC(sub_82B2A640);
PPC_FUNC_IMPL(__imp__sub_82B2A640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-988
	ctx.r3.s64 = ctx.r11.s64 + -988;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2A64C"))) PPC_WEAK_FUNC(sub_82B2A64C);
PPC_FUNC_IMPL(__imp__sub_82B2A64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2A650"))) PPC_WEAK_FUNC(sub_82B2A650);
PPC_FUNC_IMPL(__imp__sub_82B2A650) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-10864
	ctx.r7.s64 = ctx.r9.s64 + -10864;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82B2A680"))) PPC_WEAK_FUNC(sub_82B2A680);
PPC_FUNC_IMPL(__imp__sub_82B2A680) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2A688"))) PPC_WEAK_FUNC(sub_82B2A688);
PPC_FUNC_IMPL(__imp__sub_82B2A688) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-10864
	ctx.r7.s64 = ctx.r9.s64 + -10864;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82B2A6B0"))) PPC_WEAK_FUNC(sub_82B2A6B0);
PPC_FUNC_IMPL(__imp__sub_82B2A6B0) {
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
	// bl 0x82b2a720
	ctx.lr = 0x82B2A6D0;
	sub_82B2A720(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b2a704
	if (ctx.cr6.eq) goto loc_82B2A704;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b2a6fc
	if (ctx.cr6.lt) goto loc_82B2A6FC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82b2a704
	if (!ctx.cr6.gt) goto loc_82B2A704;
loc_82B2A6FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82B2A704;
	sub_82294A58(ctx, base);
loc_82B2A704:
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

__attribute__((alias("__imp__sub_82B2A720"))) PPC_WEAK_FUNC(sub_82B2A720);
PPC_FUNC_IMPL(__imp__sub_82B2A720) {
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
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r10,r11,-10864
	ctx.r10.s64 = ctx.r11.s64 + -10864;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82B2A748;
	sub_8229C068(ctx, base);
	// lwz r9,556(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r31,548
	ctx.r30.s64 = ctx.r31.s64 + 548;
	// stw r11,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82b2a774
	if (ctx.cr6.eq) goto loc_82B2A774;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294520
	ctx.lr = 0x82B2A774;
	sub_82294520(ctx, base);
loc_82B2A774:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294cc8
	ctx.lr = 0x82B2A77C;
	sub_82294CC8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,3344
	ctx.r10.s64 = ctx.r11.s64 + 3344;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82B2A790;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82383c00
	ctx.lr = 0x82B2A798;
	sub_82383C00(ctx, base);
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

__attribute__((alias("__imp__sub_82B2A7B0"))) PPC_WEAK_FUNC(sub_82B2A7B0);
PPC_FUNC_IMPL(__imp__sub_82B2A7B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2A7B4"))) PPC_WEAK_FUNC(sub_82B2A7B4);
PPC_FUNC_IMPL(__imp__sub_82B2A7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2A7B8"))) PPC_WEAK_FUNC(sub_82B2A7B8);
PPC_FUNC_IMPL(__imp__sub_82B2A7B8) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x82B2A7D0;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b2a854
	if (ctx.cr6.eq) goto loc_82B2A854;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-9848
	ctx.r11.s64 = ctx.r8.s64 + -9848;
	// lis r5,-32077
	ctx.r5.s64 = -2102198272;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-9096
	ctx.r6.s64 = ctx.r5.s64 + -9096;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r4,14488
	ctx.r10.s64 = ctx.r4.s64 + 14488;
	// addi r9,r9,11336
	ctx.r9.s64 = ctx.r9.s64 + 11336;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,672
	ctx.r5.s64 = 672;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82B2A844;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82B2A854:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2A868"))) PPC_WEAK_FUNC(sub_82B2A868);
PPC_FUNC_IMPL(__imp__sub_82B2A868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B2A870;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-28680(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28680);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2a89c
	if (!ctx.cr6.eq) goto loc_82B2A89C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826039c0
	ctx.lr = 0x82B2A890;
	sub_826039C0(ctx, base);
	// stw r3,-28680(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28680, ctx.r3.u32);
	// bl 0x82603a80
	ctx.lr = 0x82B2A898;
	sub_82603A80(ctx, base);
	// lwz r10,-28680(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28680);
loc_82B2A89C:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-23708(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23708);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b2a8bc
	if (ctx.cr6.eq) goto loc_82B2A8BC;
	// bl 0x82311c38
	ctx.lr = 0x82B2A8B0;
	sub_82311C38(ctx, base);
	// lwz r11,-23708(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23708);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82b2a8c4
	goto loc_82B2A8C4;
loc_82B2A8BC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82B2A8C4:
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r30,r10,14476
	ctx.r30.s64 = ctx.r10.s64 + 14476;
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2a8f4
	if (!ctx.cr6.eq) goto loc_82B2A8F4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82B2A8E4;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82B2A8EC;
	sub_822AADA8(ctx, base);
	// lwz r11,-23708(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23708);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82B2A8F4:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2a920
	if (!ctx.cr6.eq) goto loc_82B2A920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82B2A910;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82B2A918;
	sub_82398640(ctx, base);
	// lwz r11,-23708(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23708);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82B2A920:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b2a958
	if (ctx.cr6.eq) goto loc_82B2A958;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82B2A93C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82b2a958
	if (!ctx.cr6.eq) goto loc_82B2A958;
	// lwz r3,-23708(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23708);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2A958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B2A958:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2A960"))) PPC_WEAK_FUNC(sub_82B2A960);
PPC_FUNC_IMPL(__imp__sub_82B2A960) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2A968"))) PPC_WEAK_FUNC(sub_82B2A968);
PPC_FUNC_IMPL(__imp__sub_82B2A968) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-28680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28680);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2a9ac
	if (!ctx.cr6.eq) goto loc_82B2A9AC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826039c0
	ctx.lr = 0x82B2A9A0;
	sub_826039C0(ctx, base);
	// stw r3,-28680(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28680, ctx.r3.u32);
	// bl 0x82603a80
	ctx.lr = 0x82B2A9A8;
	sub_82603A80(ctx, base);
	// lwz r11,-28680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28680);
loc_82B2A9AC:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82B2A9D4"))) PPC_WEAK_FUNC(sub_82B2A9D4);
PPC_FUNC_IMPL(__imp__sub_82B2A9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2A9D8"))) PPC_WEAK_FUNC(sub_82B2A9D8);
PPC_FUNC_IMPL(__imp__sub_82B2A9D8) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x82B2A9F0;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b2aa74
	if (ctx.cr6.eq) goto loc_82B2AA74;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-9820
	ctx.r11.s64 = ctx.r8.s64 + -9820;
	// lis r5,-32077
	ctx.r5.s64 = -2102198272;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-9152
	ctx.r6.s64 = ctx.r5.s64 + -9152;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r4,14488
	ctx.r10.s64 = ctx.r4.s64 + 14488;
	// addi r9,r9,11336
	ctx.r9.s64 = ctx.r9.s64 + 11336;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,676
	ctx.r5.s64 = 676;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82B2AA64;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82B2AA74:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2AA88"))) PPC_WEAK_FUNC(sub_82B2AA88);
PPC_FUNC_IMPL(__imp__sub_82B2AA88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B2AA90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-23708(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23708);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2aabc
	if (!ctx.cr6.eq) goto loc_82B2AABC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82b2a7b8
	ctx.lr = 0x82B2AAB0;
	sub_82B2A7B8(ctx, base);
	// stw r3,-23708(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23708, ctx.r3.u32);
	// bl 0x82b2a868
	ctx.lr = 0x82B2AAB8;
	sub_82B2A868(ctx, base);
	// lwz r10,-23708(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23708);
loc_82B2AABC:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-23704(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23704);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b2aadc
	if (ctx.cr6.eq) goto loc_82B2AADC;
	// bl 0x829979a0
	ctx.lr = 0x82B2AAD0;
	sub_829979A0(ctx, base);
	// lwz r11,-23704(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23704);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82b2aae4
	goto loc_82B2AAE4;
loc_82B2AADC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82B2AAE4:
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r30,r10,14476
	ctx.r30.s64 = ctx.r10.s64 + 14476;
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2ab14
	if (!ctx.cr6.eq) goto loc_82B2AB14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82B2AB04;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82B2AB0C;
	sub_822AADA8(ctx, base);
	// lwz r11,-23704(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23704);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82B2AB14:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2ab40
	if (!ctx.cr6.eq) goto loc_82B2AB40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82B2AB30;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82B2AB38;
	sub_82398640(ctx, base);
	// lwz r11,-23704(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23704);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82B2AB40:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b2ab78
	if (ctx.cr6.eq) goto loc_82B2AB78;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82B2AB5C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82b2ab78
	if (!ctx.cr6.eq) goto loc_82B2AB78;
	// lwz r3,-23704(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23704);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2AB78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B2AB78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2AB80"))) PPC_WEAK_FUNC(sub_82B2AB80);
PPC_FUNC_IMPL(__imp__sub_82B2AB80) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2AB88"))) PPC_WEAK_FUNC(sub_82B2AB88);
PPC_FUNC_IMPL(__imp__sub_82B2AB88) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-23708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23708);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2abcc
	if (!ctx.cr6.eq) goto loc_82B2ABCC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82b2a7b8
	ctx.lr = 0x82B2ABC0;
	sub_82B2A7B8(ctx, base);
	// stw r3,-23708(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23708, ctx.r3.u32);
	// bl 0x82b2a868
	ctx.lr = 0x82B2ABC8;
	sub_82B2A868(ctx, base);
	// lwz r11,-23708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23708);
loc_82B2ABCC:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82B2ABF4"))) PPC_WEAK_FUNC(sub_82B2ABF4);
PPC_FUNC_IMPL(__imp__sub_82B2ABF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2ABF8"))) PPC_WEAK_FUNC(sub_82B2ABF8);
PPC_FUNC_IMPL(__imp__sub_82B2ABF8) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x82B2AC10;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b2ac94
	if (ctx.cr6.eq) goto loc_82B2AC94;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-9768
	ctx.r11.s64 = ctx.r8.s64 + -9768;
	// lis r5,-32077
	ctx.r5.s64 = -2102198272;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-9592
	ctx.r6.s64 = ctx.r5.s64 + -9592;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r4,14488
	ctx.r10.s64 = ctx.r4.s64 + 14488;
	// addi r9,r9,11336
	ctx.r9.s64 = ctx.r9.s64 + 11336;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,720
	ctx.r5.s64 = 720;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82B2AC84;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82B2AC94:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2ACA8"))) PPC_WEAK_FUNC(sub_82B2ACA8);
PPC_FUNC_IMPL(__imp__sub_82B2ACA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B2ACB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-23708(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23708);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2acdc
	if (!ctx.cr6.eq) goto loc_82B2ACDC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82b2a7b8
	ctx.lr = 0x82B2ACD0;
	sub_82B2A7B8(ctx, base);
	// stw r3,-23708(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23708, ctx.r3.u32);
	// bl 0x82b2a868
	ctx.lr = 0x82B2ACD8;
	sub_82B2A868(ctx, base);
	// lwz r10,-23708(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23708);
loc_82B2ACDC:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-23700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23700);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b2acfc
	if (ctx.cr6.eq) goto loc_82B2ACFC;
	// bl 0x829979a0
	ctx.lr = 0x82B2ACF0;
	sub_829979A0(ctx, base);
	// lwz r11,-23700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23700);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82b2ad04
	goto loc_82B2AD04;
loc_82B2ACFC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82B2AD04:
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r30,r10,14476
	ctx.r30.s64 = ctx.r10.s64 + 14476;
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2ad34
	if (!ctx.cr6.eq) goto loc_82B2AD34;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82B2AD24;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82B2AD2C;
	sub_822AADA8(ctx, base);
	// lwz r11,-23700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23700);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82B2AD34:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2ad60
	if (!ctx.cr6.eq) goto loc_82B2AD60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82B2AD50;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82B2AD58;
	sub_82398640(ctx, base);
	// lwz r11,-23700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23700);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82B2AD60:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b2ad98
	if (ctx.cr6.eq) goto loc_82B2AD98;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82B2AD7C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82b2ad98
	if (!ctx.cr6.eq) goto loc_82B2AD98;
	// lwz r3,-23700(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23700);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2AD98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B2AD98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2ADA0"))) PPC_WEAK_FUNC(sub_82B2ADA0);
PPC_FUNC_IMPL(__imp__sub_82B2ADA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2ADA8"))) PPC_WEAK_FUNC(sub_82B2ADA8);
PPC_FUNC_IMPL(__imp__sub_82B2ADA8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-23708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23708);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2adec
	if (!ctx.cr6.eq) goto loc_82B2ADEC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82b2a7b8
	ctx.lr = 0x82B2ADE0;
	sub_82B2A7B8(ctx, base);
	// stw r3,-23708(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23708, ctx.r3.u32);
	// bl 0x82b2a868
	ctx.lr = 0x82B2ADE8;
	sub_82B2A868(ctx, base);
	// lwz r11,-23708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23708);
loc_82B2ADEC:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82B2AE14"))) PPC_WEAK_FUNC(sub_82B2AE14);
PPC_FUNC_IMPL(__imp__sub_82B2AE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2AE18"))) PPC_WEAK_FUNC(sub_82B2AE18);
PPC_FUNC_IMPL(__imp__sub_82B2AE18) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x82B2AE30;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b2aeb4
	if (ctx.cr6.eq) goto loc_82B2AEB4;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-9724
	ctx.r11.s64 = ctx.r8.s64 + -9724;
	// lis r5,-32077
	ctx.r5.s64 = -2102198272;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-9888
	ctx.r6.s64 = ctx.r5.s64 + -9888;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r4,14488
	ctx.r10.s64 = ctx.r4.s64 + 14488;
	// addi r9,r9,11336
	ctx.r9.s64 = ctx.r9.s64 + 11336;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,768
	ctx.r5.s64 = 768;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82B2AEA4;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82B2AEB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2AEC8"))) PPC_WEAK_FUNC(sub_82B2AEC8);
PPC_FUNC_IMPL(__imp__sub_82B2AEC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B2AED0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-23704(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23704);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2aefc
	if (!ctx.cr6.eq) goto loc_82B2AEFC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82b2a9d8
	ctx.lr = 0x82B2AEF0;
	sub_82B2A9D8(ctx, base);
	// stw r3,-23704(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23704, ctx.r3.u32);
	// bl 0x82b2aa88
	ctx.lr = 0x82B2AEF8;
	sub_82B2AA88(ctx, base);
	// lwz r10,-23704(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23704);
loc_82B2AEFC:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-23696(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23696);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b2af1c
	if (ctx.cr6.eq) goto loc_82B2AF1C;
	// bl 0x82997bd0
	ctx.lr = 0x82B2AF10;
	sub_82997BD0(ctx, base);
	// lwz r11,-23696(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23696);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82b2af24
	goto loc_82B2AF24;
loc_82B2AF1C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82B2AF24:
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r30,r10,14476
	ctx.r30.s64 = ctx.r10.s64 + 14476;
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2af54
	if (!ctx.cr6.eq) goto loc_82B2AF54;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82B2AF44;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82B2AF4C;
	sub_822AADA8(ctx, base);
	// lwz r11,-23696(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23696);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82B2AF54:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2af80
	if (!ctx.cr6.eq) goto loc_82B2AF80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82B2AF70;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82B2AF78;
	sub_82398640(ctx, base);
	// lwz r11,-23696(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23696);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82B2AF80:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b2afb8
	if (ctx.cr6.eq) goto loc_82B2AFB8;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82B2AF9C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82b2afb8
	if (!ctx.cr6.eq) goto loc_82B2AFB8;
	// lwz r3,-23696(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23696);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2AFB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B2AFB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2AFC0"))) PPC_WEAK_FUNC(sub_82B2AFC0);
PPC_FUNC_IMPL(__imp__sub_82B2AFC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2AFC8"))) PPC_WEAK_FUNC(sub_82B2AFC8);
PPC_FUNC_IMPL(__imp__sub_82B2AFC8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-23704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23704);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2b00c
	if (!ctx.cr6.eq) goto loc_82B2B00C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82b2a9d8
	ctx.lr = 0x82B2B000;
	sub_82B2A9D8(ctx, base);
	// stw r3,-23704(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23704, ctx.r3.u32);
	// bl 0x82b2aa88
	ctx.lr = 0x82B2B008;
	sub_82B2AA88(ctx, base);
	// lwz r11,-23704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23704);
loc_82B2B00C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82B2B034"))) PPC_WEAK_FUNC(sub_82B2B034);
PPC_FUNC_IMPL(__imp__sub_82B2B034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2B038"))) PPC_WEAK_FUNC(sub_82B2B038);
PPC_FUNC_IMPL(__imp__sub_82B2B038) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x82B2B050;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b2b0d4
	if (ctx.cr6.eq) goto loc_82B2B0D4;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-9684
	ctx.r11.s64 = ctx.r8.s64 + -9684;
	// lis r5,-32077
	ctx.r5.s64 = -2102198272;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-10184
	ctx.r6.s64 = ctx.r5.s64 + -10184;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r4,14488
	ctx.r10.s64 = ctx.r4.s64 + 14488;
	// addi r9,r9,11336
	ctx.r9.s64 = ctx.r9.s64 + 11336;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,912
	ctx.r5.s64 = 912;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82B2B0C4;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82B2B0D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2B0E8"))) PPC_WEAK_FUNC(sub_82B2B0E8);
PPC_FUNC_IMPL(__imp__sub_82B2B0E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B2B0F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-23704(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23704);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2b11c
	if (!ctx.cr6.eq) goto loc_82B2B11C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82b2a9d8
	ctx.lr = 0x82B2B110;
	sub_82B2A9D8(ctx, base);
	// stw r3,-23704(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23704, ctx.r3.u32);
	// bl 0x82b2aa88
	ctx.lr = 0x82B2B118;
	sub_82B2AA88(ctx, base);
	// lwz r10,-23704(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23704);
loc_82B2B11C:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-23692(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23692);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b2b13c
	if (ctx.cr6.eq) goto loc_82B2B13C;
	// bl 0x82997bd0
	ctx.lr = 0x82B2B130;
	sub_82997BD0(ctx, base);
	// lwz r11,-23692(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23692);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82b2b144
	goto loc_82B2B144;
loc_82B2B13C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82B2B144:
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r30,r10,14476
	ctx.r30.s64 = ctx.r10.s64 + 14476;
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2b174
	if (!ctx.cr6.eq) goto loc_82B2B174;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82B2B164;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82B2B16C;
	sub_822AADA8(ctx, base);
	// lwz r11,-23692(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23692);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82B2B174:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2b1a0
	if (!ctx.cr6.eq) goto loc_82B2B1A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82B2B190;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82B2B198;
	sub_82398640(ctx, base);
	// lwz r11,-23692(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23692);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82B2B1A0:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b2b1d8
	if (ctx.cr6.eq) goto loc_82B2B1D8;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82B2B1BC;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82b2b1d8
	if (!ctx.cr6.eq) goto loc_82B2B1D8;
	// lwz r3,-23692(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23692);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2B1D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B2B1D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2B1E0"))) PPC_WEAK_FUNC(sub_82B2B1E0);
PPC_FUNC_IMPL(__imp__sub_82B2B1E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2B1E8"))) PPC_WEAK_FUNC(sub_82B2B1E8);
PPC_FUNC_IMPL(__imp__sub_82B2B1E8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-23704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23704);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2b22c
	if (!ctx.cr6.eq) goto loc_82B2B22C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82b2a9d8
	ctx.lr = 0x82B2B220;
	sub_82B2A9D8(ctx, base);
	// stw r3,-23704(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23704, ctx.r3.u32);
	// bl 0x82b2aa88
	ctx.lr = 0x82B2B228;
	sub_82B2AA88(ctx, base);
	// lwz r11,-23704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23704);
loc_82B2B22C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82B2B254"))) PPC_WEAK_FUNC(sub_82B2B254);
PPC_FUNC_IMPL(__imp__sub_82B2B254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2B258"))) PPC_WEAK_FUNC(sub_82B2B258);
PPC_FUNC_IMPL(__imp__sub_82B2B258) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x82B2B270;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b2b2f4
	if (ctx.cr6.eq) goto loc_82B2B2F4;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-9644
	ctx.r11.s64 = ctx.r8.s64 + -9644;
	// lis r5,-32077
	ctx.r5.s64 = -2102198272;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-10480
	ctx.r6.s64 = ctx.r5.s64 + -10480;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r4,14488
	ctx.r10.s64 = ctx.r4.s64 + 14488;
	// addi r9,r9,11336
	ctx.r9.s64 = ctx.r9.s64 + 11336;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,812
	ctx.r5.s64 = 812;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82B2B2E4;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82B2B2F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2B308"))) PPC_WEAK_FUNC(sub_82B2B308);
PPC_FUNC_IMPL(__imp__sub_82B2B308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B2B310;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-23704(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23704);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2b33c
	if (!ctx.cr6.eq) goto loc_82B2B33C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82b2a9d8
	ctx.lr = 0x82B2B330;
	sub_82B2A9D8(ctx, base);
	// stw r3,-23704(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23704, ctx.r3.u32);
	// bl 0x82b2aa88
	ctx.lr = 0x82B2B338;
	sub_82B2AA88(ctx, base);
	// lwz r10,-23704(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23704);
loc_82B2B33C:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-23688(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23688);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b2b35c
	if (ctx.cr6.eq) goto loc_82B2B35C;
	// bl 0x82997bd0
	ctx.lr = 0x82B2B350;
	sub_82997BD0(ctx, base);
	// lwz r11,-23688(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23688);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82b2b364
	goto loc_82B2B364;
loc_82B2B35C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82B2B364:
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r30,r10,14476
	ctx.r30.s64 = ctx.r10.s64 + 14476;
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2b394
	if (!ctx.cr6.eq) goto loc_82B2B394;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82B2B384;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82B2B38C;
	sub_822AADA8(ctx, base);
	// lwz r11,-23688(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23688);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82B2B394:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2b3c0
	if (!ctx.cr6.eq) goto loc_82B2B3C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82B2B3B0;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82B2B3B8;
	sub_82398640(ctx, base);
	// lwz r11,-23688(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23688);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82B2B3C0:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b2b3f8
	if (ctx.cr6.eq) goto loc_82B2B3F8;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82B2B3DC;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82b2b3f8
	if (!ctx.cr6.eq) goto loc_82B2B3F8;
	// lwz r3,-23688(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23688);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2B3F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B2B3F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2B400"))) PPC_WEAK_FUNC(sub_82B2B400);
PPC_FUNC_IMPL(__imp__sub_82B2B400) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2B408"))) PPC_WEAK_FUNC(sub_82B2B408);
PPC_FUNC_IMPL(__imp__sub_82B2B408) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-23704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23704);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2b44c
	if (!ctx.cr6.eq) goto loc_82B2B44C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82b2a9d8
	ctx.lr = 0x82B2B440;
	sub_82B2A9D8(ctx, base);
	// stw r3,-23704(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23704, ctx.r3.u32);
	// bl 0x82b2aa88
	ctx.lr = 0x82B2B448;
	sub_82B2AA88(ctx, base);
	// lwz r11,-23704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23704);
loc_82B2B44C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82B2B474"))) PPC_WEAK_FUNC(sub_82B2B474);
PPC_FUNC_IMPL(__imp__sub_82B2B474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2B478"))) PPC_WEAK_FUNC(sub_82B2B478);
PPC_FUNC_IMPL(__imp__sub_82B2B478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82B2B480;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// std r3,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r3.u64);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r29,r11,29152
	ctx.r29.s64 = ctx.r11.s64 + 29152;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r11,-31264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31264);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r27,12(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r26,0(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,280(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B2B4C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b2b590
	if (ctx.cr6.eq) goto loc_82B2B590;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r28,r11,14488
	ctx.r28.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-27944(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27944);
loc_82B2B4E0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b2b584
	if (ctx.cr6.eq) goto loc_82B2B584;
	// lwz r9,104(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r8,r9,0,10,10
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82b2b584
	if (ctx.cr6.eq) goto loc_82B2B584;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// rlwinm r9,r11,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82b2b584
	if (!ctx.cr6.eq) goto loc_82B2B584;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2b528
	if (!ctx.cr6.eq) goto loc_82B2B528;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826870d8
	ctx.lr = 0x82B2B51C;
	sub_826870D8(ctx, base);
	// stw r3,-27944(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27944, ctx.r3.u32);
	// bl 0x82687198
	ctx.lr = 0x82B2B524;
	sub_82687198(ctx, base);
	// lwz r10,-27944(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27944);
loc_82B2B528:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b2b54c
	if (ctx.cr6.eq) goto loc_82B2B54C;
loc_82B2B538:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82b2b55c
	if (ctx.cr6.eq) goto loc_82B2B55C;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2b538
	if (!ctx.cr6.eq) goto loc_82B2B538;
loc_82B2B54C:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b2b584
	if (ctx.cr6.eq) goto loc_82B2B584;
loc_82B2B55C:
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// rlwinm r9,r11,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82b2b584
	if (!ctx.cr6.eq) goto loc_82B2B584;
	// bl 0x823f1f50
	ctx.lr = 0x82B2B570;
	sub_823F1F50(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,996(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 996);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2B580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,-27944(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27944);
loc_82B2B584:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82b2b4e0
	if (!ctx.cr6.eq) goto loc_82B2B4E0;
loc_82B2B590:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b2b5a8
	if (ctx.cr6.eq) goto loc_82B2B5A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82367960
	ctx.lr = 0x82B2B5A8;
	sub_82367960(ctx, base);
loc_82B2B5A8:
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2B5B4"))) PPC_WEAK_FUNC(sub_82B2B5B4);
PPC_FUNC_IMPL(__imp__sub_82B2B5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2B5B8"))) PPC_WEAK_FUNC(sub_82B2B5B8);
PPC_FUNC_IMPL(__imp__sub_82B2B5B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82B2B5C0;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// std r26,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r26.u64);
	// std r5,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r5.u64);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// bl 0x82371088
	ctx.lr = 0x82B2B5F8;
	sub_82371088(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r27,248(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b2b684
	if (ctx.cr6.eq) goto loc_82B2B684;
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stfs f31,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// bl 0x8268ec78
	ctx.lr = 0x82B2B63C;
	sub_8268EC78(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r6,524(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 524);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,544(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 544);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B2B674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8268edf8
	ctx.lr = 0x82B2B67C;
	sub_8268EDF8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8268eb10
	ctx.lr = 0x82B2B684;
	sub_8268EB10(ctx, base);
loc_82B2B684:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// rldicr r4,r27,32,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFF00000000;
	// bl 0x82b2b478
	ctx.lr = 0x82B2B694;
	sub_82B2B478(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2B6A8"))) PPC_WEAK_FUNC(sub_82B2B6A8);
PPC_FUNC_IMPL(__imp__sub_82B2B6A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B2B6B0;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6acc
	ctx.lr = 0x82B2B6B8;
	__savefpr_21(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r4,320(r1)
	PPC_STORE_U64(ctx.r1.u32 + 320, ctx.r4.u64);
	// std r5,328(r1)
	PPC_STORE_U64(ctx.r1.u32 + 328, ctx.r5.u64);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// std r6,336(r1)
	PPC_STORE_U64(ctx.r1.u32 + 336, ctx.r6.u64);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// std r7,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.r7.u64);
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// fmr f30,f3
	ctx.f30.f64 = ctx.f3.f64;
	// bl 0x82371088
	ctx.lr = 0x82B2B6E4;
	sub_82371088(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b2b788
	if (ctx.cr6.eq) goto loc_82B2B788;
	// lwz r11,320(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// stfs f28,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r9,328(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r8,336(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r7,340(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r6,344(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// stw r6,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r6.u32);
	// bl 0x82a275c8
	ctx.lr = 0x82B2B740;
	sub_82A275C8(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r6,524(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 524);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r9,388(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,544(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2B778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8268eb10
	ctx.lr = 0x82B2B780;
	sub_8268EB10(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8268edf8
	ctx.lr = 0x82B2B788;
	sub_8268EDF8(ctx, base);
loc_82B2B788:
	// lfs f0,340(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f27,324(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	ctx.f27.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fsubs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// lfs f26,328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	ctx.f26.f64 = double(temp.f32);
	// lfs f13,344(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f26.f64));
	// lfs f25,320(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	ctx.f25.f64 = double(temp.f32);
	// lfs f12,336(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f25
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f25.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f1,-18108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18108);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f9,f12,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fsqrts f30,f9
	ctx.f30.f64 = double(float(sqrt(ctx.f9.f64)));
	// bl 0x82382590
	ctx.lr = 0x82B2B7D8;
	sub_82382590(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lfs f29,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f29.f64 = double(temp.f32);
	// lfs f0,-28844(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f8,f30,f28
	ctx.f8.f64 = double(float(ctx.f30.f64 / ctx.f28.f64));
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
	// fcmpu cr6,f30,f29
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// fmuls f24,f8,f0
	ctx.f24.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// ble cr6,0x82b2b874
	if (!ctx.cr6.gt) goto loc_82B2B874;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f23,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f23.f64 = double(temp.f32);
	// lfs f22,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f22.f64 = double(temp.f32);
	// lfs f21,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f21.f64 = double(temp.f32);
	// addi r31,r11,-18304
	ctx.r31.s64 = ctx.r11.s64 + -18304;
loc_82B2B810:
	// fmuls f0,f21,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f21.f64 * ctx.f31.f64));
	// fmuls f13,f22,f31
	ctx.f13.f64 = double(float(ctx.f22.f64 * ctx.f31.f64));
	// fmuls f12,f23,f31
	ctx.f12.f64 = double(float(ctx.f23.f64 * ctx.f31.f64));
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// fadds f11,f0,f25
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f25.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f10,f13,f27
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f27.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fadds f9,f12,f26
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f26.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82b2b478
	ctx.lr = 0x82B2B848;
	sub_82B2B478(ctx, base);
	// fadds f8,f31,f24
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f31.f64 + ctx.f24.f64));
	// fsubs f7,f8,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f30.f64));
	// fcmpu cr6,f7,f29
	ctx.cr6.compare(ctx.f7.f64, ctx.f29.f64);
	// mfcr r10
	ctx.r10.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r10.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r10.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r10.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r10.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r10.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r10.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r10.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r10.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r10.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r10.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r10.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r10.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r10.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r10.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r10.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r10.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r10.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r10.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r10.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r10.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r10.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r10.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r10.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r10.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r10.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r10.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r10.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r10.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r10.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r10.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r10.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r9,r10,27,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// rlwinm r8,r10,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lfsx f6,r31,r7
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	ctx.f6.f64 = double(temp.f32);
	// fsel f31,f6,f30,f8
	ctx.f31.f64 = ctx.f6.f64 >= 0.0 ? ctx.f30.f64 : ctx.f8.f64;
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// blt cr6,0x82b2b810
	if (ctx.cr6.lt) goto loc_82B2B810;
loc_82B2B874:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6b18
	ctx.lr = 0x82B2B880;
	__restfpr_21(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2B884"))) PPC_WEAK_FUNC(sub_82B2B884);
PPC_FUNC_IMPL(__imp__sub_82B2B884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2B888"))) PPC_WEAK_FUNC(sub_82B2B888);
PPC_FUNC_IMPL(__imp__sub_82B2B888) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82472cc0
	ctx.lr = 0x82B2B89C;
	sub_82472CC0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b2b8c4
	if (ctx.cr6.eq) goto loc_82B2B8C4;
	// lwz r10,456(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 456);
	// addi r11,r3,456
	ctx.r11.s64 = ctx.r3.s64 + 456;
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 456, ctx.r9.u32);
	// oris r7,r8,32768
	ctx.r7.u64 = ctx.r8.u64 | 2147483648;
	// ori r7,r7,512
	ctx.r7.u64 = ctx.r7.u64 | 512;
	// stw r7,456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 456, ctx.r7.u32);
loc_82B2B8C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2B8D4"))) PPC_WEAK_FUNC(sub_82B2B8D4);
PPC_FUNC_IMPL(__imp__sub_82B2B8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2B8D8"))) PPC_WEAK_FUNC(sub_82B2B8D8);
PPC_FUNC_IMPL(__imp__sub_82B2B8D8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823fea50
	ctx.lr = 0x82B2B8F0;
	sub_823FEA50(ctx, base);
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b2b924
	if (ctx.cr6.eq) goto loc_82B2B924;
	// addi r4,r31,268
	ctx.r4.s64 = ctx.r31.s64 + 268;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823d27f0
	ctx.lr = 0x82B2B90C;
	sub_823D27F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r10.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r9.u32);
loc_82B2B924:
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

__attribute__((alias("__imp__sub_82B2B938"))) PPC_WEAK_FUNC(sub_82B2B938);
PPC_FUNC_IMPL(__imp__sub_82B2B938) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2B944"))) PPC_WEAK_FUNC(sub_82B2B944);
PPC_FUNC_IMPL(__imp__sub_82B2B944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2B948"))) PPC_WEAK_FUNC(sub_82B2B948);
PPC_FUNC_IMPL(__imp__sub_82B2B948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82B2B950;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r11,29152
	ctx.r27.s64 = ctx.r11.s64 + 29152;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lwz r11,-31264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31264);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lfs f13,340(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r31,244
	ctx.r5.s64 = ctx.r31.s64 + 244;
	// lwz r26,12(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lfs f0,-28968(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28968);
	ctx.f0.f64 = double(temp.f32);
	// lwz r25,0(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r3,280(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,24(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B2B9A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lfs f31,32024(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32024);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82b2bab0
	if (ctx.cr6.eq) goto loc_82B2BAB0;
loc_82B2B9B8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b2baa4
	if (ctx.cr6.eq) goto loc_82B2BAA4;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2baa4
	if (!ctx.cr6.eq) goto loc_82B2BAA4;
	// rlwinm r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2baa4
	if (!ctx.cr6.eq) goto loc_82B2BAA4;
	// lwz r11,712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82b2ba5c
	if (!ctx.cr6.gt) goto loc_82B2BA5C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B2B9F8:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2ba5c
	if (!ctx.cr6.eq) goto loc_82B2BA5C;
	// lwz r11,708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwzx r8,r11,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82b2ba48
	if (!ctx.cr6.eq) goto loc_82B2BA48;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2BA2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// li r9,1
	ctx.r9.s64 = 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// oris r7,r8,32768
	ctx.r7.u64 = ctx.r8.u64 | 2147483648;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
loc_82B2BA48:
	// lwz r11,712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82b2b9f8
	if (ctx.cr6.lt) goto loc_82B2B9F8;
loc_82B2BA5C:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2baa4
	if (!ctx.cr6.eq) goto loc_82B2BAA4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r3,r31,708
	ctx.r3.s64 = ctx.r31.s64 + 708;
	// oris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 2147483648;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82b2d378
	ctx.lr = 0x82B2BA88;
	sub_82B2D378(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,780(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 780);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B2BAA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B2BAA4:
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82b2b9b8
	if (!ctx.cr6.eq) goto loc_82B2B9B8;
loc_82B2BAB0:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b2bac8
	if (ctx.cr6.eq) goto loc_82B2BAC8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82367960
	ctx.lr = 0x82B2BAC8;
	sub_82367960(ctx, base);
loc_82B2BAC8:
	// stw r25,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r25.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r29,712(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82b2bb64
	if (!ctx.cr6.gt) goto loc_82B2BB64;
	// addi r28,r31,708
	ctx.r28.s64 = ctx.r31.s64 + 708;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B2BAE4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82b2bb48
	if (!ctx.cr6.eq) goto loc_82B2BB48;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b2bb20
	if (ctx.cr6.eq) goto loc_82B2BB20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,780(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 780);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2BB20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B2BB20:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8232d180
	ctx.lr = 0x82B2BB38;
	sub_8232D180(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// b 0x82b2bb54
	goto loc_82B2BB54;
loc_82B2BB48:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r9,r10,1
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_82B2BB54:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82b2bae4
	if (ctx.cr6.lt) goto loc_82B2BAE4;
loc_82B2BB64:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2BB70"))) PPC_WEAK_FUNC(sub_82B2BB70);
PPC_FUNC_IMPL(__imp__sub_82B2BB70) {
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
	// lwz r31,712(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 712);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82b2bbe0
	if (!ctx.cr6.gt) goto loc_82B2BBE0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r3,708
	ctx.r30.s64 = ctx.r3.s64 + 708;
	// lfs f31,32024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32024);
	ctx.f31.f64 = double(temp.f32);
loc_82B2BBA0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,780(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 780);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B2BBC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8232d180
	ctx.lr = 0x82B2BBD8;
	sub_8232D180(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt 0x82b2bba0
	if (ctx.cr0.gt) goto loc_82B2BBA0;
loc_82B2BBE0:
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

__attribute__((alias("__imp__sub_82B2BBFC"))) PPC_WEAK_FUNC(sub_82B2BBFC);
PPC_FUNC_IMPL(__imp__sub_82B2BBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2BC00"))) PPC_WEAK_FUNC(sub_82B2BC00);
PPC_FUNC_IMPL(__imp__sub_82B2BC00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,712(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 712);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f12,736(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 736);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f1,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// stfs f11,736(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 736, temp.u32);
	// stfs f13,712(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 712, temp.u32);
	// lfs f0,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82b2bc34
	if (ctx.cr6.gt) goto loc_82B2BC34;
	// lwz r11,704(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	// oris r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 1073741824;
	// stw r10,704(r3)
	PPC_STORE_U32(ctx.r3.u32 + 704, ctx.r10.u32);
loc_82B2BC34:
	// lwz r11,704(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f0,720(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 720);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lfs f12,716(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 716);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,720(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 720, temp.u32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82b2bc74
	if (!ctx.cr6.gt) goto loc_82B2BC74;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwimi r11,r10,30,0,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0xC0000000) | (ctx.r11.u64 & 0xFFFFFFFF3FFFFFFF);
	// stw r9,724(r3)
	PPC_STORE_U32(ctx.r3.u32 + 724, ctx.r9.u32);
	// stw r11,704(r3)
	PPC_STORE_U32(ctx.r3.u32 + 704, ctx.r11.u32);
	// blr 
	return;
loc_82B2BC74:
	// lwz r4,724(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 724);
	// b 0x82b2c648
	sub_82B2C648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2BC7C"))) PPC_WEAK_FUNC(sub_82B2BC7C);
PPC_FUNC_IMPL(__imp__sub_82B2BC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2BC80"))) PPC_WEAK_FUNC(sub_82B2BC80);
PPC_FUNC_IMPL(__imp__sub_82B2BC80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82B2BC88;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r4,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r4.u64);
	// std r5,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r5.u64);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// bl 0x8258a128
	ctx.lr = 0x82B2BCAC;
	sub_8258A128(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82b2bcdc
	if (!ctx.cr6.eq) goto loc_82B2BCDC;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-9592
	ctx.r4.s64 = ctx.r11.s64 + -9592;
	// bl 0x82295680
	ctx.lr = 0x82B2BCC8;
	sub_82295680(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82B2BCD0;
	sub_82299080(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82B2BCDC:
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// bl 0x82981ac8
	ctx.lr = 0x82B2BCE8;
	sub_82981AC8(ctx, base);
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b2bd08
	if (ctx.cr6.eq) goto loc_82B2BD08;
loc_82B2BCF4:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82b2c37c
	if (ctx.cr6.eq) goto loc_82B2C37C;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2bcf4
	if (!ctx.cr6.eq) goto loc_82B2BCF4;
loc_82B2BD08:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2c37c
	if (!ctx.cr6.eq) goto loc_82B2C37C;
	// bl 0x829882b0
	ctx.lr = 0x82B2BD1C;
	sub_829882B0(ctx, base);
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b2bd3c
	if (ctx.cr6.eq) goto loc_82B2BD3C;
loc_82B2BD28:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82b2c37c
	if (ctx.cr6.eq) goto loc_82B2C37C;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2bd28
	if (!ctx.cr6.eq) goto loc_82B2BD28;
loc_82B2BD3C:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2c37c
	if (!ctx.cr6.eq) goto loc_82B2C37C;
	// bl 0x82987c10
	ctx.lr = 0x82B2BD50;
	sub_82987C10(ctx, base);
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b2bd70
	if (ctx.cr6.eq) goto loc_82B2BD70;
loc_82B2BD5C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82b2c37c
	if (ctx.cr6.eq) goto loc_82B2C37C;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2bd5c
	if (!ctx.cr6.eq) goto loc_82B2BD5C;
loc_82B2BD70:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2c37c
	if (!ctx.cr6.eq) goto loc_82B2C37C;
	// bl 0x82981a78
	ctx.lr = 0x82B2BD84;
	sub_82981A78(ctx, base);
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r27,r10,-32448
	ctx.r27.s64 = ctx.r10.s64 + -32448;
	// beq cr6,0x82b2bdac
	if (ctx.cr6.eq) goto loc_82B2BDAC;
loc_82B2BD98:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82b2bdbc
	if (ctx.cr6.eq) goto loc_82B2BDBC;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2bd98
	if (!ctx.cr6.eq) goto loc_82B2BD98;
loc_82B2BDAC:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b2bf34
	if (ctx.cr6.eq) goto loc_82B2BF34;
loc_82B2BDBC:
	// bl 0x82987650
	ctx.lr = 0x82B2BDC0;
	sub_82987650(ctx, base);
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b2bde0
	if (ctx.cr6.eq) goto loc_82B2BDE0;
loc_82B2BDCC:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82b2bf34
	if (ctx.cr6.eq) goto loc_82B2BF34;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2bdcc
	if (!ctx.cr6.eq) goto loc_82B2BDCC;
loc_82B2BDE0:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2bf34
	if (!ctx.cr6.eq) goto loc_82B2BF34;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2BE04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b2bf34
	if (!ctx.cr6.eq) goto loc_82B2BF34;
	// bl 0x82987998
	ctx.lr = 0x82B2BE10;
	sub_82987998(ctx, base);
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b2be30
	if (ctx.cr6.eq) goto loc_82B2BE30;
loc_82B2BE1C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82b2bf34
	if (ctx.cr6.eq) goto loc_82B2BF34;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2be1c
	if (!ctx.cr6.eq) goto loc_82B2BE1C;
loc_82B2BE30:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2bf34
	if (!ctx.cr6.eq) goto loc_82B2BF34;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829d9228
	ctx.lr = 0x82B2BE48;
	sub_829D9228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2BE5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82b2c070
	if (!ctx.cr6.gt) goto loc_82B2C070;
	// lwz r11,916(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 916);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2c070
	if (!ctx.cr6.eq) goto loc_82B2C070;
	// lwz r11,1024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwimi r11,r25,20,11,12
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r25.u32, 20) & 0x180000) | (ctx.r11.u64 & 0xFFFFFFFFFFE7FFFF);
	// stw r11,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r11.u32);
	// lfs f0,516(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1040(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1040, temp.u32);
	// bl 0x829ef1f8
	ctx.lr = 0x82B2BE90;
	sub_829EF1F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,748(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 748);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82b2d648
	ctx.lr = 0x82B2BE9C;
	sub_82B2D648(ctx, base);
	// lwz r10,2048(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2048);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// oris r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 262144;
	// stw r9,2048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2048, ctx.r9.u32);
	// lwz r4,156(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// bl 0x82b2d5f0
	ctx.lr = 0x82B2BEB4;
	sub_82B2D5F0(ctx, base);
	// lwz r8,156(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// lfs f0,3440(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 3440);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r8.u32);
	// lfs f13,748(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 748);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,320(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 320);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B2BEE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82995e20
	ctx.lr = 0x82B2BEEC;
	sub_82995E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b2d588
	ctx.lr = 0x82B2BEF8;
	sub_82B2D588(ctx, base);
	// lwz r11,2148(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2148);
	// lis r5,-32224
	ctx.r5.s64 = -2111832064;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r5,-9544
	ctx.r4.s64 = ctx.r5.s64 + -9544;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82295680
	ctx.lr = 0x82B2BF10;
	sub_82295680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,2148(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2148);
	// lwz r10,1000(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2BF24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82B2BF2C;
	sub_82299080(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82b2c064
	goto loc_82B2C064;
loc_82B2BF34:
	// bl 0x829ba1c8
	ctx.lr = 0x82B2BF38;
	sub_829BA1C8(ctx, base);
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b2bf58
	if (ctx.cr6.eq) goto loc_82B2BF58;
loc_82B2BF44:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82b2bf68
	if (ctx.cr6.eq) goto loc_82B2BF68;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2bf44
	if (!ctx.cr6.eq) goto loc_82B2BF44;
loc_82B2BF58:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b2c070
	if (ctx.cr6.eq) goto loc_82B2C070;
loc_82B2BF68:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2BF7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b2c070
	if (!ctx.cr6.eq) goto loc_82B2C070;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1d068
	ctx.lr = 0x82B2BF8C;
	sub_82A1D068(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2BFA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82b2c070
	if (!ctx.cr6.gt) goto loc_82B2C070;
	// lwz r11,1320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1320);
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwimi r11,r25,12,19,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r25.u32, 12) & 0x1800) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE7FF);
	// stw r11,1320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1320, ctx.r11.u32);
	// lfs f0,516(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1548(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1548, temp.u32);
	// bl 0x82a03af0
	ctx.lr = 0x82B2BFC8;
	sub_82A03AF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,748(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 748);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82b2d4d0
	ctx.lr = 0x82B2BFD4;
	sub_82B2D4D0(ctx, base);
	// lwz r10,1320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1320);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// oris r9,r10,512
	ctx.r9.u64 = ctx.r10.u64 | 33554432;
	// stw r9,1320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1320, ctx.r9.u32);
	// lwz r4,156(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// bl 0x82b2d5f0
	ctx.lr = 0x82B2BFEC;
	sub_82B2D5F0(ctx, base);
	// lfs f0,3440(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 3440);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,748(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 748);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,320(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 320);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B2C018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,1492(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1492);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82B2C02C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,2148(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2148);
	// lis r4,-32224
	ctx.r4.s64 = -2111832064;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r4,-9544
	ctx.r4.s64 = ctx.r4.s64 + -9544;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82295680
	ctx.lr = 0x82B2C044;
	sub_82295680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,2148(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2148);
	// lwz r10,1000(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2C058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82B2C060;
	sub_82299080(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
loc_82B2C064:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b2d528
	ctx.lr = 0x82B2C070;
	sub_82B2D528(ctx, base);
loc_82B2C070:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b2c264
	if (ctx.cr6.eq) goto loc_82B2C264;
	// lwz r9,264(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 264);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r7,252(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 252);
	// lwz r11,580(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 580);
	// rldicr r8,r9,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r6,r7,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r4,752(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 752);
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,572(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 572);
	// ld r7,256(r28)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r28.u32 + 256);
	// ld r5,244(r28)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r28.u32 + 244);
	// bl 0x82a1d3c8
	ctx.lr = 0x82B2C0AC;
	sub_82A1D3C8(ctx, base);
	// bl 0x829d95e0
	ctx.lr = 0x82B2C0B0;
	sub_829D95E0(ctx, base);
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f31,-15120(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82b2c110
	if (ctx.cr6.eq) goto loc_82B2C110;
	// lfs f0,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f13,748(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 748);
	ctx.f13.f64 = double(temp.f32);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r11,616(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 616);
	// stfs f13,164(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rldicr r6,r6,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B2C110;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B2C110:
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82b2c130
	if (ctx.cr6.gt) goto loc_82B2C130;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x82b2c138
	goto loc_82B2C138;
loc_82B2C130:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82B2C138:
	// lwz r9,980(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// lwz r10,2164(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2164);
	// lwz r8,2272(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2272);
	// lwz r9,500(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 500);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82b2c178
	if (!ctx.cr6.gt) goto loc_82B2C178;
	// lwz r7,496(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 496);
	// addi r10,r7,4
	ctx.r10.s64 = ctx.r7.s64 + 4;
loc_82B2C15C:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82b2c258
	if (ctx.cr6.eq) goto loc_82B2C258;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82b2c15c
	if (ctx.cr6.lt) goto loc_82B2C15C;
loc_82B2C178:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_82B2C17C:
	// bl 0x829e0fd0
	ctx.lr = 0x82B2C180;
	sub_829E0FD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r30,256
	ctx.r4.s64 = ctx.r30.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r24,348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 348, ctx.r24.u32);
	// stw r28,352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 352, ctx.r28.u32);
	// lfs f0,516(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// bl 0x823d3da0
	ctx.lr = 0x82B2C1A0;
	sub_823D3DA0(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,17956
	ctx.r10.s64 = ctx.r11.s64 + 17956;
	// lwz r11,17920(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17920);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82b2c1d0
	if (!ctx.cr6.eq) goto loc_82B2C1D0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stfs f31,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f31,4(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f31,8(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stw r11,17920(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17920, ctx.r11.u32);
loc_82B2C1D0:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfd f12,-18352(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18352);
	// lfs f13,-18108(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18108);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f0,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f8,f10,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fsqrt f7,f8
	ctx.f7.f64 = sqrt(ctx.f8.f64);
	// fdiv f6,f12,f7
	ctx.f6.f64 = ctx.f12.f64 / ctx.f7.f64;
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// frsp f13,f6
	ctx.f13.f64 = double(float(ctx.f6.f64));
	// ble cr6,0x82b2c22c
	if (!ctx.cr6.gt) goto loc_82B2C22C;
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
loc_82B2C22C:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,252(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// rldicr r5,r9,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,244(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 244);
	// bl 0x82b2d438
	ctx.lr = 0x82B2C24C;
	sub_82B2D438(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82B2C258:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r3,r11,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// b 0x82b2c17c
	goto loc_82B2C17C;
loc_82B2C264:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r4,724(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 724);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lfs f31,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x82b2c2bc
	if (!ctx.cr6.eq) goto loc_82B2C2BC;
	// lwz r11,704(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b2c2b4
	if (ctx.cr6.eq) goto loc_82B2C2B4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b2c7d0
	ctx.lr = 0x82B2C294;
	sub_82B2C7D0(ctx, base);
	// stw r3,724(r30)
	PPC_STORE_U32(ctx.r30.u32 + 724, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b2c2b4
	if (ctx.cr6.eq) goto loc_82B2C2B4;
	// lwz r11,704(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	// stfs f31,732(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 732, temp.u32);
	// rlwinm r10,r11,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r10,704(r30)
	PPC_STORE_U32(ctx.r30.u32 + 704, ctx.r10.u32);
loc_82B2C2B4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b2c358
	if (ctx.cr6.eq) goto loc_82B2C358;
loc_82B2C2BC:
	// lfs f0,248(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,252(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,244(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f5,700(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 700);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,728(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 728);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f12,f12
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f3,f9,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fmadds f2,f6,f6,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fsqrts f1,f2
	ctx.f1.f64 = double(float(sqrt(ctx.f2.f64)));
	// fcmpu cr6,f1,f5
	ctx.cr6.compare(ctx.f1.f64, ctx.f5.f64);
	// bgt cr6,0x82b2c318
	if (ctx.cr6.gt) goto loc_82B2C318;
	// lwz r11,704(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	// stfs f31,720(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 720, temp.u32);
	// stfs f0,732(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 732, temp.u32);
	// oris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 2147483648;
	// stw r10,704(r30)
	PPC_STORE_U32(ctx.r30.u32 + 704, ctx.r10.u32);
	// b 0x82b2c358
	goto loc_82B2C358;
loc_82B2C318:
	// lfs f13,732(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 732);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82b2c358
	if (!ctx.cr6.lt) goto loc_82B2C358;
	// lfs f12,736(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 736);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// addi r10,r11,-18304
	ctx.r10.s64 = ctx.r11.s64 + -18304;
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fcmpu cr6,f10,f31
	ctx.cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// mfcr r9
	ctx.r9.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r9.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r9.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r9.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r9.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r9.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r9.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r9.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r9.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r9.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r9.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r9.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r9.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r9.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r9.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r9.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r9.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r9.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r9.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r9.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r9.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r9.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r9.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r9.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r9.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r9.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r9.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r9.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r9.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r9.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r9.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r9.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r8,r9,27,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// rlwinm r7,r9,30,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// lfsx f9,r10,r6
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsel f8,f9,f0,f11
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// stfs f8,732(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 732, temp.u32);
loc_82B2C358:
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b2c390
	ctx.lr = 0x82B2C364;
	sub_82B2C390(ctx, base);
	// lfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82b2cba8
	ctx.lr = 0x82B2C36C;
	sub_82B2CBA8(ctx, base);
	// stfs f31,736(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 736, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82B2C37C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b2d6a0
	ctx.lr = 0x82B2C384;
	sub_82B2D6A0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2C390"))) PPC_WEAK_FUNC(sub_82B2C390);
PPC_FUNC_IMPL(__imp__sub_82B2C390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,692(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f11,f12,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fabs f8,f11
	ctx.f8.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// ble cr6,0x82b2c5c0
	if (!ctx.cr6.gt) goto loc_82B2C5C0;
	// stfs f12,276(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 276, temp.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b2c4a8
	if (ctx.cr6.eq) goto loc_82B2C4A8;
	// lwz r11,368(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 368);
	// lfs f0,732(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 732);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,728(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 728);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// addi r10,r11,396
	ctx.r10.s64 = ctx.r11.s64 + 396;
	// bne cr6,0x82b2c3e8
	if (!ctx.cr6.eq) goto loc_82B2C3E8;
	// addi r10,r4,244
	ctx.r10.s64 = ctx.r4.s64 + 244;
loc_82B2C3E8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f10,248(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f7,272(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	ctx.f7.f64 = double(temp.f32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f13,244(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,268(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r3,268
	ctx.r11.s64 = ctx.r3.s64 + 268;
	// lfs f8,276(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	ctx.f8.f64 = double(temp.f32);
	// stw r9,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r9.u32);
	// lfs f6,-48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f6.f64 = double(temp.f32);
	// stw r8,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r8.u32);
	// lfs f5,-40(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	ctx.f5.f64 = double(temp.f32);
	// stw r7,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r7.u32);
	// lfs f4,-44(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// stfs f8,-24(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// fsubs f1,f3,f7
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f7.f64));
	// stfs f1,-44(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// lwz r5,-44(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	// fsubs f2,f6,f13
	ctx.f2.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// stw r5,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r5.u32);
	// lfs f13,252(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f5,f13
	ctx.f10.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// lfs f4,272(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f13,f2,f9
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f9.f64));
	// lfs f9,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lwz r6,-24(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// lfs f7,276(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,268(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	ctx.f6.f64 = double(temp.f32);
	// stfs f13,-48(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// lwz r4,-48(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// fadds f2,f4,f8
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// stfs f2,-28(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// lwz r10,-28(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	// fmuls f3,f13,f0
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fsubs f5,f10,f7
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// stfs f5,-40(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// lwz r11,-40(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	// stw r6,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r6.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// fadds f1,f6,f3
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f3.f64));
	// stfs f1,-32(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// lwz r9,-32(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// stw r10,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r10.u32);
	// stw r9,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r9.u32);
loc_82B2C4A8:
	// lfs f0,272(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f10,268(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,276(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lfs f8,688(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 688);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r3,268
	ctx.r11.s64 = ctx.r3.s64 + 268;
	// addi r10,r10,17956
	ctx.r10.s64 = ctx.r10.s64 + 17956;
	// lwz r9,17920(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17920);
	// clrlwi r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// fmadds f7,f10,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fmadds f6,f9,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fsqrts f5,f6
	ctx.f5.f64 = double(float(sqrt(ctx.f6.f64)));
	// fmuls f4,f5,f8
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fmuls f3,f4,f11
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// stfs f3,276(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 276, temp.u32);
	// bne cr6,0x82b2c508
	if (!ctx.cr6.eq) goto loc_82B2C508;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stw r9,17920(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17920, ctx.r9.u32);
loc_82B2C508:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfd f12,-18352(r9)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r9.u32 + -18352);
	// lfs f13,-18108(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18108);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f0,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f8,f10,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fsqrt f7,f8
	ctx.f7.f64 = sqrt(ctx.f8.f64);
	// fdiv f6,f12,f7
	ctx.f6.f64 = ctx.f12.f64 / ctx.f7.f64;
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// frsp f13,f6
	ctx.f13.f64 = double(float(ctx.f6.f64));
	// ble cr6,0x82b2c564
	if (!ctx.cr6.gt) goto loc_82B2C564;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f9,-12(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f8,-8(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
loc_82B2C564:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f0,496(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r8.u32);
	// lfs f12,-28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// lfs f13,-24(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	ctx.f13.f64 = double(temp.f32);
	// stw r7,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r7.u32);
	// lfs f11,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,-32(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// lwz r4,-32(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f10,-28(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f9,-24(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// lwz r6,-24(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r5,-28(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// blr 
	return;
loc_82B2C5C0:
	// lfs f12,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f11,276(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r3,268
	ctx.r11.s64 = ctx.r3.s64 + 268;
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,272(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	ctx.f8.f64 = double(temp.f32);
	// fmr f6,f11
	ctx.f6.f64 = ctx.f11.f64;
	// lfs f7,268(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	ctx.f7.f64 = double(temp.f32);
	// fmr f4,f8
	ctx.f4.f64 = ctx.f8.f64;
	// lfs f13,-18204(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18204);
	ctx.f13.f64 = double(temp.f32);
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// fmadds f3,f8,f9,f10
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmadds f2,f7,f0,f3
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f3.f64));
	// fmuls f1,f12,f2
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fmuls f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmuls f12,f9,f2
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmuls f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fadds f8,f6,f11
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// stfs f8,-24(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// fadds f7,f5,f10
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// stfs f7,-32(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// fadds f6,f4,f9
	ctx.f6.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// stfs f6,-28(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// lwz r8,-32(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// lwz r7,-28(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	// lwz r9,-24(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// stw r9,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r9.u32);
	// stw r7,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r7.u32);
	// stw r8,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2C644"))) PPC_WEAK_FUNC(sub_82B2C644);
PPC_FUNC_IMPL(__imp__sub_82B2C644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2C648"))) PPC_WEAK_FUNC(sub_82B2C648);
PPC_FUNC_IMPL(__imp__sub_82B2C648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,368(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,396
	ctx.r11.s64 = ctx.r11.s64 + 396;
	// bne cr6,0x82b2c664
	if (!ctx.cr6.eq) goto loc_82B2C664;
	// addi r11,r4,244
	ctx.r11.s64 = ctx.r4.s64 + 244;
loc_82B2C664:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f0,244(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f13,248(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f12,252(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,268(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lfs f10,272(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	ctx.f10.f64 = double(temp.f32);
	// fmr f2,f11
	ctx.f2.f64 = ctx.f11.f64;
	// stw r9,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r9.u32);
	// lfs f9,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// stw r6,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r6.u32);
	// lfs f7,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f7.f64 = double(temp.f32);
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// lfs f8,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f5,276(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f3,f9,f12
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lwz r9,17920(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17920);
	// fsubs f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// fsubs f12,f4,f11
	ctx.f12.f64 = double(float(ctx.f4.f64 - ctx.f11.f64));
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// addi r11,r3,268
	ctx.r11.s64 = ctx.r3.s64 + 268;
	// fmr f13,f5
	ctx.f13.f64 = ctx.f5.f64;
	// addi r10,r10,17956
	ctx.r10.s64 = ctx.r10.s64 + 17956;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// fsubs f11,f3,f5
	ctx.f11.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// fsubs f1,f6,f10
	ctx.f1.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// fadds f9,f2,f12
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f9,268(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 268, temp.u32);
	// fadds f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f8,276(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 276, temp.u32);
	// fadds f10,f0,f1
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f10,272(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 272, temp.u32);
	// bne cr6,0x82b2c718
	if (!ctx.cr6.eq) goto loc_82B2C718;
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stw r9,17920(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17920, ctx.r9.u32);
	// lfs f0,-15120(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_82B2C718:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfd f12,-18352(r9)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r9.u32 + -18352);
	// lfs f13,-18108(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18108);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f0,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f8,f10,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fsqrt f7,f8
	ctx.f7.f64 = sqrt(ctx.f8.f64);
	// fdiv f6,f12,f7
	ctx.f6.f64 = ctx.f12.f64 / ctx.f7.f64;
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// frsp f13,f6
	ctx.f13.f64 = double(float(ctx.f6.f64));
	// ble cr6,0x82b2c774
	if (!ctx.cr6.gt) goto loc_82B2C774;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f9,-12(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f8,-8(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
loc_82B2C774:
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f0,496(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r7.u32);
	// lfs f11,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f11.f64 = double(temp.f32);
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// lfs f13,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// lfs f12,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f10,-8(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,-12(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r5,-8(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lwz r4,-12(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stfs f9,-16(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2C7D0"))) PPC_WEAK_FUNC(sub_82B2C7D0);
PPC_FUNC_IMPL(__imp__sub_82B2C7D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82B2C7D8;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// lwz r3,616(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 616);
	// lfs f0,696(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 696);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f0
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b2c85c
	if (ctx.cr6.eq) goto loc_82B2C85C;
	// lwz r11,-31264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82b2c824
	if (ctx.cr6.gt) goto loc_82B2C824;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82b2c82c
	goto loc_82B2C82C;
loc_82B2C824:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82B2C82C:
	// lwz r11,980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// lwz r4,2212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2212);
	// bl 0x82a31ec0
	ctx.lr = 0x82B2C838;
	sub_82A31EC0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82b2c85c
	if (ctx.cr6.eq) goto loc_82B2C85C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2C854;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82b2cb98
	if (ctx.cr6.gt) goto loc_82B2CB98;
loc_82B2C85C:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// lwz r4,-28808(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28808);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82b2c890
	if (!ctx.cr6.eq) goto loc_82B2C890;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825ff3d0
	ctx.lr = 0x82B2C884;
	sub_825FF3D0(ctx, base);
	// stw r3,-28808(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28808, ctx.r3.u32);
	// bl 0x825ff490
	ctx.lr = 0x82B2C88C;
	sub_825FF490(ctx, base);
	// lwz r4,-28808(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28808);
loc_82B2C890:
	// lwz r11,-31264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82b2c8ac
	if (ctx.cr6.gt) goto loc_82B2C8AC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82b2c8b4
	goto loc_82B2C8B4;
loc_82B2C8AC:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82B2C8B4:
	// lwz r11,980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// addi r30,r28,244
	ctx.r30.s64 = ctx.r28.s64 + 244;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f1,696(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 696);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,2116(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2116);
	// bl 0x82ad5708
	ctx.lr = 0x82B2C8D8;
	sub_82AD5708(ctx, base);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b2cb64
	if (ctx.cr6.eq) goto loc_82B2CB64;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82b2cb64
	if (!ctx.cr6.gt) goto loc_82B2CB64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82B2C8F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82b2cb58
	if (ctx.cr6.eq) goto loc_82B2CB58;
	// lwz r10,724(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 724);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82b2cb58
	if (ctx.cr6.eq) goto loc_82B2CB58;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2C924;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b2cb58
	if (!ctx.cr6.eq) goto loc_82B2CB58;
	// bl 0x82987650
	ctx.lr = 0x82B2C930;
	sub_82987650(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b2c954
	if (ctx.cr6.eq) goto loc_82B2C954;
loc_82B2C940:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82b2cb58
	if (ctx.cr6.eq) goto loc_82B2CB58;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2c940
	if (!ctx.cr6.eq) goto loc_82B2C940;
loc_82B2C954:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2cb58
	if (!ctx.cr6.eq) goto loc_82B2CB58;
	// bl 0x829b9460
	ctx.lr = 0x82B2C968;
	sub_829B9460(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b2c98c
	if (ctx.cr6.eq) goto loc_82B2C98C;
loc_82B2C978:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82b2cb58
	if (ctx.cr6.eq) goto loc_82B2CB58;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2c978
	if (!ctx.cr6.eq) goto loc_82B2C978;
loc_82B2C98C:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2cb58
	if (!ctx.cr6.eq) goto loc_82B2CB58;
	// bl 0x823b10a8
	ctx.lr = 0x82B2C9A0;
	sub_823B10A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b2c9c4
	if (ctx.cr6.eq) goto loc_82B2C9C4;
loc_82B2C9B0:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82b2cb58
	if (ctx.cr6.eq) goto loc_82B2CB58;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2c9b0
	if (!ctx.cr6.eq) goto loc_82B2C9B0;
loc_82B2C9C4:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2cb58
	if (!ctx.cr6.eq) goto loc_82B2CB58;
	// bl 0x82987998
	ctx.lr = 0x82B2C9D8;
	sub_82987998(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b2c9fc
	if (ctx.cr6.eq) goto loc_82B2C9FC;
loc_82B2C9E8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82b2cb58
	if (ctx.cr6.eq) goto loc_82B2CB58;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2c9e8
	if (!ctx.cr6.eq) goto loc_82B2C9E8;
loc_82B2C9FC:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2cb58
	if (!ctx.cr6.eq) goto loc_82B2CB58;
	// bl 0x82981a78
	ctx.lr = 0x82B2CA10;
	sub_82981A78(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b2ca34
	if (ctx.cr6.eq) goto loc_82B2CA34;
loc_82B2CA20:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82b2ca44
	if (ctx.cr6.eq) goto loc_82B2CA44;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2ca20
	if (!ctx.cr6.eq) goto loc_82B2CA20;
loc_82B2CA34:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b2ca9c
	if (ctx.cr6.eq) goto loc_82B2CA9C;
loc_82B2CA44:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r10,360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2CA58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82b2ca9c
	if (!ctx.cr6.gt) goto loc_82B2CA9C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x829d9228
	ctx.lr = 0x82B2CA68;
	sub_829D9228(ctx, base);
	// lwz r11,916(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 916);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2ca9c
	if (!ctx.cr6.eq) goto loc_82B2CA9C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x829d9228
	ctx.lr = 0x82B2CA7C;
	sub_829D9228(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2ca9c
	if (!ctx.cr6.eq) goto loc_82B2CA9C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2cb18
	if (!ctx.cr6.eq) goto loc_82B2CB18;
loc_82B2CA9C:
	// bl 0x829b8dc8
	ctx.lr = 0x82B2CAA0;
	sub_829B8DC8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b2cac4
	if (ctx.cr6.eq) goto loc_82B2CAC4;
loc_82B2CAB0:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82b2cad4
	if (ctx.cr6.eq) goto loc_82B2CAD4;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2cab0
	if (!ctx.cr6.eq) goto loc_82B2CAB0;
loc_82B2CAC4:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b2cb58
	if (ctx.cr6.eq) goto loc_82B2CB58;
loc_82B2CAD4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r10,360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2CAE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82b2cb58
	if (!ctx.cr6.gt) goto loc_82B2CB58;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x829d92a8
	ctx.lr = 0x82B2CAF8;
	sub_829D92A8(ctx, base);
	// lwz r11,1320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1320);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2cb58
	if (!ctx.cr6.eq) goto loc_82B2CB58;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b2cb58
	if (ctx.cr6.eq) goto loc_82B2CB58;
loc_82B2CB18:
	// lfs f0,248(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f0,f6,f6,f4
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82b2cb58
	if (!ctx.cr6.lt) goto loc_82B2CB58;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_82B2CB58:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82b2c8f8
	if (!ctx.cr0.eq) goto loc_82B2C8F8;
loc_82B2CB64:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b2cb98
	if (ctx.cr6.eq) goto loc_82B2CB98;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b2cb84
	if (!ctx.cr6.eq) goto loc_82B2CB84;
	// bl 0x822900a0
	ctx.lr = 0x82B2CB80;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82B2CB84:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2CB98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B2CB98:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2CBA8"))) PPC_WEAK_FUNC(sub_82B2CBA8);
PPC_FUNC_IMPL(__imp__sub_82B2CBA8) {
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
	// bl 0x82cb2308
	ctx.lr = 0x82B2CBCC;
	sub_82CB2308(ctx, base);
	// rlwinm r30,r3,1,16,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFE;
	// bl 0x82cb2308
	ctx.lr = 0x82B2CBD4;
	sub_82CB2308(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// rlwinm r10,r3,1,16,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFE;
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// stw r10,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r10.u32);
	// bl 0x82cb2308
	ctx.lr = 0x82B2CBEC;
	sub_82CB2308(ctx, base);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f31,-18008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18008);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-32448(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -32448);
	ctx.f30.f64 = double(temp.f32);
	// li r6,384
	ctx.r6.s64 = 384;
	// fmsubs f11,f12,f31,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 - ctx.f30.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfiwx f10,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.f10.u32);
	// bl 0x82cb2308
	ctx.lr = 0x82B2CC24;
	sub_82CB2308(ctx, base);
	// extsw r5,r3
	ctx.r5.s64 = ctx.r3.s32;
	// li r4,380
	ctx.r4.s64 = 380;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f9,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmsubs f6,f7,f31,f30
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 - ctx.f30.f64));
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f6.f64));
	// stfiwx f5,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.f5.u32);
	// bl 0x82cb2308
	ctx.lr = 0x82B2CC4C;
	sub_82CB2308(ctx, base);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// li r11,388
	ctx.r11.s64 = 388;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f4,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmsubs f1,f2,f31,f30
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64 - ctx.f30.f64));
	// fctiwz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82B2CC90"))) PPC_WEAK_FUNC(sub_82B2CC90);
PPC_FUNC_IMPL(__imp__sub_82B2CC90) {
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
	// bl 0x82cb2308
	ctx.lr = 0x82B2CCA8;
	sub_82CB2308(ctx, base);
	// rlwinm r11,r3,1,16,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFE;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82cb2308
	ctx.lr = 0x82B2CCB4;
	sub_82CB2308(ctx, base);
	// rlwinm r10,r3,1,16,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFE;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82B2CCDC"))) PPC_WEAK_FUNC(sub_82B2CCDC);
PPC_FUNC_IMPL(__imp__sub_82B2CCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2CCE0"))) PPC_WEAK_FUNC(sub_82B2CCE0);
PPC_FUNC_IMPL(__imp__sub_82B2CCE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b2ce5c
	if (ctx.cr6.eq) goto loc_82B2CE5C;
	// lwz r11,676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b2ce5c
	if (ctx.cr6.eq) goto loc_82B2CE5C;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// rlwinm r8,r9,0,4,4
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82b2ce5c
	if (!ctx.cr6.eq) goto loc_82B2CE5C;
	// lfs f0,692(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f13,692(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 692, temp.u32);
	// lfs f0,-15120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82b2cdbc
	if (ctx.cr6.gt) goto loc_82B2CDBC;
	// lwz r9,704(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r9.u32);
	// lfs f10,244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,252(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 252);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,248(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fsubs f6,f12,f11
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r6,r8,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82b2d180
	ctx.lr = 0x82B2CD8C;
	sub_82B2D180(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,748(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 748);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,744(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	ctx.f1.f64 = double(temp.f32);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r6,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r6.u32);
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r5,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r5.u32);
	// lwz r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r4,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r4.u32);
	// bl 0x82a03a28
	ctx.lr = 0x82B2CDB8;
	sub_82A03A28(ctx, base);
	// stfs f1,692(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 692, temp.u32);
loc_82B2CDBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b2ce70
	ctx.lr = 0x82B2CDC4;
	sub_82B2CE70(ctx, base);
	// lwz r4,904(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b2ce5c
	if (ctx.cr6.eq) goto loc_82B2CE5C;
	// lwz r11,676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b2ce28
	if (ctx.cr6.eq) goto loc_82B2CE28;
	// lwz r10,708(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// rlwinm r8,r10,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82b2ce28
	if (!ctx.cr6.eq) goto loc_82B2CE28;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r5,696(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 696);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,900(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 900);
	// bl 0x825e79a0
	ctx.lr = 0x82B2CE04;
	sub_825E79A0(ctx, base);
	// lwz r4,904(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,-31264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// b 0x82b2ce44
	goto loc_82B2CE44;
loc_82B2CE28:
	// lwz r3,252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lwz r9,248(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lwz r3,-31264(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31264);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82B2CE44:
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8276feb0
	ctx.lr = 0x82B2CE5C;
	sub_8276FEB0(ctx, base);
loc_82B2CE5C:
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

__attribute__((alias("__imp__sub_82B2CE70"))) PPC_WEAK_FUNC(sub_82B2CE70);
PPC_FUNC_IMPL(__imp__sub_82B2CE70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82B2CE78;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6ae8
	ctx.lr = 0x82B2CE80;
	__savefpr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b2d170
	if (ctx.cr6.eq) goto loc_82B2D170;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,440(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 440);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2CEA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lfs f28,-15120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f28.f64 = double(temp.f32);
	// stfs f28,96(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f28,100(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f28,104(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82981a78
	ctx.lr = 0x82B2CEC4;
	sub_82981A78(ctx, base);
	// lwz r10,676(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b2ceec
	if (ctx.cr6.eq) goto loc_82B2CEEC;
loc_82B2CED8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82b2cefc
	if (ctx.cr6.eq) goto loc_82B2CEFC;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2ced8
	if (!ctx.cr6.eq) goto loc_82B2CED8;
loc_82B2CEEC:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b2cfc8
	if (ctx.cr6.eq) goto loc_82B2CFC8;
loc_82B2CEFC:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x829d9228
	ctx.lr = 0x82B2CF04;
	sub_829D9228(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,-27584
	ctx.r4.s64 = ctx.r11.s64 + -27584;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82B2CF24;
	sub_8233E028(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// addi r28,r1,128
	ctx.r28.s64 = ctx.r1.s64 + 128;
	// lfs f0,-18324(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18324);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// ld r4,96(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 96);
	// lwz r27,0(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8229e490
	ctx.lr = 0x82B2CF6C;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,228(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 228);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B2CF88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,900(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 900);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lfs f31,732(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 732);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,720(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x82b2d01c
	if (ctx.cr6.eq) goto loc_82B2D01C;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r5,696(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 696);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825e79a0
	ctx.lr = 0x82B2CFAC;
	sub_825E79A0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// b 0x82b2d01c
	goto loc_82B2D01C;
loc_82B2CFC8:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8260ab50
	ctx.lr = 0x82B2CFD0;
	sub_8260AB50(ctx, base);
	// bl 0x829b8dc8
	ctx.lr = 0x82B2CFD4;
	sub_829B8DC8(ctx, base);
	// lwz r11,676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b2cff8
	if (ctx.cr6.eq) goto loc_82B2CFF8;
loc_82B2CFE4:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82b2d008
	if (ctx.cr6.eq) goto loc_82B2D008;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2cfe4
	if (!ctx.cr6.eq) goto loc_82B2CFE4;
loc_82B2CFF8:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b2d014
	if (ctx.cr6.eq) goto loc_82B2D014;
loc_82B2D008:
	// lfs f31,736(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,724(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	ctx.f30.f64 = double(temp.f32);
	// b 0x82b2d01c
	goto loc_82B2D01C;
loc_82B2D014:
	// lfs f31,740(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,728(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	ctx.f30.f64 = double(temp.f32);
loc_82B2D01C:
	// lwz r11,676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// lwz r10,368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b2d170
	if (ctx.cr6.eq) goto loc_82B2D170;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lwz r3,368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,456(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 456);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B2D054;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b2d0d4
	if (ctx.cr6.eq) goto loc_82B2D0D4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2D070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b2d0d4
	if (ctx.cr6.eq) goto loc_82B2D0D4;
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
	ctx.lr = 0x82B2D094;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82b2d0d4
	if (!ctx.cr6.eq) goto loc_82B2D0D4;
	// fmuls f0,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f28.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2D0D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B2D0D4:
	// lfs f0,688(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// lfs f10,684(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f9,f10,f30
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f13,680(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f13,f30
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmuls f8,f12,f29
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f6,f9,f29
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fmuls f7,f11,f29
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r7,456(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 456);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B2D158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82b2d170
	if (ctx.cr6.eq) goto loc_82B2D170;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247c2c8
	ctx.lr = 0x82B2D170;
	sub_8247C2C8(ctx, base);
loc_82B2D170:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6b34
	ctx.lr = 0x82B2D17C;
	__restfpr_28(ctx, base);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2D180"))) PPC_WEAK_FUNC(sub_82B2D180);
PPC_FUNC_IMPL(__imp__sub_82B2D180) {
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// std r5,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r5.u64);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// std r6,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r6.u64);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f30,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f30.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f29,-18324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18324);
	ctx.f29.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lfs f31,-15120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82a03a28
	ctx.lr = 0x82B2D1E4;
	sub_82A03A28(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82a03a28
	ctx.lr = 0x82B2D1F8;
	sub_82A03A28(ctx, base);
	// lwz r8,704(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	// lwz r7,760(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 760);
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f31,8(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82b2d224
	if (!ctx.cr6.eq) goto loc_82B2D224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,752(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 752);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,756(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 756);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a03a28
	ctx.lr = 0x82B2D220;
	sub_82A03A28(ctx, base);
	// stfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_82B2D224:
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r11,r11,17956
	ctx.r11.s64 = ctx.r11.s64 + 17956;
	// lwz r10,17920(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17920);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82b2d254
	if (!ctx.cr6.eq) goto loc_82B2D254;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,17920(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17920, ctx.r10.u32);
loc_82B2D254:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// fmuls f9,f0,f0
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfd f10,-18352(r10)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18352);
	// lfs f11,-18108(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18108);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f8,f13,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f7,f12,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fsqrt f6,f7
	ctx.f6.f64 = sqrt(ctx.f7.f64);
	// fdiv f5,f10,f6
	ctx.f5.f64 = ctx.f10.f64 / ctx.f6.f64;
	// fcmpu cr6,f7,f11
	ctx.cr6.compare(ctx.f7.f64, ctx.f11.f64);
	// frsp f11,f5
	ctx.f11.f64 = double(float(ctx.f5.f64));
	// ble cr6,0x82b2d2ac
	if (!ctx.cr6.gt) goto loc_82B2D2AC;
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82B2D2AC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lfs f1,32428(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32428);
	ctx.f1.f64 = double(temp.f32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x824e31d0
	ctx.lr = 0x82B2D2D8;
	sub_824E31D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82b2d340
	if (ctx.cr6.eq) goto loc_82B2D340;
	// lfs f13,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f13,f10,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fmadds f7,f12,f9,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fcmpu cr6,f7,f31
	ctx.cr6.compare(ctx.f7.f64, ctx.f31.f64);
	// bge cr6,0x82b2d340
	if (!ctx.cr6.lt) goto loc_82B2D340;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82B2D340:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
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

__attribute__((alias("__imp__sub_82B2D364"))) PPC_WEAK_FUNC(sub_82B2D364);
PPC_FUNC_IMPL(__imp__sub_82B2D364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2D368"))) PPC_WEAK_FUNC(sub_82B2D368);
PPC_FUNC_IMPL(__imp__sub_82B2D368) {
	PPC_FUNC_PROLOGUE();
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8232d180
	sub_8232D180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2D378"))) PPC_WEAK_FUNC(sub_82B2D378);
PPC_FUNC_IMPL(__imp__sub_82B2D378) {
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
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82B2D3A8;
	sub_82294AC0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b2d3c8
	if (ctx.cr0.eq) goto loc_82B2D3C8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_82B2D3C8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
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

__attribute__((alias("__imp__sub_82B2D3E8"))) PPC_WEAK_FUNC(sub_82B2D3E8);
PPC_FUNC_IMPL(__imp__sub_82B2D3E8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82B2D414;
	sub_82294AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82B2D434"))) PPC_WEAK_FUNC(sub_82B2D434);
PPC_FUNC_IMPL(__imp__sub_82B2D434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2D438"))) PPC_WEAK_FUNC(sub_82B2D438);
PPC_FUNC_IMPL(__imp__sub_82B2D438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B2D440;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r5.u64);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// std r6,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r6.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r7,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r7.u64);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r7,192(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r6,196(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// ld r4,124(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 124);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8229e490
	ctx.lr = 0x82B2D4A0;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B2D4BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2D4C4"))) PPC_WEAK_FUNC(sub_82B2D4C4);
PPC_FUNC_IMPL(__imp__sub_82B2D4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2D4C8"))) PPC_WEAK_FUNC(sub_82B2D4C8);
PPC_FUNC_IMPL(__imp__sub_82B2D4C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2D4CC"))) PPC_WEAK_FUNC(sub_82B2D4CC);
PPC_FUNC_IMPL(__imp__sub_82B2D4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2D4D0"))) PPC_WEAK_FUNC(sub_82B2D4D0);
PPC_FUNC_IMPL(__imp__sub_82B2D4D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B2D4D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,-3488(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3488);
	// bl 0x8229e490
	ctx.lr = 0x82B2D4FC;
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
	ctx.lr = 0x82B2D518;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2D520"))) PPC_WEAK_FUNC(sub_82B2D520);
PPC_FUNC_IMPL(__imp__sub_82B2D520) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2D524"))) PPC_WEAK_FUNC(sub_82B2D524);
PPC_FUNC_IMPL(__imp__sub_82B2D524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2D528"))) PPC_WEAK_FUNC(sub_82B2D528);
PPC_FUNC_IMPL(__imp__sub_82B2D528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B2D530;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r5,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r5.u8);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,788(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 788);
	// bl 0x8229e490
	ctx.lr = 0x82B2D558;
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
	ctx.lr = 0x82B2D574;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2D57C"))) PPC_WEAK_FUNC(sub_82B2D57C);
PPC_FUNC_IMPL(__imp__sub_82B2D57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2D580"))) PPC_WEAK_FUNC(sub_82B2D580);
PPC_FUNC_IMPL(__imp__sub_82B2D580) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2D584"))) PPC_WEAK_FUNC(sub_82B2D584);
PPC_FUNC_IMPL(__imp__sub_82B2D584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2D588"))) PPC_WEAK_FUNC(sub_82B2D588);
PPC_FUNC_IMPL(__imp__sub_82B2D588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B2D590;
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
	// ld r4,-1788(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + -1788);
	// bl 0x8229e490
	ctx.lr = 0x82B2D5BC;
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
	ctx.lr = 0x82B2D5D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2D5E4"))) PPC_WEAK_FUNC(sub_82B2D5E4);
PPC_FUNC_IMPL(__imp__sub_82B2D5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2D5E8"))) PPC_WEAK_FUNC(sub_82B2D5E8);
PPC_FUNC_IMPL(__imp__sub_82B2D5E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2D5EC"))) PPC_WEAK_FUNC(sub_82B2D5EC);
PPC_FUNC_IMPL(__imp__sub_82B2D5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2D5F0"))) PPC_WEAK_FUNC(sub_82B2D5F0);
PPC_FUNC_IMPL(__imp__sub_82B2D5F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B2D5F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,-20512(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -20512);
	// bl 0x8229e490
	ctx.lr = 0x82B2D61C;
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
	ctx.lr = 0x82B2D638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2D640"))) PPC_WEAK_FUNC(sub_82B2D640);
PPC_FUNC_IMPL(__imp__sub_82B2D640) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2D644"))) PPC_WEAK_FUNC(sub_82B2D644);
PPC_FUNC_IMPL(__imp__sub_82B2D644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2D648"))) PPC_WEAK_FUNC(sub_82B2D648);
PPC_FUNC_IMPL(__imp__sub_82B2D648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B2D650;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,-3488(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3488);
	// bl 0x8229e490
	ctx.lr = 0x82B2D674;
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
	ctx.lr = 0x82B2D690;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2D698"))) PPC_WEAK_FUNC(sub_82B2D698);
PPC_FUNC_IMPL(__imp__sub_82B2D698) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2D69C"))) PPC_WEAK_FUNC(sub_82B2D69C);
PPC_FUNC_IMPL(__imp__sub_82B2D69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2D6A0"))) PPC_WEAK_FUNC(sub_82B2D6A0);
PPC_FUNC_IMPL(__imp__sub_82B2D6A0) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,-2920(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -2920);
	// bl 0x8229e490
	ctx.lr = 0x82B2D6CC;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,228(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2D6E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82B2D700"))) PPC_WEAK_FUNC(sub_82B2D700);
PPC_FUNC_IMPL(__imp__sub_82B2D700) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2D710"))) PPC_WEAK_FUNC(sub_82B2D710);
PPC_FUNC_IMPL(__imp__sub_82B2D710) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-9528
	ctx.r7.s64 = ctx.r9.s64 + -9528;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82B2D740"))) PPC_WEAK_FUNC(sub_82B2D740);
PPC_FUNC_IMPL(__imp__sub_82B2D740) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2D748"))) PPC_WEAK_FUNC(sub_82B2D748);
PPC_FUNC_IMPL(__imp__sub_82B2D748) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-9528
	ctx.r7.s64 = ctx.r9.s64 + -9528;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82B2D770"))) PPC_WEAK_FUNC(sub_82B2D770);
PPC_FUNC_IMPL(__imp__sub_82B2D770) {
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
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-9528
	ctx.r10.s64 = ctx.r11.s64 + -9528;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82B2D79C;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a8e850
	ctx.lr = 0x82B2D7A4;
	sub_82A8E850(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b2d7d8
	if (ctx.cr6.eq) goto loc_82B2D7D8;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b2d7d0
	if (ctx.cr6.lt) goto loc_82B2D7D0;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82b2d7d8
	if (!ctx.cr6.gt) goto loc_82B2D7D8;
loc_82B2D7D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82B2D7D8;
	sub_82294A58(ctx, base);
loc_82B2D7D8:
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

__attribute__((alias("__imp__sub_82B2D7F4"))) PPC_WEAK_FUNC(sub_82B2D7F4);
PPC_FUNC_IMPL(__imp__sub_82B2D7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2D7F8"))) PPC_WEAK_FUNC(sub_82B2D7F8);
PPC_FUNC_IMPL(__imp__sub_82B2D7F8) {
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
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r10,r11,-9528
	ctx.r10.s64 = ctx.r11.s64 + -9528;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82B2D81C;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a8e850
	ctx.lr = 0x82B2D824;
	sub_82A8E850(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82B2D838"))) PPC_WEAK_FUNC(sub_82B2D838);
PPC_FUNC_IMPL(__imp__sub_82B2D838) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-7512
	ctx.r7.s64 = ctx.r9.s64 + -7512;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82B2D868"))) PPC_WEAK_FUNC(sub_82B2D868);
PPC_FUNC_IMPL(__imp__sub_82B2D868) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2D870"))) PPC_WEAK_FUNC(sub_82B2D870);
PPC_FUNC_IMPL(__imp__sub_82B2D870) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-7512
	ctx.r7.s64 = ctx.r9.s64 + -7512;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82B2D898"))) PPC_WEAK_FUNC(sub_82B2D898);
PPC_FUNC_IMPL(__imp__sub_82B2D898) {
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
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-7512
	ctx.r10.s64 = ctx.r11.s64 + -7512;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82B2D8C4;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a8e850
	ctx.lr = 0x82B2D8CC;
	sub_82A8E850(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b2d900
	if (ctx.cr6.eq) goto loc_82B2D900;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b2d8f8
	if (ctx.cr6.lt) goto loc_82B2D8F8;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82b2d900
	if (!ctx.cr6.gt) goto loc_82B2D900;
loc_82B2D8F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82B2D900;
	sub_82294A58(ctx, base);
loc_82B2D900:
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

__attribute__((alias("__imp__sub_82B2D91C"))) PPC_WEAK_FUNC(sub_82B2D91C);
PPC_FUNC_IMPL(__imp__sub_82B2D91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2D920"))) PPC_WEAK_FUNC(sub_82B2D920);
PPC_FUNC_IMPL(__imp__sub_82B2D920) {
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
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r10,r11,-7512
	ctx.r10.s64 = ctx.r11.s64 + -7512;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82B2D944;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a8e850
	ctx.lr = 0x82B2D94C;
	sub_82A8E850(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82B2D960"))) PPC_WEAK_FUNC(sub_82B2D960);
PPC_FUNC_IMPL(__imp__sub_82B2D960) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-8520
	ctx.r7.s64 = ctx.r9.s64 + -8520;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82B2D990"))) PPC_WEAK_FUNC(sub_82B2D990);
PPC_FUNC_IMPL(__imp__sub_82B2D990) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2D998"))) PPC_WEAK_FUNC(sub_82B2D998);
PPC_FUNC_IMPL(__imp__sub_82B2D998) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-8520
	ctx.r7.s64 = ctx.r9.s64 + -8520;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82B2D9C0"))) PPC_WEAK_FUNC(sub_82B2D9C0);
PPC_FUNC_IMPL(__imp__sub_82B2D9C0) {
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
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-8520
	ctx.r10.s64 = ctx.r11.s64 + -8520;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82B2D9EC;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a8e850
	ctx.lr = 0x82B2D9F4;
	sub_82A8E850(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b2da28
	if (ctx.cr6.eq) goto loc_82B2DA28;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b2da20
	if (ctx.cr6.lt) goto loc_82B2DA20;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82b2da28
	if (!ctx.cr6.gt) goto loc_82B2DA28;
loc_82B2DA20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82B2DA28;
	sub_82294A58(ctx, base);
loc_82B2DA28:
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

__attribute__((alias("__imp__sub_82B2DA44"))) PPC_WEAK_FUNC(sub_82B2DA44);
PPC_FUNC_IMPL(__imp__sub_82B2DA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2DA48"))) PPC_WEAK_FUNC(sub_82B2DA48);
PPC_FUNC_IMPL(__imp__sub_82B2DA48) {
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
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r10,r11,-8520
	ctx.r10.s64 = ctx.r11.s64 + -8520;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82B2DA6C;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a8e850
	ctx.lr = 0x82B2DA74;
	sub_82A8E850(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82B2DA88"))) PPC_WEAK_FUNC(sub_82B2DA88);
PPC_FUNC_IMPL(__imp__sub_82B2DA88) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-6504
	ctx.r7.s64 = ctx.r9.s64 + -6504;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82B2DAB8"))) PPC_WEAK_FUNC(sub_82B2DAB8);
PPC_FUNC_IMPL(__imp__sub_82B2DAB8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2DAC0"))) PPC_WEAK_FUNC(sub_82B2DAC0);
PPC_FUNC_IMPL(__imp__sub_82B2DAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-6504
	ctx.r7.s64 = ctx.r9.s64 + -6504;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82B2DAE8"))) PPC_WEAK_FUNC(sub_82B2DAE8);
PPC_FUNC_IMPL(__imp__sub_82B2DAE8) {
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
	// bl 0x82b2db58
	ctx.lr = 0x82B2DB08;
	sub_82B2DB58(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b2db3c
	if (ctx.cr6.eq) goto loc_82B2DB3C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b2db34
	if (ctx.cr6.lt) goto loc_82B2DB34;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82b2db3c
	if (!ctx.cr6.gt) goto loc_82B2DB3C;
loc_82B2DB34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82B2DB3C;
	sub_82294A58(ctx, base);
loc_82B2DB3C:
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

__attribute__((alias("__imp__sub_82B2DB58"))) PPC_WEAK_FUNC(sub_82B2DB58);
PPC_FUNC_IMPL(__imp__sub_82B2DB58) {
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
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r10,r11,-6504
	ctx.r10.s64 = ctx.r11.s64 + -6504;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82B2DB7C;
	sub_8229C068(ctx, base);
	// addi r3,r31,708
	ctx.r3.s64 = ctx.r31.s64 + 708;
	// bl 0x82b2dbd8
	ctx.lr = 0x82B2DB84;
	sub_82B2DBD8(ctx, base);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,1696
	ctx.r8.s64 = ctx.r9.s64 + 1696;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82B2DB98;
	sub_8229C068(ctx, base);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,-19216
	ctx.r6.s64 = ctx.r7.s64 + -19216;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// bl 0x8229c068
	ctx.lr = 0x82B2DBAC;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82383c00
	ctx.lr = 0x82B2DBB4;
	sub_82383C00(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82B2DBC8"))) PPC_WEAK_FUNC(sub_82B2DBC8);
PPC_FUNC_IMPL(__imp__sub_82B2DBC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2DBCC"))) PPC_WEAK_FUNC(sub_82B2DBCC);
PPC_FUNC_IMPL(__imp__sub_82B2DBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2DBD0"))) PPC_WEAK_FUNC(sub_82B2DBD0);
PPC_FUNC_IMPL(__imp__sub_82B2DBD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2DBD4"))) PPC_WEAK_FUNC(sub_82B2DBD4);
PPC_FUNC_IMPL(__imp__sub_82B2DBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2DBD8"))) PPC_WEAK_FUNC(sub_82B2DBD8);
PPC_FUNC_IMPL(__imp__sub_82B2DBD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B2DBE0;
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
	// beq cr6,0x82b2dc20
	if (ctx.cr6.eq) goto loc_82B2DC20;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b2dc0c
	if (!ctx.cr6.eq) goto loc_82B2DC0C;
	// bl 0x822900a0
	ctx.lr = 0x82B2DC08;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82B2DC0C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2DC20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B2DC20:
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

__attribute__((alias("__imp__sub_82B2DC38"))) PPC_WEAK_FUNC(sub_82B2DC38);
PPC_FUNC_IMPL(__imp__sub_82B2DC38) {
	PPC_FUNC_PROLOGUE();
	// b 0x82b2dbd8
	sub_82B2DBD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2DC3C"))) PPC_WEAK_FUNC(sub_82B2DC3C);
PPC_FUNC_IMPL(__imp__sub_82B2DC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2DC40"))) PPC_WEAK_FUNC(sub_82B2DC40);
PPC_FUNC_IMPL(__imp__sub_82B2DC40) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,2704
	ctx.r7.s64 = ctx.r9.s64 + 2704;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82B2DC70"))) PPC_WEAK_FUNC(sub_82B2DC70);
PPC_FUNC_IMPL(__imp__sub_82B2DC70) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2DC78"))) PPC_WEAK_FUNC(sub_82B2DC78);
PPC_FUNC_IMPL(__imp__sub_82B2DC78) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,1696
	ctx.r7.s64 = ctx.r9.s64 + 1696;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82B2DCA8"))) PPC_WEAK_FUNC(sub_82B2DCA8);
PPC_FUNC_IMPL(__imp__sub_82B2DCA8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2DCB0"))) PPC_WEAK_FUNC(sub_82B2DCB0);
PPC_FUNC_IMPL(__imp__sub_82B2DCB0) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x82B2DCC8;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b2dd4c
	if (ctx.cr6.eq) goto loc_82B2DD4C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-5496
	ctx.r11.s64 = ctx.r8.s64 + -5496;
	// lis r5,-32077
	ctx.r5.s64 = -2102198272;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-8368
	ctx.r6.s64 = ctx.r5.s64 + -8368;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r4,14488
	ctx.r10.s64 = ctx.r4.s64 + 14488;
	// addi r9,r9,11336
	ctx.r9.s64 = ctx.r9.s64 + 11336;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82B2DD3C;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82B2DD4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2DD60"))) PPC_WEAK_FUNC(sub_82B2DD60);
PPC_FUNC_IMPL(__imp__sub_82B2DD60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B2DD68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-29224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29224);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2dd94
	if (!ctx.cr6.eq) goto loc_82B2DD94;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825b9158
	ctx.lr = 0x82B2DD88;
	sub_825B9158(ctx, base);
	// stw r3,-29224(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29224, ctx.r3.u32);
	// bl 0x825b9218
	ctx.lr = 0x82B2DD90;
	sub_825B9218(ctx, base);
	// lwz r10,-29224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29224);
loc_82B2DD94:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-23676(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23676);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b2ddb4
	if (ctx.cr6.eq) goto loc_82B2DDB4;
	// bl 0x822f13c0
	ctx.lr = 0x82B2DDA8;
	sub_822F13C0(ctx, base);
	// lwz r11,-23676(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23676);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82b2ddbc
	goto loc_82B2DDBC;
loc_82B2DDB4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82B2DDBC:
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r30,r10,14476
	ctx.r30.s64 = ctx.r10.s64 + 14476;
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2ddec
	if (!ctx.cr6.eq) goto loc_82B2DDEC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82B2DDDC;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82B2DDE4;
	sub_822AADA8(ctx, base);
	// lwz r11,-23676(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23676);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82B2DDEC:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2de18
	if (!ctx.cr6.eq) goto loc_82B2DE18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82B2DE08;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82B2DE10;
	sub_82398640(ctx, base);
	// lwz r11,-23676(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23676);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82B2DE18:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b2de50
	if (ctx.cr6.eq) goto loc_82B2DE50;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82B2DE34;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82b2de50
	if (!ctx.cr6.eq) goto loc_82B2DE50;
	// lwz r3,-23676(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23676);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2DE50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B2DE50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2DE58"))) PPC_WEAK_FUNC(sub_82B2DE58);
PPC_FUNC_IMPL(__imp__sub_82B2DE58) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2DE60"))) PPC_WEAK_FUNC(sub_82B2DE60);
PPC_FUNC_IMPL(__imp__sub_82B2DE60) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-29224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29224);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2dea4
	if (!ctx.cr6.eq) goto loc_82B2DEA4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825b9158
	ctx.lr = 0x82B2DE98;
	sub_825B9158(ctx, base);
	// stw r3,-29224(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29224, ctx.r3.u32);
	// bl 0x825b9218
	ctx.lr = 0x82B2DEA0;
	sub_825B9218(ctx, base);
	// lwz r11,-29224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29224);
loc_82B2DEA4:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82B2DECC"))) PPC_WEAK_FUNC(sub_82B2DECC);
PPC_FUNC_IMPL(__imp__sub_82B2DECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2DED0"))) PPC_WEAK_FUNC(sub_82B2DED0);
PPC_FUNC_IMPL(__imp__sub_82B2DED0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b2df0c
	if (ctx.cr6.eq) goto loc_82B2DF0C;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lwz r11,-23684(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23684);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r11,-23684(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23684, ctx.r11.u32);
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// blr 
	return;
loc_82B2DF0C:
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b2df30
	if (ctx.cr6.eq) goto loc_82B2DF30;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lwz r11,-23680(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23680);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r11,-23680(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23680, ctx.r11.u32);
loc_82B2DF30:
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2DF44"))) PPC_WEAK_FUNC(sub_82B2DF44);
PPC_FUNC_IMPL(__imp__sub_82B2DF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2DF48"))) PPC_WEAK_FUNC(sub_82B2DF48);
PPC_FUNC_IMPL(__imp__sub_82B2DF48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2DF4C"))) PPC_WEAK_FUNC(sub_82B2DF4C);
PPC_FUNC_IMPL(__imp__sub_82B2DF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2DF50"))) PPC_WEAK_FUNC(sub_82B2DF50);
PPC_FUNC_IMPL(__imp__sub_82B2DF50) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r8,r9,-5240
	ctx.r8.s64 = ctx.r9.s64 + -5240;
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

__attribute__((alias("__imp__sub_82B2DF78"))) PPC_WEAK_FUNC(sub_82B2DF78);
PPC_FUNC_IMPL(__imp__sub_82B2DF78) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2DF80"))) PPC_WEAK_FUNC(sub_82B2DF80);
PPC_FUNC_IMPL(__imp__sub_82B2DF80) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r8,r9,-5240
	ctx.r8.s64 = ctx.r9.s64 + -5240;
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

__attribute__((alias("__imp__sub_82B2DFA0"))) PPC_WEAK_FUNC(sub_82B2DFA0);
PPC_FUNC_IMPL(__imp__sub_82B2DFA0) {
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
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-5240
	ctx.r10.s64 = ctx.r11.s64 + -5240;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82B2DFCC;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b4310
	ctx.lr = 0x82B2DFD4;
	sub_825B4310(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b2e008
	if (ctx.cr6.eq) goto loc_82B2E008;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b2e000
	if (ctx.cr6.lt) goto loc_82B2E000;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82b2e008
	if (!ctx.cr6.gt) goto loc_82B2E008;
loc_82B2E000:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82B2E008;
	sub_82294A58(ctx, base);
loc_82B2E008:
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

__attribute__((alias("__imp__sub_82B2E024"))) PPC_WEAK_FUNC(sub_82B2E024);
PPC_FUNC_IMPL(__imp__sub_82B2E024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2E028"))) PPC_WEAK_FUNC(sub_82B2E028);
PPC_FUNC_IMPL(__imp__sub_82B2E028) {
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
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r10,r11,-5240
	ctx.r10.s64 = ctx.r11.s64 + -5240;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82B2E04C;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b4310
	ctx.lr = 0x82B2E054;
	sub_825B4310(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82B2E068"))) PPC_WEAK_FUNC(sub_82B2E068);
PPC_FUNC_IMPL(__imp__sub_82B2E068) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x82B2E080;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b2e104
	if (ctx.cr6.eq) goto loc_82B2E104;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-4872
	ctx.r11.s64 = ctx.r8.s64 + -4872;
	// lis r5,-32077
	ctx.r5.s64 = -2102198272;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-1568
	ctx.r6.s64 = ctx.r5.s64 + -1568;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r4,14488
	ctx.r10.s64 = ctx.r4.s64 + 14488;
	// addi r9,r9,11336
	ctx.r9.s64 = ctx.r9.s64 + 11336;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,632
	ctx.r5.s64 = 632;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82B2E0F4;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82B2E104:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2E118"))) PPC_WEAK_FUNC(sub_82B2E118);
PPC_FUNC_IMPL(__imp__sub_82B2E118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B2E120;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-25776(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25776);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2e14c
	if (!ctx.cr6.eq) goto loc_82B2E14C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x829d0f08
	ctx.lr = 0x82B2E140;
	sub_829D0F08(ctx, base);
	// stw r3,-25776(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25776, ctx.r3.u32);
	// bl 0x829d0fb8
	ctx.lr = 0x82B2E148;
	sub_829D0FB8(ctx, base);
	// lwz r10,-25776(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25776);
loc_82B2E14C:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-23672(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23672);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b2e16c
	if (ctx.cr6.eq) goto loc_82B2E16C;
	// bl 0x8298e210
	ctx.lr = 0x82B2E160;
	sub_8298E210(ctx, base);
	// lwz r11,-23672(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23672);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82b2e174
	goto loc_82B2E174;
loc_82B2E16C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82B2E174:
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r30,r10,14476
	ctx.r30.s64 = ctx.r10.s64 + 14476;
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2e1a4
	if (!ctx.cr6.eq) goto loc_82B2E1A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82B2E194;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82B2E19C;
	sub_822AADA8(ctx, base);
	// lwz r11,-23672(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23672);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82B2E1A4:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2e1d0
	if (!ctx.cr6.eq) goto loc_82B2E1D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82B2E1C0;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82B2E1C8;
	sub_82398640(ctx, base);
	// lwz r11,-23672(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23672);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82B2E1D0:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b2e208
	if (ctx.cr6.eq) goto loc_82B2E208;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82B2E1EC;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82b2e208
	if (!ctx.cr6.eq) goto loc_82B2E208;
	// lwz r3,-23672(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23672);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2E208;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B2E208:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2E210"))) PPC_WEAK_FUNC(sub_82B2E210);
PPC_FUNC_IMPL(__imp__sub_82B2E210) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2E218"))) PPC_WEAK_FUNC(sub_82B2E218);
PPC_FUNC_IMPL(__imp__sub_82B2E218) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-25776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25776);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2e25c
	if (!ctx.cr6.eq) goto loc_82B2E25C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x829d0f08
	ctx.lr = 0x82B2E250;
	sub_829D0F08(ctx, base);
	// stw r3,-25776(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25776, ctx.r3.u32);
	// bl 0x829d0fb8
	ctx.lr = 0x82B2E258;
	sub_829D0FB8(ctx, base);
	// lwz r11,-25776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25776);
loc_82B2E25C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82B2E284"))) PPC_WEAK_FUNC(sub_82B2E284);
PPC_FUNC_IMPL(__imp__sub_82B2E284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2E288"))) PPC_WEAK_FUNC(sub_82B2E288);
PPC_FUNC_IMPL(__imp__sub_82B2E288) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x82B2E2A0;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b2e324
	if (ctx.cr6.eq) goto loc_82B2E324;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-4856
	ctx.r11.s64 = ctx.r8.s64 + -4856;
	// lis r5,-32077
	ctx.r5.s64 = -2102198272;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-2128
	ctx.r6.s64 = ctx.r5.s64 + -2128;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r4,14488
	ctx.r10.s64 = ctx.r4.s64 + 14488;
	// addi r9,r9,11336
	ctx.r9.s64 = ctx.r9.s64 + 11336;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,564
	ctx.r5.s64 = 564;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82B2E314;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82B2E324:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2E338"))) PPC_WEAK_FUNC(sub_82B2E338);
PPC_FUNC_IMPL(__imp__sub_82B2E338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B2E340;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-28640(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28640);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2e36c
	if (!ctx.cr6.eq) goto loc_82B2E36C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82604fa0
	ctx.lr = 0x82B2E360;
	sub_82604FA0(ctx, base);
	// stw r3,-28640(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28640, ctx.r3.u32);
	// bl 0x82605060
	ctx.lr = 0x82B2E368;
	sub_82605060(ctx, base);
	// lwz r10,-28640(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28640);
loc_82B2E36C:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-23668(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23668);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b2e38c
	if (ctx.cr6.eq) goto loc_82B2E38C;
	// bl 0x82313628
	ctx.lr = 0x82B2E380;
	sub_82313628(ctx, base);
	// lwz r11,-23668(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23668);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82b2e394
	goto loc_82B2E394;
loc_82B2E38C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82B2E394:
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r30,r10,14476
	ctx.r30.s64 = ctx.r10.s64 + 14476;
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2e3c4
	if (!ctx.cr6.eq) goto loc_82B2E3C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82B2E3B4;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82B2E3BC;
	sub_822AADA8(ctx, base);
	// lwz r11,-23668(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23668);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82B2E3C4:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2e3f0
	if (!ctx.cr6.eq) goto loc_82B2E3F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82B2E3E0;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82B2E3E8;
	sub_82398640(ctx, base);
	// lwz r11,-23668(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23668);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82B2E3F0:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b2e428
	if (ctx.cr6.eq) goto loc_82B2E428;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82B2E40C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82b2e428
	if (!ctx.cr6.eq) goto loc_82B2E428;
	// lwz r3,-23668(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23668);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2E428;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B2E428:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2E430"))) PPC_WEAK_FUNC(sub_82B2E430);
PPC_FUNC_IMPL(__imp__sub_82B2E430) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2E438"))) PPC_WEAK_FUNC(sub_82B2E438);
PPC_FUNC_IMPL(__imp__sub_82B2E438) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-28640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28640);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2e47c
	if (!ctx.cr6.eq) goto loc_82B2E47C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82604fa0
	ctx.lr = 0x82B2E470;
	sub_82604FA0(ctx, base);
	// stw r3,-28640(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28640, ctx.r3.u32);
	// bl 0x82605060
	ctx.lr = 0x82B2E478;
	sub_82605060(ctx, base);
	// lwz r11,-28640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28640);
loc_82B2E47C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82B2E4A4"))) PPC_WEAK_FUNC(sub_82B2E4A4);
PPC_FUNC_IMPL(__imp__sub_82B2E4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2E4A8"))) PPC_WEAK_FUNC(sub_82B2E4A8);
PPC_FUNC_IMPL(__imp__sub_82B2E4A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,504(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b2e4c4
	if (ctx.cr6.eq) goto loc_82B2E4C4;
	// lfs f0,164(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f13,164(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
loc_82B2E4C4:
	// lwz r11,508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f0,604(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 604);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f13,604(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 604, temp.u32);
	// lfs f0,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82b2e4f4
	if (ctx.cr6.gt) goto loc_82B2E4F4;
	// b 0x82b2ea20
	sub_82B2EA20(ctx, base);
	return;
loc_82B2E4F4:
	// b 0x82b2e500
	sub_82B2E500(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2E4F8"))) PPC_WEAK_FUNC(sub_82B2E4F8);
PPC_FUNC_IMPL(__imp__sub_82B2E4F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2E4FC"))) PPC_WEAK_FUNC(sub_82B2E4FC);
PPC_FUNC_IMPL(__imp__sub_82B2E4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2E500"))) PPC_WEAK_FUNC(sub_82B2E500);
PPC_FUNC_IMPL(__imp__sub_82B2E500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82B2E508;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6ae4
	ctx.lr = 0x82B2E510;
	__savefpr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 512);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b2ea04
	if (ctx.cr6.eq) goto loc_82B2EA04;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2ea04
	if (!ctx.cr6.eq) goto loc_82B2EA04;
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b2ea04
	if (!ctx.cr6.eq) goto loc_82B2EA04;
	// lis r26,-31883
	ctx.r26.s64 = -2089484288;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,-31264(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82b2e568
	if (ctx.cr6.gt) goto loc_82B2E568;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82b2e570
	goto loc_82B2E570;
loc_82B2E568:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82B2E570:
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// bl 0x8258a128
	ctx.lr = 0x82B2E578;
	sub_8258A128(ctx, base);
	// lwz r11,512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 512);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b2e594
	if (ctx.cr6.eq) goto loc_82B2E594;
	// addi r11,r10,396
	ctx.r11.s64 = ctx.r10.s64 + 396;
	// b 0x82b2e598
	goto loc_82B2E598;
loc_82B2E594:
	// addi r11,r11,244
	ctx.r11.s64 = ctx.r11.s64 + 244;
loc_82B2E598:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f13,244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f12,248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f0,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lfs f9,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f29,f11,f13
	ctx.f29.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f29,120(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsubs f28,f9,f12
	ctx.f28.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfs f28,124(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// fsubs f27,f10,f0
	ctx.f27.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lfs f30,-18108(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -18108);
	ctx.f30.f64 = double(temp.f32);
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// addi r31,r30,244
	ctx.r31.s64 = ctx.r30.s64 + 244;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// bl 0x82382590
	ctx.lr = 0x82B2E610;
	sub_82382590(ctx, base);
	// lfs f8,268(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,272(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f31
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// lfs f5,276(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f7,f31
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fmuls f3,f5,f31
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// lfs f2,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lfs f13,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r29,r30,268
	ctx.r29.s64 = ctx.r30.s64 + 268;
	// fadds f12,f2,f6
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f11,f0,f4
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fadds f10,f13,f3
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x82b2f1e0
	ctx.lr = 0x82B2E664;
	sub_82B2F1E0(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,-31264(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -31264);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x8276feb0
	ctx.lr = 0x82B2E698;
	sub_8276FEB0(ctx, base);
	// lwz r8,508(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// rlwinm r7,r8,0,2,2
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82b2e6e4
	if (!ctx.cr6.eq) goto loc_82B2E6E4;
	// lfs f0,280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,284(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f11,288(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f8,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f8,f12
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f5,0(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fadds f4,f7,f10
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// stfs f4,4(r29)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// fadds f3,f6,f9
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f3,8(r29)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
loc_82B2E6E4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,572(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,552(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 552);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82b2e708
	if (!ctx.cr6.gt) goto loc_82B2E708;
	// fsubs f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// stfs f0,572(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 572, temp.u32);
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82B2E708:
	// lfs f13,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmr f2,f13
	ctx.f2.f64 = ctx.f13.f64;
	// lfs f10,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// fmr f3,f11
	ctx.f3.f64 = ctx.f11.f64;
	// lfs f8,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// fmadds f13,f11,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f12,f10,f10,f13
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fsqrts f30,f12
	ctx.f30.f64 = double(float(sqrt(ctx.f12.f64)));
	// fmuls f11,f7,f30
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// fmuls f10,f5,f30
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f30.f64));
	// fmuls f9,f4,f30
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f30.f64));
	// fadds f8,f3,f11
	ctx.f8.f64 = double(float(ctx.f3.f64 + ctx.f11.f64));
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f7,f2,f10
	ctx.f7.f64 = double(float(ctx.f2.f64 + ctx.f10.f64));
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fadds f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x82382590
	ctx.lr = 0x82B2E778;
	sub_82382590(ctx, base);
	// lwz r11,508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b2e800
	if (!ctx.cr6.eq) goto loc_82B2E800;
	// lfs f12,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r30,280
	ctx.r11.s64 = ctx.r30.s64 + 280;
	// fmuls f0,f12,f30
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// fmuls f11,f13,f30
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lfs f10,556(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 556);
	ctx.f10.f64 = double(temp.f32);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// fmuls f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// fmuls f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f7,f12,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// lfs f3,284(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	ctx.f3.f64 = double(temp.f32);
	// lfs f6,288(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	ctx.f6.f64 = double(temp.f32);
	// fadds f1,f7,f6
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// stfs f1,288(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 288, temp.u32);
	// lfs f5,280(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	ctx.f5.f64 = double(temp.f32);
	// fadds f2,f8,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// fadds f4,f5,f9
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// stfs f2,284(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 284, temp.u32);
	// stfs f4,280(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 280, temp.u32);
	// b 0x82b2e858
	goto loc_82B2E858;
loc_82B2E800:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f0,-29008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29008);
	ctx.f0.f64 = double(temp.f32);
	// lfd f1,-16104(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + -16104);
	// fmuls f2,f31,f0
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// bl 0x82cb59b0
	ctx.lr = 0x82B2E818;
	sub_82CB59B0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,124(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// stw r8,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r8.u32);
loc_82B2E858:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82b2e9d0
	if (ctx.cr6.eq) goto loc_82B2E9D0;
	// lwz r11,2172(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b2e9d0
	if (ctx.cr6.eq) goto loc_82B2E9D0;
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b2e9d0
	if (ctx.cr6.eq) goto loc_82B2E9D0;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r28,255
	ctx.r28.s64 = 255;
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stfs f9,124(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lfs f8,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,128(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// stb r27,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r27.u8);
	// stb r28,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r28.u8);
	// stb r27,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r27.u8);
	// lwz r11,-31264(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -31264);
	// lwz r29,332(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// bl 0x8240a888
	ctx.lr = 0x82B2E904;
	sub_8240A888(ctx, base);
	// lwz r11,656(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 656);
	// addi r3,r29,656
	ctx.r3.s64 = ctx.r29.s64 + 656;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2E928;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f5,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f4,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f3,284(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	ctx.f3.f64 = double(temp.f32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f2,288(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f3,f5
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// fadds f0,f2,f4
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// stfs f1,124(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,280(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// stw r5,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r5.u32);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// stb r28,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r28.u8);
	// stb r27,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r27.u8);
	// stb r27,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r27.u8);
	// lwz r11,-31264(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -31264);
	// lwz r31,332(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// bl 0x8240a888
	ctx.lr = 0x82B2E9AC;
	sub_8240A888(ctx, base);
	// lwz r9,656(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// addi r3,r31,656
	ctx.r3.s64 = ctx.r31.s64 + 656;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B2E9D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B2E9D0:
	// fmuls f0,f28,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f28.f64));
	// lfs f13,560(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 560);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f11,f27,f27,f0
	ctx.f11.f64 = double(float(ctx.f27.f64 * ctx.f27.f64 + ctx.f0.f64));
	// fmadds f10,f29,f29,f11
	ctx.f10.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f11.f64));
	// fcmpu cr6,f10,f12
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// bgt cr6,0x82b2ea10
	if (ctx.cr6.gt) goto loc_82B2EA10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b2ea20
	ctx.lr = 0x82B2E9F4;
	sub_82B2EA20(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6b30
	ctx.lr = 0x82B2EA00;
	__restfpr_27(ctx, base);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82B2EA04:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b2f018
	ctx.lr = 0x82B2EA10;
	sub_82B2F018(ctx, base);
loc_82B2EA10:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6b30
	ctx.lr = 0x82B2EA1C;
	__restfpr_27(ctx, base);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2EA20"))) PPC_WEAK_FUNC(sub_82B2EA20);
PPC_FUNC_IMPL(__imp__sub_82B2EA20) {
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
	// lwz r3,512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// bl 0x82977b10
	ctx.lr = 0x82B2EA3C;
	sub_82977B10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b2ea54
	if (ctx.cr6.eq) goto loc_82B2EA54;
	// lfs f1,600(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	ctx.f1.f64 = double(temp.f32);
	// lbz r4,516(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 516);
	// bl 0x82b2f750
	ctx.lr = 0x82B2EA50;
	sub_82B2F750(ctx, base);
	// b 0x82b2ea70
	goto loc_82B2EA70;
loc_82B2EA54:
	// lwz r3,512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// bl 0x829ee8f0
	ctx.lr = 0x82B2EA5C;
	sub_829EE8F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b2ea70
	if (ctx.cr6.eq) goto loc_82B2EA70;
	// lfs f1,600(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	ctx.f1.f64 = double(temp.f32);
	// lbz r4,516(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 516);
	// bl 0x82b2f6f0
	ctx.lr = 0x82B2EA70;
	sub_82B2F6F0(ctx, base);
loc_82B2EA70:
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82b2ea90
	if (ctx.cr6.gt) goto loc_82B2EA90;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82b2ea98
	goto loc_82B2EA98;
loc_82B2EA90:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82B2EA98:
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// bl 0x8258a128
	ctx.lr = 0x82B2EAA0;
	sub_8258A128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b2ef10
	ctx.lr = 0x82B2EAA8;
	sub_82B2EF10(ctx, base);
	// addi r1,r1,96
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

