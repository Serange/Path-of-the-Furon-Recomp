#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_822B83E8"))) PPC_WEAK_FUNC(sub_822B83E8);
PPC_FUNC_IMPL(__imp__sub_822B83E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x822B83F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,11272
	ctx.r31.s64 = ctx.r11.s64 + 11272;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x82cb0328
	ctx.lr = 0x822B841C;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822b8488
	if (ctx.cr6.eq) goto loc_822B8488;
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// addi r28,r27,28
	ctx.r28.s64 = ctx.r27.s64 + 28;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b843c
	if (ctx.cr6.eq) goto loc_822B843C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x822b8440
	goto loc_822B8440;
loc_822B843C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822B8440:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cb0328
	ctx.lr = 0x822B8448;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822b8488
	if (ctx.cr6.eq) goto loc_822B8488;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x822960c0
	ctx.lr = 0x822B8460;
	sub_822960C0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8232ee60
	ctx.lr = 0x822B8470;
	sub_8232EE60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822b21c0
	ctx.lr = 0x822B847C;
	sub_822B21C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x822b848c
	if (ctx.cr6.eq) goto loc_822B848C;
loc_822B8488:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822B848C:
	// rlwinm r10,r29,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822b84a8
	if (ctx.cr6.eq) goto loc_822B84A8;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82299080
	ctx.lr = 0x822B84A8;
	sub_82299080(ctx, base);
loc_822B84A8:
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b84bc
	if (ctx.cr6.eq) goto loc_822B84BC;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82295cb8
	ctx.lr = 0x822B84BC;
	sub_82295CB8(ctx, base);
loc_822B84BC:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b84e8
	if (ctx.cr6.eq) goto loc_822B84E8;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B84E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_822B84E8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B84F4"))) PPC_WEAK_FUNC(sub_822B84F4);
PPC_FUNC_IMPL(__imp__sub_822B84F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B84F8"))) PPC_WEAK_FUNC(sub_822B84F8);
PPC_FUNC_IMPL(__imp__sub_822B84F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x822B8500;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,11272
	ctx.r31.s64 = ctx.r11.s64 + 11272;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x82cb0328
	ctx.lr = 0x822B852C;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822b8598
	if (ctx.cr6.eq) goto loc_822B8598;
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// addi r28,r27,28
	ctx.r28.s64 = ctx.r27.s64 + 28;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b854c
	if (ctx.cr6.eq) goto loc_822B854C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x822b8550
	goto loc_822B8550;
loc_822B854C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822B8550:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cb0328
	ctx.lr = 0x822B8558;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822b8598
	if (ctx.cr6.eq) goto loc_822B8598;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x822960c0
	ctx.lr = 0x822B8570;
	sub_822960C0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8232ee60
	ctx.lr = 0x822B8580;
	sub_8232EE60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822b21c0
	ctx.lr = 0x822B858C;
	sub_822B21C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x822b859c
	if (ctx.cr6.eq) goto loc_822B859C;
loc_822B8598:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822B859C:
	// rlwinm r10,r29,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822b85b8
	if (ctx.cr6.eq) goto loc_822B85B8;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82299080
	ctx.lr = 0x822B85B8;
	sub_82299080(ctx, base);
loc_822B85B8:
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b85cc
	if (ctx.cr6.eq) goto loc_822B85CC;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82295cb8
	ctx.lr = 0x822B85CC;
	sub_82295CB8(ctx, base);
loc_822B85CC:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b8600
	if (ctx.cr6.eq) goto loc_822B8600;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B85F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_822B8600:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B860C"))) PPC_WEAK_FUNC(sub_822B860C);
PPC_FUNC_IMPL(__imp__sub_822B860C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B8610"))) PPC_WEAK_FUNC(sub_822B8610);
PPC_FUNC_IMPL(__imp__sub_822B8610) {
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
	// addi r4,r4,28
	ctx.r4.s64 = ctx.r4.s64 + 28;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82294bb8
	ctx.lr = 0x822B862C;
	sub_82294BB8(ctx, base);
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

__attribute__((alias("__imp__sub_822B8644"))) PPC_WEAK_FUNC(sub_822B8644);
PPC_FUNC_IMPL(__imp__sub_822B8644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B8648"))) PPC_WEAK_FUNC(sub_822B8648);
PPC_FUNC_IMPL(__imp__sub_822B8648) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,22084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22084);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b868c
	if (ctx.cr6.eq) goto loc_822B868C;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31548);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b8730
	if (ctx.cr6.eq) goto loc_822B8730;
	// bl 0x823bc950
	ctx.lr = 0x822B8688;
	sub_823BC950(ctx, base);
	// b 0x822b8730
	goto loc_822B8730;
loc_822B868C:
	// lis r31,-31905
	ctx.r31.s64 = -2090926080;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f0,-23696(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + -23696);
	// lfd f31,-18104(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18104);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x822b8730
	if (ctx.cr6.eq) goto loc_822B8730;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31548);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b86b8
	if (ctx.cr6.eq) goto loc_822B86B8;
	// bl 0x823bc950
	ctx.lr = 0x822B86B8;
	sub_823BC950(ctx, base);
loc_822B86B8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bea278
	ctx.lr = 0x822B86C0;
	sub_82BEA278(ctx, base);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lfd f13,-23696(r31)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r31.u32 + -23696);
	// lfd f0,-3832(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3832);
	// fmul f10,f11,f0
	ctx.f10.f64 = ctx.f11.f64 * ctx.f0.f64;
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// bgt cr6,0x822b8730
	if (ctx.cr6.gt) goto loc_822B8730;
	// bl 0x823bc8f8
	ctx.lr = 0x822B86E4;
	sub_823BC8F8(ctx, base);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// stfd f31,-23696(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + -23696, ctx.f31.u64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822b8730
	if (!ctx.cr6.gt) goto loc_822B8730;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822b870c
	if (ctx.cr6.eq) goto loc_822B870C;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822b8714
	goto loc_822B8714;
loc_822B870C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r11,11272
	ctx.r5.s64 = ctx.r11.s64 + 11272;
loc_822B8714:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B8730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B8730:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_822B874C"))) PPC_WEAK_FUNC(sub_822B874C);
PPC_FUNC_IMPL(__imp__sub_822B874C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B8750"))) PPC_WEAK_FUNC(sub_822B8750);
PPC_FUNC_IMPL(__imp__sub_822B8750) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B8758"))) PPC_WEAK_FUNC(sub_822B8758);
PPC_FUNC_IMPL(__imp__sub_822B8758) {
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
	// lwz r31,160(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822b8790
	if (ctx.cr6.eq) goto loc_822B8790;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b8790
	if (ctx.cr6.eq) goto loc_822B8790;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x822bb538
	ctx.lr = 0x822B8788;
	sub_822BB538(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_822B8790:
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

__attribute__((alias("__imp__sub_822B87A4"))) PPC_WEAK_FUNC(sub_822B87A4);
PPC_FUNC_IMPL(__imp__sub_822B87A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B87A8"))) PPC_WEAK_FUNC(sub_822B87A8);
PPC_FUNC_IMPL(__imp__sub_822B87A8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,66
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 66, ctx.xer);
	// beq cr6,0x822b87d0
	if (ctx.cr6.eq) goto loc_822B87D0;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,73
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 73, ctx.xer);
	// beq cr6,0x822b87d0
	if (ctx.cr6.eq) goto loc_822B87D0;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,75
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 75, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_822B87D0:
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822B87DC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r9,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r6,r8,24,16,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r5,r7,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x822b87dc
	if (!ctx.cr0.eq) goto loc_822B87DC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B8810"))) PPC_WEAK_FUNC(sub_822B8810);
PPC_FUNC_IMPL(__imp__sub_822B8810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x822B8818;
	__savegprlr_28(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822ba498
	ctx.lr = 0x822B8828;
	sub_822BA498(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822960c0
	ctx.lr = 0x822B8834;
	sub_822960C0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,11272
	ctx.r29.s64 = ctx.r11.s64 + 11272;
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bne cr6,0x822b8854
	if (!ctx.cr6.eq) goto loc_822B8854;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_822B8854:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// lwz r3,28892(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28892);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B886C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x822b8888
	if (!ctx.cr6.eq) goto loc_822B8888;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295cb8
	ctx.lr = 0x822B887C;
	sub_82295CB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_822B8888:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bne cr6,0x822b8898
	if (!ctx.cr6.eq) goto loc_822B8898;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_822B8898:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82373090
	ctx.lr = 0x822B88A0;
	sub_82373090(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b88b4
	if (ctx.cr6.eq) goto loc_822B88B4;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822b88b8
	goto loc_822B88B8;
loc_822B88B4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_822B88B8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822960c0
	ctx.lr = 0x822B88C0;
	sub_822960C0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295908
	ctx.lr = 0x822B88CC;
	sub_82295908(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82295cb8
	ctx.lr = 0x822B88D4;
	sub_82295CB8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x822B88DC;
	sub_82299080(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822B88EC:
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x822b88ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822B88EC;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x833b7b14
	ctx.lr = 0x822B8900;
	__imp__XGetVideoMode(ctx, base);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bne cr6,0x822b8918
	if (!ctx.cr6.eq) goto loc_822B8918;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_822B8918:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822bbad8
	ctx.lr = 0x822B8920;
	sub_822BBAD8(ctx, base);
	// li r4,21504
	ctx.r4.s64 = 21504;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// bl 0x833b9708
	ctx.lr = 0x822B892C;
	sub_833B9708(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// addi r10,r1,180
	ctx.r10.s64 = ctx.r1.s64 + 180;
	// stw r3,76(r28)
	PPC_STORE_U32(ctx.r28.u32 + 76, ctx.r3.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822b8950
	if (ctx.cr6.eq) goto loc_822B8950;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b8950
	if (ctx.cr6.eq) goto loc_822B8950;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82294a58
	ctx.lr = 0x822B8950;
	sub_82294A58(ctx, base);
loc_822B8950:
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b8970
	if (!ctx.cr6.eq) goto loc_822B8970;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x822b896c
	if (!ctx.cr6.eq) goto loc_822B896C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_822B896C:
	// bl 0x822bcae8
	ctx.lr = 0x822B8970;
	sub_822BCAE8(ctx, base);
loc_822B8970:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295cb8
	ctx.lr = 0x822B8978;
	sub_82295CB8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B8984"))) PPC_WEAK_FUNC(sub_822B8984);
PPC_FUNC_IMPL(__imp__sub_822B8984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B8988"))) PPC_WEAK_FUNC(sub_822B8988);
PPC_FUNC_IMPL(__imp__sub_822B8988) {
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
	// bl 0x82295908
	ctx.lr = 0x822B89A0;
	sub_82295908(ctx, base);
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

__attribute__((alias("__imp__sub_822B89B8"))) PPC_WEAK_FUNC(sub_822B89B8);
PPC_FUNC_IMPL(__imp__sub_822B89B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x822B89C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r24,1
	ctx.r24.s64 = 1;
	// bl 0x822960c0
	ctx.lr = 0x822B89DC;
	sub_822960C0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,11272
	ctx.r29.s64 = ctx.r11.s64 + 11272;
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bne cr6,0x822b89fc
	if (!ctx.cr6.eq) goto loc_822B89FC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_822B89FC:
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28892(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28892);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B8A14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822b8b18
	if (ctx.cr6.eq) goto loc_822B8B18;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bne cr6,0x822b8a2c
	if (!ctx.cr6.eq) goto loc_822B8A2C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_822B8A2C:
	// lwz r3,28892(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28892);
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-20648
	ctx.r6.s64 = ctx.r11.s64 + -20648;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B8A4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822b8b18
	if (ctx.cr6.eq) goto loc_822B8B18;
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82334610
	ctx.lr = 0x822B8A64;
	sub_82334610(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b8b18
	if (ctx.cr6.eq) goto loc_822B8B18;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// blt cr6,0x822b8a80
	if (ctx.cr6.lt) goto loc_822B8A80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822b87a8
	ctx.lr = 0x822B8A80;
	sub_822B87A8(ctx, base);
loc_822B8A80:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822B8A90:
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x822b8a90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822B8A90;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x833b7b14
	ctx.lr = 0x822B8AA4;
	__imp__XGetVideoMode(ctx, base);
	// lis r4,1024
	ctx.r4.s64 = 67108864;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r4,r4,21504
	ctx.r4.u64 = ctx.r4.u64 | 21504;
	// bl 0x833b9708
	ctx.lr = 0x822B8AB4;
	sub_833B9708(ctx, base);
	// stw r3,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b8ad4
	if (!ctx.cr6.eq) goto loc_822B8AD4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bne cr6,0x822b8ad0
	if (!ctx.cr6.eq) goto loc_822B8AD0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_822B8AD0:
	// bl 0x822bcae8
	ctx.lr = 0x822B8AD4;
	sub_822BCAE8(ctx, base);
loc_822B8AD4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822b8b1c
	if (ctx.cr6.eq) goto loc_822B8B1C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822b8b1c
	if (ctx.cr6.eq) goto loc_822B8B1C;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822b8b1c
	if (!ctx.cr6.gt) goto loc_822B8B1C;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x822959a8
	ctx.lr = 0x822B8AF8;
	sub_822959A8(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// bl 0x82295cb8
	ctx.lr = 0x822B8B0C;
	sub_82295CB8(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_822B8B18:
	// li r24,0
	ctx.r24.s64 = 0;
loc_822B8B1C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295cb8
	ctx.lr = 0x822B8B24;
	sub_82295CB8(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B8B30"))) PPC_WEAK_FUNC(sub_822B8B30);
PPC_FUNC_IMPL(__imp__sub_822B8B30) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// blt cr6,0x822b8b60
	if (ctx.cr6.lt) goto loc_822B8B60;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b87a8
	ctx.lr = 0x822B8B60;
	sub_822B87A8(ctx, base);
loc_822B8B60:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822B8B70:
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x822b8b70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822B8B70;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833b7b14
	ctx.lr = 0x822B8B84;
	__imp__XGetVideoMode(ctx, base);
	// lis r4,1024
	ctx.r4.s64 = 67108864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,21504
	ctx.r4.u64 = ctx.r4.u64 | 21504;
	// bl 0x833b9708
	ctx.lr = 0x822B8B94;
	sub_833B9708(ctx, base);
	// stw r3,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b8bac
	if (!ctx.cr6.eq) goto loc_822B8BAC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11272
	ctx.r3.s64 = ctx.r11.s64 + 11272;
	// bl 0x822bcae8
	ctx.lr = 0x822B8BAC;
	sub_822BCAE8(ctx, base);
loc_822B8BAC:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 ^ 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_822B8BD0"))) PPC_WEAK_FUNC(sub_822B8BD0);
PPC_FUNC_IMPL(__imp__sub_822B8BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x822B8BD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lis r10,-31885
	ctx.r10.s64 = -2089615360;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,25000(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25000);
	// lwz r31,28848(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28848);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822B8C00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-31905
	ctx.r7.s64 = -2090926080;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lwz r31,96(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r7,-23856
	ctx.r5.s64 = ctx.r7.s64 + -23856;
	// addi r4,r6,-12472
	ctx.r4.s64 = ctx.r6.s64 + -12472;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8232e868
	ctx.lr = 0x822B8C20;
	sub_8232E868(ctx, base);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r5,-18368
	ctx.r5.s64 = ctx.r5.s64 + -18368;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r29,r11,-18352
	ctx.r29.s64 = ctx.r11.s64 + -18352;
	// bl 0x82295ff0
	ctx.lr = 0x822B8C3C;
	sub_82295FF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822952c8
	ctx.lr = 0x822B8C4C;
	sub_822952C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82295ff0
	ctx.lr = 0x822B8C5C;
	sub_82295FF0(ctx, base);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// beq cr6,0x822b8c84
	if (ctx.cr6.eq) goto loc_822B8C84;
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82294520
	ctx.lr = 0x822B8C84;
	sub_82294520(ctx, base);
loc_822B8C84:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82294cc8
	ctx.lr = 0x822B8C8C;
	sub_82294CC8(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b8cb0
	if (ctx.cr6.eq) goto loc_822B8CB0;
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82294520
	ctx.lr = 0x822B8CB0;
	sub_82294520(ctx, base);
loc_822B8CB0:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82294cc8
	ctx.lr = 0x822B8CB8;
	sub_82294CC8(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b8cdc
	if (ctx.cr6.eq) goto loc_822B8CDC;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82294520
	ctx.lr = 0x822B8CDC;
	sub_82294520(ctx, base);
loc_822B8CDC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82294cc8
	ctx.lr = 0x822B8CE4;
	sub_82294CC8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b8cf8
	if (ctx.cr6.eq) goto loc_822B8CF8;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x822b8d00
	goto loc_822B8D00;
loc_822B8CF8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
loc_822B8D00:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// lwz r3,28892(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28892);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B8D18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// beq cr6,0x822b8d8c
	if (ctx.cr6.eq) goto loc_822B8D8C;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x822959a8
	ctx.lr = 0x822B8D2C;
	sub_822959A8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r8,r31,20
	ctx.r8.s64 = ctx.r31.s64 + 20;
loc_822B8D34:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822b8d34
	if (!ctx.cr0.eq) goto loc_822B8D34;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B8D78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B8D8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B8D8C:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b8db0
	if (ctx.cr6.eq) goto loc_822B8DB0;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82294520
	ctx.lr = 0x822B8DB0;
	sub_82294520(ctx, base);
loc_822B8DB0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82294cc8
	ctx.lr = 0x822B8DB8;
	sub_82294CC8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B8DC0"))) PPC_WEAK_FUNC(sub_822B8DC0);
PPC_FUNC_IMPL(__imp__sub_822B8DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x822B8DC8;
	__savegprlr_14(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// stw r9,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r9.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r14,r4
	ctx.r14.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r11,25288(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25288, ctx.r11.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lwz r3,164(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 164);
	// mr r15,r8
	ctx.r15.u64 = ctx.r8.u64;
	// bl 0x822ba970
	ctx.lr = 0x822B8DFC;
	sub_822BA970(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822960c0
	ctx.lr = 0x822B8E08;
	sub_822960C0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8232ee60
	ctx.lr = 0x822B8E18;
	sub_8232EE60(ctx, base);
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r22,0
	ctx.r22.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r22,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r22.u32);
	// beq cr6,0x822b8e40
	if (ctx.cr6.eq) goto loc_822B8E40;
	// stw r22,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r22.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82294520
	ctx.lr = 0x822B8E40;
	sub_82294520(ctx, base);
loc_822B8E40:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82294cc8
	ctx.lr = 0x822B8E48;
	sub_82294CC8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r24,-1
	ctx.r24.s64 = -1;
	// addi r16,r11,11272
	ctx.r16.s64 = ctx.r11.s64 + 11272;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// lwz r11,100(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822b8f14
	if (!ctx.cr6.gt) goto loc_822B8F14;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_822B8E6C:
	// lwz r11,96(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 96);
	// add r30,r29,r11
	ctx.r30.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b8e88
	if (ctx.cr6.eq) goto loc_822B8E88;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x822b8e8c
	goto loc_822B8E8C;
loc_822B8E88:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
loc_822B8E8C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82cb0328
	ctx.lr = 0x822B8E94;
	sub_82CB0328(ctx, base);
	// lwz r11,100(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 100);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822b8eb4
	if (ctx.cr6.eq) goto loc_822B8EB4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822b8e6c
	if (ctx.cr6.lt) goto loc_822B8E6C;
	// b 0x822b8f14
	goto loc_822B8F14;
loc_822B8EB4:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822b8ef0
	if (!ctx.cr6.eq) goto loc_822B8EF0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82bea278
	ctx.lr = 0x822B8EC8;
	sub_82BEA278(ctx, base);
	// lfd f13,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lfd f0,-3832(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3832);
	// fmul f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64;
	// stfd f11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f11.u64);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r9,116(r23)
	PPC_STORE_U32(ctx.r23.u32 + 116, ctx.r9.u32);
	// stw r10,120(r23)
	PPC_STORE_U32(ctx.r23.u32 + 120, ctx.r10.u32);
loc_822B8EF0:
	// lwz r11,96(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 96);
	// mulli r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 * 28;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822b8f14
	if (ctx.cr6.eq) goto loc_822B8F14;
	// rlwinm r11,r14,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 0) & 0x80;
	// ori r14,r11,2
	ctx.r14.u64 = ctx.r11.u64 | 2;
loc_822B8F14:
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r19,r11,-23856
	ctx.r19.s64 = ctx.r11.s64 + -23856;
	// addi r18,r10,-12472
	ctx.r18.s64 = ctx.r10.s64 + -12472;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8232e868
	ctx.lr = 0x822B8F34;
	sub_8232E868(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r17,r11,-18368
	ctx.r17.s64 = ctx.r11.s64 + -18368;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r31,r10,-18340
	ctx.r31.s64 = ctx.r10.s64 + -18340;
	// addi r30,r1,208
	ctx.r30.s64 = ctx.r1.s64 + 208;
	// bl 0x82295ff0
	ctx.lr = 0x822B8F58;
	sub_82295FF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822952c8
	ctx.lr = 0x822B8F68;
	sub_822952C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82295ff0
	ctx.lr = 0x822B8F78;
	sub_82295FF0(ctx, base);
	// lwz r9,264(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lis r28,-31885
	ctx.r28.s64 = -2089615360;
	// stw r22,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r22.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822b8fd8
	if (ctx.cr6.eq) goto loc_822B8FD8;
	// stw r22,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r22.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b9010
	if (ctx.cr6.eq) goto loc_822B9010;
	// lwz r11,28888(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b8fb4
	if (!ctx.cr6.eq) goto loc_822B8FB4;
	// bl 0x822900a0
	ctx.lr = 0x822B8FB0;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822B8FB4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B8FD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r3.u32);
loc_822B8FD8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b9010
	if (ctx.cr6.eq) goto loc_822B9010;
	// lwz r11,28888(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b8ff8
	if (!ctx.cr6.eq) goto loc_822B8FF8;
	// bl 0x822900a0
	ctx.lr = 0x822B8FF4;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822B8FF8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B9010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B9010:
	// lwz r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// stw r22,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r22.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r22,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r22.u32);
	// stw r22,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r22.u32);
	// stw r22,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r22.u32);
	// beq cr6,0x822b9078
	if (ctx.cr6.eq) goto loc_822B9078;
	// stw r22,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r22.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b90b0
	if (ctx.cr6.eq) goto loc_822B90B0;
	// lwz r11,28888(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b9054
	if (!ctx.cr6.eq) goto loc_822B9054;
	// bl 0x822900a0
	ctx.lr = 0x822B9050;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822B9054:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B9074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r3.u32);
loc_822B9078:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b90b0
	if (ctx.cr6.eq) goto loc_822B90B0;
	// lwz r11,28888(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b9098
	if (!ctx.cr6.eq) goto loc_822B9098;
	// bl 0x822900a0
	ctx.lr = 0x822B9094;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822B9098:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B90B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B90B0:
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r22,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r22.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r22,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r22.u32);
	// stw r22,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r22.u32);
	// beq cr6,0x822b9108
	if (ctx.cr6.eq) goto loc_822B9108;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822b9138
	if (ctx.cr6.eq) goto loc_822B9138;
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b90e8
	if (!ctx.cr6.eq) goto loc_822B90E8;
	// bl 0x822900a0
	ctx.lr = 0x822B90E4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822B90E8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B9104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822B9108:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822b9138
	if (ctx.cr6.eq) goto loc_822B9138;
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b9124
	if (!ctx.cr6.eq) goto loc_822B9124;
	// bl 0x822900a0
	ctx.lr = 0x822B9120;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822B9124:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B9138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B9138:
	// lwz r31,168(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 168);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82429360
	ctx.lr = 0x822B9148;
	sub_82429360(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82428980
	ctx.lr = 0x822B9154;
	sub_82428980(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8232e868
	ctx.lr = 0x822B9164;
	sub_8232E868(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r20,r11,-18352
	ctx.r20.s64 = ctx.r11.s64 + -18352;
	// addi r31,r1,208
	ctx.r31.s64 = ctx.r1.s64 + 208;
	// bl 0x82295ff0
	ctx.lr = 0x822B9180;
	sub_82295FF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822952c8
	ctx.lr = 0x822B9190;
	sub_822952C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// bl 0x82295ff0
	ctx.lr = 0x822B91A0;
	sub_82295FF0(ctx, base);
	// lwz r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// stw r22,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r22.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b91fc
	if (ctx.cr6.eq) goto loc_822B91FC;
	// stw r22,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r22.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b9234
	if (ctx.cr6.eq) goto loc_822B9234;
	// lwz r11,28888(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b91d8
	if (!ctx.cr6.eq) goto loc_822B91D8;
	// bl 0x822900a0
	ctx.lr = 0x822B91D4;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822B91D8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B91F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r3.u32);
loc_822B91FC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b9234
	if (ctx.cr6.eq) goto loc_822B9234;
	// lwz r11,28888(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b921c
	if (!ctx.cr6.eq) goto loc_822B921C;
	// bl 0x822900a0
	ctx.lr = 0x822B9218;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822B921C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B9234;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B9234:
	// lwz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// stw r22,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r22.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r22,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r22.u32);
	// stw r22,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r22.u32);
	// stw r22,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r22.u32);
	// beq cr6,0x822b929c
	if (ctx.cr6.eq) goto loc_822B929C;
	// stw r22,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r22.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b92d4
	if (ctx.cr6.eq) goto loc_822B92D4;
	// lwz r11,28888(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b9278
	if (!ctx.cr6.eq) goto loc_822B9278;
	// bl 0x822900a0
	ctx.lr = 0x822B9274;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822B9278:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B9298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r3.u32);
loc_822B929C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b92d4
	if (ctx.cr6.eq) goto loc_822B92D4;
	// lwz r11,28888(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b92bc
	if (!ctx.cr6.eq) goto loc_822B92BC;
	// bl 0x822900a0
	ctx.lr = 0x822B92B8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822B92BC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B92D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B92D4:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r31,144(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r22,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r22.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r22,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r22.u32);
	// stw r22,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r22.u32);
	// beq cr6,0x822b932c
	if (ctx.cr6.eq) goto loc_822B932C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822b935c
	if (ctx.cr6.eq) goto loc_822B935C;
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b930c
	if (!ctx.cr6.eq) goto loc_822B930C;
	// bl 0x822900a0
	ctx.lr = 0x822B9308;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822B930C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B9328;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822B932C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822b935c
	if (ctx.cr6.eq) goto loc_822B935C;
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b9348
	if (!ctx.cr6.eq) goto loc_822B9348;
	// bl 0x822900a0
	ctx.lr = 0x822B9344;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822B9348:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B935C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B935C:
	// clrlwi r11,r14,30
	ctx.r11.u64 = ctx.r14.u32 & 0x3;
	// lwz r21,192(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822b9400
	if (ctx.cr6.lt) goto loc_822B9400;
	// beq cr6,0x822b93b0
	if (ctx.cr6.eq) goto loc_822B93B0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x822b941c
	if (!ctx.cr6.lt) goto loc_822B941C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822b939c
	if (ctx.cr6.eq) goto loc_822B939C;
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822b939c
	if (ctx.cr6.eq) goto loc_822B939C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r5,16(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// bl 0x822b8b30
	ctx.lr = 0x822B9398;
	sub_822B8B30(ctx, base);
	// b 0x822b941c
	goto loc_822B941C;
loc_822B939C:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822b8b30
	ctx.lr = 0x822B93AC;
	sub_822B8B30(ctx, base);
	// b 0x822b941c
	goto loc_822B941C;
loc_822B93B0:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// beq cr6,0x822b93e0
	if (ctx.cr6.eq) goto loc_822B93E0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822b93cc
	if (!ctx.cr6.eq) goto loc_822B93CC;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
loc_822B93CC:
	// addi r6,r27,16
	ctx.r6.s64 = ctx.r27.s64 + 16;
	// addi r5,r27,12
	ctx.r5.s64 = ctx.r27.s64 + 12;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822b89b8
	ctx.lr = 0x822B93DC;
	sub_822B89B8(ctx, base);
	// b 0x822b941c
	goto loc_822B941C;
loc_822B93E0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822b93ec
	if (!ctx.cr6.eq) goto loc_822B93EC;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
loc_822B93EC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822b89b8
	ctx.lr = 0x822B93FC;
	sub_822B89B8(ctx, base);
	// b 0x822b941c
	goto loc_822B941C;
loc_822B9400:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822b9414
	if (!ctx.cr6.eq) goto loc_822B9414;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
loc_822B9414:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822b8810
	ctx.lr = 0x822B941C;
	sub_822B8810(ctx, base);
loc_822B941C:
	// lwz r3,12(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B9430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x822b9800
	if (!ctx.cr6.eq) goto loc_822B9800;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// stw r22,108(r23)
	PPC_STORE_U32(ctx.r23.u32 + 108, ctx.r22.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,25000(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25000);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B9458;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,100(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 100);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x822b9800
	if (!ctx.cr6.gt) goto loc_822B9800;
	// li r29,28
	ctx.r29.s64 = 28;
	// lis r25,-31885
	ctx.r25.s64 = -2089615360;
loc_822B9474:
	// lwz r11,96(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 96);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// add r30,r29,r11
	ctx.r30.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x8232e868
	ctx.lr = 0x822B948C;
	sub_8232E868(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82295ff0
	ctx.lr = 0x822B949C;
	sub_82295FF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822952c8
	ctx.lr = 0x822B94AC;
	sub_822952C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// bl 0x82295ff0
	ctx.lr = 0x822B94BC;
	sub_82295FF0(ctx, base);
	// lwz r11,312(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// stw r22,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r22.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b9518
	if (ctx.cr6.eq) goto loc_822B9518;
	// lwz r11,304(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// stw r22,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r22.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b9554
	if (ctx.cr6.eq) goto loc_822B9554;
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b94f4
	if (!ctx.cr6.eq) goto loc_822B94F4;
	// bl 0x822900a0
	ctx.lr = 0x822B94F0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822B94F4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B9510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r3.u32);
	// b 0x822b951c
	goto loc_822B951C;
loc_822B9518:
	// lwz r3,304(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
loc_822B951C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b9554
	if (ctx.cr6.eq) goto loc_822B9554;
	// lwz r11,28888(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b953c
	if (!ctx.cr6.eq) goto loc_822B953C;
	// bl 0x822900a0
	ctx.lr = 0x822B9538;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822B953C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B9554;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B9554:
	// lwz r11,296(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// stw r22,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r22.u32);
	// stw r22,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r22.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r22,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r22.u32);
	// stw r22,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r22.u32);
	// beq cr6,0x822b95bc
	if (ctx.cr6.eq) goto loc_822B95BC;
	// lwz r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// stw r22,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r22.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b95f8
	if (ctx.cr6.eq) goto loc_822B95F8;
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b9598
	if (!ctx.cr6.eq) goto loc_822B9598;
	// bl 0x822900a0
	ctx.lr = 0x822B9594;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822B9598:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B95B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r3.u32);
	// b 0x822b95c0
	goto loc_822B95C0;
loc_822B95BC:
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
loc_822B95C0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b95f8
	if (ctx.cr6.eq) goto loc_822B95F8;
	// lwz r11,28888(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b95e0
	if (!ctx.cr6.eq) goto loc_822B95E0;
	// bl 0x822900a0
	ctx.lr = 0x822B95DC;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822B95E0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B95F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B95F8:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r31,144(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r22,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r22.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r22,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r22.u32);
	// stw r22,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r22.u32);
	// beq cr6,0x822b9650
	if (ctx.cr6.eq) goto loc_822B9650;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822b9680
	if (ctx.cr6.eq) goto loc_822B9680;
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b9630
	if (!ctx.cr6.eq) goto loc_822B9630;
	// bl 0x822900a0
	ctx.lr = 0x822B962C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822B9630:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B964C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822B9650:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822b9680
	if (ctx.cr6.eq) goto loc_822B9680;
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b966c
	if (!ctx.cr6.eq) goto loc_822B966C;
	// bl 0x822900a0
	ctx.lr = 0x822B9668;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822B966C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B9680;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B9680:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r22,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r22.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r22,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r22.u32);
	// stw r22,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r22.u32);
	// bne cr6,0x822b96a0
	if (!ctx.cr6.eq) goto loc_822B96A0;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
loc_822B96A0:
	// lwz r3,28892(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28892);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B96B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// beq cr6,0x822b9740
	if (ctx.cr6.eq) goto loc_822B9740;
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b96d8
	if (!ctx.cr6.eq) goto loc_822B96D8;
	// bl 0x822900a0
	ctx.lr = 0x822B96D4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822B96D8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B96F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// addi r8,r30,20
	ctx.r8.s64 = ctx.r30.s64 + 20;
loc_822B96F8:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822b96f8
	if (!ctx.cr0.eq) goto loc_822B96F8;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B973C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822b9748
	goto loc_822B9748;
loc_822B9740:
	// stw r22,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r22.u32);
	// stw r22,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r22.u32);
loc_822B9748:
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r22,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r22.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b97a4
	if (ctx.cr6.eq) goto loc_822B97A4;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r22,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r22.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b97e0
	if (ctx.cr6.eq) goto loc_822B97E0;
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b9780
	if (!ctx.cr6.eq) goto loc_822B9780;
	// bl 0x822900a0
	ctx.lr = 0x822B977C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822B9780:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B979C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// b 0x822b97a8
	goto loc_822B97A8;
loc_822B97A4:
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
loc_822B97A8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b97e0
	if (ctx.cr6.eq) goto loc_822B97E0;
	// lwz r11,28888(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b97c8
	if (!ctx.cr6.eq) goto loc_822B97C8;
	// bl 0x822900a0
	ctx.lr = 0x822B97C4;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822B97C8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B97E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B97E0:
	// lwz r11,100(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 100);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r22,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r22.u32);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// stw r22,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r22.u32);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// stw r22,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r22.u32);
	// blt cr6,0x822b9474
	if (ctx.cr6.lt) goto loc_822B9474;
loc_822B9800:
	// lwz r11,76(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b9990
	if (!ctx.cr6.eq) goto loc_822B9990;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822ba0a0
	ctx.lr = 0x822B9814;
	sub_822BA0A0(ctx, base);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b985c
	if (ctx.cr6.eq) goto loc_822B985C;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x822b988c
	if (ctx.cr6.eq) goto loc_822B988C;
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b983c
	if (!ctx.cr6.eq) goto loc_822B983C;
	// bl 0x822900a0
	ctx.lr = 0x822B9838;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822B983C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B9858;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
loc_822B985C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x822b988c
	if (ctx.cr6.eq) goto loc_822B988C;
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b9878
	if (!ctx.cr6.eq) goto loc_822B9878;
	// bl 0x822900a0
	ctx.lr = 0x822B9874;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822B9878:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B988C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B988C:
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r31,160(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b98d8
	if (ctx.cr6.eq) goto loc_822B98D8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822b9908
	if (ctx.cr6.eq) goto loc_822B9908;
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b98b8
	if (!ctx.cr6.eq) goto loc_822B98B8;
	// bl 0x822900a0
	ctx.lr = 0x822B98B4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822B98B8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B98D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822B98D8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822b9908
	if (ctx.cr6.eq) goto loc_822B9908;
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b98f4
	if (!ctx.cr6.eq) goto loc_822B98F4;
	// bl 0x822900a0
	ctx.lr = 0x822B98F0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822B98F4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B9908;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B9908:
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r31,208(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b9954
	if (ctx.cr6.eq) goto loc_822B9954;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822b9984
	if (ctx.cr6.eq) goto loc_822B9984;
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b9934
	if (!ctx.cr6.eq) goto loc_822B9934;
	// bl 0x822900a0
	ctx.lr = 0x822B9930;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822B9934:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B9950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822B9954:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822b9984
	if (ctx.cr6.eq) goto loc_822B9984;
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b9970
	if (!ctx.cr6.eq) goto loc_822B9970;
	// bl 0x822900a0
	ctx.lr = 0x822B996C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822B9970:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B9984;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B9984:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822B9990:
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31588);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b99a4
	if (ctx.cr6.eq) goto loc_822B99A4;
	// bl 0x82d7c268
	ctx.lr = 0x822B99A4;
	sub_82D7C268(ctx, base);
loc_822B99A4:
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// lwz r3,76(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 76);
	// bl 0x833bb120
	ctx.lr = 0x822B99B0;
	sub_833BB120(ctx, base);
	// lwz r11,416(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// stw r11,64(r23)
	PPC_STORE_U32(ctx.r23.u32 + 64, ctx.r11.u32);
	// ble cr6,0x822b99e0
	if (!ctx.cr6.gt) goto loc_822B99E0;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lwz r3,76(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 76);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x833bac18
	ctx.lr = 0x822B99D0;
	sub_833BAC18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,76(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 76);
	// bl 0x833bcdb0
	ctx.lr = 0x822B99E0;
	sub_833BCDB0(ctx, base);
loc_822B99E0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,76(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 76);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// bl 0x833bb2f8
	ctx.lr = 0x822B99F0;
	sub_833BB2F8(ctx, base);
	// lwz r9,328(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r8,324(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// std r9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r8,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lfd f13,144(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lwz r30,160(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 160);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lwz r29,76(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + 76);
	// fdiv f10,f11,f12
	ctx.f10.f64 = ctx.f11.f64 / ctx.f12.f64;
	// stfd f10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f10.u64);
	// lwz r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r6,148(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r6,72(r23)
	PPC_STORE_U32(ctx.r23.u32 + 72, ctx.r6.u32);
	// stw r7,68(r23)
	PPC_STORE_U32(ctx.r23.u32 + 68, ctx.r7.u32);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822b9a74
	if (!ctx.cr6.eq) goto loc_822B9A74;
	// lis r31,-31882
	ctx.r31.s64 = -2089418752;
	// lwz r11,-21836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21836);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b9a60
	if (!ctx.cr6.eq) goto loc_822B9A60;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// lwz r3,25532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25532);
	// bl 0x8240d3e0
	ctx.lr = 0x822B9A58;
	sub_8240D3E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-21836(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21836, ctx.r11.u32);
loc_822B9A60:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x822bb4b0
	ctx.lr = 0x822B9A6C;
	sub_822BB4B0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_822B9A74:
	// lwz r4,76(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 76);
	// lwz r3,164(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 164);
	// bl 0x822ba9d0
	ctx.lr = 0x822B9A80;
	sub_822BA9D0(ctx, base);
	// stw r14,52(r23)
	PPC_STORE_U32(ctx.r23.u32 + 52, ctx.r14.u32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r23,40
	ctx.r3.s64 = ctx.r23.s64 + 40;
	// bl 0x82295908
	ctx.lr = 0x822B9A90;
	sub_82295908(ctx, base);
	// lwz r11,740(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r3,168(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 168);
	// stw r11,84(r23)
	PPC_STORE_U32(ctx.r23.u32 + 84, ctx.r11.u32);
	// bl 0x82428de0
	ctx.lr = 0x822B9AA4;
	sub_82428DE0(ctx, base);
	// lwz r10,200(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822b9aec
	if (ctx.cr6.eq) goto loc_822B9AEC;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x822b9b1c
	if (ctx.cr6.eq) goto loc_822B9B1C;
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b9acc
	if (!ctx.cr6.eq) goto loc_822B9ACC;
	// bl 0x822900a0
	ctx.lr = 0x822B9AC8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822B9ACC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B9AE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
loc_822B9AEC:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x822b9b1c
	if (ctx.cr6.eq) goto loc_822B9B1C;
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b9b08
	if (!ctx.cr6.eq) goto loc_822B9B08;
	// bl 0x822900a0
	ctx.lr = 0x822B9B04;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822B9B08:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B9B1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B9B1C:
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r31,160(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b9b68
	if (ctx.cr6.eq) goto loc_822B9B68;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822b9b98
	if (ctx.cr6.eq) goto loc_822B9B98;
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b9b48
	if (!ctx.cr6.eq) goto loc_822B9B48;
	// bl 0x822900a0
	ctx.lr = 0x822B9B44;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822B9B48:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B9B64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822B9B68:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822b9b98
	if (ctx.cr6.eq) goto loc_822B9B98;
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b9b84
	if (!ctx.cr6.eq) goto loc_822B9B84;
	// bl 0x822900a0
	ctx.lr = 0x822B9B80;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822B9B84:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B9B98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B9B98:
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r31,208(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b9be4
	if (ctx.cr6.eq) goto loc_822B9BE4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822b9c14
	if (ctx.cr6.eq) goto loc_822B9C14;
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b9bc4
	if (!ctx.cr6.eq) goto loc_822B9BC4;
	// bl 0x822900a0
	ctx.lr = 0x822B9BC0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822B9BC4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B9BE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822B9BE4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822b9c14
	if (ctx.cr6.eq) goto loc_822B9C14;
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b9c00
	if (!ctx.cr6.eq) goto loc_822B9C00;
	// bl 0x822900a0
	ctx.lr = 0x822B9BFC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822B9C00:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B9C14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B9C14:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B9C20"))) PPC_WEAK_FUNC(sub_822B9C20);
PPC_FUNC_IMPL(__imp__sub_822B9C20) {
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
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b9c80
	if (!ctx.cr6.eq) goto loc_822B9C80;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822b9c80
	if (ctx.cr6.eq) goto loc_822B9C80;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r10,108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x822b9c80
	if (!ctx.cr6.lt) goto loc_822B9C80;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r31.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
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
loc_822B9C80:
	// bl 0x822ba0a0
	ctx.lr = 0x822B9C84;
	sub_822BA0A0(ctx, base);
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

__attribute__((alias("__imp__sub_822B9C9C"))) PPC_WEAK_FUNC(sub_822B9C9C);
PPC_FUNC_IMPL(__imp__sub_822B9C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B9CA0"))) PPC_WEAK_FUNC(sub_822B9CA0);
PPC_FUNC_IMPL(__imp__sub_822B9CA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x822b9c20
	sub_822B9C20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B9CB0"))) PPC_WEAK_FUNC(sub_822B9CB0);
PPC_FUNC_IMPL(__imp__sub_822B9CB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B9CB4"))) PPC_WEAK_FUNC(sub_822B9CB4);
PPC_FUNC_IMPL(__imp__sub_822B9CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B9CB8"))) PPC_WEAK_FUNC(sub_822B9CB8);
PPC_FUNC_IMPL(__imp__sub_822B9CB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822bcae8
	sub_822BCAE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B9CC0"))) PPC_WEAK_FUNC(sub_822B9CC0);
PPC_FUNC_IMPL(__imp__sub_822B9CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x822B9CC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x833badd0
	ctx.lr = 0x822B9CDC;
	sub_833BADD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822b9cf0
	if (ctx.cr6.eq) goto loc_822B9CF0;
loc_822B9CE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_822B9CF0:
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x822baf10
	ctx.lr = 0x822B9CFC;
	sub_822BAF10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b9ce4
	if (ctx.cr6.eq) goto loc_822B9CE4;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x822bafc0
	ctx.lr = 0x822B9D10;
	sub_822BAFC0(ctx, base);
	// lwz r30,76(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833bc5d0
	ctx.lr = 0x822B9D1C;
	sub_833BC5D0(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b9d30
	if (ctx.cr6.eq) goto loc_822B9D30;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822bcae8
	ctx.lr = 0x822B9D30;
	sub_822BCAE8(ctx, base);
loc_822B9D30:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x833bab90
	ctx.lr = 0x822B9D38;
	sub_833BAB90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822b9d70
	if (ctx.cr6.eq) goto loc_822B9D70;
loc_822B9D40:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x833bcbd0
	ctx.lr = 0x822B9D48;
	sub_833BCBD0(ctx, base);
	// lwz r30,76(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833bc5d0
	ctx.lr = 0x822B9D54;
	sub_833BC5D0(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b9f04
	if (!ctx.cr6.eq) goto loc_822B9F04;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x833bab90
	ctx.lr = 0x822B9D68;
	sub_833BAB90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b9d40
	if (!ctx.cr6.eq) goto loc_822B9D40;
loc_822B9D70:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8240dd60
	ctx.lr = 0x822B9D7C;
	sub_8240DD60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x833bb2f8
	ctx.lr = 0x822B9D8C;
	sub_833BB2F8(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lwz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// lwz r7,68(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lwz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f0,-18184(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18184);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lfd f13,-18360(r6)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r6.u32 + -18360);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmul f10,f11,f0
	ctx.f10.f64 = ctx.f11.f64 * ctx.f0.f64;
	// li r27,0
	ctx.r27.s64 = 0;
	// fmadd f9,f10,f12,f13
	ctx.f9.f64 = ctx.f10.f64 * ctx.f12.f64 + ctx.f13.f64;
	// std r27,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r27.u64);
	// std r27,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r27.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r27,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r27.u64);
	// stw r27,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r27.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// fctidz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82428f68
	ctx.lr = 0x822B9E0C;
	sub_82428F68(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b9e94
	if (ctx.cr6.eq) goto loc_822B9E94;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b9e94
	if (ctx.cr6.eq) goto loc_822B9E94;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822bbe90
	ctx.lr = 0x822B9E30;
	sub_822BBE90(ctx, base);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,-31232(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31232);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,268(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 268);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822B9E5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82295908
	ctx.lr = 0x822B9E68;
	sub_82295908(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82299080
	ctx.lr = 0x822B9E70;
	sub_82299080(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b9e88
	if (ctx.cr6.eq) goto loc_822B9E88;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822b9e94
	if (!ctx.cr6.eq) goto loc_822B9E94;
loc_822B9E88:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82295908
	ctx.lr = 0x822B9E94;
	sub_82295908(ctx, base);
loc_822B9E94:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,112(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// bl 0x823bcd80
	ctx.lr = 0x822B9EA4;
	sub_823BCD80(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,11272
	ctx.r29.s64 = ctx.r11.s64 + 11272;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r9,r11,-130
	ctx.r9.s64 = ctx.r11.s64 + -130;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r28,r8,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822ba000
	if (ctx.cr6.eq) goto loc_822BA000;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822bd198
	ctx.lr = 0x822B9ECC;
	sub_822BD198(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bne cr6,0x822b9ee0
	if (!ctx.cr6.eq) goto loc_822B9EE0;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_822B9EE0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-18328
	ctx.r4.s64 = ctx.r11.s64 + -18328;
	// bl 0x82cb0328
	ctx.lr = 0x822B9EF0;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b9f0c
	if (!ctx.cr6.eq) goto loc_822B9F0C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-18320
	ctx.r4.s64 = ctx.r11.s64 + -18320;
	// b 0x822b9fdc
	goto loc_822B9FDC;
loc_822B9F04:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822bcae8
	ctx.lr = 0x822B9F0C;
	sub_822BCAE8(ctx, base);
loc_822B9F0C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-18304
	ctx.r4.s64 = ctx.r11.s64 + -18304;
	// bl 0x82cb0328
	ctx.lr = 0x822B9F1C;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b9f30
	if (!ctx.cr6.eq) goto loc_822B9F30;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-18296
	ctx.r4.s64 = ctx.r11.s64 + -18296;
	// b 0x822b9fdc
	goto loc_822B9FDC;
loc_822B9F30:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-18280
	ctx.r4.s64 = ctx.r11.s64 + -18280;
	// bl 0x82cb0328
	ctx.lr = 0x822B9F40;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b9f54
	if (!ctx.cr6.eq) goto loc_822B9F54;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-18272
	ctx.r4.s64 = ctx.r11.s64 + -18272;
	// b 0x822b9fdc
	goto loc_822B9FDC;
loc_822B9F54:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-18260
	ctx.r4.s64 = ctx.r11.s64 + -18260;
	// bl 0x82cb0328
	ctx.lr = 0x822B9F64;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b9f78
	if (!ctx.cr6.eq) goto loc_822B9F78;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-18252
	ctx.r4.s64 = ctx.r11.s64 + -18252;
	// b 0x822b9fdc
	goto loc_822B9FDC;
loc_822B9F78:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-18240
	ctx.r4.s64 = ctx.r11.s64 + -18240;
	// bl 0x82cb0328
	ctx.lr = 0x822B9F88;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b9f9c
	if (!ctx.cr6.eq) goto loc_822B9F9C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-18252
	ctx.r4.s64 = ctx.r11.s64 + -18252;
	// b 0x822b9fdc
	goto loc_822B9FDC;
loc_822B9F9C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-18232
	ctx.r4.s64 = ctx.r11.s64 + -18232;
	// bl 0x82cb0328
	ctx.lr = 0x822B9FAC;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b9fc0
	if (!ctx.cr6.eq) goto loc_822B9FC0;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-18252
	ctx.r4.s64 = ctx.r11.s64 + -18252;
	// b 0x822b9fdc
	goto loc_822B9FDC;
loc_822B9FC0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-26732
	ctx.r4.s64 = ctx.r11.s64 + -26732;
	// bl 0x82cb0328
	ctx.lr = 0x822B9FD0;
	sub_82CB0328(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r4,r11,-18224
	ctx.r4.s64 = ctx.r11.s64 + -18224;
loc_822B9FDC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82295680
	ctx.lr = 0x822B9FE4;
	sub_82295680(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82295908
	ctx.lr = 0x822B9FF0;
	sub_82295908(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82299080
	ctx.lr = 0x822B9FF8;
	sub_82299080(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x822BA000;
	sub_82299080(ctx, base);
loc_822BA000:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822ba014
	if (!ctx.cr6.eq) goto loc_822BA014;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_822BA014:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x822bb070
	ctx.lr = 0x822BA024;
	sub_822BB070(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,112(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// bl 0x823bce38
	ctx.lr = 0x822BA03C;
	sub_823BCE38(ctx, base);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// rlwinm r8,r9,0,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822ba070
	if (!ctx.cr6.eq) goto loc_822BA070;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822ba070
	if (ctx.cr6.lt) goto loc_822BA070;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ba0a0
	ctx.lr = 0x822BA068;
	sub_822BA0A0(ctx, base);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// b 0x822ba078
	goto loc_822BA078;
loc_822BA070:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x833bcbd0
	ctx.lr = 0x822BA078;
	sub_833BCBD0(ctx, base);
loc_822BA078:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x822BA080;
	sub_82299080(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x822BA088;
	sub_82299080(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822bbf20
	ctx.lr = 0x822BA090;
	sub_822BBF20(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BA09C"))) PPC_WEAK_FUNC(sub_822BA09C);
PPC_FUNC_IMPL(__imp__sub_822BA09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BA0A0"))) PPC_WEAK_FUNC(sub_822BA0A0);
PPC_FUNC_IMPL(__imp__sub_822BA0A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x822BA0A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r8,76(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r26,r11,-16712
	ctx.r26.s64 = ctx.r11.s64 + -16712;
	// lfs f0,-15120(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822ba144
	if (ctx.cr6.eq) goto loc_822BA144;
	// lwz r30,160(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822ba138
	if (ctx.cr6.eq) goto loc_822BA138;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ba104
	if (ctx.cr6.eq) goto loc_822BA104;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x822bb538
	ctx.lr = 0x822BA100;
	sub_822BB538(ctx, base);
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
loc_822BA104:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,112(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// bl 0x823bcd80
	ctx.lr = 0x822BA114;
	sub_823BCD80(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x822bb3f0
	ctx.lr = 0x822BA120;
	sub_822BB3F0(ctx, base);
	// lwz r9,160(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r3,112(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// bl 0x823bce38
	ctx.lr = 0x822BA138;
	sub_823BCE38(ctx, base);
loc_822BA138:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x833bcfb8
	ctx.lr = 0x822BA140;
	sub_833BCFB8(ctx, base);
	// stw r27,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r27.u32);
loc_822BA144:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822ba1a4
	if (!ctx.cr6.eq) goto loc_822BA1A4;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822ba1a4
	if (!ctx.cr6.gt) goto loc_822BA1A4;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_822BA164:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// add r30,r29,r11
	ctx.r30.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ba190
	if (!ctx.cr6.eq) goto loc_822BA190;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ba190
	if (ctx.cr6.eq) goto loc_822BA190;
	// bl 0x82294a58
	ctx.lr = 0x822BA188;
	sub_82294A58(ctx, base);
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// stw r27,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r27.u32);
loc_822BA190:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822ba164
	if (ctx.cr6.lt) goto loc_822BA164;
loc_822BA1A4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ba200
	if (ctx.cr6.eq) goto loc_822BA200;
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822ba200
	if (ctx.cr6.eq) goto loc_822BA200;
	// lis r29,-31885
	ctx.r29.s64 = -2089615360;
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ba1e0
	if (!ctx.cr6.eq) goto loc_822BA1E0;
	// bl 0x822900a0
	ctx.lr = 0x822BA1DC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
loc_822BA1E0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822BA1FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_822BA200:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ba2e0
	ctx.lr = 0x822BA208;
	sub_822BA2E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ba2d4
	if (!ctx.cr6.eq) goto loc_822BA2D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ba518
	ctx.lr = 0x822BA218;
	sub_822BA518(ctx, base);
	// lwz r30,160(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822ba294
	if (ctx.cr6.eq) goto loc_822BA294;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ba23c
	if (ctx.cr6.eq) goto loc_822BA23C;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x822bb538
	ctx.lr = 0x822BA238;
	sub_822BB538(ctx, base);
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
loc_822BA23C:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,112(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// bl 0x823bcd80
	ctx.lr = 0x822BA24C;
	sub_823BCD80(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x822bb3f0
	ctx.lr = 0x822BA258;
	sub_822BB3F0(ctx, base);
	// lwz r9,160(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r3,112(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// bl 0x823bce38
	ctx.lr = 0x822BA270;
	sub_823BCE38(ctx, base);
	// lis r7,-31884
	ctx.r7.s64 = -2089549824;
	// stw r27,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r27.u32);
	// lis r6,-31883
	ctx.r6.s64 = -2089484288;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r11,25288(r7)
	PPC_STORE_U32(ctx.r7.u32 + 25288, ctx.r11.u32);
	// lwz r11,-31588(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -31588);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ba294
	if (ctx.cr6.eq) goto loc_822BA294;
	// bl 0x82d7c340
	ctx.lr = 0x822BA294;
	sub_82D7C340(ctx, base);
loc_822BA294:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ba2a8
	if (ctx.cr6.eq) goto loc_822BA2A8;
	// bl 0x833bcfb8
	ctx.lr = 0x822BA2A4;
	sub_833BCFB8(ctx, base);
	// stw r27,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r27.u32);
loc_822BA2A8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-31906
	ctx.r9.s64 = -2090991616;
	// lis r8,-31890
	ctx.r8.s64 = -2089943040;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,20364(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20364, ctx.r11.u32);
	// stw r10,26516(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26516, ctx.r10.u32);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822BA2D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822BA2D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BA2DC"))) PPC_WEAK_FUNC(sub_822BA2DC);
PPC_FUNC_IMPL(__imp__sub_822BA2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BA2E0"))) PPC_WEAK_FUNC(sub_822BA2E0);
PPC_FUNC_IMPL(__imp__sub_822BA2E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x822BA2E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822ba30c
	if (ctx.cr6.lt) goto loc_822BA30C;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822ba31c
	if (ctx.cr6.lt) goto loc_822BA31C;
loc_822BA30C:
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_822BA31C:
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822ba354
	if (!ctx.cr6.eq) goto loc_822BA354;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ba354
	if (ctx.cr6.eq) goto loc_822BA354;
	// bl 0x82294a58
	ctx.lr = 0x822BA34C;
	sub_82294A58(ctx, base);
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// stw r27,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r27.u32);
loc_822BA354:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x822ba3a8
	if (!ctx.cr6.lt) goto loc_822BA3A8;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
loc_822BA374:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822ba3a8
	if (!ctx.cr6.eq) goto loc_822BA3A8;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r7,108(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822ba374
	if (ctx.cr6.lt) goto loc_822BA374;
loc_822BA3A8:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822ba3bc
	if (ctx.cr6.lt) goto loc_822BA3BC;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822ba3d4
	if (ctx.cr6.lt) goto loc_822BA3D4;
loc_822BA3BC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_822BA3D4:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwz r8,108(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mulli r11,r8,28
	ctx.r11.s64 = ctx.r8.s64 * 28;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// addi r30,r29,20
	ctx.r30.s64 = ctx.r29.s64 + 20;
	// rlwinm r28,r6,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// lwz r5,20(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x822ba41c
	if (ctx.cr6.eq) goto loc_822BA41C;
loc_822BA408:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82e645c8
	ctx.lr = 0x822BA410;
	sub_82E645C8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822ba408
	if (!ctx.cr6.eq) goto loc_822BA408;
loc_822BA41C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822ba448
	if (ctx.cr6.eq) goto loc_822BA448;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ba448
	if (ctx.cr6.eq) goto loc_822BA448;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_822BA448:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ba45c
	if (ctx.cr6.eq) goto loc_822BA45C;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x822ba464
	goto loc_822BA464;
loc_822BA45C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r11,11272
	ctx.r5.s64 = ctx.r11.s64 + 11272;
loc_822BA464:
	// subfic r11,r28,0
	ctx.xer.ca = ctx.r28.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r28.s64;
	// lwz r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r11,r10,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x822b8dc0
	ctx.lr = 0x822BA48C;
	sub_822B8DC0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BA498"))) PPC_WEAK_FUNC(sub_822BA498);
PPC_FUNC_IMPL(__imp__sub_822BA498) {
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
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ba500
	if (!ctx.cr6.eq) goto loc_822BA500;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ba4cc
	if (ctx.cr6.eq) goto loc_822BA4CC;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x833bc558
	ctx.lr = 0x822BA4CC;
	sub_833BC558(ctx, base);
loc_822BA4CC:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,25000(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25000);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822BA4E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822BA4F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r6,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
loc_822BA500:
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

__attribute__((alias("__imp__sub_822BA514"))) PPC_WEAK_FUNC(sub_822BA514);
PPC_FUNC_IMPL(__imp__sub_822BA514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BA518"))) PPC_WEAK_FUNC(sub_822BA518);
PPC_FUNC_IMPL(__imp__sub_822BA518) {
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
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ba580
	if (ctx.cr6.eq) goto loc_822BA580;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ba54c
	if (ctx.cr6.eq) goto loc_822BA54C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x833bc558
	ctx.lr = 0x822BA54C;
	sub_833BC558(ctx, base);
loc_822BA54C:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,25000(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25000);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822BA568;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822BA578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r6,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
loc_822BA580:
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

__attribute__((alias("__imp__sub_822BA594"))) PPC_WEAK_FUNC(sub_822BA594);
PPC_FUNC_IMPL(__imp__sub_822BA594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BA598"))) PPC_WEAK_FUNC(sub_822BA598);
PPC_FUNC_IMPL(__imp__sub_822BA598) {
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
	// bl 0x82294bb8
	ctx.lr = 0x822BA5B8;
	sub_82294BB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_822BA5E8"))) PPC_WEAK_FUNC(sub_822BA5E8);
PPC_FUNC_IMPL(__imp__sub_822BA5E8) {
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
	// beq cr6,0x822ba60c
	if (ctx.cr6.eq) goto loc_822BA60C;
	// bl 0x82294a58
	ctx.lr = 0x822BA60C;
	sub_82294A58(ctx, base);
loc_822BA60C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822ba634
	if (ctx.cr6.eq) goto loc_822BA634;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x822BA634;
	sub_82294520(ctx, base);
loc_822BA634:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x822BA63C;
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

__attribute__((alias("__imp__sub_822BA650"))) PPC_WEAK_FUNC(sub_822BA650);
PPC_FUNC_IMPL(__imp__sub_822BA650) {
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
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r8,-31940
	ctx.r8.s64 = -2093219840;
	// lfs f0,-18068(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18068);
	ctx.f0.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f13,-18324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18324);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r8,-8280
	ctx.r3.s64 = ctx.r8.s64 + -8280;
	// lfs f12,-32444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x833b8cb0
	ctx.lr = 0x822BA69C;
	sub_833B8CB0(ctx, base);
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

__attribute__((alias("__imp__sub_822BA6B4"))) PPC_WEAK_FUNC(sub_822BA6B4);
PPC_FUNC_IMPL(__imp__sub_822BA6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BA6B8"))) PPC_WEAK_FUNC(sub_822BA6B8);
PPC_FUNC_IMPL(__imp__sub_822BA6B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x822BA6C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r30,-31884
	ctx.r30.s64 = -2089549824;
	// addi r29,r11,-32444
	ctx.r29.s64 = ctx.r11.s64 + -32444;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,25344(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25344);
	// lfs f0,4676(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4676);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// beq cr6,0x822ba7c4
	if (ctx.cr6.eq) goto loc_822BA7C4;
	// lwz r10,736(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 736);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ba7c4
	if (ctx.cr6.eq) goto loc_822BA7C4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822BA70C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ba7c4
	if (ctx.cr6.eq) goto loc_822BA7C4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-18212
	ctx.r4.s64 = ctx.r11.s64 + -18212;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x822BA730;
	sub_8233E028(ctx, base);
	// lwz r11,25344(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25344);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r3,736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 736);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,288(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 288);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822BA750;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// bl 0x82416008
	ctx.lr = 0x822BA75C;
	sub_82416008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ba76c
	if (ctx.cr6.eq) goto loc_822BA76C;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_822BA76C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-18184
	ctx.r4.s64 = ctx.r11.s64 + -18184;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x822BA788;
	sub_8233E028(ctx, base);
	// lwz r11,25344(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25344);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r3,736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 736);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,288(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 288);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822BA7A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// bl 0x82416008
	ctx.lr = 0x822BA7B4;
	sub_82416008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ba7c4
	if (ctx.cr6.eq) goto loc_822BA7C4;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_822BA7C4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f12,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x822ba7e4
	if (!ctx.cr6.lt) goto loc_822BA7E4;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// b 0x822ba7f0
	goto loc_822BA7F0;
loc_822BA7E4:
	// fcmpu cr6,f12,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// blt cr6,0x822ba7f0
	if (ctx.cr6.lt) goto loc_822BA7F0;
	// fmr f12,f10
	ctx.f12.f64 = ctx.f10.f64;
loc_822BA7F0:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// lfs f13,-17812(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17812);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// bge cr6,0x822ba81c
	if (!ctx.cr6.lt) goto loc_822BA81C;
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_822BA81C:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x822ba834
	if (!ctx.cr6.lt) goto loc_822BA834;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_822BA834:
	// fmuls f0,f10,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BA844"))) PPC_WEAK_FUNC(sub_822BA844);
PPC_FUNC_IMPL(__imp__sub_822BA844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BA848"))) PPC_WEAK_FUNC(sub_822BA848);
PPC_FUNC_IMPL(__imp__sub_822BA848) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-18324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822ba88c
	if (!ctx.cr6.eq) goto loc_822BA88C;
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r10,-20192
	ctx.r3.s64 = ctx.r10.s64 + -20192;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bl 0x82346628
	ctx.lr = 0x822BA88C;
	sub_82346628(ctx, base);
loc_822BA88C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-31906
	ctx.r9.s64 = -2090991616;
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f31,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f31,20372(r9)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20372, temp.u32);
	// lwz r3,25348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25348);
	// bl 0x82356400
	ctx.lr = 0x822BA8B8;
	sub_82356400(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x822ba8d4
	if (!ctx.cr6.gt) goto loc_822BA8D4;
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// lwz r3,25348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25348);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823564a8
	ctx.lr = 0x822BA8D4;
	sub_823564A8(ctx, base);
loc_822BA8D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_822BA8F0"))) PPC_WEAK_FUNC(sub_822BA8F0);
PPC_FUNC_IMPL(__imp__sub_822BA8F0) {
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
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,-18324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x822ba958
	if (ctx.cr6.eq) goto loc_822BA958;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lfs f1,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,25348(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25348);
	// bl 0x823564a8
	ctx.lr = 0x822BA92C;
	sub_823564A8(ctx, base);
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// stfs f31,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r3,r10,-20192
	ctx.r3.s64 = ctx.r10.s64 + -20192;
	// lis r8,-31906
	ctx.r8.s64 = -2090991616;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,-32444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stfs f0,20372(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20372, temp.u32);
	// bl 0x82346628
	ctx.lr = 0x822BA958;
	sub_82346628(ctx, base);
loc_822BA958:
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

__attribute__((alias("__imp__sub_822BA970"))) PPC_WEAK_FUNC(sub_822BA970);
PPC_FUNC_IMPL(__imp__sub_822BA970) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// bl 0x822bab90
	ctx.lr = 0x822BA9A8;
	sub_822BAB90(ctx, base);
	// addi r6,r3,5
	ctx.r6.s64 = ctx.r3.s64 + 5;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x833b9378
	ctx.lr = 0x822BA9BC;
	sub_833B9378(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BA9CC"))) PPC_WEAK_FUNC(sub_822BA9CC);
PPC_FUNC_IMPL(__imp__sub_822BA9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BA9D0"))) PPC_WEAK_FUNC(sub_822BA9D0);
PPC_FUNC_IMPL(__imp__sub_822BA9D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x822BA9D8;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r24,2
	ctx.r24.s64 = 2;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// li r25,3
	ctx.r25.s64 = 3;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r26,4
	ctx.r26.s64 = 4;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// bl 0x822bab90
	ctx.lr = 0x822BAA0C;
	sub_822BAB90(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r10,r3,5
	ctx.r10.s64 = ctx.r3.s64 + 5;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x822baad0
	if (ctx.cr6.lt) goto loc_822BAAD0;
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// li r23,6
	ctx.r23.s64 = 6;
	// li r22,5
	ctx.r22.s64 = 5;
loc_822BAA2C:
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,22937
	ctx.r5.s64 = 22937;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x833bbd80
	ctx.lr = 0x822BAA40;
	sub_833BBD80(ctx, base);
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// bgt cr6,0x822baaa4
	if (ctx.cr6.gt) goto loc_822BAAA4;
	// lis r12,-32212
	ctx.r12.s64 = -2111045632;
	// addi r12,r12,-21920
	ctx.r12.s64 = ctx.r12.s64 + -21920;
	// rlwinm r0,r30,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r30.u64) {
	case 0:
		goto loc_822BAA74;
	case 1:
		goto loc_822BAA84;
	case 2:
		goto loc_822BAA8C;
	case 3:
		goto loc_822BAA94;
	case 4:
		goto loc_822BAA9C;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-21900(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21900);
	// lwz r17,-21884(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21884);
	// lwz r17,-21876(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21876);
	// lwz r17,-21868(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21868);
	// lwz r17,-21860(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21860);
loc_822BAA74:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// b 0x822baaac
	goto loc_822BAAAC;
loc_822BAA84:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// b 0x822baaa8
	goto loc_822BAAA8;
loc_822BAA8C:
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// b 0x822baaa8
	goto loc_822BAAA8;
loc_822BAA94:
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// b 0x822baaa8
	goto loc_822BAAA8;
loc_822BAA9C:
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// b 0x822baaa8
	goto loc_822BAAA8;
loc_822BAAA4:
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
loc_822BAAA8:
	// li r6,1
	ctx.r6.s64 = 1;
loc_822BAAAC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833bbe10
	ctx.lr = 0x822BAABC;
	sub_833BBE10(ctx, base);
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x822baa2c
	if (!ctx.cr0.eq) goto loc_822BAA2C;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_822BAAD0:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822bab54
	if (!ctx.cr6.eq) goto loc_822BAB54;
	// li r5,22937
	ctx.r5.s64 = 22937;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833bbd80
	ctx.lr = 0x822BAAE8;
	sub_833BBD80(ctx, base);
	// li r5,22937
	ctx.r5.s64 = 22937;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833bbd80
	ctx.lr = 0x822BAAF8;
	sub_833BBD80(ctx, base);
	// li r5,22937
	ctx.r5.s64 = 22937;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833bbd80
	ctx.lr = 0x822BAB08;
	sub_833BBD80(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833bbe10
	ctx.lr = 0x822BAB24;
	sub_833BBE10(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833bbe10
	ctx.lr = 0x822BAB44;
	sub_833BBE10(ctx, base);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x822bab78
	goto loc_822BAB78;
loc_822BAB54:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822bab88
	if (!ctx.cr6.gt) goto loc_822BAB88;
	// li r5,22937
	ctx.r5.s64 = 22937;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833bbd80
	ctx.lr = 0x822BAB6C;
	sub_833BBD80(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
loc_822BAB78:
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833bbe10
	ctx.lr = 0x822BAB88;
	sub_833BBE10(ctx, base);
loc_822BAB88:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BAB90"))) PPC_WEAK_FUNC(sub_822BAB90);
PPC_FUNC_IMPL(__imp__sub_822BAB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x822BAB98;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bl 0x822bd198
	ctx.lr = 0x822BABAC;
	sub_822BD198(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822babc0
	if (ctx.cr6.eq) goto loc_822BABC0;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x822babc8
	goto loc_822BABC8;
loc_822BABC0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r31,r11,11272
	ctx.r31.s64 = ctx.r11.s64 + 11272;
loc_822BABC8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18328
	ctx.r4.s64 = ctx.r11.s64 + -18328;
	// bl 0x82cb0328
	ctx.lr = 0x822BABD8;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822babe8
	if (!ctx.cr6.eq) goto loc_822BABE8;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x822bac74
	goto loc_822BAC74;
loc_822BABE8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18304
	ctx.r4.s64 = ctx.r11.s64 + -18304;
	// bl 0x82cb0328
	ctx.lr = 0x822BABF8;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bac08
	if (!ctx.cr6.eq) goto loc_822BAC08;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x822bac74
	goto loc_822BAC74;
loc_822BAC08:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18280
	ctx.r4.s64 = ctx.r11.s64 + -18280;
	// bl 0x82cb0328
	ctx.lr = 0x822BAC18;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bac28
	if (!ctx.cr6.eq) goto loc_822BAC28;
	// li r30,3
	ctx.r30.s64 = 3;
	// b 0x822bac74
	goto loc_822BAC74;
loc_822BAC28:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18260
	ctx.r4.s64 = ctx.r11.s64 + -18260;
	// bl 0x82cb0328
	ctx.lr = 0x822BAC38;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bac70
	if (ctx.cr6.eq) goto loc_822BAC70;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18240
	ctx.r4.s64 = ctx.r11.s64 + -18240;
	// bl 0x82cb0328
	ctx.lr = 0x822BAC50;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bac70
	if (ctx.cr6.eq) goto loc_822BAC70;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18232
	ctx.r4.s64 = ctx.r11.s64 + -18232;
	// bl 0x82cb0328
	ctx.lr = 0x822BAC68;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bac74
	if (!ctx.cr6.eq) goto loc_822BAC74;
loc_822BAC70:
	// li r30,4
	ctx.r30.s64 = 4;
loc_822BAC74:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bac98
	if (ctx.cr6.eq) goto loc_822BAC98;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294520
	ctx.lr = 0x822BAC98;
	sub_82294520(ctx, base);
loc_822BAC98:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294cc8
	ctx.lr = 0x822BACA0;
	sub_82294CC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BACAC"))) PPC_WEAK_FUNC(sub_822BACAC);
PPC_FUNC_IMPL(__imp__sub_822BACAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BACB0"))) PPC_WEAK_FUNC(sub_822BACB0);
PPC_FUNC_IMPL(__imp__sub_822BACB0) {
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
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-17844
	ctx.r9.s64 = ctx.r10.s64 + -17844;
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x822bada8
	ctx.lr = 0x822BACE8;
	sub_822BADA8(ctx, base);
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

__attribute__((alias("__imp__sub_822BAD00"))) PPC_WEAK_FUNC(sub_822BAD00);
PPC_FUNC_IMPL(__imp__sub_822BAD00) {
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
	// bl 0x822bad50
	ctx.lr = 0x822BAD20;
	sub_822BAD50(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bad38
	if (ctx.cr6.eq) goto loc_822BAD38;
	// bl 0x82294a58
	ctx.lr = 0x822BAD34;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822BAD38:
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

__attribute__((alias("__imp__sub_822BAD50"))) PPC_WEAK_FUNC(sub_822BAD50);
PPC_FUNC_IMPL(__imp__sub_822BAD50) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r9,r11,-17844
	ctx.r9.s64 = ctx.r11.s64 + -17844;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822bad8c
	if (ctx.cr6.eq) goto loc_822BAD8C;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x822bb538
	ctx.lr = 0x822BAD84;
	sub_822BB538(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_822BAD8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822baea0
	ctx.lr = 0x822BAD94;
	sub_822BAEA0(ctx, base);
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

__attribute__((alias("__imp__sub_822BADA8"))) PPC_WEAK_FUNC(sub_822BADA8);
PPC_FUNC_IMPL(__imp__sub_822BADA8) {
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
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822bae84
	if (!ctx.cr6.eq) goto loc_822BAE84;
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lwz r11,25344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bae30
	if (ctx.cr6.eq) goto loc_822BAE30;
	// lwz r10,736(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 736);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822bae30
	if (ctx.cr6.eq) goto loc_822BAE30;
	// lwz r11,752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 752);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bae30
	if (ctx.cr6.eq) goto loc_822BAE30;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bae30
	if (ctx.cr6.eq) goto loc_822BAE30;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,1176
	ctx.r3.s64 = 1176;
	// bl 0x822959a8
	ctx.lr = 0x822BAE0C;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bae7c
	if (ctx.cr6.eq) goto loc_822BAE7C;
	// lwz r11,25344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25344);
	// lwz r11,752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 752);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x822bae48
	if (!ctx.cr6.eq) goto loc_822BAE48;
	// b 0x822bae44
	goto loc_822BAE44;
loc_822BAE30:
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,1176
	ctx.r3.s64 = 1176;
	// bl 0x822959a8
	ctx.lr = 0x822BAE3C;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bae7c
	if (ctx.cr6.eq) goto loc_822BAE7C;
loc_822BAE44:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822BAE48:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lis r7,-31906
	ctx.r7.s64 = -2090991616;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r6,r6,-18160
	ctx.r6.s64 = ctx.r6.s64 + -18160;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,22036(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22036);
	// lwz r7,22032(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 22032);
	// bl 0x82429a00
	ctx.lr = 0x822BAE70;
	sub_82429A00(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822bae80
	if (!ctx.cr6.eq) goto loc_822BAE80;
loc_822BAE7C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822BAE80:
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_822BAE84:
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

__attribute__((alias("__imp__sub_822BAE9C"))) PPC_WEAK_FUNC(sub_822BAE9C);
PPC_FUNC_IMPL(__imp__sub_822BAE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BAEA0"))) PPC_WEAK_FUNC(sub_822BAEA0);
PPC_FUNC_IMPL(__imp__sub_822BAEA0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822baef0
	if (ctx.cr6.eq) goto loc_822BAEF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822BAED4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
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
loc_822BAEF0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_822BAF0C"))) PPC_WEAK_FUNC(sub_822BAF0C);
PPC_FUNC_IMPL(__imp__sub_822BAF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BAF10"))) PPC_WEAK_FUNC(sub_822BAF10);
PPC_FUNC_IMPL(__imp__sub_822BAF10) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822baf58
	if (!ctx.cr6.eq) goto loc_822BAF58;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r11,-21836
	ctx.r3.s64 = ctx.r11.s64 + -21836;
	// bl 0x822bb590
	ctx.lr = 0x822BAF44;
	sub_822BB590(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x822bb4b0
	ctx.lr = 0x822BAF50;
	sub_822BB4B0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_822BAF58:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_822BAF74"))) PPC_WEAK_FUNC(sub_822BAF74);
PPC_FUNC_IMPL(__imp__sub_822BAF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BAF78"))) PPC_WEAK_FUNC(sub_822BAF78);
PPC_FUNC_IMPL(__imp__sub_822BAF78) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bafa8
	if (ctx.cr6.eq) goto loc_822BAFA8;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x822bb538
	ctx.lr = 0x822BAFA0;
	sub_822BB538(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_822BAFA8:
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

__attribute__((alias("__imp__sub_822BAFBC"))) PPC_WEAK_FUNC(sub_822BAFBC);
PPC_FUNC_IMPL(__imp__sub_822BAFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BAFC0"))) PPC_WEAK_FUNC(sub_822BAFC0);
PPC_FUNC_IMPL(__imp__sub_822BAFC0) {
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
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// bl 0x833b96b8
	ctx.lr = 0x822BAFE4;
	sub_833B96B8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x822bb010
	if (!ctx.cr6.lt) goto loc_822BB010;
	// rlwinm r9,r10,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822bb014
	if (!ctx.cr6.eq) goto loc_822BB014;
loc_822BB010:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822BB014:
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bb02c
	if (ctx.cr6.eq) goto loc_822BB02C;
	// bl 0x82e892e8
	ctx.lr = 0x822BB02C;
	sub_82E892E8(ctx, base);
loc_822BB02C:
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

__attribute__((alias("__imp__sub_822BB040"))) PPC_WEAK_FUNC(sub_822BB040);
PPC_FUNC_IMPL(__imp__sub_822BB040) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x8240dd60
	sub_8240DD60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BB048"))) PPC_WEAK_FUNC(sub_822BB048);
PPC_FUNC_IMPL(__imp__sub_822BB048) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// b 0x823bcd80
	sub_823BCD80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BB054"))) PPC_WEAK_FUNC(sub_822BB054);
PPC_FUNC_IMPL(__imp__sub_822BB054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BB058"))) PPC_WEAK_FUNC(sub_822BB058);
PPC_FUNC_IMPL(__imp__sub_822BB058) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// b 0x823bce38
	sub_823BCE38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BB06C"))) PPC_WEAK_FUNC(sub_822BB06C);
PPC_FUNC_IMPL(__imp__sub_822BB06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BB070"))) PPC_WEAK_FUNC(sub_822BB070);
PPC_FUNC_IMPL(__imp__sub_822BB070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x822BB078;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6ae8
	ctx.lr = 0x822BB080;
	__savefpr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-16712
	ctx.r4.s64 = ctx.r11.s64 + -16712;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x822bb3f0
	ctx.lr = 0x822BB09C;
	sub_822BB3F0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f31,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822BB0BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x822BB0D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// extsw r3,r29
	ctx.r3.s64 = ctx.r29.s32;
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r9,68(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r7,72(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// fcfid f7,f11
	ctx.f7.f64 = double(ctx.f11.s64);
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f8,96(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// lfd f11,-17416(r6)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r6.u32 + -17416);
	// frsp f13,f9
	ctx.f13.f64 = double(float(ctx.f9.f64));
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// fdivs f12,f10,f13
	ctx.f12.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// fdivs f0,f5,f4
	ctx.f0.f64 = double(float(ctx.f5.f64 / ctx.f4.f64));
	// fsubs f3,f12,f0
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fcmpu cr6,f3,f11
	ctx.cr6.compare(ctx.f3.f64, ctx.f11.f64);
	// ble cr6,0x822bb1ac
	if (!ctx.cr6.gt) goto loc_822BB1AC;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822BB170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// extsw r8,r29
	ctx.r8.s64 = ctx.r29.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f12,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f0,-28844(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmsubs f31,f7,f0,f6
	ctx.f31.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 - ctx.f6.f64));
	// b 0x822bb214
	goto loc_822BB214;
loc_822BB1AC:
	// fsubs f13,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x822bb214
	if (!ctx.cr6.gt) goto loc_822BB214;
	// fdivs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822BB1DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// extsw r8,r30
	ctx.r8.s64 = ctx.r30.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f12,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f0,-28844(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmsubs f30,f7,f0,f6
	ctx.f30.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 - ctx.f6.f64));
loc_822BB214:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r10,-31887
	ctx.r10.s64 = -2089746432;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// addi r28,r11,-32344
	ctx.r28.s64 = ctx.r11.s64 + -32344;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,25532(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25532);
	// lfs f5,-100(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -100);
	ctx.f5.f64 = double(temp.f32);
	// fmr f4,f5
	ctx.f4.f64 = ctx.f5.f64;
	// fmr f3,f5
	ctx.f3.f64 = ctx.f5.f64;
	// bl 0x8240d990
	ctx.lr = 0x822BB248;
	sub_8240D990(ctx, base);
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// lwz r11,25344(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bb3dc
	if (ctx.cr6.eq) goto loc_822BB3DC;
	// lwz r10,736(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 736);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822bb3dc
	if (ctx.cr6.eq) goto loc_822BB3DC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822bb28c
	if (ctx.cr6.eq) goto loc_822BB28C;
	// lhz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822bb28c
	if (ctx.cr6.eq) goto loc_822BB28C;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rlwinm r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822bb290
	if (!ctx.cr6.eq) goto loc_822BB290;
loc_822BB28C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822BB290:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x822bb2a0
	if (!ctx.cr6.eq) goto loc_822BB2A0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bb3dc
	if (ctx.cr6.eq) goto loc_822BB3DC;
loc_822BB2A0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8242a908
	ctx.lr = 0x822BB2B0;
	sub_8242A908(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822BB2C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f31,-1388(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -1388);
	ctx.f31.f64 = double(temp.f32);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// fmuls f30,f12,f31
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822BB2F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r6,r3,32
	ctx.r6.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f11,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// fmuls f29,f9,f31
	ctx.f29.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x822BB320;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f31,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lfd f8,96(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// fmuls f28,f6,f31
	ctx.f28.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822BB354;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r8,r3,32
	ctx.r8.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// fctiwz f5,f30
	ctx.fpscr.disableFlushMode();
	ctx.f5.s64 = (ctx.f30.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f30.f64));
	// stfd f5,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f5.u64);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f4,96(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// fctiwz f3,f28
	ctx.f3.s64 = (ctx.f28.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f28.f64));
	// fctiwz f2,f29
	ctx.f2.s64 = (ctx.f29.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f29.f64));
	// stfd f3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f3.u64);
	// stfd f2,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f2.u64);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r5,-31905
	ctx.r5.s64 = -2090926080;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// fcfid f1,f4
	ctx.f1.f64 = double(ctx.f4.s64);
	// addi r31,r5,-16728
	ctx.r31.s64 = ctx.r5.s64 + -16728;
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// addi r29,r1,128
	ctx.r29.s64 = ctx.r1.s64 + 128;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f12,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f12.u64);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// bl 0x82409408
	ctx.lr = 0x822BB3C0;
	sub_82409408(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x824089f0
	ctx.lr = 0x822BB3D4;
	sub_824089F0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8242b048
	ctx.lr = 0x822BB3DC;
	sub_8242B048(ctx, base);
loc_822BB3DC:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6b34
	ctx.lr = 0x822BB3E8;
	__restfpr_28(ctx, base);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BB3EC"))) PPC_WEAK_FUNC(sub_822BB3EC);
PPC_FUNC_IMPL(__imp__sub_822BB3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BB3F0"))) PPC_WEAK_FUNC(sub_822BB3F0);
PPC_FUNC_IMPL(__imp__sub_822BB3F0) {
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
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r11,-31684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31684);
	// lfs f1,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bb420
	if (ctx.cr6.eq) goto loc_822BB420;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f1,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f1.f64 = double(temp.f32);
loc_822BB420:
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-16712
	ctx.r4.s64 = ctx.r11.s64 + -16712;
	// bl 0x8240ac20
	ctx.lr = 0x822BB430;
	sub_8240AC20(ctx, base);
	// lis r8,-31887
	ctx.r8.s64 = -2089746432;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,15
	ctx.r6.s64 = 15;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,25532(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25532);
	// li r4,0
	ctx.r4.s64 = 0;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r31,82(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// rlwimi r11,r8,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r7,83(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwimi r31,r11,8,0,23
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFFFF00) | (ctx.r31.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r7,r31,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r31.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// bl 0x82e82c88
	ctx.lr = 0x822BB470;
	sub_82E82C88(ctx, base);
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

__attribute__((alias("__imp__sub_822BB484"))) PPC_WEAK_FUNC(sub_822BB484);
PPC_FUNC_IMPL(__imp__sub_822BB484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BB488"))) PPC_WEAK_FUNC(sub_822BB488);
PPC_FUNC_IMPL(__imp__sub_822BB488) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_822BB4A8"))) PPC_WEAK_FUNC(sub_822BB4A8);
PPC_FUNC_IMPL(__imp__sub_822BB4A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BB4AC"))) PPC_WEAK_FUNC(sub_822BB4AC);
PPC_FUNC_IMPL(__imp__sub_822BB4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BB4B0"))) PPC_WEAK_FUNC(sub_822BB4B0);
PPC_FUNC_IMPL(__imp__sub_822BB4B0) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822bb51c
	if (!ctx.cr6.eq) goto loc_822BB51C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x822959a8
	ctx.lr = 0x822BB4E4;
	sub_822959A8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e640b8
	ctx.lr = 0x822BB4F4;
	sub_82E640B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// bl 0x833b95e0
	ctx.lr = 0x822BB504;
	sub_833B95E0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,25532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25532);
	// bl 0x8240d828
	ctx.lr = 0x822BB514;
	sub_8240D828(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_822BB51C:
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

__attribute__((alias("__imp__sub_822BB534"))) PPC_WEAK_FUNC(sub_822BB534);
PPC_FUNC_IMPL(__imp__sub_822BB534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BB538"))) PPC_WEAK_FUNC(sub_822BB538);
PPC_FUNC_IMPL(__imp__sub_822BB538) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bb57c
	if (ctx.cr6.eq) goto loc_822BB57C;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,25532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25532);
	// bl 0x8240d5d0
	ctx.lr = 0x822BB568;
	sub_8240D5D0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82294a58
	ctx.lr = 0x822BB570;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_822BB57C:
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

__attribute__((alias("__imp__sub_822BB590"))) PPC_WEAK_FUNC(sub_822BB590);
PPC_FUNC_IMPL(__imp__sub_822BB590) {
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
	// lis r31,-31882
	ctx.r31.s64 = -2089418752;
	// lwz r11,-21836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21836);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822bb5c4
	if (!ctx.cr6.eq) goto loc_822BB5C4;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// lwz r3,25532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25532);
	// bl 0x8240d3e0
	ctx.lr = 0x822BB5BC;
	sub_8240D3E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-21836(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21836, ctx.r11.u32);
loc_822BB5C4:
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

__attribute__((alias("__imp__sub_822BB5D8"))) PPC_WEAK_FUNC(sub_822BB5D8);
PPC_FUNC_IMPL(__imp__sub_822BB5D8) {
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
	// lis r31,-31882
	ctx.r31.s64 = -2089418752;
	// lwz r11,-21836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21836);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bb604
	if (ctx.cr6.eq) goto loc_822BB604;
	// bl 0x8240d368
	ctx.lr = 0x822BB5FC;
	sub_8240D368(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-21836(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21836, ctx.r11.u32);
loc_822BB604:
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

__attribute__((alias("__imp__sub_822BB618"))) PPC_WEAK_FUNC(sub_822BB618);
PPC_FUNC_IMPL(__imp__sub_822BB618) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822bc390
	ctx.lr = 0x822BB634;
	sub_822BC390(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r11,-18148
	ctx.r9.s64 = ctx.r11.s64 + -18148;
	// addi r8,r10,-18088
	ctx.r8.s64 = ctx.r10.s64 + -18088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_822BB664"))) PPC_WEAK_FUNC(sub_822BB664);
PPC_FUNC_IMPL(__imp__sub_822BB664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BB668"))) PPC_WEAK_FUNC(sub_822BB668);
PPC_FUNC_IMPL(__imp__sub_822BB668) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r11,-17680
	ctx.r9.s64 = ctx.r11.s64 + -17680;
	// addi r8,r10,-17624
	ctx.r8.s64 = ctx.r10.s64 + -17624;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// bl 0x822bc108
	ctx.lr = 0x822BB6A0;
	sub_822BC108(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822bb6b8
	if (ctx.cr6.eq) goto loc_822BB6B8;
	// bl 0x82294a58
	ctx.lr = 0x822BB6B4;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822BB6B8:
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

__attribute__((alias("__imp__sub_822BB6D0"))) PPC_WEAK_FUNC(sub_822BB6D0);
PPC_FUNC_IMPL(__imp__sub_822BB6D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r11,-17680
	ctx.r9.s64 = ctx.r11.s64 + -17680;
	// addi r8,r10,-17624
	ctx.r8.s64 = ctx.r10.s64 + -17624;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// b 0x822bc108
	sub_822BC108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BB6EC"))) PPC_WEAK_FUNC(sub_822BB6EC);
PPC_FUNC_IMPL(__imp__sub_822BB6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BB6F0"))) PPC_WEAK_FUNC(sub_822BB6F0);
PPC_FUNC_IMPL(__imp__sub_822BB6F0) {
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
	// lis r31,-31882
	ctx.r31.s64 = -2089418752;
	// lwz r3,17376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17376);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822bb734
	if (!ctx.cr6.eq) goto loc_822BB734;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x822959a8
	ctx.lr = 0x822BB71C;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bb72c
	if (ctx.cr6.eq) goto loc_822BB72C;
	// bl 0x822bb618
	ctx.lr = 0x822BB728;
	sub_822BB618(ctx, base);
	// b 0x822bb730
	goto loc_822BB730;
loc_822BB72C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822BB730:
	// stw r3,17376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17376, ctx.r3.u32);
loc_822BB734:
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

__attribute__((alias("__imp__sub_822BB748"))) PPC_WEAK_FUNC(sub_822BB748);
PPC_FUNC_IMPL(__imp__sub_822BB748) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BB74C"))) PPC_WEAK_FUNC(sub_822BB74C);
PPC_FUNC_IMPL(__imp__sub_822BB74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BB750"))) PPC_WEAK_FUNC(sub_822BB750);
PPC_FUNC_IMPL(__imp__sub_822BB750) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BB758"))) PPC_WEAK_FUNC(sub_822BB758);
PPC_FUNC_IMPL(__imp__sub_822BB758) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BB75C"))) PPC_WEAK_FUNC(sub_822BB75C);
PPC_FUNC_IMPL(__imp__sub_822BB75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BB760"))) PPC_WEAK_FUNC(sub_822BB760);
PPC_FUNC_IMPL(__imp__sub_822BB760) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BB764"))) PPC_WEAK_FUNC(sub_822BB764);
PPC_FUNC_IMPL(__imp__sub_822BB764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BB768"))) PPC_WEAK_FUNC(sub_822BB768);
PPC_FUNC_IMPL(__imp__sub_822BB768) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BB76C"))) PPC_WEAK_FUNC(sub_822BB76C);
PPC_FUNC_IMPL(__imp__sub_822BB76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BB770"))) PPC_WEAK_FUNC(sub_822BB770);
PPC_FUNC_IMPL(__imp__sub_822BB770) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BB778"))) PPC_WEAK_FUNC(sub_822BB778);
PPC_FUNC_IMPL(__imp__sub_822BB778) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BB780"))) PPC_WEAK_FUNC(sub_822BB780);
PPC_FUNC_IMPL(__imp__sub_822BB780) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
	// bl 0x822960c0
	ctx.lr = 0x822BB7A0;
	sub_822960C0(ctx, base);
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

__attribute__((alias("__imp__sub_822BB7B8"))) PPC_WEAK_FUNC(sub_822BB7B8);
PPC_FUNC_IMPL(__imp__sub_822BB7B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BB7BC"))) PPC_WEAK_FUNC(sub_822BB7BC);
PPC_FUNC_IMPL(__imp__sub_822BB7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BB7C0"))) PPC_WEAK_FUNC(sub_822BB7C0);
PPC_FUNC_IMPL(__imp__sub_822BB7C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BB7C8"))) PPC_WEAK_FUNC(sub_822BB7C8);
PPC_FUNC_IMPL(__imp__sub_822BB7C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BB7CC"))) PPC_WEAK_FUNC(sub_822BB7CC);
PPC_FUNC_IMPL(__imp__sub_822BB7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BB7D0"))) PPC_WEAK_FUNC(sub_822BB7D0);
PPC_FUNC_IMPL(__imp__sub_822BB7D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x822BB7D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822bb858
	if (!ctx.cr6.gt) goto loc_822BB858;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r27,r11,11272
	ctx.r27.s64 = ctx.r11.s64 + 11272;
loc_822BB800:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822bb81c
	if (ctx.cr6.eq) goto loc_822BB81C;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x822bb820
	goto loc_822BB820;
loc_822BB81C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_822BB820:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822bb834
	if (ctx.cr6.eq) goto loc_822BB834;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822bb838
	goto loc_822BB838;
loc_822BB834:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_822BB838:
	// bl 0x82cb0328
	ctx.lr = 0x822BB83C;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bb864
	if (ctx.cr6.eq) goto loc_822BB864;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822bb800
	if (ctx.cr6.lt) goto loc_822BB800;
loc_822BB858:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_822BB864:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BB870"))) PPC_WEAK_FUNC(sub_822BB870);
PPC_FUNC_IMPL(__imp__sub_822BB870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x822BB878;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822bb8f8
	if (!ctx.cr6.gt) goto loc_822BB8F8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,11272
	ctx.r28.s64 = ctx.r11.s64 + 11272;
loc_822BB8A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822bb8bc
	if (ctx.cr6.eq) goto loc_822BB8BC;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// b 0x822bb8c0
	goto loc_822BB8C0;
loc_822BB8BC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_822BB8C0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822bb8d4
	if (ctx.cr6.eq) goto loc_822BB8D4;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822bb8d8
	goto loc_822BB8D8;
loc_822BB8D4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_822BB8D8:
	// bl 0x82cb0328
	ctx.lr = 0x822BB8DC;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bb964
	if (ctx.cr6.eq) goto loc_822BB964;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822bb8a0
	if (ctx.cr6.lt) goto loc_822BB8A0;
loc_822BB8F8:
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// ble cr6,0x822bb934
	if (!ctx.cr6.gt) goto loc_822BB934;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// li r4,12
	ctx.r4.s64 = 12;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x82294520
	ctx.lr = 0x822BB934;
	sub_82294520(ctx, base);
loc_822BB934:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822bb954
	if (ctx.cr0.eq) goto loc_822BB954;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82294bb8
	ctx.lr = 0x822BB954;
	sub_82294BB8(ctx, base);
loc_822BB954:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_822BB964:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BB970"))) PPC_WEAK_FUNC(sub_822BB970);
PPC_FUNC_IMPL(__imp__sub_822BB970) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BB978"))) PPC_WEAK_FUNC(sub_822BB978);
PPC_FUNC_IMPL(__imp__sub_822BB978) {
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

__attribute__((alias("__imp__sub_822BB98C"))) PPC_WEAK_FUNC(sub_822BB98C);
PPC_FUNC_IMPL(__imp__sub_822BB98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BB990"))) PPC_WEAK_FUNC(sub_822BB990);
PPC_FUNC_IMPL(__imp__sub_822BB990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x822BB998;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r25,-31885
	ctx.r25.s64 = -2089615360;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822bba7c
	if (!ctx.cr6.gt) goto loc_822BBA7C;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_822BB9BC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bb9d4
	if (ctx.cr6.eq) goto loc_822BB9D4;
	// bl 0x82294a58
	ctx.lr = 0x822BB9D4;
	sub_82294A58(ctx, base);
loc_822BB9D4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bba28
	if (ctx.cr6.eq) goto loc_822BBA28;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822bba28
	if (ctx.cr6.eq) goto loc_822BBA28;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822bba08
	if (!ctx.cr6.eq) goto loc_822BBA08;
	// bl 0x822900a0
	ctx.lr = 0x822BBA04;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_822BBA08:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822BBA24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_822BBA28:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822bba5c
	if (ctx.cr6.eq) goto loc_822BBA5C;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822bba48
	if (!ctx.cr6.eq) goto loc_822BBA48;
	// bl 0x822900a0
	ctx.lr = 0x822BBA44;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_822BBA48:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822BBA5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822BBA5C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822bb9bc
	if (ctx.cr6.lt) goto loc_822BB9BC;
loc_822BBA7C:
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822bbab0
	if (ctx.cr6.eq) goto loc_822BBAB0;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822bba9c
	if (!ctx.cr6.eq) goto loc_822BBA9C;
	// bl 0x822900a0
	ctx.lr = 0x822BBA98;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_822BBA9C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822BBAB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822BBAB0:
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// stw r29,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r29.u32);
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BBAC4"))) PPC_WEAK_FUNC(sub_822BBAC4);
PPC_FUNC_IMPL(__imp__sub_822BBAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BBAC8"))) PPC_WEAK_FUNC(sub_822BBAC8);
PPC_FUNC_IMPL(__imp__sub_822BBAC8) {
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

__attribute__((alias("__imp__sub_822BBAD8"))) PPC_WEAK_FUNC(sub_822BBAD8);
PPC_FUNC_IMPL(__imp__sub_822BBAD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x822BBAE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x822bbb5c
	if (ctx.cr6.eq) goto loc_822BBB5C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// bl 0x82e644b8
	ctx.lr = 0x822BBB08;
	sub_82E644B8(ctx, base);
	// addi r27,r3,1
	ctx.r27.s64 = ctx.r3.s64 + 1;
	// rlwinm r29,r27,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r29,128
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 128, ctx.xer);
	// ble cr6,0x822bbb28
	if (!ctx.cr6.gt) goto loc_822BBB28;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822959a8
	ctx.lr = 0x822BBB24;
	sub_822959A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_822BBB28:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e64280
	ctx.lr = 0x822BBB4C;
	sub_82E64280(ctx, base);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_822BBB5C:
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BBB6C"))) PPC_WEAK_FUNC(sub_822BBB6C);
PPC_FUNC_IMPL(__imp__sub_822BBB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BBB70"))) PPC_WEAK_FUNC(sub_822BBB70);
PPC_FUNC_IMPL(__imp__sub_822BBB70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82294a58
	sub_82294A58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BBB90"))) PPC_WEAK_FUNC(sub_822BBB90);
PPC_FUNC_IMPL(__imp__sub_822BBB90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBB94"))) PPC_WEAK_FUNC(sub_822BBB94);
PPC_FUNC_IMPL(__imp__sub_822BBB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BBB98"))) PPC_WEAK_FUNC(sub_822BBB98);
PPC_FUNC_IMPL(__imp__sub_822BBB98) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBBA0"))) PPC_WEAK_FUNC(sub_822BBBA0);
PPC_FUNC_IMPL(__imp__sub_822BBBA0) {
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
	// bl 0x822ba5e8
	ctx.lr = 0x822BBBB8;
	sub_822BA5E8(ctx, base);
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

__attribute__((alias("__imp__sub_822BBBD0"))) PPC_WEAK_FUNC(sub_822BBBD0);
PPC_FUNC_IMPL(__imp__sub_822BBBD0) {
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
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x822BBBFC;
	sub_82294AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
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

__attribute__((alias("__imp__sub_822BBC1C"))) PPC_WEAK_FUNC(sub_822BBC1C);
PPC_FUNC_IMPL(__imp__sub_822BBC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BBC20"))) PPC_WEAK_FUNC(sub_822BBC20);
PPC_FUNC_IMPL(__imp__sub_822BBC20) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBC28"))) PPC_WEAK_FUNC(sub_822BBC28);
PPC_FUNC_IMPL(__imp__sub_822BBC28) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBC30"))) PPC_WEAK_FUNC(sub_822BBC30);
PPC_FUNC_IMPL(__imp__sub_822BBC30) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBC38"))) PPC_WEAK_FUNC(sub_822BBC38);
PPC_FUNC_IMPL(__imp__sub_822BBC38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBC3C"))) PPC_WEAK_FUNC(sub_822BBC3C);
PPC_FUNC_IMPL(__imp__sub_822BBC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BBC40"))) PPC_WEAK_FUNC(sub_822BBC40);
PPC_FUNC_IMPL(__imp__sub_822BBC40) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBC48"))) PPC_WEAK_FUNC(sub_822BBC48);
PPC_FUNC_IMPL(__imp__sub_822BBC48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBC4C"))) PPC_WEAK_FUNC(sub_822BBC4C);
PPC_FUNC_IMPL(__imp__sub_822BBC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BBC50"))) PPC_WEAK_FUNC(sub_822BBC50);
PPC_FUNC_IMPL(__imp__sub_822BBC50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBC54"))) PPC_WEAK_FUNC(sub_822BBC54);
PPC_FUNC_IMPL(__imp__sub_822BBC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BBC58"))) PPC_WEAK_FUNC(sub_822BBC58);
PPC_FUNC_IMPL(__imp__sub_822BBC58) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBC60"))) PPC_WEAK_FUNC(sub_822BBC60);
PPC_FUNC_IMPL(__imp__sub_822BBC60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBC64"))) PPC_WEAK_FUNC(sub_822BBC64);
PPC_FUNC_IMPL(__imp__sub_822BBC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BBC68"))) PPC_WEAK_FUNC(sub_822BBC68);
PPC_FUNC_IMPL(__imp__sub_822BBC68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBC6C"))) PPC_WEAK_FUNC(sub_822BBC6C);
PPC_FUNC_IMPL(__imp__sub_822BBC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BBC70"))) PPC_WEAK_FUNC(sub_822BBC70);
PPC_FUNC_IMPL(__imp__sub_822BBC70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBC74"))) PPC_WEAK_FUNC(sub_822BBC74);
PPC_FUNC_IMPL(__imp__sub_822BBC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BBC78"))) PPC_WEAK_FUNC(sub_822BBC78);
PPC_FUNC_IMPL(__imp__sub_822BBC78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBC7C"))) PPC_WEAK_FUNC(sub_822BBC7C);
PPC_FUNC_IMPL(__imp__sub_822BBC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BBC80"))) PPC_WEAK_FUNC(sub_822BBC80);
PPC_FUNC_IMPL(__imp__sub_822BBC80) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBC88"))) PPC_WEAK_FUNC(sub_822BBC88);
PPC_FUNC_IMPL(__imp__sub_822BBC88) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBC90"))) PPC_WEAK_FUNC(sub_822BBC90);
PPC_FUNC_IMPL(__imp__sub_822BBC90) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822BBCB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_822BBCC4"))) PPC_WEAK_FUNC(sub_822BBCC4);
PPC_FUNC_IMPL(__imp__sub_822BBCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BBCC8"))) PPC_WEAK_FUNC(sub_822BBCC8);
PPC_FUNC_IMPL(__imp__sub_822BBCC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBCCC"))) PPC_WEAK_FUNC(sub_822BBCCC);
PPC_FUNC_IMPL(__imp__sub_822BBCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BBCD0"))) PPC_WEAK_FUNC(sub_822BBCD0);
PPC_FUNC_IMPL(__imp__sub_822BBCD0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822BBCF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_822BBD08"))) PPC_WEAK_FUNC(sub_822BBD08);
PPC_FUNC_IMPL(__imp__sub_822BBD08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBD0C"))) PPC_WEAK_FUNC(sub_822BBD0C);
PPC_FUNC_IMPL(__imp__sub_822BBD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BBD10"))) PPC_WEAK_FUNC(sub_822BBD10);
PPC_FUNC_IMPL(__imp__sub_822BBD10) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822BBD38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_822BBD4C"))) PPC_WEAK_FUNC(sub_822BBD4C);
PPC_FUNC_IMPL(__imp__sub_822BBD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BBD50"))) PPC_WEAK_FUNC(sub_822BBD50);
PPC_FUNC_IMPL(__imp__sub_822BBD50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBD54"))) PPC_WEAK_FUNC(sub_822BBD54);
PPC_FUNC_IMPL(__imp__sub_822BBD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BBD58"))) PPC_WEAK_FUNC(sub_822BBD58);
PPC_FUNC_IMPL(__imp__sub_822BBD58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBD5C"))) PPC_WEAK_FUNC(sub_822BBD5C);
PPC_FUNC_IMPL(__imp__sub_822BBD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BBD60"))) PPC_WEAK_FUNC(sub_822BBD60);
PPC_FUNC_IMPL(__imp__sub_822BBD60) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82419a40
	sub_82419A40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BBD68"))) PPC_WEAK_FUNC(sub_822BBD68);
PPC_FUNC_IMPL(__imp__sub_822BBD68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBD6C"))) PPC_WEAK_FUNC(sub_822BBD6C);
PPC_FUNC_IMPL(__imp__sub_822BBD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BBD70"))) PPC_WEAK_FUNC(sub_822BBD70);
PPC_FUNC_IMPL(__imp__sub_822BBD70) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBD78"))) PPC_WEAK_FUNC(sub_822BBD78);
PPC_FUNC_IMPL(__imp__sub_822BBD78) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBD80"))) PPC_WEAK_FUNC(sub_822BBD80);
PPC_FUNC_IMPL(__imp__sub_822BBD80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBD84"))) PPC_WEAK_FUNC(sub_822BBD84);
PPC_FUNC_IMPL(__imp__sub_822BBD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BBD88"))) PPC_WEAK_FUNC(sub_822BBD88);
PPC_FUNC_IMPL(__imp__sub_822BBD88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x822BBD90;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82e644b8
	ctx.lr = 0x822BBDA8;
	sub_82E644B8(ctx, base);
	// addi r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 1;
	// rlwinm r30,r28,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r30,128
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 128, ctx.xer);
	// ble cr6,0x822bbdc8
	if (!ctx.cr6.gt) goto loc_822BBDC8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822959a8
	ctx.lr = 0x822BBDC4;
	sub_822959A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822BBDC8:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e64280
	ctx.lr = 0x822BBDEC;
	sub_82E64280(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BBDF8"))) PPC_WEAK_FUNC(sub_822BBDF8);
PPC_FUNC_IMPL(__imp__sub_822BBDF8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBE04"))) PPC_WEAK_FUNC(sub_822BBE04);
PPC_FUNC_IMPL(__imp__sub_822BBE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BBE08"))) PPC_WEAK_FUNC(sub_822BBE08);
PPC_FUNC_IMPL(__imp__sub_822BBE08) {
	PPC_FUNC_PROLOGUE();
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBE18"))) PPC_WEAK_FUNC(sub_822BBE18);
PPC_FUNC_IMPL(__imp__sub_822BBE18) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBE2C"))) PPC_WEAK_FUNC(sub_822BBE2C);
PPC_FUNC_IMPL(__imp__sub_822BBE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BBE30"))) PPC_WEAK_FUNC(sub_822BBE30);
PPC_FUNC_IMPL(__imp__sub_822BBE30) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBE3C"))) PPC_WEAK_FUNC(sub_822BBE3C);
PPC_FUNC_IMPL(__imp__sub_822BBE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BBE40"))) PPC_WEAK_FUNC(sub_822BBE40);
PPC_FUNC_IMPL(__imp__sub_822BBE40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,112
	ctx.r3.s64 = ctx.r3.s64 + 112;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBE48"))) PPC_WEAK_FUNC(sub_822BBE48);
PPC_FUNC_IMPL(__imp__sub_822BBE48) {
	PPC_FUNC_PROLOGUE();
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// bge cr6,0x822bbe5c
	if (!ctx.cr6.lt) goto loc_822BBE5C;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// blr 
	return;
loc_822BBE5C:
	// fcmpu cr6,f0,f3
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f3.f64);
	// bge cr6,0x822bbe6c
	if (!ctx.cr6.lt) goto loc_822BBE6C;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
loc_822BBE6C:
	// fmr f1,f3
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f3.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBE74"))) PPC_WEAK_FUNC(sub_822BBE74);
PPC_FUNC_IMPL(__imp__sub_822BBE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BBE78"))) PPC_WEAK_FUNC(sub_822BBE78);
PPC_FUNC_IMPL(__imp__sub_822BBE78) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBE84"))) PPC_WEAK_FUNC(sub_822BBE84);
PPC_FUNC_IMPL(__imp__sub_822BBE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BBE88"))) PPC_WEAK_FUNC(sub_822BBE88);
PPC_FUNC_IMPL(__imp__sub_822BBE88) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBE90"))) PPC_WEAK_FUNC(sub_822BBE90);
PPC_FUNC_IMPL(__imp__sub_822BBE90) {
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
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x822bbf04
	if (ctx.cr6.eq) goto loc_822BBF04;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82294520
	ctx.lr = 0x822BBECC;
	sub_82294520(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bbf00
	if (ctx.cr6.eq) goto loc_822BBF00;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822bbeec
	if (ctx.cr6.eq) goto loc_822BBEEC;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x822bbef4
	goto loc_822BBEF4;
loc_822BBEEC:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,11272
	ctx.r4.s64 = ctx.r10.s64 + 11272;
loc_822BBEF4:
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bea998
	ctx.lr = 0x822BBF00;
	sub_82BEA998(ctx, base);
loc_822BBF00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822BBF04:
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

__attribute__((alias("__imp__sub_822BBF1C"))) PPC_WEAK_FUNC(sub_822BBF1C);
PPC_FUNC_IMPL(__imp__sub_822BBF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BBF20"))) PPC_WEAK_FUNC(sub_822BBF20);
PPC_FUNC_IMPL(__imp__sub_822BBF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x822BBF28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bbf5c
	if (ctx.cr6.eq) goto loc_822BBF5C;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x822BBF5C;
	sub_82294520(ctx, base);
loc_822BBF5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x822BBF64;
	sub_82294CC8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bbf88
	if (ctx.cr6.eq) goto loc_822BBF88;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294520
	ctx.lr = 0x822BBF88;
	sub_82294520(ctx, base);
loc_822BBF88:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294cc8
	ctx.lr = 0x822BBF90;
	sub_82294CC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BBF98"))) PPC_WEAK_FUNC(sub_822BBF98);
PPC_FUNC_IMPL(__imp__sub_822BBF98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBF9C"))) PPC_WEAK_FUNC(sub_822BBF9C);
PPC_FUNC_IMPL(__imp__sub_822BBF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BBFA0"))) PPC_WEAK_FUNC(sub_822BBFA0);
PPC_FUNC_IMPL(__imp__sub_822BBFA0) {
	PPC_FUNC_PROLOGUE();
loc_822BBFA0:
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
	// bne 0x822bbfa0
	if (!ctx.cr0.eq) goto loc_822BBFA0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBFC4"))) PPC_WEAK_FUNC(sub_822BBFC4);
PPC_FUNC_IMPL(__imp__sub_822BBFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BBFC8"))) PPC_WEAK_FUNC(sub_822BBFC8);
PPC_FUNC_IMPL(__imp__sub_822BBFC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82294520
	sub_82294520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BBFEC"))) PPC_WEAK_FUNC(sub_822BBFEC);
PPC_FUNC_IMPL(__imp__sub_822BBFEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BBFF0"))) PPC_WEAK_FUNC(sub_822BBFF0);
PPC_FUNC_IMPL(__imp__sub_822BBFF0) {
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
	// bl 0x822960c0
	ctx.lr = 0x822BC008;
	sub_822960C0(ctx, base);
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

__attribute__((alias("__imp__sub_822BC020"))) PPC_WEAK_FUNC(sub_822BC020);
PPC_FUNC_IMPL(__imp__sub_822BC020) {
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
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// lwz r3,25532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25532);
	// bl 0x82e68f40
	ctx.lr = 0x822BC038;
	sub_82E68F40(ctx, base);
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

__attribute__((alias("__imp__sub_822BC04C"))) PPC_WEAK_FUNC(sub_822BC04C);
PPC_FUNC_IMPL(__imp__sub_822BC04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BC050"))) PPC_WEAK_FUNC(sub_822BC050);
PPC_FUNC_IMPL(__imp__sub_822BC050) {
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
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// lwz r3,25532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25532);
	// bl 0x82e68ea8
	ctx.lr = 0x822BC068;
	sub_82E68EA8(ctx, base);
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

__attribute__((alias("__imp__sub_822BC07C"))) PPC_WEAK_FUNC(sub_822BC07C);
PPC_FUNC_IMPL(__imp__sub_822BC07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BC080"))) PPC_WEAK_FUNC(sub_822BC080);
PPC_FUNC_IMPL(__imp__sub_822BC080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r11,-17680
	ctx.r9.s64 = ctx.r11.s64 + -17680;
	// addi r8,r10,-17624
	ctx.r8.s64 = ctx.r10.s64 + -17624;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// b 0x822bc108
	sub_822BC108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BC09C"))) PPC_WEAK_FUNC(sub_822BC09C);
PPC_FUNC_IMPL(__imp__sub_822BC09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BC0A0"))) PPC_WEAK_FUNC(sub_822BC0A0);
PPC_FUNC_IMPL(__imp__sub_822BC0A0) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r11,-17680
	ctx.r9.s64 = ctx.r11.s64 + -17680;
	// addi r8,r10,-17624
	ctx.r8.s64 = ctx.r10.s64 + -17624;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// bl 0x822bc108
	ctx.lr = 0x822BC0D8;
	sub_822BC108(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822bc0f0
	if (ctx.cr6.eq) goto loc_822BC0F0;
	// bl 0x82294a58
	ctx.lr = 0x822BC0EC;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822BC0F0:
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

__attribute__((alias("__imp__sub_822BC108"))) PPC_WEAK_FUNC(sub_822BC108);
PPC_FUNC_IMPL(__imp__sub_822BC108) {
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
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r10,-17700
	ctx.r9.s64 = ctx.r10.s64 + -17700;
	// lwz r11,-3776(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3776);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822bc240
	if (!ctx.cr6.eq) goto loc_822BC240;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bc218
	if (ctx.cr6.eq) goto loc_822BC218;
	// bl 0x822b4970
	ctx.lr = 0x822BC14C;
	sub_822B4970(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x822bc1b8
	if (ctx.cr6.eq) goto loc_822BC1B8;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r3,r10,-13508
	ctx.r3.s64 = ctx.r10.s64 + -13508;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822bc18c
	if (!ctx.cr6.gt) goto loc_822BC18C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_822BC170:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x822bc190
	if (ctx.cr6.eq) goto loc_822BC190;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822bc170
	if (ctx.cr6.lt) goto loc_822BC170;
loc_822BC18C:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_822BC190:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8232d180
	ctx.lr = 0x822BC1A4;
	sub_8232D180(ctx, base);
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
loc_822BC1B8:
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r3,r10,-13520
	ctx.r3.s64 = ctx.r10.s64 + -13520;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822bc1ec
	if (!ctx.cr6.gt) goto loc_822BC1EC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_822BC1D0:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x822bc1f0
	if (ctx.cr6.eq) goto loc_822BC1F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822bc1d0
	if (ctx.cr6.lt) goto loc_822BC1D0;
loc_822BC1EC:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_822BC1F0:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8232d180
	ctx.lr = 0x822BC204;
	sub_8232D180(ctx, base);
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
loc_822BC218:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-13508
	ctx.r3.s64 = ctx.r11.s64 + -13508;
	// bl 0x822bc310
	ctx.lr = 0x822BC22C;
	sub_822BC310(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,-13520
	ctx.r3.s64 = ctx.r10.s64 + -13520;
	// bl 0x822bc310
	ctx.lr = 0x822BC240;
	sub_822BC310(ctx, base);
loc_822BC240:
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

__attribute__((alias("__imp__sub_822BC254"))) PPC_WEAK_FUNC(sub_822BC254);
PPC_FUNC_IMPL(__imp__sub_822BC254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BC258"))) PPC_WEAK_FUNC(sub_822BC258);
PPC_FUNC_IMPL(__imp__sub_822BC258) {
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
	// bl 0x822bc108
	ctx.lr = 0x822BC278;
	sub_822BC108(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bc290
	if (ctx.cr6.eq) goto loc_822BC290;
	// bl 0x82294a58
	ctx.lr = 0x822BC28C;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822BC290:
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

__attribute__((alias("__imp__sub_822BC2A8"))) PPC_WEAK_FUNC(sub_822BC2A8);
PPC_FUNC_IMPL(__imp__sub_822BC2A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822bc2dc
	if (!ctx.cr6.gt) goto loc_822BC2DC;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_822BC2C0:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822bc2e4
	if (ctx.cr6.eq) goto loc_822BC2E4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822bc2c0
	if (ctx.cr6.lt) goto loc_822BC2C0;
loc_822BC2DC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_822BC2E4:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BC2EC"))) PPC_WEAK_FUNC(sub_822BC2EC);
PPC_FUNC_IMPL(__imp__sub_822BC2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BC2F0"))) PPC_WEAK_FUNC(sub_822BC2F0);
PPC_FUNC_IMPL(__imp__sub_822BC2F0) {
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

__attribute__((alias("__imp__sub_822BC300"))) PPC_WEAK_FUNC(sub_822BC300);
PPC_FUNC_IMPL(__imp__sub_822BC300) {
	PPC_FUNC_PROLOGUE();
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8232d180
	sub_8232D180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BC310"))) PPC_WEAK_FUNC(sub_822BC310);
PPC_FUNC_IMPL(__imp__sub_822BC310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x822BC318;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r27,4(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x822bc380
	if (!ctx.cr6.gt) goto loc_822BC380;
	// li r30,0
	ctx.r30.s64 = 0;
loc_822BC338:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822bc36c
	if (!ctx.cr6.eq) goto loc_822BC36C;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232d180
	ctx.lr = 0x822BC364;
	sub_8232D180(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_822BC36C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822bc338
	if (ctx.cr6.lt) goto loc_822BC338;
loc_822BC380:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r3,r11,r27
	ctx.r3.s64 = ctx.r27.s64 - ctx.r11.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BC390"))) PPC_WEAK_FUNC(sub_822BC390);
PPC_FUNC_IMPL(__imp__sub_822BC390) {
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
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r10,-17700
	ctx.r9.s64 = ctx.r10.s64 + -17700;
	// lwz r11,-3776(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3776);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822bc3c8
	if (!ctx.cr6.eq) goto loc_822BC3C8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822bc460
	ctx.lr = 0x822BC3C8;
	sub_822BC460(ctx, base);
loc_822BC3C8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r8,r11,-17792
	ctx.r8.s64 = ctx.r11.s64 + -17792;
	// addi r7,r10,-17680
	ctx.r7.s64 = ctx.r10.s64 + -17680;
	// addi r6,r9,-17624
	ctx.r6.s64 = ctx.r9.s64 + -17624;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_822BC404"))) PPC_WEAK_FUNC(sub_822BC404);
PPC_FUNC_IMPL(__imp__sub_822BC404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BC408"))) PPC_WEAK_FUNC(sub_822BC408);
PPC_FUNC_IMPL(__imp__sub_822BC408) {
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
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r10,-17700
	ctx.r9.s64 = ctx.r10.s64 + -17700;
	// lwz r11,-3776(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3776);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822bc448
	if (!ctx.cr6.eq) goto loc_822BC448;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822bc448
	if (ctx.cr6.eq) goto loc_822BC448;
	// bl 0x822bc460
	ctx.lr = 0x822BC444;
	sub_822BC460(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822BC448:
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

__attribute__((alias("__imp__sub_822BC45C"))) PPC_WEAK_FUNC(sub_822BC45C);
PPC_FUNC_IMPL(__imp__sub_822BC45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BC460"))) PPC_WEAK_FUNC(sub_822BC460);
PPC_FUNC_IMPL(__imp__sub_822BC460) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x822bc498
	if (ctx.cr6.eq) goto loc_822BC498;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r11,-13508
	ctx.r3.s64 = ctx.r11.s64 + -13508;
	// bl 0x822bc4b8
	ctx.lr = 0x822BC488;
	sub_822BC4B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822BC498:
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r11,-13520
	ctx.r3.s64 = ctx.r11.s64 + -13520;
	// bl 0x822bc4b8
	ctx.lr = 0x822BC4A4;
	sub_822BC4B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BC4B4"))) PPC_WEAK_FUNC(sub_822BC4B4);
PPC_FUNC_IMPL(__imp__sub_822BC4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BC4B8"))) PPC_WEAK_FUNC(sub_822BC4B8);
PPC_FUNC_IMPL(__imp__sub_822BC4B8) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82294ac0
	ctx.lr = 0x822BC4E8;
	sub_82294AC0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bc500
	if (ctx.cr0.eq) goto loc_822BC500;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822BC500:
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

__attribute__((alias("__imp__sub_822BC520"))) PPC_WEAK_FUNC(sub_822BC520);
PPC_FUNC_IMPL(__imp__sub_822BC520) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x822BC54C;
	sub_82294AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
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

__attribute__((alias("__imp__sub_822BC56C"))) PPC_WEAK_FUNC(sub_822BC56C);
PPC_FUNC_IMPL(__imp__sub_822BC56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BC570"))) PPC_WEAK_FUNC(sub_822BC570);
PPC_FUNC_IMPL(__imp__sub_822BC570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r10,r11,-17792
	ctx.r10.s64 = ctx.r11.s64 + -17792;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BC580"))) PPC_WEAK_FUNC(sub_822BC580);
PPC_FUNC_IMPL(__imp__sub_822BC580) {
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
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822bc5b8
	if (ctx.cr6.eq) goto loc_822BC5B8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x822BC5B8;
	sub_82294520(ctx, base);
loc_822BC5B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x822BC5C0;
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

__attribute__((alias("__imp__sub_822BC5D4"))) PPC_WEAK_FUNC(sub_822BC5D4);
PPC_FUNC_IMPL(__imp__sub_822BC5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BC5D8"))) PPC_WEAK_FUNC(sub_822BC5D8);
PPC_FUNC_IMPL(__imp__sub_822BC5D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BC5DC"))) PPC_WEAK_FUNC(sub_822BC5DC);
PPC_FUNC_IMPL(__imp__sub_822BC5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BC5E0"))) PPC_WEAK_FUNC(sub_822BC5E0);
PPC_FUNC_IMPL(__imp__sub_822BC5E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BC5E4"))) PPC_WEAK_FUNC(sub_822BC5E4);
PPC_FUNC_IMPL(__imp__sub_822BC5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BC5E8"))) PPC_WEAK_FUNC(sub_822BC5E8);
PPC_FUNC_IMPL(__imp__sub_822BC5E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BC5EC"))) PPC_WEAK_FUNC(sub_822BC5EC);
PPC_FUNC_IMPL(__imp__sub_822BC5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BC5F0"))) PPC_WEAK_FUNC(sub_822BC5F0);
PPC_FUNC_IMPL(__imp__sub_822BC5F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// b 0x82cb2478
	sub_82CB2478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BC5F8"))) PPC_WEAK_FUNC(sub_822BC5F8);
PPC_FUNC_IMPL(__imp__sub_822BC5F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// b 0x82cb2578
	sub_82CB2578(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BC600"))) PPC_WEAK_FUNC(sub_822BC600);
PPC_FUNC_IMPL(__imp__sub_822BC600) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BC604"))) PPC_WEAK_FUNC(sub_822BC604);
PPC_FUNC_IMPL(__imp__sub_822BC604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BC608"))) PPC_WEAK_FUNC(sub_822BC608);
PPC_FUNC_IMPL(__imp__sub_822BC608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,-31948(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31948);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r4,r10,-18720
	ctx.r4.s64 = ctx.r10.s64 + -18720;
	// b 0x822b60b0
	sub_822B60B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BC62C"))) PPC_WEAK_FUNC(sub_822BC62C);
PPC_FUNC_IMPL(__imp__sub_822BC62C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BC630"))) PPC_WEAK_FUNC(sub_822BC630);
PPC_FUNC_IMPL(__imp__sub_822BC630) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bc648
	if (ctx.cr6.eq) goto loc_822BC648;
	// li r11,13
	ctx.r11.s64 = 13;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,3(0)
	PPC_STORE_U32(3, ctx.r11.u32);
	// b 0x82e645c8
	sub_82E645C8(ctx, base);
	return;
loc_822BC648:
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-3768(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3768, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BC658"))) PPC_WEAK_FUNC(sub_822BC658);
PPC_FUNC_IMPL(__imp__sub_822BC658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r11,21000
	ctx.r3.s64 = ctx.r11.s64 + 21000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BC664"))) PPC_WEAK_FUNC(sub_822BC664);
PPC_FUNC_IMPL(__imp__sub_822BC664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BC668"))) PPC_WEAK_FUNC(sub_822BC668);
PPC_FUNC_IMPL(__imp__sub_822BC668) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BC66C"))) PPC_WEAK_FUNC(sub_822BC66C);
PPC_FUNC_IMPL(__imp__sub_822BC66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BC670"))) PPC_WEAK_FUNC(sub_822BC670);
PPC_FUNC_IMPL(__imp__sub_822BC670) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
	// bl 0x822960c0
	ctx.lr = 0x822BC690;
	sub_822960C0(ctx, base);
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

__attribute__((alias("__imp__sub_822BC6A8"))) PPC_WEAK_FUNC(sub_822BC6A8);
PPC_FUNC_IMPL(__imp__sub_822BC6A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BC6B0"))) PPC_WEAK_FUNC(sub_822BC6B0);
PPC_FUNC_IMPL(__imp__sub_822BC6B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BC6B4"))) PPC_WEAK_FUNC(sub_822BC6B4);
PPC_FUNC_IMPL(__imp__sub_822BC6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BC6B8"))) PPC_WEAK_FUNC(sub_822BC6B8);
PPC_FUNC_IMPL(__imp__sub_822BC6B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BC6C0"))) PPC_WEAK_FUNC(sub_822BC6C0);
PPC_FUNC_IMPL(__imp__sub_822BC6C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BC6C4"))) PPC_WEAK_FUNC(sub_822BC6C4);
PPC_FUNC_IMPL(__imp__sub_822BC6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BC6C8"))) PPC_WEAK_FUNC(sub_822BC6C8);
PPC_FUNC_IMPL(__imp__sub_822BC6C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8304(r1)
	ea = -8304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,8190
	ctx.r5.s64 = 8190;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,98
	ctx.r3.s64 = ctx.r1.s64 + 98;
	// lhz r11,11272(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 11272);
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// bl 0x82cb16f0
	ctx.lr = 0x822BC718;
	sub_82CB16F0(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,8336
	ctx.r9.s64 = ctx.r1.s64 + 8336;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82cb2478
	ctx.lr = 0x822BC738;
	sub_82CB2478(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,8304
	ctx.r1.s64 = ctx.r1.s64 + 8304;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BC750"))) PPC_WEAK_FUNC(sub_822BC750);
PPC_FUNC_IMPL(__imp__sub_822BC750) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BC754"))) PPC_WEAK_FUNC(sub_822BC754);
PPC_FUNC_IMPL(__imp__sub_822BC754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BC758"))) PPC_WEAK_FUNC(sub_822BC758);
PPC_FUNC_IMPL(__imp__sub_822BC758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-22244
	ctx.r3.s64 = ctx.r11.s64 + -22244;
	// b 0x822bd348
	sub_822BD348(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BC768"))) PPC_WEAK_FUNC(sub_822BC768);
PPC_FUNC_IMPL(__imp__sub_822BC768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x822BC770;
	__savegprlr_23(ctx, base);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8384(r1)
	ea = -8384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r24,r11,11272
	ctx.r24.s64 = ctx.r11.s64 + 11272;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,8190
	ctx.r5.s64 = 8190;
	// lhz r11,11272(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 11272);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,114
	ctx.r3.s64 = ctx.r1.s64 + 114;
	// sth r11,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r11.u16);
	// bl 0x82cb16f0
	ctx.lr = 0x822BC7BC;
	sub_82CB16F0(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,8416
	ctx.r10.s64 = ctx.r1.s64 + 8416;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82cb2478
	ctx.lr = 0x822BC7DC;
	sub_82CB2478(ctx, base);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,-22244
	ctx.r30.s64 = ctx.r11.s64 + -22244;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x822bc918
	if (!ctx.cr6.gt) goto loc_822BC918;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// lis r25,-31885
	ctx.r25.s64 = -2089615360;
loc_822BC800:
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x822b2a20
	ctx.lr = 0x822BC81C;
	sub_822B2A20(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bne cr6,0x822bc874
	if (!ctx.cr6.eq) goto loc_822BC874;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822bc84c
	if (!ctx.cr6.eq) goto loc_822BC84C;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_822BC84C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822bc860
	if (ctx.cr6.eq) goto loc_822BC860;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x822bc864
	goto loc_822BC864;
loc_822BC860:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_822BC864:
	// bl 0x82cb0328
	ctx.lr = 0x822BC868;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r31,1
	ctx.r31.s64 = 1;
	// beq cr6,0x822bc878
	if (ctx.cr6.eq) goto loc_822BC878;
loc_822BC874:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_822BC878:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bc8c0
	if (ctx.cr6.eq) goto loc_822BC8C0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822bc8f0
	if (ctx.cr6.eq) goto loc_822BC8F0;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822bc8a0
	if (!ctx.cr6.eq) goto loc_822BC8A0;
	// bl 0x822900a0
	ctx.lr = 0x822BC89C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_822BC8A0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822BC8BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_822BC8C0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822bc8f0
	if (ctx.cr6.eq) goto loc_822BC8F0;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822bc8dc
	if (!ctx.cr6.eq) goto loc_822BC8DC;
	// bl 0x822900a0
	ctx.lr = 0x822BC8D8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_822BC8DC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822BC8F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822BC8F0:
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bne cr6,0x822bc97c
	if (!ctx.cr6.eq) goto loc_822BC97C;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmpw cr6,r26,r31
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x822bc800
	if (ctx.cr6.lt) goto loc_822BC800;
loc_822BC918:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// ble cr6,0x822bc950
	if (!ctx.cr6.gt) goto loc_822BC950;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// li r5,8
	ctx.r5.s64 = 8;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x82294520
	ctx.lr = 0x822BC950;
	sub_82294520(ctx, base);
loc_822BC950:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bc97c
	if (ctx.cr0.eq) goto loc_822BC97C;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// bl 0x822b2a20
	ctx.lr = 0x822BC97C;
	sub_822B2A20(ctx, base);
loc_822BC97C:
	// addi r1,r1,8384
	ctx.r1.s64 = ctx.r1.s64 + 8384;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BC984"))) PPC_WEAK_FUNC(sub_822BC984);
PPC_FUNC_IMPL(__imp__sub_822BC984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BC988"))) PPC_WEAK_FUNC(sub_822BC988);
PPC_FUNC_IMPL(__imp__sub_822BC988) {
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
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f0,-18184(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18184);
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82e645c8
	ctx.lr = 0x822BC9B0;
	sub_82E645C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BC9C0"))) PPC_WEAK_FUNC(sub_822BC9C0);
PPC_FUNC_IMPL(__imp__sub_822BC9C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82e645c8
	sub_82E645C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BC9C8"))) PPC_WEAK_FUNC(sub_822BC9C8);
PPC_FUNC_IMPL(__imp__sub_822BC9C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x822BC9D0;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x82e645d0
	ctx.lr = 0x822BC9FC;
	sub_82E645D0(ctx, base);
	// lhz r3,90(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// lhz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lhz r6,82(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lhz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// lhz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// lhz r7,94(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// stw r4,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r4.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// stw r5,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r5.u32);
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BCA50"))) PPC_WEAK_FUNC(sub_822BCA50);
PPC_FUNC_IMPL(__imp__sub_822BCA50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,148
	ctx.r8.s64 = ctx.r1.s64 + 148;
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// addi r6,r1,156
	ctx.r6.s64 = ctx.r1.s64 + 156;
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x822bc9c8
	ctx.lr = 0x822BCA88;
	sub_822BC9C8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r4,r11,-17508
	ctx.r4.s64 = ctx.r11.s64 + -17508;
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r7,156(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x8232e868
	ctx.lr = 0x822BCAB0;
	sub_8232E868(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BCAC8"))) PPC_WEAK_FUNC(sub_822BCAC8);
PPC_FUNC_IMPL(__imp__sub_822BCAC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BCACC"))) PPC_WEAK_FUNC(sub_822BCACC);
PPC_FUNC_IMPL(__imp__sub_822BCACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BCAD0"))) PPC_WEAK_FUNC(sub_822BCAD0);
PPC_FUNC_IMPL(__imp__sub_822BCAD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BCAD8"))) PPC_WEAK_FUNC(sub_822BCAD8);
PPC_FUNC_IMPL(__imp__sub_822BCAD8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BCAE0"))) PPC_WEAK_FUNC(sub_822BCAE0);
PPC_FUNC_IMPL(__imp__sub_822BCAE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BCAE4"))) PPC_WEAK_FUNC(sub_822BCAE4);
PPC_FUNC_IMPL(__imp__sub_822BCAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BCAE8"))) PPC_WEAK_FUNC(sub_822BCAE8);
PPC_FUNC_IMPL(__imp__sub_822BCAE8) {
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
	// bl 0x822b4970
	ctx.lr = 0x822BCAFC;
	sub_822B4970(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bcb28
	if (ctx.cr6.eq) goto loc_822BCB28;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lwz r11,-31348(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31348);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822bcb28
	if (!ctx.cr6.eq) goto loc_822BCB28;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r9,-31887
	ctx.r9.s64 = -2089746432;
	// stw r11,-31348(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31348, ctx.r11.u32);
	// lwz r3,25532(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25532);
	// bl 0x82e68ea8
	ctx.lr = 0x822BCB28;
	sub_82E68EA8(ctx, base);
loc_822BCB28:
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lwz r11,25024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bcb40
	if (ctx.cr6.eq) goto loc_822BCB40;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82e645c8
	ctx.lr = 0x822BCB40;
	sub_82E645C8(ctx, base);
loc_822BCB40:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,25024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25024, ctx.r11.u32);
	// bl 0x82e64750
	ctx.lr = 0x822BCB50;
	sub_82E64750(ctx, base);
}

__attribute__((alias("__imp__sub_822BCB50"))) PPC_WEAK_FUNC(sub_822BCB50);
PPC_FUNC_IMPL(__imp__sub_822BCB50) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e645d0
	ctx.lr = 0x822BCB6C;
	sub_82E645D0(ctx, base);
	// lhz r11,102(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// lhz r10,98(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r9,110(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 110);
	// lhz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// lhz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 108);
	// lhz r6,106(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 106);
	// rlwimi r11,r8,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r10,r7,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r9,r6,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bl 0x82bea278
	ctx.lr = 0x822BCBA4;
	sub_82BEA278(ctx, base);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lhz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// xor r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_822BCBCC"))) PPC_WEAK_FUNC(sub_822BCBCC);
PPC_FUNC_IMPL(__imp__sub_822BCBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BCBD0"))) PPC_WEAK_FUNC(sub_822BCBD0);
PPC_FUNC_IMPL(__imp__sub_822BCBD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r11,17384
	ctx.r3.s64 = ctx.r11.s64 + 17384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BCBDC"))) PPC_WEAK_FUNC(sub_822BCBDC);
PPC_FUNC_IMPL(__imp__sub_822BCBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BCBE0"))) PPC_WEAK_FUNC(sub_822BCBE0);
PPC_FUNC_IMPL(__imp__sub_822BCBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// addi r3,r11,-16144
	ctx.r3.s64 = ctx.r11.s64 + -16144;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BCBEC"))) PPC_WEAK_FUNC(sub_822BCBEC);
PPC_FUNC_IMPL(__imp__sub_822BCBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BCBF0"))) PPC_WEAK_FUNC(sub_822BCBF0);
PPC_FUNC_IMPL(__imp__sub_822BCBF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// addi r3,r11,-15632
	ctx.r3.s64 = ctx.r11.s64 + -15632;
	// blr 
	return;
}

