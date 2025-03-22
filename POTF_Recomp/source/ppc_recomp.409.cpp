#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82CC10BC"))) PPC_WEAK_FUNC(sub_82CC10BC);
PPC_FUNC_IMPL(__imp__sub_82CC10BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC10C0"))) PPC_WEAK_FUNC(sub_82CC10C0);
PPC_FUNC_IMPL(__imp__sub_82CC10C0) {
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
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82cc10ec
	if (ctx.cr6.eq) goto loc_82CC10EC;
	// ble cr6,0x82cc10f8
	if (!ctx.cr6.gt) goto loc_82CC10F8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bgt cr6,0x82cc10f8
	if (ctx.cr6.gt) goto loc_82CC10F8;
	// bl 0x82cb8f58
	ctx.lr = 0x82CC10E4;
	sub_82CB8F58(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// b 0x82cc10f4
	goto loc_82CC10F4;
loc_82CC10EC:
	// bl 0x82cb8f58
	ctx.lr = 0x82CC10F0;
	sub_82CB8F58(ctx, base);
	// li r11,33
	ctx.r11.s64 = 33;
loc_82CC10F4:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82CC10F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC1108"))) PPC_WEAK_FUNC(sub_82CC1108);
PPC_FUNC_IMPL(__imp__sub_82CC1108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,14088
	ctx.r10.s64 = ctx.r11.s64 + 14088;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82CC1118:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82cc1140
	if (ctx.cr6.eq) goto loc_82CC1140;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r8,r10,232
	ctx.r8.s64 = ctx.r10.s64 + 232;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82cc1118
	if (ctx.cr6.lt) goto loc_82CC1118;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82CC1140:
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC1150"))) PPC_WEAK_FUNC(sub_82CC1150);
PPC_FUNC_IMPL(__imp__sub_82CC1150) {
	PPC_FUNC_PROLOGUE();
	// rlwinm. r11,r3,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc1160
	if (ctx.cr0.eq) goto loc_82CC1160;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82CC1160:
	// rlwinm. r11,r3,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc1170
	if (ctx.cr0.eq) goto loc_82CC1170;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82CC1170:
	// rlwinm. r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc1180
	if (ctx.cr0.eq) goto loc_82CC1180;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82CC1180:
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc1190
	if (ctx.cr0.eq) goto loc_82CC1190;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82CC1190:
	// rlwinm r3,r3,1,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC1198"))) PPC_WEAK_FUNC(sub_82CC1198);
PPC_FUNC_IMPL(__imp__sub_82CC1198) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// fmr f31,f3
	ctx.f31.f64 = ctx.f3.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfd f1,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.f1.u64);
	// addi r11,r11,14088
	ctx.r11.s64 = ctx.r11.s64 + 14088;
	// stfd f2,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.f2.u64);
	// stfd f31,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.f31.u64);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82CC11D4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82cc1264
	if (ctx.cr6.eq) goto loc_82CC1264;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r8,r11,232
	ctx.r8.s64 = ctx.r11.s64 + 232;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82cc11d4
	if (ctx.cr6.lt) goto loc_82CC11D4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CC11F8:
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// beq cr6,0x82cc1274
	if (ctx.cr6.eq) goto loc_82CC1274;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r8,188(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r7,192(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r6,196(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// bl 0x82cc1570
	ctx.lr = 0x82CC1244;
	sub_82CC1570(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cd0ef8
	ctx.lr = 0x82CC124C;
	sub_82CD0EF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82cc125c
	if (!ctx.cr0.eq) goto loc_82CC125C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cc10c0
	ctx.lr = 0x82CC125C;
	sub_82CC10C0(ctx, base);
loc_82CC125C:
	// lfd f1,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// b 0x82cc1284
	goto loc_82CC1284;
loc_82CC1264:
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82cc11f8
	goto loc_82CC11F8;
loc_82CC1274:
	// bl 0x82cc1570
	ctx.lr = 0x82CC1278;
	sub_82CC1570(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cc10c0
	ctx.lr = 0x82CC1280;
	sub_82CC10C0(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82CC1284:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82CC129C"))) PPC_WEAK_FUNC(sub_82CC129C);
PPC_FUNC_IMPL(__imp__sub_82CC129C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC12A0"))) PPC_WEAK_FUNC(sub_82CC12A0);
PPC_FUNC_IMPL(__imp__sub_82CC12A0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,16156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82cc12ec
	if (!ctx.cr6.eq) goto loc_82CC12EC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f2,-18344(r11)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
	// bl 0x82cc1198
	ctx.lr = 0x82CC12E8;
	sub_82CC1198(ctx, base);
	// b 0x82cc1310
	goto loc_82CC1310;
loc_82CC12EC:
	// bl 0x82cb8f58
	ctx.lr = 0x82CC12F0;
	sub_82CB8F58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,33
	ctx.r10.s64 = 33;
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82cc1570
	ctx.lr = 0x82CC130C;
	sub_82CC1570(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82CC1310:
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

__attribute__((alias("__imp__sub_82CC1328"))) PPC_WEAK_FUNC(sub_82CC1328);
PPC_FUNC_IMPL(__imp__sub_82CC1328) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// fadd f31,f1,f2
	ctx.f31.f64 = ctx.f1.f64 + ctx.f2.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,16156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82cc136c
	if (!ctx.cr6.eq) goto loc_82CC136C;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82cc1198
	ctx.lr = 0x82CC1368;
	sub_82CC1198(ctx, base);
	// b 0x82cc1390
	goto loc_82CC1390;
loc_82CC136C:
	// bl 0x82cb8f58
	ctx.lr = 0x82CC1370;
	sub_82CB8F58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,33
	ctx.r10.s64 = 33;
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82cc1570
	ctx.lr = 0x82CC138C;
	sub_82CC1570(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82CC1390:
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

__attribute__((alias("__imp__sub_82CC13A8"))) PPC_WEAK_FUNC(sub_82CC13A8);
PPC_FUNC_IMPL(__imp__sub_82CC13A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82CC13B0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfd f2,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.f2.u64);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r4,r1,280
	ctx.r4.s64 = ctx.r1.s64 + 280;
	// stfd f31,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.f31.u64);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r30,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82cc0e68
	ctx.lr = 0x82CC13E0;
	sub_82CC0E68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82cc1418
	if (!ctx.cr0.eq) goto loc_82CC1418;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,280
	ctx.r8.s64 = ctx.r1.s64 + 280;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,292
	ctx.r4.s64 = ctx.r1.s64 + 292;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cc0a50
	ctx.lr = 0x82CC1414;
	sub_82CC0A50(ctx, base);
	// lwz r30,292(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
loc_82CC1418:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cc1150
	ctx.lr = 0x82CC1420;
	sub_82CC1150(ctx, base);
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,16156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82cc1458
	if (!ctx.cr6.eq) goto loc_82CC1458;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82cc1458
	if (ctx.cr6.eq) goto loc_82CC1458;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f3,280(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfd f2,-18344(r11)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
	// bl 0x82cc1198
	ctx.lr = 0x82CC1454;
	sub_82CC1198(ctx, base);
	// b 0x82cc1470
	goto loc_82CC1470;
loc_82CC1458:
	// bl 0x82cc10c0
	ctx.lr = 0x82CC145C;
	sub_82CC10C0(ctx, base);
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// bl 0x82cc1570
	ctx.lr = 0x82CC146C;
	sub_82CC1570(ctx, base);
	// lfd f1,280(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
loc_82CC1470:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC147C"))) PPC_WEAK_FUNC(sub_82CC147C);
PPC_FUNC_IMPL(__imp__sub_82CC147C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC1480"))) PPC_WEAK_FUNC(sub_82CC1480);
PPC_FUNC_IMPL(__imp__sub_82CC1480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82CC1488;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfd f3,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.f3.u64);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// stfd f30,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.f30.u64);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r30,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// bl 0x82cc0e68
	ctx.lr = 0x82CC14C0;
	sub_82CC0E68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82cc1500
	if (!ctx.cr0.eq) goto loc_82CC1500;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stfd f31,128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f31.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// oris r11,r11,34816
	ctx.r11.u64 = ctx.r11.u64 | 2281701376;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,300
	ctx.r4.s64 = ctx.r1.s64 + 300;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cc0a50
	ctx.lr = 0x82CC14FC;
	sub_82CC0A50(ctx, base);
	// lwz r30,300(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
loc_82CC1500:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cc1150
	ctx.lr = 0x82CC1508;
	sub_82CC1150(ctx, base);
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,16156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82cc153c
	if (!ctx.cr6.eq) goto loc_82CC153C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82cc153c
	if (ctx.cr6.eq) goto loc_82CC153C;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lfd f3,288(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82cc1198
	ctx.lr = 0x82CC1538;
	sub_82CC1198(ctx, base);
	// b 0x82cc1554
	goto loc_82CC1554;
loc_82CC153C:
	// bl 0x82cc10c0
	ctx.lr = 0x82CC1540;
	sub_82CC10C0(ctx, base);
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// bl 0x82cc1570
	ctx.lr = 0x82CC1550;
	sub_82CC1570(ctx, base);
	// lfd f1,288(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
loc_82CC1554:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC1564"))) PPC_WEAK_FUNC(sub_82CC1564);
PPC_FUNC_IMPL(__imp__sub_82CC1564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC1568"))) PPC_WEAK_FUNC(sub_82CC1568);
PPC_FUNC_IMPL(__imp__sub_82CC1568) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC156C"))) PPC_WEAK_FUNC(sub_82CC156C);
PPC_FUNC_IMPL(__imp__sub_82CC156C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC1570"))) PPC_WEAK_FUNC(sub_82CC1570);
PPC_FUNC_IMPL(__imp__sub_82CC1570) {
	PPC_FUNC_PROLOGUE();
	// mffs f0
	ctx.r0.u64 = ctx.fpscr.loadFromHost();
	// stfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// xori r5,r3,248
	ctx.r5.u64 = ctx.r3.u64 ^ 248;
	// lwz r3,-4(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// and r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 & ctx.r4.u64;
	// andc r6,r3,r4
	ctx.r6.u64 = ctx.r3.u64 & ~ctx.r4.u64;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r6,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r6.u32);
	// lfd f0,-8(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// xori r3,r3,248
	ctx.r3.u64 = ctx.r3.u64 ^ 248;
	// mtfsf 255,f0
	ctx.fpscr.storeFromGuest(ctx.f0.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC15A0"))) PPC_WEAK_FUNC(sub_82CC15A0);
PPC_FUNC_IMPL(__imp__sub_82CC15A0) {
	PPC_FUNC_PROLOGUE();
	// mffs f0
	ctx.r0.u64 = ctx.fpscr.loadFromHost();
	// stfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// lwz r3,-4(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC15B0"))) PPC_WEAK_FUNC(sub_82CC15B0);
PPC_FUNC_IMPL(__imp__sub_82CC15B0) {
	PPC_FUNC_PROLOGUE();
	// mffs f0
	ctx.r0.u64 = ctx.fpscr.loadFromHost();
	// li r3,4
	ctx.r3.s64 = 4;
	// stfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// lwz r5,-4(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// and r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 & ctx.r5.u64;
	// stw r5,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r5.u32);
	// lfd f1,-8(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// mtfsf 255,f1
	ctx.fpscr.storeFromGuest(ctx.f1.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC15D4"))) PPC_WEAK_FUNC(sub_82CC15D4);
PPC_FUNC_IMPL(__imp__sub_82CC15D4) {
	PPC_FUNC_PROLOGUE();
	// mffs f0
	ctx.r0.u64 = ctx.fpscr.loadFromHost();
	// stfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// lwz r5,-4(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// or r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 | ctx.r5.u64;
	// stw r5,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r5.u32);
	// lfd f1,-8(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// mtfsf 255,f1
	ctx.fpscr.storeFromGuest(ctx.f1.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC15F4"))) PPC_WEAK_FUNC(sub_82CC15F4);
PPC_FUNC_IMPL(__imp__sub_82CC15F4) {
	PPC_FUNC_PROLOGUE();
	// stw r3,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r3.u32);
	// lfd f1,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// mtfsf 255,f1
	ctx.fpscr.storeFromGuest(ctx.f1.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC1604"))) PPC_WEAK_FUNC(sub_82CC1604);
PPC_FUNC_IMPL(__imp__sub_82CC1604) {
	PPC_FUNC_PROLOGUE();
	// mffs f0
	ctx.r0.u64 = ctx.fpscr.loadFromHost();
	// stfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// lwz r3,-4(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC1614"))) PPC_WEAK_FUNC(sub_82CC1614);
PPC_FUNC_IMPL(__imp__sub_82CC1614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC1618"))) PPC_WEAK_FUNC(sub_82CC1618);
PPC_FUNC_IMPL(__imp__sub_82CC1618) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC161C"))) PPC_WEAK_FUNC(sub_82CC161C);
PPC_FUNC_IMPL(__imp__sub_82CC161C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC1620"))) PPC_WEAK_FUNC(sub_82CC1620);
PPC_FUNC_IMPL(__imp__sub_82CC1620) {
	PPC_FUNC_PROLOGUE();
	// lis r12,-32256
	ctx.r12.s64 = -2113929216;
	// lfd f4,24592(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r12.u32 + 24592);
	// lis r12,-32256
	ctx.r12.s64 = -2113929216;
	// lfd f5,24600(r12)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r12.u32 + 24600);
	// fcmpu cr0,f1,f4
	ctx.cr0.compare(ctx.f1.f64, ctx.f4.f64);
	// beq- 0x82cc1660
	if (ctx.cr0.eq) goto loc_82CC1660;
	// fabs f6,f1
	ctx.f6.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fcmpu cr0,f6,f5
	ctx.cr0.compare(ctx.f6.f64, ctx.f5.f64);
	// bge- 0x82cc1660
	if (!ctx.cr0.lt) goto loc_82CC1660;
	// fcmpu cr0,f1,f4
	ctx.cr0.compare(ctx.f1.f64, ctx.f4.f64);
	// blt 0x82cc1658
	if (ctx.cr0.lt) goto loc_82CC1658;
	// fadd f4,f1,f5
	ctx.f4.f64 = ctx.f1.f64 + ctx.f5.f64;
	// fsub f1,f4,f5
	ctx.f1.f64 = ctx.f4.f64 - ctx.f5.f64;
	// b 0x82cc1660
	goto loc_82CC1660;
loc_82CC1658:
	// fsub f4,f1,f5
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f1.f64 - ctx.f5.f64;
	// fadd f1,f4,f5
	ctx.f1.f64 = ctx.f4.f64 + ctx.f5.f64;
loc_82CC1660:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC1664"))) PPC_WEAK_FUNC(sub_82CC1664);
PPC_FUNC_IMPL(__imp__sub_82CC1664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC1668"))) PPC_WEAK_FUNC(sub_82CC1668);
PPC_FUNC_IMPL(__imp__sub_82CC1668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82CC1670;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82cc16b8
	if (!ctx.cr6.eq) goto loc_82CC16B8;
loc_82CC168C:
	// bl 0x82cb8f58
	ctx.lr = 0x82CC1690;
	sub_82CB8F58(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CC16B0;
	sub_82CB8DA0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82cc1778
	goto loc_82CC1778;
loc_82CC16B8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82cc16c8
	if (ctx.cr6.eq) goto loc_82CC16C8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82cc168c
	if (ctx.cr6.eq) goto loc_82CC168C;
loc_82CC16C8:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bgt cr6,0x82cc16e0
	if (ctx.cr6.gt) goto loc_82CC16E0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
loc_82CC16E0:
	// li r10,66
	ctx.r10.s64 = 66;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CC1704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82cc1718
	if (!ctx.cr6.eq) goto loc_82CC1718;
loc_82CC1710:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82cc1778
	goto loc_82CC1778;
loc_82CC1718:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82cc1754
	if (ctx.cr6.lt) goto loc_82CC1754;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt 0x82cc1740
	if (ctx.cr0.lt) goto loc_82CC1740;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x82cc1710
	goto loc_82CC1710;
loc_82CC1740:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cbb650
	ctx.lr = 0x82CC174C;
	sub_82CBB650(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82cc1710
	if (!ctx.cr6.eq) goto loc_82CC1710;
loc_82CC1754:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r31,r29
	ctx.r10.u64 = ctx.r31.u64 + ctx.r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stb r9,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r9.u8);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r3,r11,-2
	ctx.r3.s64 = ctx.r11.s64 + -2;
loc_82CC1778:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC1780"))) PPC_WEAK_FUNC(sub_82CC1780);
PPC_FUNC_IMPL(__imp__sub_82CC1780) {
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
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r11,-17984
	ctx.r3.s64 = ctx.r11.s64 + -17984;
	// bl 0x82cc1668
	ctx.lr = 0x82CC17AC;
	sub_82CC1668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82cc17b8
	if (!ctx.cr0.lt) goto loc_82CC17B8;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CC17B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC17C8"))) PPC_WEAK_FUNC(sub_82CC17C8);
PPC_FUNC_IMPL(__imp__sub_82CC17C8) {
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
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-17984
	ctx.r3.s64 = ctx.r11.s64 + -17984;
	// bl 0x82cc1668
	ctx.lr = 0x82CC17F4;
	sub_82CC1668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82cc1800
	if (!ctx.cr0.lt) goto loc_82CC1800;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CC1800:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC1810"))) PPC_WEAK_FUNC(sub_82CC1810);
PPC_FUNC_IMPL(__imp__sub_82CC1810) {
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
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82cc183c
	if (!ctx.cr6.eq) goto loc_82CC183C;
loc_82CC1830:
	// bl 0x82cb8f58
	ctx.lr = 0x82CC1834;
	sub_82CB8F58(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// b 0x82cc1888
	goto loc_82CC1888;
loc_82CC183C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82cc1830
	if (ctx.cr6.eq) goto loc_82CC1830;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82cc1830
	if (ctx.cr6.eq) goto loc_82CC1830;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lis r11,-32051
	ctx.r11.s64 = -2100494336;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,4224
	ctx.r3.s64 = ctx.r11.s64 + 4224;
	// bl 0x82cc1668
	ctx.lr = 0x82CC1868;
	sub_82CC1668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82cc1878
	if (!ctx.cr0.lt) goto loc_82CC1878;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_82CC1878:
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x82cc18a8
	if (!ctx.cr6.eq) goto loc_82CC18A8;
	// bl 0x82cb8f58
	ctx.lr = 0x82CC1884;
	sub_82CB8F58(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
loc_82CC1888:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CC18A4;
	sub_82CB8DA0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CC18A8:
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

__attribute__((alias("__imp__sub_82CC18BC"))) PPC_WEAK_FUNC(sub_82CC18BC);
PPC_FUNC_IMPL(__imp__sub_82CC18BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC18C0"))) PPC_WEAK_FUNC(sub_82CC18C0);
PPC_FUNC_IMPL(__imp__sub_82CC18C0) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82cc1810
	sub_82CC1810(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC18CC"))) PPC_WEAK_FUNC(sub_82CC18CC);
PPC_FUNC_IMPL(__imp__sub_82CC18CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC18D0"))) PPC_WEAK_FUNC(sub_82CC18D0);
PPC_FUNC_IMPL(__imp__sub_82CC18D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82CC18D8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82cc192c
	if (!ctx.cr6.eq) goto loc_82CC192C;
loc_82CC18FC:
	// bl 0x82cb8f58
	ctx.lr = 0x82CC1900;
	sub_82CB8F58(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
loc_82CC1904:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CC1920;
	sub_82CB8DA0(ctx, base);
loc_82CC1920:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CC1924:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82CC192C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82cc194c
	if (!ctx.cr6.eq) goto loc_82CC194C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82cc1954
	if (!ctx.cr6.eq) goto loc_82CC1954;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82cc18fc
	if (!ctx.cr6.eq) goto loc_82CC18FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cc1924
	goto loc_82CC1924;
loc_82CC194C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82cc18fc
	if (ctx.cr6.eq) goto loc_82CC18FC;
loc_82CC1954:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82cc18fc
	if (ctx.cr6.eq) goto loc_82CC18FC;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x82cc19b4
	if (!ctx.cr6.gt) goto loc_82CC19B4;
	// bl 0x82cb8f58
	ctx.lr = 0x82CC196C;
	sub_82CB8F58(ctx, base);
	// lis r11,-32051
	ctx.r11.s64 = -2100494336;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r25,1
	ctx.r5.s64 = ctx.r25.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,4224
	ctx.r3.s64 = ctx.r11.s64 + 4224;
	// bl 0x82cc1668
	ctx.lr = 0x82CC1990;
	sub_82CC1668(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x82cc1a10
	if (!ctx.cr6.eq) goto loc_82CC1A10;
	// bl 0x82cb8f58
	ctx.lr = 0x82CC199C;
	sub_82CB8F58(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// bne cr6,0x82cc1920
	if (!ctx.cr6.eq) goto loc_82CC1920;
	// bl 0x82cb8f58
	ctx.lr = 0x82CC19AC;
	sub_82CB8F58(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// b 0x82cc1920
	goto loc_82CC1920;
loc_82CC19B4:
	// bl 0x82cb8f58
	ctx.lr = 0x82CC19B8;
	sub_82CB8F58(ctx, base);
	// lis r11,-32051
	ctx.r11.s64 = -2100494336;
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,4224
	ctx.r3.s64 = ctx.r11.s64 + 4224;
	// bl 0x82cc1668
	ctx.lr = 0x82CC19DC;
	sub_82CC1668(ctx, base);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// stb r24,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r24.u8);
	// bne cr6,0x82cc1a10
	if (!ctx.cr6.eq) goto loc_82CC1A10;
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, -1, ctx.xer);
	// bne cr6,0x82cc1a18
	if (!ctx.cr6.eq) goto loc_82CC1A18;
	// bl 0x82cb8f58
	ctx.lr = 0x82CC19F8;
	sub_82CB8F58(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// bne cr6,0x82cc1920
	if (!ctx.cr6.eq) goto loc_82CC1920;
	// bl 0x82cb8f58
	ctx.lr = 0x82CC1A08;
	sub_82CB8F58(ctx, base);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// b 0x82cc1920
	goto loc_82CC1920;
loc_82CC1A10:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82cc1924
	if (!ctx.cr6.lt) goto loc_82CC1924;
loc_82CC1A18:
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// stb r24,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r24.u8);
	// bne cr6,0x82cc1920
	if (!ctx.cr6.eq) goto loc_82CC1920;
	// bl 0x82cb8f58
	ctx.lr = 0x82CC1A28;
	sub_82CB8F58(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// b 0x82cc1904
	goto loc_82CC1904;
}

__attribute__((alias("__imp__sub_82CC1A30"))) PPC_WEAK_FUNC(sub_82CC1A30);
PPC_FUNC_IMPL(__imp__sub_82CC1A30) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82cc18d0
	sub_82CC18D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC1A3C"))) PPC_WEAK_FUNC(sub_82CC1A3C);
PPC_FUNC_IMPL(__imp__sub_82CC1A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC1A40"))) PPC_WEAK_FUNC(sub_82CC1A40);
PPC_FUNC_IMPL(__imp__sub_82CC1A40) {
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
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r11,18640
	ctx.r3.s64 = ctx.r11.s64 + 18640;
	// bl 0x82cc1668
	ctx.lr = 0x82CC1A6C;
	sub_82CC1668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82cc1a78
	if (!ctx.cr0.lt) goto loc_82CC1A78;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CC1A78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC1A88"))) PPC_WEAK_FUNC(sub_82CC1A88);
PPC_FUNC_IMPL(__imp__sub_82CC1A88) {
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
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,18640
	ctx.r3.s64 = ctx.r11.s64 + 18640;
	// bl 0x82cc1668
	ctx.lr = 0x82CC1AB4;
	sub_82CC1668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82cc1ac0
	if (!ctx.cr0.lt) goto loc_82CC1AC0;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CC1AC0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC1AD8"))) PPC_WEAK_FUNC(sub_82CC1AD8);
PPC_FUNC_IMPL(__imp__sub_82CC1AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82CC1AE0;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r23,0
	ctx.r23.s64 = 0;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r23,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r23.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82cc1b44
	if (!ctx.cr6.eq) goto loc_82CC1B44;
loc_82CC1B18:
	// bl 0x82cb8f58
	ctx.lr = 0x82CC1B1C;
	sub_82CB8F58(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CC1B3C;
	sub_82CB8DA0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82cc1cb4
	goto loc_82CC1CB4;
loc_82CC1B44:
	// cntlzw r11,r27
	ctx.r11.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc1b18
	if (ctx.cr6.eq) goto loc_82CC1B18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// bl 0x82cb00c8
	ctx.lr = 0x82CC1B64;
	sub_82CB00C8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cc1c68
	if (!ctx.cr0.eq) goto loc_82CC1C68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb8d38
	ctx.lr = 0x82CC1B7C;
	sub_82CB8D38(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82cc1bcc
	if (ctx.cr6.eq) goto loc_82CC1BCC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb8d38
	ctx.lr = 0x82CC1B8C;
	sub_82CB8D38(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82cc1bcc
	if (ctx.cr6.eq) goto loc_82CC1BCC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb8d38
	ctx.lr = 0x82CC1B9C;
	sub_82CB8D38(ctx, base);
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r11,6272
	ctx.r29.s64 = ctx.r11.s64 + 6272;
	// bl 0x82cb8d38
	ctx.lr = 0x82CC1BB4;
	sub_82CB8D38(ctx, base);
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// rlwinm r10,r3,6,21,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// lis r9,-31909
	ctx.r9.s64 = -2091188224;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r28,r9,12760
	ctx.r28.s64 = ctx.r9.s64 + 12760;
	// b 0x82cc1be0
	goto loc_82CC1BE0;
loc_82CC1BCC:
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r28,r10,12760
	ctx.r28.s64 = ctx.r10.s64 + 12760;
	// addi r29,r11,6272
	ctx.r29.s64 = ctx.r11.s64 + 6272;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82CC1BE0:
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// rlwinm. r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cc1c3c
	if (!ctx.cr0.eq) goto loc_82CC1C3C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb8d38
	ctx.lr = 0x82CC1BF4;
	sub_82CB8D38(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82cc1c30
	if (ctx.cr6.eq) goto loc_82CC1C30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb8d38
	ctx.lr = 0x82CC1C04;
	sub_82CB8D38(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82cc1c30
	if (ctx.cr6.eq) goto loc_82CC1C30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb8d38
	ctx.lr = 0x82CC1C14;
	sub_82CB8D38(ctx, base);
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb8d38
	ctx.lr = 0x82CC1C24;
	sub_82CB8D38(ctx, base);
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// rlwinm r11,r3,6,21,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82CC1C30:
	// lbz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc1c68
	if (ctx.cr0.eq) goto loc_82CC1C68;
loc_82CC1C3C:
	// bl 0x82cb8f58
	ctx.lr = 0x82CC1C40;
	sub_82CB8F58(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CC1C60;
	sub_82CB8DA0(ctx, base);
	// li r23,-1
	ctx.r23.s64 = -1;
	// stw r23,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r23.u32);
loc_82CC1C68:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x82cc1ca4
	if (!ctx.cr6.eq) goto loc_82CC1CA4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb9d10
	ctx.lr = 0x82CC1C78;
	sub_82CB9D10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x82CC1C94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb9de8
	ctx.lr = 0x82CC1CA4;
	sub_82CB9DE8(ctx, base);
loc_82CC1CA4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x82cc1cbc
	ctx.lr = 0x82CC1CB0;
	sub_82CC1CBC(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82CC1CB4:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC1CBC"))) PPC_WEAK_FUNC(sub_82CC1CBC);
PPC_FUNC_IMPL(__imp__sub_82CC1CBC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82cb0188
	ctx.lr = 0x82CC1CD8;
	sub_82CB0188(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// lwz r12,-16(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC1CEC"))) PPC_WEAK_FUNC(sub_82CC1CEC);
PPC_FUNC_IMPL(__imp__sub_82CC1CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC1CF0"))) PPC_WEAK_FUNC(sub_82CC1CF0);
PPC_FUNC_IMPL(__imp__sub_82CC1CF0) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-17984
	ctx.r3.s64 = ctx.r11.s64 + -17984;
	// b 0x82cc1ad8
	sub_82CC1AD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC1D0C"))) PPC_WEAK_FUNC(sub_82CC1D0C);
PPC_FUNC_IMPL(__imp__sub_82CC1D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC1D10"))) PPC_WEAK_FUNC(sub_82CC1D10);
PPC_FUNC_IMPL(__imp__sub_82CC1D10) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lis r11,-32051
	ctx.r11.s64 = -2100494336;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,4224
	ctx.r3.s64 = ctx.r11.s64 + 4224;
	// b 0x82cc1ad8
	sub_82CC1AD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC1D2C"))) PPC_WEAK_FUNC(sub_82CC1D2C);
PPC_FUNC_IMPL(__imp__sub_82CC1D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC1D30"))) PPC_WEAK_FUNC(sub_82CC1D30);
PPC_FUNC_IMPL(__imp__sub_82CC1D30) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,18640
	ctx.r3.s64 = ctx.r11.s64 + 18640;
	// b 0x82cc1ad8
	sub_82CC1AD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC1D4C"))) PPC_WEAK_FUNC(sub_82CC1D4C);
PPC_FUNC_IMPL(__imp__sub_82CC1D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC1D50"))) PPC_WEAK_FUNC(sub_82CC1D50);
PPC_FUNC_IMPL(__imp__sub_82CC1D50) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-17984
	ctx.r3.s64 = ctx.r11.s64 + -17984;
	// b 0x82cc1ad8
	sub_82CC1AD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC1D6C"))) PPC_WEAK_FUNC(sub_82CC1D6C);
PPC_FUNC_IMPL(__imp__sub_82CC1D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC1D70"))) PPC_WEAK_FUNC(sub_82CC1D70);
PPC_FUNC_IMPL(__imp__sub_82CC1D70) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lis r11,-32051
	ctx.r11.s64 = -2100494336;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,4224
	ctx.r3.s64 = ctx.r11.s64 + 4224;
	// b 0x82cc1ad8
	sub_82CC1AD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC1D8C"))) PPC_WEAK_FUNC(sub_82CC1D8C);
PPC_FUNC_IMPL(__imp__sub_82CC1D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC1D90"))) PPC_WEAK_FUNC(sub_82CC1D90);
PPC_FUNC_IMPL(__imp__sub_82CC1D90) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,18640
	ctx.r3.s64 = ctx.r11.s64 + 18640;
	// b 0x82cc1ad8
	sub_82CC1AD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC1DAC"))) PPC_WEAK_FUNC(sub_82CC1DAC);
PPC_FUNC_IMPL(__imp__sub_82CC1DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC1DB0"))) PPC_WEAK_FUNC(sub_82CC1DB0);
PPC_FUNC_IMPL(__imp__sub_82CC1DB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82cd1c10
	sub_82CD1C10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC1DB4"))) PPC_WEAK_FUNC(sub_82CC1DB4);
PPC_FUNC_IMPL(__imp__sub_82CC1DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC1DB8"))) PPC_WEAK_FUNC(sub_82CC1DB8);
PPC_FUNC_IMPL(__imp__sub_82CC1DB8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82cb8e40
	sub_82CB8E40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC1DDC"))) PPC_WEAK_FUNC(sub_82CC1DDC);
PPC_FUNC_IMPL(__imp__sub_82CC1DDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC1DE0"))) PPC_WEAK_FUNC(sub_82CC1DE0);
PPC_FUNC_IMPL(__imp__sub_82CC1DE0) {
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
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cc8f70
	ctx.lr = 0x82CC1E00;
	sub_82CC8F70(ctx, base);
	// cmpwi cr6,r3,101
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 101, ctx.xer);
	// beq cr6,0x82cc1e1c
	if (ctx.cr6.eq) goto loc_82CC1E1C;
loc_82CC1E08:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x82cbdd38
	ctx.lr = 0x82CC1E14;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82cc1e08
	if (!ctx.cr0.eq) goto loc_82CC1E08;
loc_82CC1E1C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cc8f70
	ctx.lr = 0x82CC1E28;
	sub_82CC8F70(ctx, base);
	// cmpwi cr6,r3,120
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 120, ctx.xer);
	// bne cr6,0x82cc1e34
	if (!ctx.cr6.eq) goto loc_82CC1E34;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
loc_82CC1E34:
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lwz r11,15400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15400);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
loc_82CC1E50:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82cc1e50
	if (!ctx.cr6.eq) goto loc_82CC1E50;
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

__attribute__((alias("__imp__sub_82CC1E80"))) PPC_WEAK_FUNC(sub_82CC1E80);
PPC_FUNC_IMPL(__imp__sub_82CC1E80) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r9,15400(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15400);
	// beq 0x82cc1eb8
	if (ctx.cr0.eq) goto loc_82CC1EB8;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
loc_82CC1EA0:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82cc1eb8
	if (ctx.cr6.eq) goto loc_82CC1EB8;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cc1ea0
	if (!ctx.cr0.eq) goto loc_82CC1EA0;
loc_82CC1EB8:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82cc1ee0
	goto loc_82CC1EE0;
loc_82CC1ECC:
	// cmpwi cr6,r10,101
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 101, ctx.xer);
	// beq cr6,0x82cc1eec
	if (ctx.cr6.eq) goto loc_82CC1EEC;
	// cmpwi cr6,r10,69
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 69, ctx.xer);
	// beq cr6,0x82cc1eec
	if (ctx.cr6.eq) goto loc_82CC1EEC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82CC1EE0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82cc1ecc
	if (!ctx.cr0.eq) goto loc_82CC1ECC;
loc_82CC1EEC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82CC1EF0:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,48
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 48, ctx.xer);
	// beq cr6,0x82cc1ef0
	if (ctx.cr6.eq) goto loc_82CC1EF0;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82cc1f18
	if (!ctx.cr6.eq) goto loc_82CC1F18;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82CC1F18:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// bne 0x82cc1f18
	if (!ctx.cr0.eq) goto loc_82CC1F18;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC1F34"))) PPC_WEAK_FUNC(sub_82CC1F34);
PPC_FUNC_IMPL(__imp__sub_82CC1F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC1F38"))) PPC_WEAK_FUNC(sub_82CC1F38);
PPC_FUNC_IMPL(__imp__sub_82CC1F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f13,0(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f0,-18344(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC1F58"))) PPC_WEAK_FUNC(sub_82CC1F58);
PPC_FUNC_IMPL(__imp__sub_82CC1F58) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82cc1f90
	if (ctx.cr6.eq) goto loc_82CC1F90;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82cd1c68
	ctx.lr = 0x82CC1F84;
	sub_82CD1C68(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// b 0x82cc1fa0
	goto loc_82CC1FA0;
loc_82CC1F90:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cd1dc8
	ctx.lr = 0x82CC1F98;
	sub_82CD1DC8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82CC1FA0:
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

__attribute__((alias("__imp__sub_82CC1FB4"))) PPC_WEAK_FUNC(sub_82CC1FB4);
PPC_FUNC_IMPL(__imp__sub_82CC1FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC1FB8"))) PPC_WEAK_FUNC(sub_82CC1FB8);
PPC_FUNC_IMPL(__imp__sub_82CC1FB8) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82cc1f58
	sub_82CC1F58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC1FC0"))) PPC_WEAK_FUNC(sub_82CC1FC0);
PPC_FUNC_IMPL(__imp__sub_82CC1FC0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82CC1FD0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82cc1fd0
	if (!ctx.cr6.eq) goto loc_82CC1FD0;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// b 0x82cb1fe0
	sub_82CB1FE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC1FFC"))) PPC_WEAK_FUNC(sub_82CC1FFC);
PPC_FUNC_IMPL(__imp__sub_82CC1FFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC2000"))) PPC_WEAK_FUNC(sub_82CC2000);
PPC_FUNC_IMPL(__imp__sub_82CC2000) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82cc1de0
	sub_82CC1DE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC2008"))) PPC_WEAK_FUNC(sub_82CC2008);
PPC_FUNC_IMPL(__imp__sub_82CC2008) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82cc1e80
	sub_82CC1E80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC2010"))) PPC_WEAK_FUNC(sub_82CC2010);
PPC_FUNC_IMPL(__imp__sub_82CC2010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82CC2018;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82cc2064
	if (!ctx.cr6.eq) goto loc_82CC2064;
	// bl 0x82cb8f58
	ctx.lr = 0x82CC203C;
	sub_82CB8F58(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CC205C;
	sub_82CB8DA0(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82cc227c
	goto loc_82CC227C;
loc_82CC2064:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82cc2098
	if (!ctx.cr6.eq) goto loc_82CC2098;
	// bl 0x82cb8f58
	ctx.lr = 0x82CC2070;
	sub_82CB8F58(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_82CC2074:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CC2090;
	sub_82CB8DA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82cc227c
	goto loc_82CC227C;
loc_82CC2098:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bgt cr6,0x82cc20a8
	if (ctx.cr6.gt) goto loc_82CC20A8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CC20A8:
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82cc20c0
	if (ctx.cr6.gt) goto loc_82CC20C0;
	// bl 0x82cb8f58
	ctx.lr = 0x82CC20B8;
	sub_82CB8F58(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x82cc2074
	goto loc_82CC2074;
loc_82CC20C0:
	// extsb. r28,r8
	ctx.r28.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82cc2110
	if (ctx.cr0.eq) goto loc_82CC2110;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r11,r11,-45
	ctx.r11.s64 = ctx.r11.s64 + -45;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// ble cr6,0x82cc2110
	if (!ctx.cr6.gt) goto loc_82CC2110;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CC20E8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc20e8
	if (!ctx.cr6.eq) goto loc_82CC20E8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82cb1fe0
	ctx.lr = 0x82CC2110;
	sub_82CB1FE0(ctx, base);
loc_82CC2110:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r26,45
	ctx.r26.s64 = 45;
	// cmpwi cr6,r10,45
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 45, ctx.xer);
	// bne cr6,0x82cc212c
	if (!ctx.cr6.eq) goto loc_82CC212C;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// stb r26,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r26.u8);
loc_82CC212C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82cc2158
	if (!ctx.cr6.gt) goto loc_82CC2158;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lis r8,-31909
	ctx.r8.s64 = -2091188224;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r9,15400(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 15400);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
loc_82CC2158:
	// cntlzw r10,r28
	ctx.r10.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bne cr6,0x82cc2178
	if (!ctx.cr6.eq) goto loc_82CC2178;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x82cc2180
	goto loc_82CC2180;
loc_82CC2178:
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82CC2180:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,24608
	ctx.r5.s64 = ctx.r11.s64 + 24608;
	// bl 0x82cb6030
	ctx.lr = 0x82CC2190;
	sub_82CB6030(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc21b0
	if (ctx.cr0.eq) goto loc_82CC21B0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8e40
	ctx.lr = 0x82CC21B0;
	sub_82CB8E40(ctx, base);
loc_82CC21B0:
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82cc21c4
	if (ctx.cr6.eq) goto loc_82CC21C4;
	// li r11,69
	ctx.r11.s64 = 69;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_82CC21C4:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x82cc2250
	if (ctx.cr6.eq) goto loc_82CC2250;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82cc21ec
	if (!ctx.cr0.lt) goto loc_82CC21EC;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// stb r26,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r26.u8);
loc_82CC21EC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// blt cr6,0x82cc2218
	if (ctx.cr6.lt) goto loc_82CC2218;
	// li r7,100
	ctx.r7.s64 = 100;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// divw r9,r11,r7
	ctx.r9.s32 = ctx.r11.s32 / ctx.r7.s32;
	// divw r7,r11,r7
	ctx.r7.s32 = ctx.r11.s32 / ctx.r7.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulli r8,r7,100
	ctx.r8.s64 = ctx.r7.s64 * 100;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
loc_82CC2218:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x82cc2244
	if (ctx.cr6.lt) goto loc_82CC2244;
	// li r7,10
	ctx.r7.s64 = 10;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// divw r9,r11,r7
	ctx.r9.s32 = ctx.r11.s32 / ctx.r7.s32;
	// divw r7,r11,r7
	ctx.r7.s32 = ctx.r11.s32 / ctx.r7.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulli r8,r7,10
	ctx.r8.s64 = ctx.r7.s64 * 10;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
loc_82CC2244:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r11.u8);
loc_82CC2250:
	// lis r11,-31902
	ctx.r11.s64 = -2090729472;
	// lwz r11,-14512(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14512);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc2278
	if (ctx.cr0.eq) goto loc_82CC2278;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x82cc2278
	if (!ctx.cr6.eq) goto loc_82CC2278;
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82cb1fe0
	ctx.lr = 0x82CC2278;
	sub_82CB1FE0(ctx, base);
loc_82CC2278:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CC227C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC2284"))) PPC_WEAK_FUNC(sub_82CC2284);
PPC_FUNC_IMPL(__imp__sub_82CC2284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC2288"))) PPC_WEAK_FUNC(sub_82CC2288);
PPC_FUNC_IMPL(__imp__sub_82CC2288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82CC2290;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r6,22
	ctx.r6.s64 = 22;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x82cd2158
	ctx.lr = 0x82CC22BC;
	sub_82CD2158(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82cc22f0
	if (!ctx.cr6.eq) goto loc_82CC22F0;
loc_82CC22C4:
	// bl 0x82cb8f58
	ctx.lr = 0x82CC22C8;
	sub_82CB8F58(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CC22E8;
	sub_82CB8DA0(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82cc2394
	goto loc_82CC2394;
loc_82CC22F0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82cc22c4
	if (ctx.cr6.eq) goto loc_82CC22C4;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x82cc230c
	if (!ctx.cr6.eq) goto loc_82CC230C;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x82cc2330
	goto loc_82CC2330;
loc_82CC230C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82cc231c
	if (ctx.cr6.gt) goto loc_82CC231C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CC231C:
	// addi r10,r9,-45
	ctx.r10.s64 = ctx.r9.s64 + -45;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// subf r10,r10,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r10.s64;
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82CC2330:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bgt cr6,0x82cc2340
	if (ctx.cr6.gt) goto loc_82CC2340;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82CC2340:
	// addi r11,r9,-45
	ctx.r11.s64 = ctx.r9.s64 + -45;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82cd1ef0
	ctx.lr = 0x82CC2360;
	sub_82CD1EF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc2374
	if (ctx.cr0.eq) goto loc_82CC2374;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x82cc2394
	goto loc_82CC2394;
loc_82CC2374:
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cc2010
	ctx.lr = 0x82CC2394;
	sub_82CC2010(ctx, base);
loc_82CC2394:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC239C"))) PPC_WEAK_FUNC(sub_82CC239C);
PPC_FUNC_IMPL(__imp__sub_82CC239C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC23A0"))) PPC_WEAK_FUNC(sub_82CC23A0);
PPC_FUNC_IMPL(__imp__sub_82CC23A0) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82cc2288
	sub_82CC2288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC23A8"))) PPC_WEAK_FUNC(sub_82CC23A8);
PPC_FUNC_IMPL(__imp__sub_82CC23A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82CC23B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,48
	ctx.r28.s64 = 48;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,1023
	ctx.r30.s64 = 1023;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x82cc23d8
	if (!ctx.cr6.lt) goto loc_82CC23D8;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
loc_82CC23D8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82cc240c
	if (!ctx.cr6.eq) goto loc_82CC240C;
	// bl 0x82cb8f58
	ctx.lr = 0x82CC23E4;
	sub_82CB8F58(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CC2404;
	sub_82CB8DA0(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82cc27e4
	goto loc_82CC27E4;
loc_82CC240C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82cc2440
	if (!ctx.cr6.eq) goto loc_82CC2440;
	// bl 0x82cb8f58
	ctx.lr = 0x82CC2418;
	sub_82CB8F58(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_82CC241C:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CC2438;
	sub_82CB8DA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82cc27e4
	goto loc_82CC27E4;
loc_82CC2440:
	// addi r11,r6,11
	ctx.r11.s64 = ctx.r6.s64 + 11;
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82cc245c
	if (ctx.cr6.gt) goto loc_82CC245C;
	// bl 0x82cb8f58
	ctx.lr = 0x82CC2454;
	sub_82CB8F58(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x82cc241c
	goto loc_82CC241C;
loc_82CC245C:
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,20,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFE;
	// cmpldi cr6,r10,4094
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 4094, ctx.xer);
	// bne cr6,0x82cc2504
	if (!ctx.cr6.eq) goto loc_82CC2504;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x82cc247c
	if (!ctx.cr6.eq) goto loc_82CC247C;
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x82cc2480
	goto loc_82CC2480;
loc_82CC247C:
	// addi r5,r5,-2
	ctx.r5.s64 = ctx.r5.s64 + -2;
loc_82CC2480:
	// addi r30,r31,2
	ctx.r30.s64 = ctx.r31.s64 + 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cc2288
	ctx.lr = 0x82CC2494;
	sub_82CC2288(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc24a4
	if (ctx.cr0.eq) goto loc_82CC24A4;
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// b 0x82cc27e4
	goto loc_82CC27E4;
loc_82CC24A4:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// bne cr6,0x82cc24b8
	if (!ctx.cr6.eq) goto loc_82CC24B8;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82CC24B8:
	// subfic r10,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r29.s64;
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// li r4,101
	ctx.r4.s64 = 101;
	// addi r11,r10,120
	ctx.r11.s64 = ctx.r10.s64 + 120;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// bl 0x82cd1c10
	ctx.lr = 0x82CC24E0;
	sub_82CD1C10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82cc27e0
	if (ctx.cr0.eq) goto loc_82CC27E0;
	// subfic r11,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r29.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r26,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r26.u8);
	// b 0x82cc27e0
	goto loc_82CC27E0;
loc_82CC2504:
	// clrldi r11,r11,63
	ctx.r11.u64 = ctx.r11.u64 & 0x1;
	// li r27,45
	ctx.r27.s64 = 45;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82cc251c
	if (ctx.cr6.eq) goto loc_82CC251C;
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82CC251C:
	// subfic r10,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r29.s64;
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r9,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r29.s64;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r8,r10,120
	ctx.r8.s64 = ctx.r10.s64 + 120;
	// rlwinm r10,r9,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// stb r8,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r10,r10,97
	ctx.r10.s64 = ctx.r10.s64 + 97;
	// rlwinm r9,r9,0,20,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFE;
	// addi r5,r10,-58
	ctx.r5.s64 = ctx.r10.s64 + -58;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x82cc2588
	if (!ctx.cr6.eq) goto loc_82CC2588;
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rldicr r10,r10,0,51
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0xFFFFFFFFFFFFF000;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x82cc2580
	if (!ctx.cr6.eq) goto loc_82CC2580;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// b 0x82cc2594
	goto loc_82CC2594;
loc_82CC2580:
	// li r30,1022
	ctx.r30.s64 = 1022;
	// b 0x82cc2594
	goto loc_82CC2594;
loc_82CC2588:
	// li r10,49
	ctx.r10.s64 = 49;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82CC2594:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82cc25ac
	if (!ctx.cr6.eq) goto loc_82CC25AC;
	// stb r26,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r26.u8);
	// b 0x82cc25c0
	goto loc_82CC25C0;
loc_82CC25AC:
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,15400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15400);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
loc_82CC25C0:
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rldicr r11,r11,0,51
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// ble cr6,0x82cc26b8
	if (!ctx.cr6.gt) goto loc_82CC26B8;
	// li r10,15
	ctx.r10.s64 = 15;
	// rldicr r10,r10,48,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 48) & 0xFFFF000000000000;
loc_82CC25D8:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82cc2630
	if (!ctx.cr6.gt) goto loc_82CC2630;
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// rldicl r11,r11,52,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFFFFFFFFFFFF;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,57
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 57, ctx.xer);
	// ble cr6,0x82cc2614
	if (!ctx.cr6.gt) goto loc_82CC2614;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_82CC2614:
	// addi r9,r7,-4
	ctx.r9.s64 = ctx.r7.s64 + -4;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// extsh. r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// rldicl r10,r10,60,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 60) & 0xFFFFFFFFFFFFFFF;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// bge 0x82cc25d8
	if (!ctx.cr0.lt) goto loc_82CC25D8;
loc_82CC2630:
	// extsh. r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82cc26b8
	if (ctx.cr0.lt) goto loc_82CC26B8;
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// rldicl r11,r11,52,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFFFFFFFFFFFF;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// ble cr6,0x82cc26b8
	if (!ctx.cr6.gt) goto loc_82CC26B8;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
loc_82CC265C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,102
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 102, ctx.xer);
	// beq cr6,0x82cc2674
	if (ctx.cr6.eq) goto loc_82CC2674;
	// cmpwi cr6,r10,70
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 70, ctx.xer);
	// bne cr6,0x82cc2680
	if (!ctx.cr6.eq) goto loc_82CC2680;
loc_82CC2674:
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82cc265c
	goto loc_82CC265C;
loc_82CC2680:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82cc26ac
	if (ctx.cr6.eq) goto loc_82CC26AC;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// bne cr6,0x82cc26a0
	if (!ctx.cr6.eq) goto loc_82CC26A0;
	// addi r10,r5,58
	ctx.r10.s64 = ctx.r5.s64 + 58;
	// b 0x82cc26a4
	goto loc_82CC26A4;
loc_82CC26A0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82CC26A4:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x82cc26b8
	goto loc_82CC26B8;
loc_82CC26AC:
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
loc_82CC26B8:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82cc26e4
	if (!ctx.cr6.gt) goto loc_82CC26E4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x82cc26e0
	if (ctx.cr0.eq) goto loc_82CC26E0;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82CC26D4:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82cc26d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CC26D4;
loc_82CC26E0:
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
loc_82CC26E4:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc26f4
	if (!ctx.cr6.eq) goto loc_82CC26F4;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_82CC26F4:
	// subfic r11,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r29.s64;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rldicl r11,r11,63,53
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0x7FF;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// blt cr6,0x82cc272c
	if (ctx.cr6.lt) goto loc_82CC272C;
	// li r9,43
	ctx.r9.s64 = 43;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// b 0x82cc2734
	goto loc_82CC2734;
loc_82CC272C:
	// stb r27,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r27.u8);
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82CC2734:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpdi cr6,r11,1000
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1000, ctx.xer);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stb r28,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r28.u8);
	// blt cr6,0x82cc2774
	if (ctx.cr6.lt) goto loc_82CC2774;
	// li r9,1000
	ctx.r9.s64 = 1000;
	// divd r7,r11,r9
	ctx.r7.s64 = ctx.r11.s64 / ctx.r9.s64;
	// divd r6,r11,r9
	ctx.r6.s64 = ctx.r11.s64 / ctx.r9.s64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mulli r7,r6,1000
	ctx.r7.s64 = ctx.r6.s64 * 1000;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82cc277c
	if (!ctx.cr6.eq) goto loc_82CC277C;
loc_82CC2774:
	// cmpdi cr6,r11,100
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 100, ctx.xer);
	// blt cr6,0x82cc27a0
	if (ctx.cr6.lt) goto loc_82CC27A0;
loc_82CC277C:
	// li r9,100
	ctx.r9.s64 = 100;
	// divd r7,r11,r9
	ctx.r7.s64 = ctx.r11.s64 / ctx.r9.s64;
	// divd r6,r11,r9
	ctx.r6.s64 = ctx.r11.s64 / ctx.r9.s64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mulli r7,r6,100
	ctx.r7.s64 = ctx.r6.s64 * 100;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82CC27A0:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82cc27b0
	if (!ctx.cr6.eq) goto loc_82CC27B0;
	// cmpdi cr6,r11,10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 10, ctx.xer);
	// blt cr6,0x82cc27d4
	if (ctx.cr6.lt) goto loc_82CC27D4;
loc_82CC27B0:
	// li r9,10
	ctx.r9.s64 = 10;
	// divd r8,r11,r9
	ctx.r8.s64 = ctx.r11.s64 / ctx.r9.s64;
	// divd r7,r11,r9
	ctx.r7.s64 = ctx.r11.s64 / ctx.r9.s64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mulli r8,r7,10
	ctx.r8.s64 = ctx.r7.s64 * 10;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82CC27D4:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r26,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r26.u8);
loc_82CC27E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CC27E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC27EC"))) PPC_WEAK_FUNC(sub_82CC27EC);
PPC_FUNC_IMPL(__imp__sub_82CC27EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC27F0"))) PPC_WEAK_FUNC(sub_82CC27F0);
PPC_FUNC_IMPL(__imp__sub_82CC27F0) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82cc23a8
	sub_82CC23A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC27F8"))) PPC_WEAK_FUNC(sub_82CC27F8);
PPC_FUNC_IMPL(__imp__sub_82CC27F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82CC2800;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82cc2848
	if (!ctx.cr6.eq) goto loc_82CC2848;
loc_82CC281C:
	// bl 0x82cb8f58
	ctx.lr = 0x82CC2820;
	sub_82CB8F58(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CC2840;
	sub_82CB8DA0(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82cc29b4
	goto loc_82CC29B4;
loc_82CC2848:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82cc281c
	if (ctx.cr6.eq) goto loc_82CC281C;
	// extsb. r26,r7
	ctx.r26.s64 = ctx.r7.s8;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// li r28,48
	ctx.r28.s64 = 48;
	// beq 0x82cc2888
	if (ctx.cr0.eq) goto loc_82CC2888;
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x82cc2888
	if (!ctx.cr6.eq) goto loc_82CC2888;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-45
	ctx.r11.s64 = ctx.r11.s64 + -45;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
loc_82CC2888:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x82cc28a0
	if (!ctx.cr6.eq) goto loc_82CC28A0;
	// addi r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
loc_82CC28A0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82cc28e8
	if (ctx.cr6.gt) goto loc_82CC28E8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82CC28B0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc28b0
	if (!ctx.cr6.eq) goto loc_82CC28B0;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82cb1fe0
	ctx.lr = 0x82CC28E0;
	sub_82CB1FE0(ctx, base);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// b 0x82cc28ec
	goto loc_82CC28EC;
loc_82CC28E8:
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82CC28EC:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82cc29b0
	if (!ctx.cr6.gt) goto loc_82CC29B0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82CC28F8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc28f8
	if (!ctx.cr6.eq) goto loc_82CC28F8;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82cb1fe0
	ctx.lr = 0x82CC2928;
	sub_82CB1FE0(ctx, base);
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,15400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15400);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82cc29b0
	if (!ctx.cr6.lt) goto loc_82CC29B0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82cc2958
	if (ctx.cr6.eq) goto loc_82CC2958;
	// neg r27,r11
	ctx.r27.s64 = -ctx.r11.s64;
	// b 0x82cc2968
	goto loc_82CC2968;
loc_82CC2958:
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82cc2968
	if (ctx.cr6.lt) goto loc_82CC2968;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82CC2968:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82cc29a0
	if (ctx.cr6.eq) goto loc_82CC29A0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82CC2974:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc2974
	if (!ctx.cr6.eq) goto loc_82CC2974;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r3,r30,r27
	ctx.r3.u64 = ctx.r30.u64 + ctx.r27.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82cb1fe0
	ctx.lr = 0x82CC29A0;
	sub_82CB1FE0(ctx, base);
loc_82CC29A0:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82CC29B0;
	sub_82CB16F0(ctx, base);
loc_82CC29B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CC29B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC29BC"))) PPC_WEAK_FUNC(sub_82CC29BC);
PPC_FUNC_IMPL(__imp__sub_82CC29BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC29C0"))) PPC_WEAK_FUNC(sub_82CC29C0);
PPC_FUNC_IMPL(__imp__sub_82CC29C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82CC29C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r6,22
	ctx.r6.s64 = 22;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82cd2158
	ctx.lr = 0x82CC29F0;
	sub_82CD2158(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82cc2a24
	if (!ctx.cr6.eq) goto loc_82CC2A24;
loc_82CC29F8:
	// bl 0x82cb8f58
	ctx.lr = 0x82CC29FC;
	sub_82CB8F58(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CC2A1C;
	sub_82CB8DA0(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82cc2aa0
	goto loc_82CC2AA0;
loc_82CC2A24:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82cc29f8
	if (ctx.cr6.eq) goto loc_82CC29F8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x82cc2a40
	if (!ctx.cr6.eq) goto loc_82CC2A40;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x82cc2a50
	goto loc_82CC2A50;
loc_82CC2A40:
	// addi r10,r11,-45
	ctx.r10.s64 = ctx.r11.s64 + -45;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// subf r4,r10,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r10.s64;
loc_82CC2A50:
	// addi r10,r11,-45
	ctx.r10.s64 = ctx.r11.s64 + -45;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82cd1ef0
	ctx.lr = 0x82CC2A70;
	sub_82CD1EF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc2a84
	if (ctx.cr0.eq) goto loc_82CC2A84;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x82cc2aa0
	goto loc_82CC2AA0;
loc_82CC2A84:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cc27f8
	ctx.lr = 0x82CC2AA0;
	sub_82CC27F8(ctx, base);
loc_82CC2AA0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC2AA8"))) PPC_WEAK_FUNC(sub_82CC2AA8);
PPC_FUNC_IMPL(__imp__sub_82CC2AA8) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82cc29c0
	sub_82CC29C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC2AB0"))) PPC_WEAK_FUNC(sub_82CC2AB0);
PPC_FUNC_IMPL(__imp__sub_82CC2AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82CC2AB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r6,22
	ctx.r6.s64 = 22;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x82cd2158
	ctx.lr = 0x82CC2AE4;
	sub_82CD2158(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82cc2b18
	if (!ctx.cr6.eq) goto loc_82CC2B18;
loc_82CC2AEC:
	// bl 0x82cb8f58
	ctx.lr = 0x82CC2AF0;
	sub_82CB8F58(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CC2B10;
	sub_82CB8DA0(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82cc2bf4
	goto loc_82CC2BF4;
loc_82CC2B18:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82cc2aec
	if (ctx.cr6.eq) goto loc_82CC2AEC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r11,r11,-45
	ctx.r11.s64 = ctx.r11.s64 + -45;
	// addi r29,r10,-1
	ctx.r29.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// beq cr6,0x82cc2b4c
	if (ctx.cr6.eq) goto loc_82CC2B4C;
	// subf r4,r11,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_82CC2B4C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cd1ef0
	ctx.lr = 0x82CC2B5C;
	sub_82CD1EF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc2b70
	if (ctx.cr0.eq) goto loc_82CC2B70;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x82cc2bf4
	goto loc_82CC2BF4;
loc_82CC2B70:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82cc2b88
	if (ctx.cr6.lt) goto loc_82CC2B88;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82CC2B88:
	// cmpwi cr6,r11,-4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -4, ctx.xer);
	// blt cr6,0x82cc2bd4
	if (ctx.cr6.lt) goto loc_82CC2BD4;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x82cc2bd4
	if (!ctx.cr6.lt) goto loc_82CC2BD4;
	// extsb. r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc2bb4
	if (ctx.cr0.eq) goto loc_82CC2BB4;
loc_82CC2BA0:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc2ba0
	if (!ctx.cr6.eq) goto loc_82CC2BA0;
	// stb r11,-2(r28)
	PPC_STORE_U8(ctx.r28.u32 + -2, ctx.r11.u8);
loc_82CC2BB4:
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cc27f8
	ctx.lr = 0x82CC2BD0;
	sub_82CC27F8(ctx, base);
	// b 0x82cc2bf4
	goto loc_82CC2BF4;
loc_82CC2BD4:
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cc2010
	ctx.lr = 0x82CC2BF4;
	sub_82CC2010(ctx, base);
loc_82CC2BF4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC2BFC"))) PPC_WEAK_FUNC(sub_82CC2BFC);
PPC_FUNC_IMPL(__imp__sub_82CC2BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC2C00"))) PPC_WEAK_FUNC(sub_82CC2C00);
PPC_FUNC_IMPL(__imp__sub_82CC2C00) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82cc2ab0
	sub_82CC2AB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC2C08"))) PPC_WEAK_FUNC(sub_82CC2C08);
PPC_FUNC_IMPL(__imp__sub_82CC2C08) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// beq cr6,0x82cc2c50
	if (ctx.cr6.eq) goto loc_82CC2C50;
	// cmpwi cr6,r11,69
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 69, ctx.xer);
	// beq cr6,0x82cc2c50
	if (ctx.cr6.eq) goto loc_82CC2C50;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// bne cr6,0x82cc2c38
	if (!ctx.cr6.eq) goto loc_82CC2C38;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// b 0x82cc29c0
	sub_82CC29C0(ctx, base);
	return;
loc_82CC2C38:
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// beq cr6,0x82cc2c4c
	if (ctx.cr6.eq) goto loc_82CC2C4C;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// beq cr6,0x82cc2c4c
	if (ctx.cr6.eq) goto loc_82CC2C4C;
	// b 0x82cc2ab0
	sub_82CC2AB0(ctx, base);
	return;
loc_82CC2C4C:
	// b 0x82cc23a8
	sub_82CC23A8(ctx, base);
	return;
loc_82CC2C50:
	// b 0x82cc2288
	sub_82CC2288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC2C54"))) PPC_WEAK_FUNC(sub_82CC2C54);
PPC_FUNC_IMPL(__imp__sub_82CC2C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC2C58"))) PPC_WEAK_FUNC(sub_82CC2C58);
PPC_FUNC_IMPL(__imp__sub_82CC2C58) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// beq cr6,0x82cc2ca4
	if (ctx.cr6.eq) goto loc_82CC2CA4;
	// cmpwi cr6,r11,69
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 69, ctx.xer);
	// beq cr6,0x82cc2ca4
	if (ctx.cr6.eq) goto loc_82CC2CA4;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// bne cr6,0x82cc2c84
	if (!ctx.cr6.eq) goto loc_82CC2C84;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82cc29c0
	sub_82CC29C0(ctx, base);
	return;
loc_82CC2C84:
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// beq cr6,0x82cc2c9c
	if (ctx.cr6.eq) goto loc_82CC2C9C;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// beq cr6,0x82cc2c9c
	if (ctx.cr6.eq) goto loc_82CC2C9C;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82cc2ab0
	sub_82CC2AB0(ctx, base);
	return;
loc_82CC2C9C:
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82cc23a8
	sub_82CC23A8(ctx, base);
	return;
loc_82CC2CA4:
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82cc2288
	sub_82CC2288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC2CAC"))) PPC_WEAK_FUNC(sub_82CC2CAC);
PPC_FUNC_IMPL(__imp__sub_82CC2CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC2CB0"))) PPC_WEAK_FUNC(sub_82CC2CB0);
PPC_FUNC_IMPL(__imp__sub_82CC2CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r10,r10,14320
	ctx.r10.s64 = ctx.r10.s64 + 14320;
loc_82CC2CBC:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82cc2cbc
	if (!ctx.cr0.eq) goto loc_82CC2CBC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC2CCC"))) PPC_WEAK_FUNC(sub_82CC2CCC);
PPC_FUNC_IMPL(__imp__sub_82CC2CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC2CD0"))) PPC_WEAK_FUNC(sub_82CC2CD0);
PPC_FUNC_IMPL(__imp__sub_82CC2CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82CC2CD8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82cc2cf8
	if (ctx.cr6.eq) goto loc_82CC2CF8;
	// stw r25,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r25.u32);
loc_82CC2CF8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82cc2d28
	if (!ctx.cr6.eq) goto loc_82CC2D28;
loc_82CC2D00:
	// bl 0x82cb8f58
	ctx.lr = 0x82CC2D04;
	sub_82CB8F58(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CC2D24;
	sub_82CB8DA0(ctx, base);
	// b 0x82cc2fb4
	goto loc_82CC2FB4;
loc_82CC2D28:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82cc2d40
	if (ctx.cr6.eq) goto loc_82CC2D40;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// blt cr6,0x82cc2d00
	if (ctx.cr6.lt) goto loc_82CC2D00;
	// cmpwi cr6,r28,36
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 36, ctx.xer);
	// bgt cr6,0x82cc2d00
	if (ctx.cr6.gt) goto loc_82CC2D00;
loc_82CC2D40:
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lbz r31,0(r25)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r29,r25,1
	ctx.r29.s64 = ctx.r25.s64 + 1;
	// addi r30,r11,13712
	ctx.r30.s64 = ctx.r11.s64 + 13712;
	// lwz r10,13712(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13712);
loc_82CC2D58:
	// lwz r11,172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82cc2d7c
	if (!ctx.cr6.gt) goto loc_82CC2D7C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x82cc3450
	ctx.lr = 0x82CC2D74;
	sub_82CC3450(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82cc2d8c
	goto loc_82CC2D8C;
loc_82CC2D7C:
	// lwz r11,200(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 200);
	// rlwinm r9,r31,1,23,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1FE;
	// lhzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r3,r11,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
loc_82CC2D8C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82cc2da0
	if (ctx.cr6.eq) goto loc_82CC2DA0;
	// lbz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x82cc2d58
	goto loc_82CC2D58;
loc_82CC2DA0:
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x82cc2db4
	if (!ctx.cr6.eq) goto loc_82CC2DB4;
	// ori r24,r24,2
	ctx.r24.u64 = ctx.r24.u64 | 2;
	// b 0x82cc2dbc
	goto loc_82CC2DBC;
loc_82CC2DB4:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// bne cr6,0x82cc2dc4
	if (!ctx.cr6.eq) goto loc_82CC2DC4;
loc_82CC2DBC:
	// lbz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82CC2DC4:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82cc2fa8
	if (ctx.cr6.lt) goto loc_82CC2FA8;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x82cc2fa8
	if (ctx.cr6.eq) goto loc_82CC2FA8;
	// cmpwi cr6,r28,36
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 36, ctx.xer);
	// bgt cr6,0x82cc2fa8
	if (ctx.cr6.gt) goto loc_82CC2FA8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82cc2e20
	if (!ctx.cr6.eq) goto loc_82CC2E20;
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x82cc2df8
	if (ctx.cr6.eq) goto loc_82CC2DF8;
	// li r28,10
	ctx.r28.s64 = 10;
	// b 0x82cc2e58
	goto loc_82CC2E58;
loc_82CC2DF8:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x82cc2e18
	if (ctx.cr6.eq) goto loc_82CC2E18;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// beq cr6,0x82cc2e18
	if (ctx.cr6.eq) goto loc_82CC2E18;
	// li r28,8
	ctx.r28.s64 = 8;
	// b 0x82cc2e58
	goto loc_82CC2E58;
loc_82CC2E18:
	// li r28,16
	ctx.r28.s64 = 16;
	// b 0x82cc2e28
	goto loc_82CC2E28;
loc_82CC2E20:
	// cmpwi cr6,r28,16
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 16, ctx.xer);
	// bne cr6,0x82cc2e58
	if (!ctx.cr6.eq) goto loc_82CC2E58;
loc_82CC2E28:
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x82cc2e58
	if (!ctx.cr6.eq) goto loc_82CC2E58;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x82cc2e4c
	if (ctx.cr6.eq) goto loc_82CC2E4C;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// bne cr6,0x82cc2e58
	if (!ctx.cr6.eq) goto loc_82CC2E58;
loc_82CC2E4C:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// lbz r31,1(r29)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_82CC2E58:
	// li r27,-1
	ctx.r27.s64 = -1;
	// lwz r8,200(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 200);
	// twllei r28,0
	// divwu r9,r27,r28
	ctx.r9.u32 = ctx.r27.u32 / ctx.r28.u32;
loc_82CC2E68:
	// rlwinm r11,r31,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1FE;
	// lhzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82cc2e84
	if (ctx.cr0.eq) goto loc_82CC2E84;
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// b 0x82cc2eac
	goto loc_82CC2EAC;
loc_82CC2E84:
	// andi. r11,r11,259
	ctx.r11.u64 = ctx.r11.u64 & 259;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc2eec
	if (ctx.cr0.eq) goto loc_82CC2EEC;
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// blt cr6,0x82cc2ea8
	if (ctx.cr6.lt) goto loc_82CC2EA8;
	// cmpwi cr6,r11,122
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 122, ctx.xer);
	// bgt cr6,0x82cc2ea8
	if (ctx.cr6.gt) goto loc_82CC2EA8;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
loc_82CC2EA8:
	// addi r11,r11,-55
	ctx.r11.s64 = ctx.r11.s64 + -55;
loc_82CC2EAC:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82cc2eec
	if (!ctx.cr6.lt) goto loc_82CC2EEC;
	// ori r24,r24,8
	ctx.r24.u64 = ctx.r24.u64 | 8;
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82cc2f0c
	if (ctx.cr6.lt) goto loc_82CC2F0C;
	// bne cr6,0x82cc2ee0
	if (!ctx.cr6.eq) goto loc_82CC2EE0;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// twllei r28,0
	// divwu r7,r10,r28
	ctx.r7.u32 = ctx.r10.u32 / ctx.r28.u32;
	// mullw r7,r7,r28
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r28.s32);
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82cc2f0c
	if (!ctx.cr6.gt) goto loc_82CC2F0C;
loc_82CC2EE0:
	// ori r24,r24,4
	ctx.r24.u64 = ctx.r24.u64 | 4;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82cc2f14
	if (!ctx.cr6.eq) goto loc_82CC2F14;
loc_82CC2EEC:
	// rlwinm. r11,r24,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// bne 0x82cc2f20
	if (!ctx.cr0.eq) goto loc_82CC2F20;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82cc2f04
	if (ctx.cr6.eq) goto loc_82CC2F04;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82CC2F04:
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x82cc2f88
	goto loc_82CC2F88;
loc_82CC2F0C:
	// mullw r10,r26,r28
	ctx.r10.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r28.s32);
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82CC2F14:
	// lbz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x82cc2e68
	goto loc_82CC2E68;
loc_82CC2F20:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// rlwinm. r11,r24,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r31,r10,65535
	ctx.r31.u64 = ctx.r10.u64 | 65535;
	// bne 0x82cc2f5c
	if (!ctx.cr0.eq) goto loc_82CC2F5C;
	// clrlwi. r11,r24,31
	ctx.r11.u64 = ctx.r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cc2f88
	if (!ctx.cr0.eq) goto loc_82CC2F88;
	// rlwinm. r11,r24,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc2f4c
	if (ctx.cr0.eq) goto loc_82CC2F4C;
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82cc2f5c
	if (ctx.cr6.gt) goto loc_82CC2F5C;
loc_82CC2F4C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82cc2f88
	if (!ctx.cr6.eq) goto loc_82CC2F88;
	// cmplw cr6,r26,r31
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x82cc2f88
	if (!ctx.cr6.gt) goto loc_82CC2F88;
loc_82CC2F5C:
	// bl 0x82cb8f58
	ctx.lr = 0x82CC2F60;
	sub_82CB8F58(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// clrlwi. r10,r24,31
	ctx.r10.u64 = ctx.r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82cc2f78
	if (ctx.cr0.eq) goto loc_82CC2F78;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// b 0x82cc2f88
	goto loc_82CC2F88;
loc_82CC2F78:
	// rlwinm. r11,r24,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// bne 0x82cc2f88
	if (!ctx.cr0.eq) goto loc_82CC2F88;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82CC2F88:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82cc2f94
	if (ctx.cr6.eq) goto loc_82CC2F94;
	// stw r29,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r29.u32);
loc_82CC2F94:
	// rlwinm. r11,r24,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc2fa0
	if (ctx.cr0.eq) goto loc_82CC2FA0;
	// neg r26,r26
	ctx.r26.s64 = -ctx.r26.s64;
loc_82CC2FA0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x82cc2fb8
	goto loc_82CC2FB8;
loc_82CC2FA8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82cc2fb4
	if (ctx.cr6.eq) goto loc_82CC2FB4;
	// stw r25,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r25.u32);
loc_82CC2FB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CC2FB8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC2FC0"))) PPC_WEAK_FUNC(sub_82CC2FC0);
PPC_FUNC_IMPL(__imp__sub_82CC2FC0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r10,13712
	ctx.r3.s64 = ctx.r10.s64 + 13712;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82cc2cd0
	sub_82CC2CD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC2FE0"))) PPC_WEAK_FUNC(sub_82CC2FE0);
PPC_FUNC_IMPL(__imp__sub_82CC2FE0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82cc2cd0
	sub_82CC2CD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC2FFC"))) PPC_WEAK_FUNC(sub_82CC2FFC);
PPC_FUNC_IMPL(__imp__sub_82CC2FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC3000"))) PPC_WEAK_FUNC(sub_82CC3000);
PPC_FUNC_IMPL(__imp__sub_82CC3000) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r10,13712
	ctx.r3.s64 = ctx.r10.s64 + 13712;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82cc2cd0
	sub_82CC2CD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC3020"))) PPC_WEAK_FUNC(sub_82CC3020);
PPC_FUNC_IMPL(__imp__sub_82CC3020) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82cc2cd0
	sub_82CC2CD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC303C"))) PPC_WEAK_FUNC(sub_82CC303C);
PPC_FUNC_IMPL(__imp__sub_82CC303C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC3040"))) PPC_WEAK_FUNC(sub_82CC3040);
PPC_FUNC_IMPL(__imp__sub_82CC3040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82CC3048;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82cc3068
	if (ctx.cr6.eq) goto loc_82CC3068;
	// stw r26,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r26.u32);
loc_82CC3068:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82cc309c
	if (!ctx.cr6.eq) goto loc_82CC309C;
loc_82CC3070:
	// bl 0x82cb8f58
	ctx.lr = 0x82CC3074;
	sub_82CB8F58(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CC3094;
	sub_82CB8DA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cc330c
	goto loc_82CC330C;
loc_82CC309C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82cc30b4
	if (ctx.cr6.eq) goto loc_82CC30B4;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// blt cr6,0x82cc3070
	if (ctx.cr6.lt) goto loc_82CC3070;
	// cmpwi cr6,r27,36
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 36, ctx.xer);
	// bgt cr6,0x82cc3070
	if (ctx.cr6.gt) goto loc_82CC3070;
loc_82CC30B4:
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lbz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r26,1
	ctx.r29.s64 = ctx.r26.s64 + 1;
	// addi r30,r11,13712
	ctx.r30.s64 = ctx.r11.s64 + 13712;
	// lwz r10,13712(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13712);
loc_82CC30CC:
	// lwz r11,172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82cc30f0
	if (!ctx.cr6.gt) goto loc_82CC30F0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x82cc3450
	ctx.lr = 0x82CC30E8;
	sub_82CC3450(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82cc3100
	goto loc_82CC3100;
loc_82CC30F0:
	// lwz r11,200(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 200);
	// rlwinm r9,r31,1,23,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1FE;
	// lhzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r3,r11,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
loc_82CC3100:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82cc3114
	if (ctx.cr6.eq) goto loc_82CC3114;
	// lbz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x82cc30cc
	goto loc_82CC30CC;
loc_82CC3114:
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x82cc3128
	if (!ctx.cr6.eq) goto loc_82CC3128;
	// ori r25,r25,2
	ctx.r25.u64 = ctx.r25.u64 | 2;
	// b 0x82cc3130
	goto loc_82CC3130;
loc_82CC3128:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// bne cr6,0x82cc3138
	if (!ctx.cr6.eq) goto loc_82CC3138;
loc_82CC3130:
	// lbz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82CC3138:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82cc3178
	if (!ctx.cr6.eq) goto loc_82CC3178;
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x82cc3154
	if (ctx.cr6.eq) goto loc_82CC3154;
	// li r27,10
	ctx.r27.s64 = 10;
	// b 0x82cc31b0
	goto loc_82CC31B0;
loc_82CC3154:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x82cc3174
	if (ctx.cr6.eq) goto loc_82CC3174;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// beq cr6,0x82cc3174
	if (ctx.cr6.eq) goto loc_82CC3174;
	// li r27,8
	ctx.r27.s64 = 8;
	// b 0x82cc31b0
	goto loc_82CC31B0;
loc_82CC3174:
	// li r27,16
	ctx.r27.s64 = 16;
loc_82CC3178:
	// cmpwi cr6,r27,16
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 16, ctx.xer);
	// bne cr6,0x82cc31b0
	if (!ctx.cr6.eq) goto loc_82CC31B0;
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x82cc31b0
	if (!ctx.cr6.eq) goto loc_82CC31B0;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x82cc31a4
	if (ctx.cr6.eq) goto loc_82CC31A4;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// bne cr6,0x82cc31b0
	if (!ctx.cr6.eq) goto loc_82CC31B0;
loc_82CC31A4:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// lbz r31,1(r29)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_82CC31B0:
	// extsw r9,r27
	ctx.r9.s64 = ctx.r27.s32;
	// lwz r7,200(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 200);
	// li r11,-1
	ctx.r11.s64 = -1;
	// tdllei r9,0
	// divdu r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 / ctx.r9.u64;
loc_82CC31C4:
	// rlwinm r11,r31,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1FE;
	// lhzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82cc31e0
	if (ctx.cr0.eq) goto loc_82CC31E0;
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// b 0x82cc3208
	goto loc_82CC3208;
loc_82CC31E0:
	// andi. r11,r11,259
	ctx.r11.u64 = ctx.r11.u64 & 259;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc324c
	if (ctx.cr0.eq) goto loc_82CC324C;
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// blt cr6,0x82cc3204
	if (ctx.cr6.lt) goto loc_82CC3204;
	// cmpwi cr6,r11,122
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 122, ctx.xer);
	// bgt cr6,0x82cc3204
	if (ctx.cr6.gt) goto loc_82CC3204;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
loc_82CC3204:
	// addi r11,r11,-55
	ctx.r11.s64 = ctx.r11.s64 + -55;
loc_82CC3208:
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82cc324c
	if (!ctx.cr6.lt) goto loc_82CC324C;
	// ori r25,r25,8
	ctx.r25.u64 = ctx.r25.u64 | 8;
	// cmpld cr6,r28,r8
	ctx.cr6.compare<uint64_t>(ctx.r28.u64, ctx.r8.u64, ctx.xer);
	// blt cr6,0x82cc326c
	if (ctx.cr6.lt) goto loc_82CC326C;
	// bne cr6,0x82cc3240
	if (!ctx.cr6.eq) goto loc_82CC3240;
	// li r10,-1
	ctx.r10.s64 = -1;
	// clrldi r6,r11,32
	ctx.r6.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// divdu r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 / ctx.r9.u64;
	// tdllei r9,0
	// mulld r5,r5,r9
	ctx.r5.s64 = ctx.r5.s64 * ctx.r9.s64;
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// cmpld cr6,r6,r10
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x82cc326c
	if (!ctx.cr6.gt) goto loc_82CC326C;
loc_82CC3240:
	// ori r25,r25,4
	ctx.r25.u64 = ctx.r25.u64 | 4;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82cc3278
	if (!ctx.cr6.eq) goto loc_82CC3278;
loc_82CC324C:
	// rlwinm. r11,r25,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// bne 0x82cc3284
	if (!ctx.cr0.eq) goto loc_82CC3284;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82cc3264
	if (ctx.cr6.eq) goto loc_82CC3264;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82CC3264:
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x82cc32f0
	goto loc_82CC32F0;
loc_82CC326C:
	// mulld r10,r9,r28
	ctx.r10.s64 = ctx.r9.s64 * ctx.r28.s64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82CC3278:
	// lbz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x82cc31c4
	goto loc_82CC31C4;
loc_82CC3284:
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm. r11,r25,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrldi r31,r10,1
	ctx.r31.u64 = ctx.r10.u64 & 0x7FFFFFFFFFFFFFFF;
	// rldicr r30,r9,63,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// bne 0x82cc32c4
	if (!ctx.cr0.eq) goto loc_82CC32C4;
	// clrlwi. r11,r25,31
	ctx.r11.u64 = ctx.r25.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cc32f0
	if (!ctx.cr0.eq) goto loc_82CC32F0;
	// rlwinm. r11,r25,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc32b4
	if (ctx.cr0.eq) goto loc_82CC32B4;
	// cmpld cr6,r28,r30
	ctx.cr6.compare<uint64_t>(ctx.r28.u64, ctx.r30.u64, ctx.xer);
	// bgt cr6,0x82cc32c4
	if (ctx.cr6.gt) goto loc_82CC32C4;
loc_82CC32B4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82cc32f0
	if (!ctx.cr6.eq) goto loc_82CC32F0;
	// cmpld cr6,r28,r31
	ctx.cr6.compare<uint64_t>(ctx.r28.u64, ctx.r31.u64, ctx.xer);
	// ble cr6,0x82cc32f0
	if (!ctx.cr6.gt) goto loc_82CC32F0;
loc_82CC32C4:
	// bl 0x82cb8f58
	ctx.lr = 0x82CC32C8;
	sub_82CB8F58(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// clrlwi. r10,r25,31
	ctx.r10.u64 = ctx.r25.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82cc32e0
	if (ctx.cr0.eq) goto loc_82CC32E0;
	// li r28,-1
	ctx.r28.s64 = -1;
	// b 0x82cc32f0
	goto loc_82CC32F0;
loc_82CC32E0:
	// rlwinm. r11,r25,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// bne 0x82cc32f0
	if (!ctx.cr0.eq) goto loc_82CC32F0;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82CC32F0:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82cc32fc
	if (ctx.cr6.eq) goto loc_82CC32FC;
	// stw r29,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r29.u32);
loc_82CC32FC:
	// rlwinm. r11,r25,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc3308
	if (ctx.cr0.eq) goto loc_82CC3308;
	// neg r28,r28
	ctx.r28.s64 = -ctx.r28.s64;
loc_82CC3308:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82CC330C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC3314"))) PPC_WEAK_FUNC(sub_82CC3314);
PPC_FUNC_IMPL(__imp__sub_82CC3314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC3318"))) PPC_WEAK_FUNC(sub_82CC3318);
PPC_FUNC_IMPL(__imp__sub_82CC3318) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r10,13712
	ctx.r3.s64 = ctx.r10.s64 + 13712;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82cc3040
	sub_82CC3040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC3338"))) PPC_WEAK_FUNC(sub_82CC3338);
PPC_FUNC_IMPL(__imp__sub_82CC3338) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82cc3040
	sub_82CC3040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC3354"))) PPC_WEAK_FUNC(sub_82CC3354);
PPC_FUNC_IMPL(__imp__sub_82CC3354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC3358"))) PPC_WEAK_FUNC(sub_82CC3358);
PPC_FUNC_IMPL(__imp__sub_82CC3358) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r10,13712
	ctx.r3.s64 = ctx.r10.s64 + 13712;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82cc3040
	sub_82CC3040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC3378"))) PPC_WEAK_FUNC(sub_82CC3378);
PPC_FUNC_IMPL(__imp__sub_82CC3378) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82cc3040
	sub_82CC3040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC3394"))) PPC_WEAK_FUNC(sub_82CC3394);
PPC_FUNC_IMPL(__imp__sub_82CC3394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC3398"))) PPC_WEAK_FUNC(sub_82CC3398);
PPC_FUNC_IMPL(__imp__sub_82CC3398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82CC33A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// bl 0x82cc34a0
	ctx.lr = 0x82CC33D8;
	sub_82CC34A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc33f4
	if (ctx.cr0.eq) goto loc_82CC33F4;
	// li r30,512
	ctx.r30.s64 = 512;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// b 0x82cc3428
	goto loc_82CC3428;
loc_82CC33F4:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ccee80
	ctx.lr = 0x82CC3400;
	sub_82CCEE80(ctx, base);
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cc3410
	if (!ctx.cr0.eq) goto loc_82CC3410;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82cc3414
	if (!ctx.cr6.eq) goto loc_82CC3414;
loc_82CC3410:
	// li r30,128
	ctx.r30.s64 = 128;
loc_82CC3414:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cc3424
	if (!ctx.cr0.eq) goto loc_82CC3424;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82cc3428
	if (!ctx.cr6.eq) goto loc_82CC3428;
loc_82CC3424:
	// ori r30,r30,256
	ctx.r30.u64 = ctx.r30.u64 | 256;
loc_82CC3428:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// std r10,16(r29)
	PPC_STORE_U64(ctx.r29.u32 + 16, ctx.r10.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC344C"))) PPC_WEAK_FUNC(sub_82CC344C);
PPC_FUNC_IMPL(__imp__sub_82CC344C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC3450"))) PPC_WEAK_FUNC(sub_82CC3450);
PPC_FUNC_IMPL(__imp__sub_82CC3450) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bgt cr6,0x82cc3478
	if (ctx.cr6.gt) goto loc_82CC3478;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,13712(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13712);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// and r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 & ctx.r4.u64;
	// blr 
	return;
loc_82CC3478:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC3480"))) PPC_WEAK_FUNC(sub_82CC3480);
PPC_FUNC_IMPL(__imp__sub_82CC3480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,13488
	ctx.r11.s64 = ctx.r11.s64 + 13488;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// and r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 & ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC349C"))) PPC_WEAK_FUNC(sub_82CC349C);
PPC_FUNC_IMPL(__imp__sub_82CC349C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC34A0"))) PPC_WEAK_FUNC(sub_82CC34A0);
PPC_FUNC_IMPL(__imp__sub_82CC34A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10bc
	ctx.lr = 0x82CC34A8;
	__savegprlr_17(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r18,r21
	ctx.r18.u64 = ctx.r21.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc351c
	if (!ctx.cr6.eq) goto loc_82CC351C;
	// bl 0x82cb8f58
	ctx.lr = 0x82CC34F4;
	sub_82CB8F58(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CC3514;
	sub_82CB8DA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cc3e1c
	goto loc_82CC3E1C;
loc_82CC351C:
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_82CC3520:
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// beq cr6,0x82cc3548
	if (ctx.cr6.eq) goto loc_82CC3548;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// beq cr6,0x82cc3548
	if (ctx.cr6.eq) goto loc_82CC3548;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// beq cr6,0x82cc3548
	if (ctx.cr6.eq) goto loc_82CC3548;
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// bne cr6,0x82cc3550
	if (!ctx.cr6.eq) goto loc_82CC3550;
loc_82CC3548:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// b 0x82cc3520
	goto loc_82CC3520;
loc_82CC3550:
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r20,r7,32768
	ctx.r20.u64 = ctx.r7.u64 | 32768;
	// lwz r7,15400(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15400);
loc_82CC3560:
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x82cc38dc
	if (ctx.cr6.gt) goto loc_82CC38DC;
	// lis r12,-32256
	ctx.r12.s64 = -2113929216;
	// addi r12,r12,24616
	ctx.r12.s64 = ctx.r12.s64 + 24616;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32052
	ctx.r12.s64 = -2100559872;
	// addi r12,r12,13720
	ctx.r12.s64 = ctx.r12.s64 + 13720;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82CC3598;
	case 1:
		goto loc_82CC360C;
	case 2:
		goto loc_82CC3688;
	case 3:
		goto loc_82CC3708;
	case 4:
		goto loc_82CC3778;
	case 5:
		goto loc_82CC37EC;
	case 6:
		goto loc_82CC380C;
	case 7:
		goto loc_82CC3890;
	case 8:
		goto loc_82CC3854;
	case 9:
		goto loc_82CC38E8;
	case 10:
		goto loc_82CC38DC;
	case 11:
		goto loc_82CC38A8;
	default:
		__builtin_unreachable();
	}
loc_82CC3598:
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x82cc35b8
	if (ctx.cr6.lt) goto loc_82CC35B8;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x82cc35b8
	if (ctx.cr6.gt) goto loc_82CC35B8;
loc_82CC35AC:
	// li r11,3
	ctx.r11.s64 = 3;
loc_82CC35B0:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// b 0x82cc3560
	goto loc_82CC3560;
loc_82CC35B8:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82cc35d4
	if (!ctx.cr6.eq) goto loc_82CC35D4;
loc_82CC35CC:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82cc3560
	goto loc_82CC3560;
loc_82CC35D4:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x82cc3600
	if (ctx.cr6.eq) goto loc_82CC3600;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x82cc35f4
	if (ctx.cr6.eq) goto loc_82CC35F4;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x82cc3888
	if (!ctx.cr6.eq) goto loc_82CC3888;
loc_82CC35EC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82cc3560
	goto loc_82CC3560;
loc_82CC35F4:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r18,r20
	ctx.r18.u64 = ctx.r20.u64;
	// b 0x82cc3560
	goto loc_82CC3560;
loc_82CC3600:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r18,r21
	ctx.r18.u64 = ctx.r21.u64;
	// b 0x82cc3560
	goto loc_82CC3560;
loc_82CC360C:
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x82cc3624
	if (ctx.cr6.lt) goto loc_82CC3624;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x82cc35ac
	if (!ctx.cr6.gt) goto loc_82CC35AC;
loc_82CC3624:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82cc3640
	if (!ctx.cr6.eq) goto loc_82CC3640;
loc_82CC3638:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82cc3560
	goto loc_82CC3560;
loc_82CC3640:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x82cc367c
	if (ctx.cr6.eq) goto loc_82CC367C;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x82cc367c
	if (ctx.cr6.eq) goto loc_82CC367C;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x82cc35ec
	if (ctx.cr6.eq) goto loc_82CC35EC;
loc_82CC3658:
	// cmpwi cr6,r11,67
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 67, ctx.xer);
	// ble cr6,0x82cc3888
	if (!ctx.cr6.gt) goto loc_82CC3888;
	// cmpwi cr6,r11,69
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 69, ctx.xer);
	// ble cr6,0x82cc3674
	if (!ctx.cr6.gt) goto loc_82CC3674;
	// addi r11,r11,-100
	ctx.r11.s64 = ctx.r11.s64 + -100;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x82cc3888
	if (ctx.cr6.gt) goto loc_82CC3888;
loc_82CC3674:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82cc3560
	goto loc_82CC3560;
loc_82CC367C:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82cc3560
	goto loc_82CC3560;
loc_82CC3688:
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x82cc369c
	if (ctx.cr6.lt) goto loc_82CC369C;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x82cc35ac
	if (!ctx.cr6.gt) goto loc_82CC35AC;
loc_82CC369C:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82cc35cc
	if (ctx.cr6.eq) goto loc_82CC35CC;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x82cc35ec
	if (ctx.cr6.eq) goto loc_82CC35EC;
loc_82CC36B8:
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_82CC36BC:
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82cc3db8
	if (ctx.cr6.eq) goto loc_82CC3DB8;
	// cmplwi cr6,r6,24
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 24, ctx.xer);
	// ble cr6,0x82cc36f4
	if (!ctx.cr6.gt) goto loc_82CC36F4;
	// lbz r11,151(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 151);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x82cc36e8
	if (ctx.cr6.lt) goto loc_82CC36E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r11.u8);
loc_82CC36E8:
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82CC36F4:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82cc3da4
	if (ctx.cr6.eq) goto loc_82CC3DA4;
	// lbz r10,-1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + -1);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// b 0x82cc3968
	goto loc_82CC3968;
loc_82CC3708:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82cc3740
	goto loc_82CC3740;
loc_82CC3710:
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x82cc374c
	if (ctx.cr6.gt) goto loc_82CC374C;
	// cmplwi cr6,r6,25
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 25, ctx.xer);
	// bge cr6,0x82cc3734
	if (!ctx.cr6.lt) goto loc_82CC3734;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x82cc3738
	goto loc_82CC3738;
loc_82CC3734:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82CC3738:
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82CC3740:
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x82cc3710
	if (!ctx.cr6.lt) goto loc_82CC3710;
loc_82CC374C:
	// lwz r22,0(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// lbz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82cc3638
	if (ctx.cr6.eq) goto loc_82CC3638;
loc_82CC3764:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x82cc367c
	if (ctx.cr6.eq) goto loc_82CC367C;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x82cc367c
	if (ctx.cr6.eq) goto loc_82CC367C;
	// b 0x82cc3658
	goto loc_82CC3658;
loc_82CC3778:
	// li r30,1
	ctx.r30.s64 = 1;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82cc37d8
	if (!ctx.cr6.eq) goto loc_82CC37D8;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x82cc37d8
	if (!ctx.cr6.eq) goto loc_82CC37D8;
loc_82CC3794:
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// beq cr6,0x82cc3794
	if (ctx.cr6.eq) goto loc_82CC3794;
	// b 0x82cc37d8
	goto loc_82CC37D8;
loc_82CC37AC:
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x82cc37e4
	if (ctx.cr6.gt) goto loc_82CC37E4;
	// cmplwi cr6,r6,25
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 25, ctx.xer);
	// bge cr6,0x82cc37d0
	if (!ctx.cr6.lt) goto loc_82CC37D0;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82CC37D0:
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82CC37D8:
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x82cc37ac
	if (!ctx.cr6.lt) goto loc_82CC37AC;
loc_82CC37E4:
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// b 0x82cc3764
	goto loc_82CC3764;
loc_82CC37EC:
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x82cc36b8
	if (ctx.cr6.lt) goto loc_82CC36B8;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x82cc36b8
	if (ctx.cr6.gt) goto loc_82CC36B8;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82cc35b0
	goto loc_82CC35B0;
loc_82CC380C:
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// addi r5,r8,-2
	ctx.r5.s64 = ctx.r8.s64 + -2;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x82cc382c
	if (ctx.cr6.lt) goto loc_82CC382C;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x82cc382c
	if (ctx.cr6.gt) goto loc_82CC382C;
loc_82CC3824:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x82cc35b0
	goto loc_82CC35B0;
loc_82CC382C:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x82cc384c
	if (ctx.cr6.eq) goto loc_82CC384C;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x82cc38c8
	if (ctx.cr6.eq) goto loc_82CC38C8;
loc_82CC383C:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x82cc36b8
	if (!ctx.cr6.eq) goto loc_82CC36B8;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82cc3560
	goto loc_82CC3560;
loc_82CC384C:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82cc3560
	goto loc_82CC3560;
loc_82CC3854:
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x82cc3874
	if (!ctx.cr6.eq) goto loc_82CC3874;
loc_82CC3864:
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// beq cr6,0x82cc3864
	if (ctx.cr6.eq) goto loc_82CC3864;
loc_82CC3874:
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x82cc3888
	if (ctx.cr6.lt) goto loc_82CC3888;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x82cc3824
	if (!ctx.cr6.gt) goto loc_82CC3824;
loc_82CC3888:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// b 0x82cc36bc
	goto loc_82CC36BC;
loc_82CC3890:
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x82cc383c
	if (ctx.cr6.lt) goto loc_82CC383C;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x82cc3824
	if (!ctx.cr6.gt) goto loc_82CC3824;
	// b 0x82cc383c
	goto loc_82CC383C;
loc_82CC38A8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82cc38d4
	if (ctx.cr6.eq) goto loc_82CC38D4;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x82cc384c
	if (ctx.cr6.eq) goto loc_82CC384C;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x82cc36b8
	if (!ctx.cr6.eq) goto loc_82CC36B8;
loc_82CC38C8:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r27,-1
	ctx.r27.s64 = -1;
	// b 0x82cc3560
	goto loc_82CC3560;
loc_82CC38D4:
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_82CC38DC:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82cc3560
	if (!ctx.cr6.eq) goto loc_82CC3560;
	// b 0x82cc36bc
	goto loc_82CC36BC;
loc_82CC38E8:
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// b 0x82cc3918
	goto loc_82CC3918;
loc_82CC38F4:
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x82cc392c
	if (ctx.cr6.gt) goto loc_82CC392C;
	// mulli r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 * 10;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r11,-48
	ctx.r9.s64 = ctx.r11.s64 + -48;
	// cmpwi cr6,r9,5200
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5200, ctx.xer);
	// bgt cr6,0x82cc3928
	if (ctx.cr6.gt) goto loc_82CC3928;
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82CC3918:
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x82cc38f4
	if (!ctx.cr6.lt) goto loc_82CC38F4;
	// b 0x82cc392c
	goto loc_82CC392C;
loc_82CC3928:
	// li r9,5201
	ctx.r9.s64 = 5201;
loc_82CC392C:
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// b 0x82cc394c
	goto loc_82CC394C;
loc_82CC3938:
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x82cc3888
	if (ctx.cr6.gt) goto loc_82CC3888;
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_82CC394C:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x82cc3938
	if (!ctx.cr6.lt) goto loc_82CC3938;
	// b 0x82cc3888
	goto loc_82CC3888;
loc_82CC3958:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
loc_82CC3968:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cc3958
	if (ctx.cr6.eq) goto loc_82CC3958;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82ccfe18
	ctx.lr = 0x82CC3980;
	sub_82CCFE18(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bge cr6,0x82cc398c
	if (!ctx.cr6.lt) goto loc_82CC398C;
	// neg r29,r29
	ctx.r29.s64 = -ctx.r29.s64;
loc_82CC398C:
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82cc399c
	if (!ctx.cr6.eq) goto loc_82CC399C;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_82CC399C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82cc39a8
	if (!ctx.cr6.eq) goto loc_82CC39A8;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
loc_82CC39A8:
	// cmpwi cr6,r11,5200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5200, ctx.xer);
	// bgt cr6,0x82cc3dd0
	if (ctx.cr6.gt) goto loc_82CC3DD0;
	// cmpwi cr6,r11,-5200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -5200, ctx.xer);
	// blt cr6,0x82cc3de8
	if (ctx.cr6.lt) goto loc_82CC3DE8;
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// addi r10,r10,15456
	ctx.r10.s64 = ctx.r10.s64 + 15456;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r25,r10,-96
	ctx.r25.s64 = ctx.r10.s64 + -96;
	// beq cr6,0x82cc3d90
	if (ctx.cr6.eq) goto loc_82CC3D90;
	// bge cr6,0x82cc39e4
	if (!ctx.cr6.lt) goto loc_82CC39E4;
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// neg r24,r11
	ctx.r24.s64 = -ctx.r11.s64;
	// addi r11,r10,15808
	ctx.r11.s64 = ctx.r10.s64 + 15808;
	// addi r25,r11,-96
	ctx.r25.s64 = ctx.r11.s64 + -96;
loc_82CC39E4:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82cc39f0
	if (!ctx.cr6.eq) goto loc_82CC39F0;
	// sth r21,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r21.u16);
loc_82CC39F0:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82cc3d90
	if (ctx.cr6.eq) goto loc_82CC3D90;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r26,r11,65535
	ctx.r26.u64 = ctx.r11.u64 | 65535;
	// lis r22,-32768
	ctx.r22.s64 = -2147483648;
	// li r23,-32768
	ctx.r23.s64 = -32768;
	// ori r17,r10,32768
	ctx.r17.u64 = ctx.r10.u64 | 32768;
loc_82CC3A10:
	// clrlwi. r11,r24,29
	ctx.r11.u64 = ctx.r24.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r25,r25,84
	ctx.r25.s64 = ctx.r25.s64 + 84;
	// srawi r24,r24,3
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 3;
	// beq 0x82cc3d88
	if (ctx.cr0.eq) goto loc_82CC3D88;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lhz r11,10(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x82cc3a50
	if (ctx.cr6.lt) goto loc_82CC3A50;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82cb1160
	ctx.lr = 0x82CC3A40;
	sub_82CB1160(ctx, base);
	// lwz r11,118(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 118);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,118(r1)
	PPC_STORE_U32(ctx.r1.u32 + 118, ctx.r11.u32);
loc_82CC3A50:
	// lhz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// clrlwi r11,r10,17
	ctx.r11.u64 = ctx.r10.u32 & 0x7FFF;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// clrlwi r10,r8,17
	ctx.r10.u64 = ctx.r8.u32 & 0x7FFF;
	// xor r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// rlwinm r27,r8,0,16,16
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000;
	// clrlwi r29,r7,16
	ctx.r29.u64 = ctx.r7.u32 & 0xFFFF;
	// bge cr6,0x82cc3d70
	if (!ctx.cr6.lt) goto loc_82CC3D70;
	// cmplwi cr6,r10,32767
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32767, ctx.xer);
	// bge cr6,0x82cc3d70
	if (!ctx.cr6.lt) goto loc_82CC3D70;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,49149
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49149, ctx.xer);
	// bgt cr6,0x82cc3d70
	if (ctx.cr6.gt) goto loc_82CC3D70;
	// cmplwi cr6,r11,16319
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16319, ctx.xer);
	// bgt cr6,0x82cc3ab4
	if (ctx.cr6.gt) goto loc_82CC3AB4;
loc_82CC3AAC:
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// b 0x82cc3d80
	goto loc_82CC3D80;
loc_82CC3AB4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82cc3af0
	if (!ctx.cr6.eq) goto loc_82CC3AF0;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x82cc3af0
	if (!ctx.cr0.eq) goto loc_82CC3AF0;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc3af0
	if (!ctx.cr6.eq) goto loc_82CC3AF0;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc3af0
	if (!ctx.cr6.eq) goto loc_82CC3AF0;
	// sth r21,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r21.u16);
	// b 0x82cc3d88
	goto loc_82CC3D88;
loc_82CC3AF0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc3b28
	if (!ctx.cr6.eq) goto loc_82CC3B28;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x82cc3b28
	if (!ctx.cr0.eq) goto loc_82CC3B28;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc3b28
	if (!ctx.cr6.eq) goto loc_82CC3B28;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc3aac
	if (ctx.cr6.eq) goto loc_82CC3AAC;
loc_82CC3B28:
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// addi r8,r1,86
	ctx.r8.s64 = ctx.r1.s64 + 86;
	// li r3,5
	ctx.r3.s64 = 5;
loc_82CC3B34:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82cc3ba4
	if (!ctx.cr6.gt) goto loc_82CC3BA4;
	// addi r10,r1,106
	ctx.r10.s64 = ctx.r1.s64 + 106;
	// addi r5,r4,2
	ctx.r5.s64 = ctx.r4.s64 + 2;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82CC3B50:
	// lhz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// lhz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// lwz r11,2(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2);
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82cc3b78
	if (ctx.cr6.lt) goto loc_82CC3B78;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82cc3b7c
	if (!ctx.cr6.lt) goto loc_82CC3B7C;
loc_82CC3B78:
	// li r7,1
	ctx.r7.s64 = 1;
loc_82CC3B7C:
	// stw r10,2(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2, ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82cc3b94
	if (ctx.cr6.eq) goto loc_82CC3B94;
	// lhz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r11.u16);
loc_82CC3B94:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r6,r6,-2
	ctx.r6.s64 = ctx.r6.s64 + -2;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// bgt 0x82cc3b50
	if (ctx.cr0.gt) goto loc_82CC3B50;
loc_82CC3BA4:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bgt 0x82cc3b34
	if (ctx.cr0.gt) goto loc_82CC3B34;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-16382
	ctx.r11.s64 = ctx.r11.s64 + -16382;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh. r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ble 0x82cc3c1c
	if (!ctx.cr0.gt) goto loc_82CC3C1C;
loc_82CC3BD0:
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm. r9,r8,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82cc3c1c
	if (!ctx.cr0.eq) goto loc_82CC3C1C;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// extsh. r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bgt 0x82cc3bd0
	if (ctx.cr0.gt) goto loc_82CC3BD0;
loc_82CC3C1C:
	// extsh. r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x82cc3cbc
	if (ctx.cr0.gt) goto loc_82CC3CBC;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh. r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x82cc3cbc
	if (!ctx.cr0.lt) goto loc_82CC3CBC;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82CC3C40:
	// lhz r9,90(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82cc3c50
	if (ctx.cr0.eq) goto loc_82CC3C50;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_82CC3C50:
	// clrlwi. r9,r6,31
	ctx.r9.u64 = ctx.r6.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// bne 0x82cc3c60
	if (!ctx.cr0.eq) goto loc_82CC3C60;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
loc_82CC3C60:
	// clrlwi. r9,r7,31
	ctx.r9.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// bne 0x82cc3c70
	if (!ctx.cr0.eq) goto loc_82CC3C70;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
loc_82CC3C70:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// rlwinm r6,r6,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// extsh. r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// or r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 | ctx.r8.u64;
	// blt 0x82cc3c40
	if (ctx.cr0.lt) goto loc_82CC3C40;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// beq cr6,0x82cc3cbc
	if (ctx.cr6.eq) goto loc_82CC3CBC;
	// lhz r10,90(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// sth r10,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r10.u16);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82CC3CBC:
	// lhz r9,90(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// cmplwi cr6,r9,32768
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32768, ctx.xer);
	// bgt cr6,0x82cc3cdc
	if (ctx.cr6.gt) goto loc_82CC3CDC;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// clrlwi r10,r10,15
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFF;
	// ori r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 32768;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82cc3d3c
	if (!ctx.cr6.eq) goto loc_82CC3D3C;
loc_82CC3CDC:
	// lwz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 86);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82cc3d34
	if (!ctx.cr6.eq) goto loc_82CC3D34;
	// lwz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 82);
	// stw r21,86(r1)
	PPC_STORE_U32(ctx.r1.u32 + 86, ctx.r21.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82cc3d28
	if (!ctx.cr6.eq) goto loc_82CC3D28;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// stw r21,82(r1)
	PPC_STORE_U32(ctx.r1.u32 + 82, ctx.r21.u32);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x82cc3d1c
	if (!ctx.cr6.eq) goto loc_82CC3D1C;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r20,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r20.u16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x82cc3d3c
	goto loc_82CC3D3C;
loc_82CC3D1C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// b 0x82cc3d3c
	goto loc_82CC3D3C;
loc_82CC3D28:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,82(r1)
	PPC_STORE_U32(ctx.r1.u32 + 82, ctx.r10.u32);
	// b 0x82cc3d3c
	goto loc_82CC3D3C;
loc_82CC3D34:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,86(r1)
	PPC_STORE_U32(ctx.r1.u32 + 86, ctx.r10.u32);
loc_82CC3D3C:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// bge cr6,0x82cc3d70
	if (!ctx.cr6.lt) goto loc_82CC3D70;
	// lhz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// clrlwi r10,r27,16
	ctx.r10.u64 = ctx.r27.u32 & 0xFFFF;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// sth r9,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r9.u16);
	// stw r8,102(r1)
	PPC_STORE_U32(ctx.r1.u32 + 102, ctx.r8.u32);
	// stw r7,98(r1)
	PPC_STORE_U32(ctx.r1.u32 + 98, ctx.r7.u32);
	// b 0x82cc3d88
	goto loc_82CC3D88;
loc_82CC3D70:
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// clrlwi. r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cc3d80
	if (!ctx.cr0.eq) goto loc_82CC3D80;
	// stw r17,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r17.u32);
loc_82CC3D80:
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
loc_82CC3D88:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82cc3a10
	if (!ctx.cr6.eq) goto loc_82CC3A10;
loc_82CC3D90:
	// lhz r11,106(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 106);
	// lwz r8,102(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 102);
	// lwz r9,98(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 98);
	// lhz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// b 0x82cc3dfc
	goto loc_82CC3DFC;
loc_82CC3DA4:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// b 0x82cc3dfc
	goto loc_82CC3DFC;
loc_82CC3DB8:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// li r21,4
	ctx.r21.s64 = 4;
	// b 0x82cc3dfc
	goto loc_82CC3DFC;
loc_82CC3DD0:
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// li r21,2
	ctx.r21.s64 = 2;
	// b 0x82cc3dfc
	goto loc_82CC3DFC;
loc_82CC3DE8:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// li r21,1
	ctx.r21.s64 = 1;
loc_82CC3DFC:
	// sth r11,10(r19)
	PPC_STORE_U16(ctx.r19.u32 + 10, ctx.r11.u16);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r11,r18,16
	ctx.r11.u64 = ctx.r18.u32 & 0xFFFF;
	// stw r8,6(r19)
	PPC_STORE_U32(ctx.r19.u32 + 6, ctx.r8.u32);
	// stw r9,2(r19)
	PPC_STORE_U32(ctx.r19.u32 + 2, ctx.r9.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,0(r19)
	PPC_STORE_U16(ctx.r19.u32 + 0, ctx.r11.u16);
loc_82CC3E1C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC3E24"))) PPC_WEAK_FUNC(sub_82CC3E24);
PPC_FUNC_IMPL(__imp__sub_82CC3E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC3E28"))) PPC_WEAK_FUNC(sub_82CC3E28);
PPC_FUNC_IMPL(__imp__sub_82CC3E28) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cc34a0
	ctx.lr = 0x82CC3E58;
	sub_82CC34A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ccfc70
	ctx.lr = 0x82CC3E68;
	sub_82CCFC70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82cc3e74
	if (!ctx.cr6.eq) goto loc_82CC3E74;
	// ori r31,r31,2
	ctx.r31.u64 = ctx.r31.u64 | 2;
loc_82CC3E74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82CC3E90"))) PPC_WEAK_FUNC(sub_82CC3E90);
PPC_FUNC_IMPL(__imp__sub_82CC3E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82CC3E98;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31902
	ctx.r11.s64 = -2090729472;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r11,-14508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14508);
	// b 0x82cc3ebc
	goto loc_82CC3EBC;
loc_82CC3EB8:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_82CC3EBC:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// beq cr6,0x82cc3eb8
	if (ctx.cr6.eq) goto loc_82CC3EB8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,97
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 97, ctx.xer);
	// beq cr6,0x82cc3f24
	if (ctx.cr6.eq) goto loc_82CC3F24;
	// cmpwi cr6,r10,114
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 114, ctx.xer);
	// beq cr6,0x82cc3f18
	if (ctx.cr6.eq) goto loc_82CC3F18;
	// cmpwi cr6,r10,119
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 119, ctx.xer);
	// beq cr6,0x82cc3f10
	if (ctx.cr6.eq) goto loc_82CC3F10;
loc_82CC3EE4:
	// bl 0x82cb8f58
	ctx.lr = 0x82CC3EE8;
	sub_82CB8F58(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CC3F08;
	sub_82CB8DA0(ctx, base);
loc_82CC3F08:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cc40e0
	goto loc_82CC40E0;
loc_82CC3F10:
	// li r10,769
	ctx.r10.s64 = 769;
	// b 0x82cc3f28
	goto loc_82CC3F28;
loc_82CC3F18:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// ori r31,r11,1
	ctx.r31.u64 = ctx.r11.u64 | 1;
	// b 0x82cc3f2c
	goto loc_82CC3F2C;
loc_82CC3F24:
	// li r10,265
	ctx.r10.s64 = 265;
loc_82CC3F28:
	// ori r31,r11,2
	ctx.r31.u64 = ctx.r11.u64 | 2;
loc_82CC3F2C:
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// addi r8,r4,1
	ctx.r8.s64 = ctx.r4.s64 + 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x82cc4068
	goto loc_82CC4068;
loc_82CC3F3C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82cc4078
	if (ctx.cr6.eq) goto loc_82CC4078;
	// cmpwi cr6,r11,83
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 83, ctx.xer);
	// bgt cr6,0x82cc3fdc
	if (ctx.cr6.gt) goto loc_82CC3FDC;
	// beq cr6,0x82cc3fc8
	if (ctx.cr6.eq) goto loc_82CC3FC8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x82cc4060
	if (ctx.cr6.eq) goto loc_82CC4060;
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x82cc3fac
	if (ctx.cr6.eq) goto loc_82CC3FAC;
	// cmpwi cr6,r11,44
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 44, ctx.xer);
	// beq cr6,0x82cc4054
	if (ctx.cr6.eq) goto loc_82CC4054;
	// cmpwi cr6,r11,68
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 68, ctx.xer);
	// beq cr6,0x82cc3f9c
	if (ctx.cr6.eq) goto loc_82CC3F9C;
	// cmpwi cr6,r11,78
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 78, ctx.xer);
	// beq cr6,0x82cc3f94
	if (ctx.cr6.eq) goto loc_82CC3F94;
	// cmpwi cr6,r11,82
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 82, ctx.xer);
	// bne cr6,0x82cc3ee4
	if (!ctx.cr6.eq) goto loc_82CC3EE4;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82cc4054
	if (!ctx.cr6.eq) goto loc_82CC4054;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// b 0x82cc4060
	goto loc_82CC4060;
loc_82CC3F94:
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// b 0x82cc4060
	goto loc_82CC4060;
loc_82CC3F9C:
	// rlwinm. r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cc4054
	if (!ctx.cr0.eq) goto loc_82CC4054;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// b 0x82cc4060
	goto loc_82CC4060;
loc_82CC3FAC:
	// rlwinm. r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cc4054
	if (!ctx.cr0.eq) goto loc_82CC4054;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r4,r31,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFC;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// ori r31,r4,128
	ctx.r31.u64 = ctx.r4.u64 | 128;
	// b 0x82cc4060
	goto loc_82CC4060;
loc_82CC3FC8:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82cc4054
	if (!ctx.cr6.eq) goto loc_82CC4054;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// b 0x82cc4060
	goto loc_82CC4060;
loc_82CC3FDC:
	// cmpwi cr6,r11,84
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 84, ctx.xer);
	// beq cr6,0x82cc404c
	if (ctx.cr6.eq) goto loc_82CC404C;
	// cmpwi cr6,r11,98
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 98, ctx.xer);
	// beq cr6,0x82cc403c
	if (ctx.cr6.eq) goto loc_82CC403C;
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// beq cr6,0x82cc4028
	if (ctx.cr6.eq) goto loc_82CC4028;
	// cmpwi cr6,r11,110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 110, ctx.xer);
	// beq cr6,0x82cc4014
	if (ctx.cr6.eq) goto loc_82CC4014;
	// cmpwi cr6,r11,116
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 116, ctx.xer);
	// bne cr6,0x82cc3ee4
	if (!ctx.cr6.eq) goto loc_82CC3EE4;
	// rlwinm. r11,r10,0,16,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cc4054
	if (!ctx.cr0.eq) goto loc_82CC4054;
	// ori r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 16384;
	// b 0x82cc4060
	goto loc_82CC4060;
loc_82CC4014:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82cc4054
	if (!ctx.cr6.eq) goto loc_82CC4054;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r31,r31,0,18,16
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// b 0x82cc4060
	goto loc_82CC4060;
loc_82CC4028:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82cc4054
	if (!ctx.cr6.eq) goto loc_82CC4054;
	// li r7,1
	ctx.r7.s64 = 1;
	// ori r31,r31,16384
	ctx.r31.u64 = ctx.r31.u64 | 16384;
	// b 0x82cc4060
	goto loc_82CC4060;
loc_82CC403C:
	// rlwinm. r11,r10,0,16,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cc4054
	if (!ctx.cr0.eq) goto loc_82CC4054;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// b 0x82cc4060
	goto loc_82CC4060;
loc_82CC404C:
	// rlwinm. r11,r10,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc405c
	if (ctx.cr0.eq) goto loc_82CC405C;
loc_82CC4054:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// b 0x82cc4060
	goto loc_82CC4060;
loc_82CC405C:
	// ori r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 4096;
loc_82CC4060:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
loc_82CC4068:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cc3f3c
	if (!ctx.cr0.eq) goto loc_82CC3F3C;
	// b 0x82cc4078
	goto loc_82CC4078;
loc_82CC4074:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82CC4078:
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x82cc4074
	if (ctx.cr6.eq) goto loc_82CC4074;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc3ee4
	if (!ctx.cr6.eq) goto loc_82CC3EE4;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,384
	ctx.r7.s64 = 384;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cd2ab8
	ctx.lr = 0x82CC40A8;
	sub_82CD2AB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82cc3f08
	if (!ctx.cr0.eq) goto loc_82CC3F08;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,-15068(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15068);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-15068(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15068, ctx.r11.u32);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// stw r30,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r30.u32);
	// stw r9,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r9.u32);
loc_82CC40E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC40F0"))) PPC_WEAK_FUNC(sub_82CC40F0);
PPC_FUNC_IMPL(__imp__sub_82CC40F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82CC40F8;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// bl 0x82cb9680
	ctx.lr = 0x82CC4114;
	sub_82CB9680(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// lis r29,-31881
	ctx.r29.s64 = -2089353216;
	// lis r26,-31881
	ctx.r26.s64 = -2089353216;
loc_82CC4124:
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// lwz r11,6548(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6548);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82cc4234
	if (!ctx.cr6.lt) goto loc_82CC4234;
	// lwz r11,6544(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6544);
	// rlwinm r28,r30,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cc41c8
	if (ctx.cr6.eq) goto loc_82CC41C8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// andi. r10,r11,131
	ctx.r10.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82cc41b0
	if (!ctx.cr0.eq) goto loc_82CC41B0;
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cc41b0
	if (!ctx.cr0.eq) goto loc_82CC41B0;
	// addi r11,r30,-3
	ctx.r11.s64 = ctx.r30.s64 + -3;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bgt cr6,0x82cc4180
	if (ctx.cr6.gt) goto loc_82CC4180;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x82cb9540
	ctx.lr = 0x82CC4178;
	sub_82CB9540(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc4234
	if (ctx.cr0.eq) goto loc_82CC4234;
loc_82CC4180:
	// lwz r11,6544(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6544);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x82cb0138
	ctx.lr = 0x82CC4190;
	sub_82CB0138(ctx, base);
	// lwz r11,6544(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6544);
	// lwzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// andi. r10,r10,131
	ctx.r10.u64 = ctx.r10.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82cc41bc
	if (ctx.cr0.eq) goto loc_82CC41BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb01c8
	ctx.lr = 0x82CC41B0;
	sub_82CB01C8(ctx, base);
loc_82CC41B0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x82cc4124
	goto loc_82CC4124;
loc_82CC41BC:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r10,r11
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82cc4230
	goto loc_82CC4230;
loc_82CC41C8:
	// li r3,60
	ctx.r3.s64 = 60;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb0fe0
	ctx.lr = 0x82CC41D4;
	sub_82CB0FE0(ctx, base);
	// lwz r11,6544(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6544);
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,6544(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6544);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cc4234
	if (ctx.cr6.eq) goto loc_82CC4234;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82cbb2f0
	ctx.lr = 0x82CC41FC;
	sub_82CBB2F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,6544(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6544);
	// bne 0x82cc421c
	if (!ctx.cr0.eq) goto loc_82CC421C;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82cb3d50
	ctx.lr = 0x82CC4210;
	sub_82CB3D50(ctx, base);
	// lwz r11,6544(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6544);
	// stwx r25,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r25.u32);
	// b 0x82cc4234
	goto loc_82CC4234;
loc_82CC421C:
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x833b77e4
	ctx.lr = 0x82CC4228;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,6544(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6544);
	// lwzx r27,r30,r11
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
loc_82CC4230:
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
loc_82CC4234:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82cc4260
	if (ctx.cr6.eq) goto loc_82CC4260;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// stw r25,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r25.u32);
	// stw r25,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r25.u32);
	// stw r25,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r25.u32);
	// stw r25,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r25.u32);
	// stw r10,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r10.u32);
loc_82CC4260:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x82cc4278
	ctx.lr = 0x82CC426C;
	sub_82CC4278(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC4278"))) PPC_WEAK_FUNC(sub_82CC4278);
PPC_FUNC_IMPL(__imp__sub_82CC4278) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82cb9508
	ctx.lr = 0x82CC428C;
	sub_82CB9508(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC429C"))) PPC_WEAK_FUNC(sub_82CC429C);
PPC_FUNC_IMPL(__imp__sub_82CC429C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC42A0"))) PPC_WEAK_FUNC(sub_82CC42A0);
PPC_FUNC_IMPL(__imp__sub_82CC42A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r31.u64);
	// mflr r31
	ctx.r31.u64 = ctx.lr;
	// stwu r1,-80(r1)
	ea = -80 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x833b7f94
	ctx.lr = 0x82CC42B8;
	__imp__RtlUnwind(ctx, base);
	// mtlr r31
	ctx.lr = ctx.r31.u64;
	// ld r31,8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 8);
	// addi r1,r1,80
	ctx.r1.s64 = ctx.r1.s64 + 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC42C8"))) PPC_WEAK_FUNC(sub_82CC42C8);
PPC_FUNC_IMPL(__imp__sub_82CC42C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82CC42D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ccac58
	ctx.lr = 0x82CC42DC;
	sub_82CCAC58(ctx, base);
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// addi r29,r11,6272
	ctx.r29.s64 = ctx.r11.s64 + 6272;
	// beq cr6,0x82cc4354
	if (ctx.cr6.eq) goto loc_82CC4354;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x82cc4304
	if (!ctx.cr6.eq) goto loc_82CC4304;
	// lbz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 132);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82cc4318
	if (!ctx.cr0.eq) goto loc_82CC4318;
loc_82CC4304:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x82cc4334
	if (!ctx.cr6.eq) goto loc_82CC4334;
	// lbz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 68);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc4334
	if (ctx.cr0.eq) goto loc_82CC4334;
loc_82CC4318:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82ccac58
	ctx.lr = 0x82CC4320;
	sub_82CCAC58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82ccac58
	ctx.lr = 0x82CC432C;
	sub_82CCAC58(ctx, base);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82cc4354
	if (ctx.cr6.eq) goto loc_82CC4354;
loc_82CC4334:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccac58
	ctx.lr = 0x82CC433C;
	sub_82CCAC58(ctx, base);
	// bl 0x82bea4e0
	ctx.lr = 0x82CC4340;
	sub_82BEA4E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82cc4354
	if (!ctx.cr0.eq) goto loc_82CC4354;
	// bl 0x82bf2188
	ctx.lr = 0x82CC434C;
	sub_82BF2188(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82cc4358
	goto loc_82CC4358;
loc_82CC4354:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82CC4358:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccabc0
	ctx.lr = 0x82CC4360;
	sub_82CCABC0(ctx, base);
	// srawi r11,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 5;
	// rlwinm r10,r31,6,21,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0x7C0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// beq cr6,0x82cc4394
	if (ctx.cr6.eq) goto loc_82CC4394;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb8fc8
	ctx.lr = 0x82CC438C;
	sub_82CB8FC8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82cc4398
	goto loc_82CC4398;
loc_82CC4394:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CC4398:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC43A8"))) PPC_WEAK_FUNC(sub_82CC43A8);
PPC_FUNC_IMPL(__imp__sub_82CC43A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82CC43B0;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// bne cr6,0x82cc43ec
	if (!ctx.cr6.eq) goto loc_82CC43EC;
	// bl 0x82cb8f90
	ctx.lr = 0x82CC43CC;
	sub_82CB8F90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82cb8f58
	ctx.lr = 0x82CC43D8;
	sub_82CB8F58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82cc44b8
	goto loc_82CC44B8;
loc_82CC43EC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82cc4404
	if (ctx.cr6.lt) goto loc_82CC4404;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// lwz r11,6244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6244);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82cc443c
	if (ctx.cr6.lt) goto loc_82CC443C;
loc_82CC4404:
	// bl 0x82cb8f90
	ctx.lr = 0x82CC4408;
	sub_82CB8F90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82cb8f58
	ctx.lr = 0x82CC4414;
	sub_82CB8F58(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CC4434;
	sub_82CB8DA0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82cc44b8
	goto loc_82CC44B8;
loc_82CC443C:
	// srawi r11,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,6272
	ctx.r28.s64 = ctx.r10.s64 + 6272;
	// rlwinm r29,r30,6,21,25
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0x7C0;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc4404
	if (ctx.cr0.eq) goto loc_82CC4404;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ccad28
	ctx.lr = 0x82CC446C;
	sub_82CCAD28(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc4494
	if (ctx.cr0.eq) goto loc_82CC4494;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cc42c8
	ctx.lr = 0x82CC448C;
	sub_82CC42C8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// b 0x82cc44a8
	goto loc_82CC44A8;
loc_82CC4494:
	// bl 0x82cb8f58
	ctx.lr = 0x82CC4498;
	sub_82CB8F58(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_82CC44A8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x82cc44e0
	ctx.lr = 0x82CC44B4;
	sub_82CC44E0(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82CC44B8:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC44C0"))) PPC_WEAK_FUNC(sub_82CC44C0);
PPC_FUNC_IMPL(__imp__sub_82CC44C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,164(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// b 0x82cc44f8
	goto loc_82CC44F8;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CC44F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ccae20
	ctx.lr = 0x82CC4500;
	sub_82CCAE20(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC44E0"))) PPC_WEAK_FUNC(sub_82CC44E0);
PPC_FUNC_IMPL(__imp__sub_82CC44E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ccae20
	ctx.lr = 0x82CC4500;
	sub_82CCAE20(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC4518"))) PPC_WEAK_FUNC(sub_82CC4518);
PPC_FUNC_IMPL(__imp__sub_82CC4518) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// andi. r10,r11,131
	ctx.r10.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82cc456c
	if (ctx.cr0.eq) goto loc_82CC456C;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc456c
	if (ctx.cr0.eq) goto loc_82CC456C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82cb3d50
	ctx.lr = 0x82CC454C;
	sub_82CB3D50(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// rlwinm r11,r11,0,22,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82CC456C:
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

__attribute__((alias("__imp__sub_82CC4580"))) PPC_WEAK_FUNC(sub_82CC4580);
PPC_FUNC_IMPL(__imp__sub_82CC4580) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 112, ctx.xer);
	// beq cr6,0x82cc471c
	if (ctx.cr6.eq) goto loc_82CC471C;
	// extsb r8,r5
	ctx.r8.s64 = ctx.r5.s8;
	// cmpwi cr6,r8,112
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 112, ctx.xer);
	// beq cr6,0x82cc471c
	if (ctx.cr6.eq) goto loc_82CC471C;
	// cmpwi cr6,r11,115
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 115, ctx.xer);
	// beq cr6,0x82cc45b0
	if (ctx.cr6.eq) goto loc_82CC45B0;
	// cmpwi cr6,r11,83
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 83, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// bne cr6,0x82cc45b4
	if (!ctx.cr6.eq) goto loc_82CC45B4;
loc_82CC45B0:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82CC45B4:
	// cmpwi cr6,r8,115
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 115, ctx.xer);
	// beq cr6,0x82cc45c8
	if (ctx.cr6.eq) goto loc_82CC45C8;
	// cmpwi cr6,r8,83
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 83, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x82cc45cc
	if (!ctx.cr6.eq) goto loc_82CC45CC;
loc_82CC45C8:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82CC45CC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82cc46dc
	if (!ctx.cr6.eq) goto loc_82CC46DC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82cc4714
	if (!ctx.cr6.eq) goto loc_82CC4714;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// beq cr6,0x82cc4670
	if (ctx.cr6.eq) goto loc_82CC4670;
	// cmpwi cr6,r11,105
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 105, ctx.xer);
	// beq cr6,0x82cc463c
	if (ctx.cr6.eq) goto loc_82CC463C;
	// cmpwi cr6,r11,111
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 111, ctx.xer);
	// beq cr6,0x82cc463c
	if (ctx.cr6.eq) goto loc_82CC463C;
	// cmpwi cr6,r11,117
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 117, ctx.xer);
	// beq cr6,0x82cc463c
	if (ctx.cr6.eq) goto loc_82CC463C;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x82cc463c
	if (ctx.cr6.eq) goto loc_82CC463C;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// beq cr6,0x82cc463c
	if (ctx.cr6.eq) goto loc_82CC463C;
	// cmpwi cr6,r8,100
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 100, ctx.xer);
	// beq cr6,0x82cc463c
	if (ctx.cr6.eq) goto loc_82CC463C;
	// cmpwi cr6,r8,105
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 105, ctx.xer);
	// beq cr6,0x82cc463c
	if (ctx.cr6.eq) goto loc_82CC463C;
	// cmpwi cr6,r8,111
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 111, ctx.xer);
	// beq cr6,0x82cc463c
	if (ctx.cr6.eq) goto loc_82CC463C;
	// cmpwi cr6,r8,117
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 117, ctx.xer);
	// beq cr6,0x82cc463c
	if (ctx.cr6.eq) goto loc_82CC463C;
	// cmpwi cr6,r8,120
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 120, ctx.xer);
	// beq cr6,0x82cc463c
	if (ctx.cr6.eq) goto loc_82CC463C;
	// cmpwi cr6,r8,88
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 88, ctx.xer);
	// bne cr6,0x82cc46d0
	if (!ctx.cr6.eq) goto loc_82CC46D0;
loc_82CC463C:
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// beq cr6,0x82cc4670
	if (ctx.cr6.eq) goto loc_82CC4670;
	// cmpwi cr6,r11,105
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 105, ctx.xer);
	// beq cr6,0x82cc4670
	if (ctx.cr6.eq) goto loc_82CC4670;
	// cmpwi cr6,r11,111
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 111, ctx.xer);
	// beq cr6,0x82cc4670
	if (ctx.cr6.eq) goto loc_82CC4670;
	// cmpwi cr6,r11,117
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 117, ctx.xer);
	// beq cr6,0x82cc4670
	if (ctx.cr6.eq) goto loc_82CC4670;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x82cc4670
	if (ctx.cr6.eq) goto loc_82CC4670;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x82cc4674
	if (!ctx.cr6.eq) goto loc_82CC4674;
loc_82CC4670:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82CC4674:
	// cmpwi cr6,r8,100
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 100, ctx.xer);
	// beq cr6,0x82cc46a8
	if (ctx.cr6.eq) goto loc_82CC46A8;
	// cmpwi cr6,r8,105
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 105, ctx.xer);
	// beq cr6,0x82cc46a8
	if (ctx.cr6.eq) goto loc_82CC46A8;
	// cmpwi cr6,r8,111
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 111, ctx.xer);
	// beq cr6,0x82cc46a8
	if (ctx.cr6.eq) goto loc_82CC46A8;
	// cmpwi cr6,r8,117
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 117, ctx.xer);
	// beq cr6,0x82cc46a8
	if (ctx.cr6.eq) goto loc_82CC46A8;
	// cmpwi cr6,r8,120
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 120, ctx.xer);
	// beq cr6,0x82cc46a8
	if (ctx.cr6.eq) goto loc_82CC46A8;
	// cmpwi cr6,r8,88
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 88, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82cc46ac
	if (!ctx.cr6.eq) goto loc_82CC46AC;
loc_82CC46A8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82CC46AC:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82cc4714
	if (!ctx.cr6.eq) goto loc_82CC4714;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// xor r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// rlwinm. r10,r10,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82cc4714
	if (!ctx.cr0.eq) goto loc_82CC4714;
	// xor r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cc4714
	if (!ctx.cr0.eq) goto loc_82CC4714;
loc_82CC46D0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// b 0x82cc4724
	goto loc_82CC4724;
loc_82CC46DC:
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82cc4714
	if (!ctx.cr6.eq) goto loc_82CC4714;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// andi. r10,r6,2064
	ctx.r10.u64 = ctx.r6.u64 & 2064;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// andi. r11,r11,2064
	ctx.r11.u64 = ctx.r11.u64 & 2064;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82CC4714:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82CC471C:
	// extsb r10,r5
	ctx.r10.s64 = ctx.r5.s8;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82CC4724:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC4730"))) PPC_WEAK_FUNC(sub_82CC4730);
PPC_FUNC_IMPL(__imp__sub_82CC4730) {
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
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82cc4760
	if (ctx.cr0.eq) goto loc_82CC4760;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cc47a4
	if (ctx.cr6.eq) goto loc_82CC47A4;
loc_82CC4760:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// blt 0x82cc478c
	if (ctx.cr0.lt) goto loc_82CC478C;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x82cc4794
	goto loc_82CC4794;
loc_82CC478C:
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cbb650
	ctx.lr = 0x82CC4794;
	sub_82CBB650(ctx, base);
loc_82CC4794:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82cc47a4
	if (!ctx.cr6.eq) goto loc_82CC47A4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82cc47ac
	goto loc_82CC47AC;
loc_82CC47A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82CC47AC:
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

__attribute__((alias("__imp__sub_82CC47C4"))) PPC_WEAK_FUNC(sub_82CC47C4);
PPC_FUNC_IMPL(__imp__sub_82CC47C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC47C8"))) PPC_WEAK_FUNC(sub_82CC47C8);
PPC_FUNC_IMPL(__imp__sub_82CC47C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82CC47D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// b 0x82cc4808
	goto loc_82CC4808;
loc_82CC47E8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x82cc4730
	ctx.lr = 0x82CC47FC;
	sub_82CC4730(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82cc4810
	if (ctx.cr6.eq) goto loc_82CC4810;
loc_82CC4808:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x82cc47e8
	if (ctx.cr6.gt) goto loc_82CC47E8;
loc_82CC4810:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC4818"))) PPC_WEAK_FUNC(sub_82CC4818);
PPC_FUNC_IMPL(__imp__sub_82CC4818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82CC4820;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc48a0
	if (ctx.cr0.eq) goto loc_82CC48A0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc48a0
	if (!ctx.cr6.eq) goto loc_82CC48A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82cc48a8
	goto loc_82CC48A8;
loc_82CC485C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// bl 0x82cc4730
	ctx.lr = 0x82CC4870;
	sub_82CC4730(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82cc48a0
	if (!ctx.cr6.eq) goto loc_82CC48A0;
	// bl 0x82cb8f58
	ctx.lr = 0x82CC4884;
	sub_82CB8F58(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// bne cr6,0x82cc48a8
	if (!ctx.cr6.eq) goto loc_82CC48A8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x82cc4730
	ctx.lr = 0x82CC48A0;
	sub_82CC4730(ctx, base);
loc_82CC48A0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x82cc485c
	if (ctx.cr6.gt) goto loc_82CC485C;
loc_82CC48A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC48B0"))) PPC_WEAK_FUNC(sub_82CC48B0);
PPC_FUNC_IMPL(__imp__sub_82CC48B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// ld r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC48CC"))) PPC_WEAK_FUNC(sub_82CC48CC);
PPC_FUNC_IMPL(__imp__sub_82CC48CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC48D0"))) PPC_WEAK_FUNC(sub_82CC48D0);
PPC_FUNC_IMPL(__imp__sub_82CC48D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82CC48D8;
	__savegprlr_14(ctx, base);
	// stwu r1,-2944(r1)
	ea = -2944 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// bne cr6,0x82cc493c
	if (!ctx.cr6.eq) goto loc_82CC493C;
loc_82CC4910:
	// bl 0x82cb8f58
	ctx.lr = 0x82CC4914;
	sub_82CB8F58(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CC4934;
	sub_82CB8DA0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82cc5a9c
	goto loc_82CC5A9C;
loc_82CC493C:
	// lwz r11,12(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cc4a08
	if (!ctx.cr0.eq) goto loc_82CC4A08;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82cb8d38
	ctx.lr = 0x82CC4950;
	sub_82CB8D38(ctx, base);
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// addi r30,r11,6272
	ctx.r30.s64 = ctx.r11.s64 + 6272;
	// addi r29,r10,12760
	ctx.r29.s64 = ctx.r10.s64 + 12760;
	// beq cr6,0x82cc49a0
	if (ctx.cr6.eq) goto loc_82CC49A0;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82cb8d38
	ctx.lr = 0x82CC4970;
	sub_82CB8D38(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82cc49a0
	if (ctx.cr6.eq) goto loc_82CC49A0;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82cb8d38
	ctx.lr = 0x82CC4980;
	sub_82CB8D38(ctx, base);
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb8d38
	ctx.lr = 0x82CC4990;
	sub_82CB8D38(ctx, base);
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r10,r3,6,21,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82cc49a4
	goto loc_82CC49A4;
loc_82CC49A0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82CC49A4:
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// rlwinm. r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cc4910
	if (!ctx.cr0.eq) goto loc_82CC4910;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82cb8d38
	ctx.lr = 0x82CC49B8;
	sub_82CB8D38(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82cc49f8
	if (ctx.cr6.eq) goto loc_82CC49F8;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82cb8d38
	ctx.lr = 0x82CC49C8;
	sub_82CB8D38(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82cc49f8
	if (ctx.cr6.eq) goto loc_82CC49F8;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82cb8d38
	ctx.lr = 0x82CC49D8;
	sub_82CB8D38(ctx, base);
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb8d38
	ctx.lr = 0x82CC49E8;
	sub_82CB8D38(ctx, base);
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r10,r3,6,21,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82cc49fc
	goto loc_82CC49FC;
loc_82CC49F8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82CC49FC:
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cc4910
	if (!ctx.cr0.eq) goto loc_82CC4910;
loc_82CC4A08:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82cc4910
	if (ctx.cr6.eq) goto loc_82CC4910;
	// bl 0x82caff58
	ctx.lr = 0x82CC4A14;
	sub_82CAFF58(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82cc5a68
	if (ctx.cr6.eq) goto loc_82CC5A68;
	// bl 0x82caff58
	ctx.lr = 0x82CC4A24;
	sub_82CAFF58(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82cc5a68
	if (ctx.cr6.eq) goto loc_82CC5A68;
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r25,120(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r16,r27
	ctx.r16.u64 = ctx.r27.u64;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// addi r10,r10,14320
	ctx.r10.s64 = ctx.r10.s64 + 14320;
	// stw r16,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r16.u32);
	// addi r9,r9,27496
	ctx.r9.s64 = ctx.r9.s64 + 27496;
	// mr r14,r27
	ctx.r14.u64 = ctx.r27.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r20,1
	ctx.r20.s64 = 1;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// addi r28,r11,13712
	ctx.r28.s64 = ctx.r11.s64 + 13712;
loc_82CC4A68:
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// bne cr6,0x82cc4a7c
	if (!ctx.cr6.eq) goto loc_82CC4A7C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc5a60
	if (ctx.cr6.eq) goto loc_82CC5A60;
loc_82CC4A7C:
	// lwz r22,132(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r23,0
	ctx.r23.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// mr r18,r23
	ctx.r18.u64 = ctx.r23.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r19,r23
	ctx.r19.u64 = ctx.r23.u64;
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
	// lbz r29,0(r22)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// li r15,-1
	ctx.r15.s64 = -1;
	// extsb. r31,r29
	ctx.r31.s64 = ctx.r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r26,-1
	ctx.r26.s64 = -1;
	// beq 0x82cc5a54
	if (ctx.cr0.eq) goto loc_82CC5A54;
loc_82CC4AB0:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// blt cr6,0x82cc59c8
	if (ctx.cr6.lt) goto loc_82CC59C8;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// blt cr6,0x82cc4ae0
	if (ctx.cr6.lt) goto loc_82CC4AE0;
	// cmpwi cr6,r31,120
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 120, ctx.xer);
	// bgt cr6,0x82cc4ae0
	if (ctx.cr6.gt) goto loc_82CC4AE0;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbz r11,-32(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// b 0x82cc4ae4
	goto loc_82CC4AE4;
loc_82CC4AE0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CC4AE4:
	// mulli r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 * 9;
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r18,r11,28,4,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// cmpwi cr6,r18,1
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 1, ctx.xer);
	// bne cr6,0x82cc4bbc
	if (!ctx.cr6.eq) goto loc_82CC4BBC;
	// lbz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// beq cr6,0x82cc4bcc
	if (ctx.cr6.eq) goto loc_82CC4BCC;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82cc4b64
	if (!ctx.cr6.eq) goto loc_82CC4B64;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82cc2fc0
	ctx.lr = 0x82CC4B24;
	sub_82CC2FC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82cc4b5c
	if (!ctx.cr0.gt) goto loc_82CC4B5C;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// bne cr6,0x82cc4b5c
	if (!ctx.cr6.eq) goto loc_82CC4B5C;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x82cc4b54
	if (!ctx.cr6.eq) goto loc_82CC4B54;
	// li r5,1600
	ctx.r5.s64 = 1600;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82cb16f0
	ctx.lr = 0x82CC4B54;
	sub_82CB16F0(ctx, base);
loc_82CC4B54:
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// b 0x82cc4b6c
	goto loc_82CC4B6C;
loc_82CC4B5C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82CC4B64:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82cc4bcc
	if (!ctx.cr6.eq) goto loc_82CC4BCC;
loc_82CC4B6C:
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82cc2fc0
	ctx.lr = 0x82CC4B7C;
	sub_82CC2FC0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r26,r3,-1
	ctx.r26.s64 = ctx.r3.s64 + -1;
	// addi r22,r11,1
	ctx.r22.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x82cc4bcc
	if (!ctx.cr6.eq) goto loc_82CC4BCC;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82cc4910
	if (ctx.cr6.lt) goto loc_82CC4910;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// bne cr6,0x82cc4910
	if (!ctx.cr6.eq) goto loc_82CC4910;
	// cmpwi cr6,r26,100
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 100, ctx.xer);
	// bge cr6,0x82cc4910
	if (!ctx.cr6.lt) goto loc_82CC4910;
	// cmpw cr6,r26,r15
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r15.s32, ctx.xer);
	// ble cr6,0x82cc4bcc
	if (!ctx.cr6.gt) goto loc_82CC4BCC;
	// mr r15,r26
	ctx.r15.u64 = ctx.r26.u64;
	// b 0x82cc4bcc
	goto loc_82CC4BCC;
loc_82CC4BBC:
	// cmpwi cr6,r18,8
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 8, ctx.xer);
	// beq cr6,0x82cc4910
	if (ctx.cr6.eq) goto loc_82CC4910;
	// cmplwi cr6,r18,7
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 7, ctx.xer);
	// bgt cr6,0x82cc59b8
	if (ctx.cr6.gt) goto loc_82CC59B8;
loc_82CC4BCC:
	// lis r12,-32256
	ctx.r12.s64 = -2113929216;
	// addi r12,r12,24744
	ctx.r12.s64 = ctx.r12.s64 + 24744;
	// rlwinm r0,r18,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32052
	ctx.r12.s64 = -2100559872;
	// addi r12,r12,19444
	ctx.r12.s64 = ctx.r12.s64 + 19444;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r18.u64) {
	case 0:
		goto loc_82CC4BF4;
	case 1:
		goto loc_82CC4C20;
	case 2:
		goto loc_82CC4C40;
	case 3:
		goto loc_82CC4C90;
	case 4:
		goto loc_82CC4D78;
	case 5:
		goto loc_82CC4D80;
	case 6:
		goto loc_82CC4E00;
	case 7:
		goto loc_82CC4F28;
	default:
		__builtin_unreachable();
	}
loc_82CC4BF4:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x82cc4c08
	if (!ctx.cr6.eq) goto loc_82CC4C08;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82cc59b8
	if (ctx.cr6.eq) goto loc_82CC59B8;
loc_82CC4C08:
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// bne cr6,0x82cc4ecc
	if (!ctx.cr6.eq) goto loc_82CC4ECC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82cc4ecc
	if (!ctx.cr6.eq) goto loc_82CC4ECC;
	// b 0x82cc59b8
	goto loc_82CC59B8;
loc_82CC4C20:
	// li r27,0
	ctx.r27.s64 = 0;
	// li r23,-1
	ctx.r23.s64 = -1;
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// b 0x82cc59b8
	goto loc_82CC59B8;
loc_82CC4C40:
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// beq cr6,0x82cc4c88
	if (ctx.cr6.eq) goto loc_82CC4C88;
	// cmpwi cr6,r31,35
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 35, ctx.xer);
	// beq cr6,0x82cc4c80
	if (ctx.cr6.eq) goto loc_82CC4C80;
	// cmpwi cr6,r31,43
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 43, ctx.xer);
	// beq cr6,0x82cc4c78
	if (ctx.cr6.eq) goto loc_82CC4C78;
	// cmpwi cr6,r31,45
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 45, ctx.xer);
	// beq cr6,0x82cc4c70
	if (ctx.cr6.eq) goto loc_82CC4C70;
	// cmpwi cr6,r31,48
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 48, ctx.xer);
	// bne cr6,0x82cc59b8
	if (!ctx.cr6.eq) goto loc_82CC59B8;
	// ori r27,r27,8
	ctx.r27.u64 = ctx.r27.u64 | 8;
	// b 0x82cc59b8
	goto loc_82CC59B8;
loc_82CC4C70:
	// ori r27,r27,4
	ctx.r27.u64 = ctx.r27.u64 | 4;
	// b 0x82cc59b8
	goto loc_82CC59B8;
loc_82CC4C78:
	// ori r27,r27,1
	ctx.r27.u64 = ctx.r27.u64 | 1;
	// b 0x82cc59b8
	goto loc_82CC59B8;
loc_82CC4C80:
	// ori r27,r27,128
	ctx.r27.u64 = ctx.r27.u64 | 128;
	// b 0x82cc59b8
	goto loc_82CC59B8;
loc_82CC4C88:
	// ori r27,r27,2
	ctx.r27.u64 = ctx.r27.u64 | 2;
	// b 0x82cc59b8
	goto loc_82CC59B8;
loc_82CC4C90:
	// cmpwi cr6,r31,42
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 42, ctx.xer);
	// bne cr6,0x82cc4d68
	if (!ctx.cr6.eq) goto loc_82CC4D68;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82cc4cb4
	if (!ctx.cr6.eq) goto loc_82CC4CB4;
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// b 0x82cc4d50
	goto loc_82CC4D50;
loc_82CC4CB4:
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82cc2fc0
	ctx.lr = 0x82CC4CC4;
	sub_82CC2FC0(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// addi r22,r10,1
	ctx.r22.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x82cc4d3c
	if (!ctx.cr6.eq) goto loc_82CC4D3C;
loc_82CC4CD8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82cc4910
	if (ctx.cr6.lt) goto loc_82CC4910;
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,36
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 36, ctx.xer);
	// bne cr6,0x82cc4910
	if (!ctx.cr6.eq) goto loc_82CC4910;
	// cmpwi cr6,r26,100
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 100, ctx.xer);
	// bge cr6,0x82cc4910
	if (!ctx.cr6.lt) goto loc_82CC4910;
	// cmpw cr6,r11,r15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r15.s32, ctx.xer);
	// ble cr6,0x82cc4d00
	if (!ctx.cr6.gt) goto loc_82CC4D00;
	// mr r15,r11
	ctx.r15.u64 = ctx.r11.u64;
loc_82CC4D00:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82cc4d20
	if (!ctx.cr6.eq) goto loc_82CC4D20;
	// stw r20,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r20.u32);
	// b 0x82cc5300
	goto loc_82CC5300;
loc_82CC4D20:
	// li r4,1
	ctx.r4.s64 = 1;
loc_82CC4D24:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x82cc4580
	ctx.lr = 0x82CC4D30;
	sub_82CC4580(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc4910
	if (ctx.cr0.eq) goto loc_82CC4910;
	// b 0x82cc59b8
	goto loc_82CC59B8;
loc_82CC4D3C:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
loc_82CC4D50:
	// lwz r21,4(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bge cr6,0x82cc59b8
	if (!ctx.cr6.lt) goto loc_82CC59B8;
	// ori r27,r27,4
	ctx.r27.u64 = ctx.r27.u64 | 4;
	// neg r21,r21
	ctx.r21.s64 = -ctx.r21.s64;
	// b 0x82cc59b8
	goto loc_82CC59B8;
loc_82CC4D68:
	// mulli r11,r21,10
	ctx.r11.s64 = ctx.r21.s64 * 10;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r21,r11,-48
	ctx.r21.s64 = ctx.r11.s64 + -48;
	// b 0x82cc59b8
	goto loc_82CC59B8;
loc_82CC4D78:
	// li r23,0
	ctx.r23.s64 = 0;
	// b 0x82cc59b8
	goto loc_82CC59B8;
loc_82CC4D80:
	// cmpwi cr6,r31,42
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 42, ctx.xer);
	// bne cr6,0x82cc4df0
	if (!ctx.cr6.eq) goto loc_82CC4DF0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82cc4da4
	if (!ctx.cr6.eq) goto loc_82CC4DA4;
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// b 0x82cc4ddc
	goto loc_82CC4DDC;
loc_82CC4DA4:
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82cc2fc0
	ctx.lr = 0x82CC4DB4;
	sub_82CC2FC0(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// addi r22,r10,1
	ctx.r22.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x82cc4cd8
	if (ctx.cr6.eq) goto loc_82CC4CD8;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
loc_82CC4DDC:
	// lwz r23,4(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bge cr6,0x82cc59b8
	if (!ctx.cr6.lt) goto loc_82CC59B8;
	// li r23,-1
	ctx.r23.s64 = -1;
	// b 0x82cc59b8
	goto loc_82CC59B8;
loc_82CC4DF0:
	// mulli r11,r23,10
	ctx.r11.s64 = ctx.r23.s64 * 10;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r23,r11,-48
	ctx.r23.s64 = ctx.r11.s64 + -48;
	// b 0x82cc59b8
	goto loc_82CC59B8;
loc_82CC4E00:
	// cmpwi cr6,r31,73
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 73, ctx.xer);
	// beq cr6,0x82cc4e50
	if (ctx.cr6.eq) goto loc_82CC4E50;
	// cmpwi cr6,r31,104
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 104, ctx.xer);
	// beq cr6,0x82cc4e48
	if (ctx.cr6.eq) goto loc_82CC4E48;
	// cmpwi cr6,r31,108
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 108, ctx.xer);
	// beq cr6,0x82cc4e28
	if (ctx.cr6.eq) goto loc_82CC4E28;
	// cmpwi cr6,r31,119
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 119, ctx.xer);
	// bne cr6,0x82cc59b8
	if (!ctx.cr6.eq) goto loc_82CC59B8;
	// ori r27,r27,2048
	ctx.r27.u64 = ctx.r27.u64 | 2048;
	// b 0x82cc59b8
	goto loc_82CC59B8;
loc_82CC4E28:
	// lbz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,108
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 108, ctx.xer);
	// bne cr6,0x82cc4e40
	if (!ctx.cr6.eq) goto loc_82CC4E40;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// ori r27,r27,4096
	ctx.r27.u64 = ctx.r27.u64 | 4096;
	// b 0x82cc59b8
	goto loc_82CC59B8;
loc_82CC4E40:
	// ori r27,r27,16
	ctx.r27.u64 = ctx.r27.u64 | 16;
	// b 0x82cc59b8
	goto loc_82CC59B8;
loc_82CC4E48:
	// ori r27,r27,32
	ctx.r27.u64 = ctx.r27.u64 | 32;
	// b 0x82cc59b8
	goto loc_82CC59B8;
loc_82CC4E50:
	// lbz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,54
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 54, ctx.xer);
	// bne cr6,0x82cc4e78
	if (!ctx.cr6.eq) goto loc_82CC4E78;
	// lbz r10,1(r22)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r22.u32 + 1);
	// cmplwi cr6,r10,52
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 52, ctx.xer);
	// bne cr6,0x82cc4e78
	if (!ctx.cr6.eq) goto loc_82CC4E78;
	// addi r22,r22,2
	ctx.r22.s64 = ctx.r22.s64 + 2;
	// ori r27,r27,32768
	ctx.r27.u64 = ctx.r27.u64 | 32768;
	// b 0x82cc59b8
	goto loc_82CC59B8;
loc_82CC4E78:
	// cmpwi cr6,r11,51
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 51, ctx.xer);
	// bne cr6,0x82cc4e98
	if (!ctx.cr6.eq) goto loc_82CC4E98;
	// lbz r10,1(r22)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r22.u32 + 1);
	// cmplwi cr6,r10,50
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 50, ctx.xer);
	// bne cr6,0x82cc4e98
	if (!ctx.cr6.eq) goto loc_82CC4E98;
	// addi r22,r22,2
	ctx.r22.s64 = ctx.r22.s64 + 2;
	// rlwinm r27,r27,0,17,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// b 0x82cc59b8
	goto loc_82CC59B8;
loc_82CC4E98:
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// beq cr6,0x82cc4f20
	if (ctx.cr6.eq) goto loc_82CC4F20;
	// cmpwi cr6,r11,105
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 105, ctx.xer);
	// beq cr6,0x82cc4f20
	if (ctx.cr6.eq) goto loc_82CC4F20;
	// cmpwi cr6,r11,111
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 111, ctx.xer);
	// beq cr6,0x82cc4f20
	if (ctx.cr6.eq) goto loc_82CC4F20;
	// cmpwi cr6,r11,117
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 117, ctx.xer);
	// beq cr6,0x82cc4f20
	if (ctx.cr6.eq) goto loc_82CC4F20;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x82cc4f20
	if (ctx.cr6.eq) goto loc_82CC4F20;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// beq cr6,0x82cc4f20
	if (ctx.cr6.eq) goto loc_82CC4F20;
	// li r18,0
	ctx.r18.s64 = 0;
loc_82CC4ECC:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// clrlwi r3,r29,24
	ctx.r3.u64 = ctx.r29.u32 & 0xFF;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82cb5500
	ctx.lr = 0x82CC4EE0;
	sub_82CB5500(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc4f08
	if (ctx.cr0.eq) goto loc_82CC4F08;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cc4730
	ctx.lr = 0x82CC4EF8;
	sub_82CC4730(ctx, base);
	// lbz r29,0(r22)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x82cc4910
	if (ctx.cr0.eq) goto loc_82CC4910;
loc_82CC4F08:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cc4730
	ctx.lr = 0x82CC4F18;
	sub_82CC4730(ctx, base);
	// lwz r16,84(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82cc59b8
	goto loc_82CC59B8;
loc_82CC4F20:
	// oris r27,r27,1
	ctx.r27.u64 = ctx.r27.u64 | 65536;
	// b 0x82cc59b8
	goto loc_82CC59B8;
loc_82CC4F28:
	// addi r11,r31,-65
	ctx.r11.s64 = ctx.r31.s64 + -65;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// bgt cr6,0x82cc57cc
	if (ctx.cr6.gt) goto loc_82CC57CC;
	// lis r12,-32256
	ctx.r12.s64 = -2113929216;
	// addi r12,r12,24632
	ctx.r12.s64 = ctx.r12.s64 + 24632;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32052
	ctx.r12.s64 = -2100559872;
	// addi r12,r12,20316
	ctx.r12.s64 = ctx.r12.s64 + 20316;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82CC52B4;
	case 1:
		goto loc_82CC57CC;
	case 2:
		goto loc_82CC4F5C;
	case 3:
		goto loc_82CC57CC;
	case 4:
		goto loc_82CC52B4;
	case 5:
		goto loc_82CC57CC;
	case 6:
		goto loc_82CC52B4;
	case 7:
		goto loc_82CC57CC;
	case 8:
		goto loc_82CC57CC;
	case 9:
		goto loc_82CC57CC;
	case 10:
		goto loc_82CC57CC;
	case 11:
		goto loc_82CC57CC;
	case 12:
		goto loc_82CC57CC;
	case 13:
		goto loc_82CC57CC;
	case 14:
		goto loc_82CC57CC;
	case 15:
		goto loc_82CC57CC;
	case 16:
		goto loc_82CC57CC;
	case 17:
		goto loc_82CC57CC;
	case 18:
		goto loc_82CC5138;
	case 19:
		goto loc_82CC57CC;
	case 20:
		goto loc_82CC57CC;
	case 21:
		goto loc_82CC57CC;
	case 22:
		goto loc_82CC57CC;
	case 23:
		goto loc_82CC5484;
	case 24:
		goto loc_82CC57CC;
	case 25:
		goto loc_82CC5080;
	case 26:
		goto loc_82CC57CC;
	case 27:
		goto loc_82CC57CC;
	case 28:
		goto loc_82CC57CC;
	case 29:
		goto loc_82CC57CC;
	case 30:
		goto loc_82CC57CC;
	case 31:
		goto loc_82CC57CC;
	case 32:
		goto loc_82CC52C0;
	case 33:
		goto loc_82CC57CC;
	case 34:
		goto loc_82CC4F6C;
	case 35:
		goto loc_82CC5474;
	case 36:
		goto loc_82CC52C0;
	case 37:
		goto loc_82CC52C0;
	case 38:
		goto loc_82CC52C0;
	case 39:
		goto loc_82CC57CC;
	case 40:
		goto loc_82CC5474;
	case 41:
		goto loc_82CC57CC;
	case 42:
		goto loc_82CC57CC;
	case 43:
		goto loc_82CC57CC;
	case 44:
		goto loc_82CC57CC;
	case 45:
		goto loc_82CC5248;
	case 46:
		goto loc_82CC54BC;
	case 47:
		goto loc_82CC5480;
	case 48:
		goto loc_82CC57CC;
	case 49:
		goto loc_82CC57CC;
	case 50:
		goto loc_82CC5148;
	case 51:
		goto loc_82CC57CC;
	case 52:
		goto loc_82CC5478;
	case 53:
		goto loc_82CC57CC;
	case 54:
		goto loc_82CC57CC;
	case 55:
		goto loc_82CC548C;
	default:
		__builtin_unreachable();
	}
loc_82CC4F5C:
	// andi. r11,r27,2096
	ctx.r11.u64 = ctx.r27.u64 & 2096;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cc4f6c
	if (!ctx.cr0.eq) goto loc_82CC4F6C;
	// ori r27,r27,2048
	ctx.r27.u64 = ctx.r27.u64 | 2048;
loc_82CC4F6C:
	// andi. r11,r27,2064
	ctx.r11.u64 = ctx.r27.u64 & 2064;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc5028
	if (ctx.cr0.eq) goto loc_82CC5028;
	// bne cr6,0x82cc4f94
	if (!ctx.cr6.eq) goto loc_82CC4F94;
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// b 0x82cc5004
	goto loc_82CC5004;
loc_82CC4F94:
	// cmplwi cr6,r26,99
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 99, ctx.xer);
	// bgt cr6,0x82cc4910
	if (ctx.cr6.gt) goto loc_82CC4910;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// rlwinm r11,r26,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// bne cr6,0x82cc4ff4
	if (!ctx.cr6.eq) goto loc_82CC4FF4;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82cc4fd8
	if (!ctx.cr6.eq) goto loc_82CC4FD8;
	// li r8,2
	ctx.r8.s64 = 2;
loc_82CC4FC0:
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
loc_82CC4FC4:
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// addi r9,r1,172
	ctx.r9.s64 = ctx.r1.s64 + 172;
	// stbx r29,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u8);
	// stwx r27,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r27.u32);
	// b 0x82cc57cc
	goto loc_82CC57CC;
loc_82CC4FD8:
	// li r4,2
	ctx.r4.s64 = 2;
loc_82CC4FDC:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82cc4580
	ctx.lr = 0x82CC4FE8;
	sub_82CC4580(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc4910
	if (ctx.cr0.eq) goto loc_82CC4910;
	// b 0x82cc57cc
	goto loc_82CC57CC;
loc_82CC4FF4:
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
loc_82CC5004:
	// li r5,512
	ctx.r5.s64 = 512;
	// lhz r6,6(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r4,r1,1760
	ctx.r4.s64 = ctx.r1.s64 + 1760;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82cce308
	ctx.lr = 0x82CC5018;
	sub_82CCE308(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc5070
	if (ctx.cr0.eq) goto loc_82CC5070;
	// stw r20,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// b 0x82cc5070
	goto loc_82CC5070;
loc_82CC5028:
	// bne cr6,0x82cc503c
	if (!ctx.cr6.eq) goto loc_82CC503C;
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// b 0x82cc5060
	goto loc_82CC5060;
loc_82CC503C:
	// cmplwi cr6,r26,99
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 99, ctx.xer);
	// bgt cr6,0x82cc4910
	if (ctx.cr6.gt) goto loc_82CC4910;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// rlwinm r11,r26,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// beq cr6,0x82cc55cc
	if (ctx.cr6.eq) goto loc_82CC55CC;
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
loc_82CC5060:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r20.u32);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// stb r11,1760(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1760, ctx.r11.u8);
loc_82CC5070:
	// addi r25,r1,1760
	ctx.r25.s64 = ctx.r1.s64 + 1760;
	// b 0x82cc57cc
	goto loc_82CC57CC;
loc_82CC5078:
	// stw r20,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r20.u32);
	// b 0x82cc4fc4
	goto loc_82CC4FC4;
loc_82CC5080:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82cc509c
	if (!ctx.cr6.eq) goto loc_82CC509C;
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// b 0x82cc50c0
	goto loc_82CC50C0;
loc_82CC509C:
	// cmplwi cr6,r26,99
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 99, ctx.xer);
	// bgt cr6,0x82cc4910
	if (ctx.cr6.gt) goto loc_82CC4910;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// rlwinm r11,r26,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// beq cr6,0x82cc5190
	if (ctx.cr6.eq) goto loc_82CC5190;
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
loc_82CC50C0:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc510c
	if (ctx.cr6.eq) goto loc_82CC510C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cc510c
	if (ctx.cr6.eq) goto loc_82CC510C;
	// lha r11,0(r11)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 0));
	// rlwinm. r9,r27,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// beq 0x82cc5100
	if (ctx.cr0.eq) goto loc_82CC5100;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stw r20,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// b 0x82cc57c8
	goto loc_82CC57C8;
loc_82CC50F8:
	// li r8,3
	ctx.r8.s64 = 3;
	// b 0x82cc4fc0
	goto loc_82CC4FC0;
loc_82CC5100:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// b 0x82cc57c8
	goto loc_82CC57C8;
loc_82CC510C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r25,24020(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24020);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_82CC511C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82cc511c
	if (!ctx.cr6.eq) goto loc_82CC511C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82CC5130:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82cc57c8
	goto loc_82CC57C8;
loc_82CC5138:
	// andi. r11,r27,2096
	ctx.r11.u64 = ctx.r27.u64 & 2096;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cc5148
	if (!ctx.cr0.eq) goto loc_82CC5148;
	// ori r27,r27,2048
	ctx.r27.u64 = ctx.r27.u64 | 2048;
loc_82CC5148:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// bne cr6,0x82cc515c
	if (!ctx.cr6.eq) goto loc_82CC515C;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// b 0x82cc5160
	goto loc_82CC5160;
loc_82CC515C:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_82CC5160:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82cc517c
	if (!ctx.cr6.eq) goto loc_82CC517C;
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// b 0x82cc51bc
	goto loc_82CC51BC;
loc_82CC517C:
	// cmplwi cr6,r26,99
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 99, ctx.xer);
	// bgt cr6,0x82cc4910
	if (ctx.cr6.gt) goto loc_82CC4910;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// rlwinm r11,r26,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// bne cr6,0x82cc51ac
	if (!ctx.cr6.eq) goto loc_82CC51AC;
loc_82CC5190:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82cc50f8
	if (ctx.cr6.eq) goto loc_82CC50F8;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82cc4fdc
	goto loc_82CC4FDC;
loc_82CC51AC:
	// addi r9,r1,164
	ctx.r9.s64 = ctx.r1.s64 + 164;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
loc_82CC51BC:
	// lwz r25,4(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// andi. r11,r27,2064
	ctx.r11.u64 = ctx.r27.u64 & 2064;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq 0x82cc5210
	if (ctx.cr0.eq) goto loc_82CC5210;
	// bne cr6,0x82cc51dc
	if (!ctx.cr6.eq) goto loc_82CC51DC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r25,24024(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24024);
loc_82CC51DC:
	// stw r20,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x82cc51fc
	goto loc_82CC51FC;
loc_82CC51E8:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82cc5204
	if (ctx.cr0.eq) goto loc_82CC5204;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82CC51FC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82cc51e8
	if (!ctx.cr6.eq) goto loc_82CC51E8;
loc_82CC5204:
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// b 0x82cc57c8
	goto loc_82CC57C8;
loc_82CC5210:
	// bne cr6,0x82cc521c
	if (!ctx.cr6.eq) goto loc_82CC521C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r25,24020(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24020);
loc_82CC521C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x82cc5238
	goto loc_82CC5238;
loc_82CC5224:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82cc5240
	if (ctx.cr6.eq) goto loc_82CC5240;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82CC5238:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82cc5224
	if (!ctx.cr6.eq) goto loc_82CC5224;
loc_82CC5240:
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// b 0x82cc57c8
	goto loc_82CC57C8;
loc_82CC5248:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82cc5264
	if (!ctx.cr6.eq) goto loc_82CC5264;
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// b 0x82cc5288
	goto loc_82CC5288;
loc_82CC5264:
	// cmplwi cr6,r26,99
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 99, ctx.xer);
	// bgt cr6,0x82cc4910
	if (ctx.cr6.gt) goto loc_82CC4910;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// rlwinm r11,r26,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// beq cr6,0x82cc5190
	if (ctx.cr6.eq) goto loc_82CC5190;
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
loc_82CC5288:
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82ccb920
	ctx.lr = 0x82CC5290;
	sub_82CCB920(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc4910
	if (ctx.cr0.eq) goto loc_82CC4910;
	// rlwinm. r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc52a8
	if (ctx.cr0.eq) goto loc_82CC52A8;
	// sth r16,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r16.u16);
	// b 0x82cc52ac
	goto loc_82CC52AC;
loc_82CC52A8:
	// stw r16,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r16.u32);
loc_82CC52AC:
	// stw r20,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// b 0x82cc57cc
	goto loc_82CC57CC;
loc_82CC52B4:
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// stw r20,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r20.u32);
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
loc_82CC52C0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r27,r27,64
	ctx.r27.u64 = ctx.r27.u64 | 64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82cc531c
	if (!ctx.cr6.eq) goto loc_82CC531C;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x82cc531c
	if (!ctx.cr6.eq) goto loc_82CC531C;
	// cmplwi cr6,r26,99
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 99, ctx.xer);
	// bgt cr6,0x82cc4910
	if (ctx.cr6.gt) goto loc_82CC4910;
	// rlwinm r11,r26,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82cc5314
	if (!ctx.cr6.eq) goto loc_82CC5314;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
loc_82CC5300:
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// addi r9,r1,172
	ctx.r9.s64 = ctx.r1.s64 + 172;
	// stbx r29,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u8);
	// stwx r27,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r27.u32);
	// b 0x82cc59b8
	goto loc_82CC59B8;
loc_82CC5314:
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82cc4d24
	goto loc_82CC4D24;
loc_82CC531C:
	// addi r25,r1,1760
	ctx.r25.s64 = ctx.r1.s64 + 1760;
	// li r30,512
	ctx.r30.s64 = 512;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bge cr6,0x82cc5334
	if (!ctx.cr6.lt) goto loc_82CC5334;
	// li r23,6
	ctx.r23.s64 = 6;
	// b 0x82cc5384
	goto loc_82CC5384;
loc_82CC5334:
	// bne cr6,0x82cc534c
	if (!ctx.cr6.eq) goto loc_82CC534C;
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// cmpwi cr6,r11,103
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 103, ctx.xer);
	// bne cr6,0x82cc5384
	if (!ctx.cr6.eq) goto loc_82CC5384;
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// b 0x82cc5384
	goto loc_82CC5384;
loc_82CC534C:
	// cmpwi cr6,r23,512
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 512, ctx.xer);
	// ble cr6,0x82cc5358
	if (!ctx.cr6.gt) goto loc_82CC5358;
	// li r23,512
	ctx.r23.s64 = 512;
loc_82CC5358:
	// cmpwi cr6,r23,163
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 163, ctx.xer);
	// ble cr6,0x82cc5384
	if (!ctx.cr6.gt) goto loc_82CC5384;
	// addi r31,r23,349
	ctx.r31.s64 = ctx.r23.s64 + 349;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb0fe0
	ctx.lr = 0x82CC536C;
	sub_82CB0FE0(ctx, base);
	// mr. r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq 0x82cc5380
	if (ctx.cr0.eq) goto loc_82CC5380;
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// b 0x82cc5384
	goto loc_82CC5384;
loc_82CC5380:
	// li r23,163
	ctx.r23.s64 = 163;
loc_82CC5384:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82cc53a0
	if (!ctx.cr6.eq) goto loc_82CC53A0;
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// b 0x82cc53bc
	goto loc_82CC53BC;
loc_82CC53A0:
	// cmplwi cr6,r26,99
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 99, ctx.xer);
	// bgt cr6,0x82cc4910
	if (ctx.cr6.gt) goto loc_82CC4910;
	// rlwinm r11,r26,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
loc_82CC53BC:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// extsb r31,r29
	ctx.r31.s64 = ctx.r29.s8;
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CC53F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm. r30,r27,0,24,24
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82cc541c
	if (ctx.cr0.eq) goto loc_82CC541C;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x82cc541c
	if (!ctx.cr6.eq) goto loc_82CC541C;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CC541C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CC541C:
	// cmpwi cr6,r31,103
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 103, ctx.xer);
	// bne cr6,0x82cc5444
	if (!ctx.cr6.eq) goto loc_82CC5444;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82cc5444
	if (!ctx.cr6.eq) goto loc_82CC5444;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CC5444;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CC5444:
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// bne cr6,0x82cc5458
	if (!ctx.cr6.eq) goto loc_82CC5458;
	// ori r27,r27,256
	ctx.r27.u64 = ctx.r27.u64 | 256;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_82CC5458:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82CC545C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc545c
	if (!ctx.cr6.eq) goto loc_82CC545C;
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// b 0x82cc5130
	goto loc_82CC5130;
loc_82CC5474:
	// ori r27,r27,64
	ctx.r27.u64 = ctx.r27.u64 | 64;
loc_82CC5478:
	// li r8,10
	ctx.r8.s64 = 10;
	// b 0x82cc54cc
	goto loc_82CC54CC;
loc_82CC5480:
	// li r23,8
	ctx.r23.s64 = 8;
loc_82CC5484:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82cc5490
	goto loc_82CC5490;
loc_82CC548C:
	// li r11,39
	ctx.r11.s64 = 39;
loc_82CC5490:
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// rlwinm. r10,r27,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r8,16
	ctx.r8.s64 = 16;
	// beq 0x82cc54cc
	if (ctx.cr0.eq) goto loc_82CC54CC;
	// addi r11,r11,81
	ctx.r11.s64 = ctx.r11.s64 + 81;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r11,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r11.u8);
	// stb r10,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r10.u8);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// b 0x82cc54cc
	goto loc_82CC54CC;
loc_82CC54BC:
	// rlwinm. r11,r27,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r8,8
	ctx.r8.s64 = 8;
	// beq 0x82cc54cc
	if (ctx.cr0.eq) goto loc_82CC54CC;
	// ori r27,r27,512
	ctx.r27.u64 = ctx.r27.u64 | 512;
loc_82CC54CC:
	// rlwinm. r11,r27,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc5528
	if (ctx.cr0.eq) goto loc_82CC5528;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82cc54f0
	if (!ctx.cr6.eq) goto loc_82CC54F0;
loc_82CC54E0:
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// b 0x82cc5584
	goto loc_82CC5584;
loc_82CC54F0:
	// cmplwi cr6,r26,99
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 99, ctx.xer);
	// bgt cr6,0x82cc4910
	if (ctx.cr6.gt) goto loc_82CC4910;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// rlwinm r11,r26,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// bne cr6,0x82cc5574
	if (!ctx.cr6.eq) goto loc_82CC5574;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82cc5520
	if (!ctx.cr6.eq) goto loc_82CC5520;
	// li r8,4
	ctx.r8.s64 = 4;
	// b 0x82cc4fc0
	goto loc_82CC4FC0;
loc_82CC5520:
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82cc4fdc
	goto loc_82CC4FDC;
loc_82CC5528:
	// rlwinm. r11,r27,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc558c
	if (ctx.cr0.eq) goto loc_82CC558C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc54e0
	if (ctx.cr6.eq) goto loc_82CC54E0;
	// cmplwi cr6,r26,99
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 99, ctx.xer);
	// bgt cr6,0x82cc4910
	if (ctx.cr6.gt) goto loc_82CC4910;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// rlwinm r11,r26,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// bne cr6,0x82cc5574
	if (!ctx.cr6.eq) goto loc_82CC5574;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82cc556c
	if (!ctx.cr6.eq) goto loc_82CC556C;
	// li r8,5
	ctx.r8.s64 = 5;
	// b 0x82cc4fc0
	goto loc_82CC4FC0;
loc_82CC556C:
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x82cc4fdc
	goto loc_82CC4FDC;
loc_82CC5574:
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
loc_82CC5584:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// b 0x82cc56d4
	goto loc_82CC56D4;
loc_82CC558C:
	// rlwinm. r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc5648
	if (ctx.cr0.eq) goto loc_82CC5648;
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc5604
	if (ctx.cr0.eq) goto loc_82CC5604;
	// bne cr6,0x82cc55b8
	if (!ctx.cr6.eq) goto loc_82CC55B8;
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// b 0x82cc55f8
	goto loc_82CC55F8;
loc_82CC55B8:
	// cmplwi cr6,r26,99
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 99, ctx.xer);
	// bgt cr6,0x82cc4910
	if (ctx.cr6.gt) goto loc_82CC4910;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// rlwinm r11,r26,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// bne cr6,0x82cc55e8
	if (!ctx.cr6.eq) goto loc_82CC55E8;
loc_82CC55CC:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82cc5078
	if (ctx.cr6.eq) goto loc_82CC5078;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82cc4fdc
	goto loc_82CC4FDC;
loc_82CC55E8:
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
loc_82CC55F8:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x82cc56d4
	goto loc_82CC56D4;
loc_82CC5604:
	// bne cr6,0x82cc5618
	if (!ctx.cr6.eq) goto loc_82CC5618;
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// b 0x82cc563c
	goto loc_82CC563C;
loc_82CC5618:
	// cmplwi cr6,r26,99
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 99, ctx.xer);
	// bgt cr6,0x82cc4910
	if (ctx.cr6.gt) goto loc_82CC4910;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// rlwinm r11,r26,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// beq cr6,0x82cc55cc
	if (ctx.cr6.eq) goto loc_82CC55CC;
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
loc_82CC563C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x82cc56d4
	goto loc_82CC56D4;
loc_82CC5648:
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc5698
	if (ctx.cr0.eq) goto loc_82CC5698;
	// bne cr6,0x82cc566c
	if (!ctx.cr6.eq) goto loc_82CC566C;
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// b 0x82cc5690
	goto loc_82CC5690;
loc_82CC566C:
	// cmplwi cr6,r26,99
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 99, ctx.xer);
	// bgt cr6,0x82cc4910
	if (ctx.cr6.gt) goto loc_82CC4910;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// rlwinm r11,r26,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// beq cr6,0x82cc55cc
	if (ctx.cr6.eq) goto loc_82CC55CC;
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
loc_82CC5690:
	// lwa r11,4(r11)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 4));
	// b 0x82cc56d4
	goto loc_82CC56D4;
loc_82CC5698:
	// bne cr6,0x82cc56ac
	if (!ctx.cr6.eq) goto loc_82CC56AC;
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// b 0x82cc56d0
	goto loc_82CC56D0;
loc_82CC56AC:
	// cmplwi cr6,r26,99
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 99, ctx.xer);
	// bgt cr6,0x82cc4910
	if (ctx.cr6.gt) goto loc_82CC4910;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// rlwinm r11,r26,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// beq cr6,0x82cc55cc
	if (ctx.cr6.eq) goto loc_82CC55CC;
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
loc_82CC56D0:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82CC56D4:
	// rlwinm. r10,r27,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82cc56ec
	if (ctx.cr0.eq) goto loc_82CC56EC;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bge cr6,0x82cc56ec
	if (!ctx.cr6.lt) goto loc_82CC56EC;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// ori r27,r27,256
	ctx.r27.u64 = ctx.r27.u64 | 256;
loc_82CC56EC:
	// rlwinm. r10,r27,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82cc5700
	if (!ctx.cr0.eq) goto loc_82CC5700;
	// rlwinm. r10,r27,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82cc5700
	if (!ctx.cr0.eq) goto loc_82CC5700;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
loc_82CC5700:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bge cr6,0x82cc5710
	if (!ctx.cr6.lt) goto loc_82CC5710;
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// b 0x82cc5720
	goto loc_82CC5720;
loc_82CC5710:
	// rlwinm r27,r27,0,29,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// cmpwi cr6,r23,512
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 512, ctx.xer);
	// ble cr6,0x82cc5720
	if (!ctx.cr6.gt) goto loc_82CC5720;
	// li r23,512
	ctx.r23.s64 = 512;
loc_82CC5720:
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x82cc5730
	if (!ctx.cr6.eq) goto loc_82CC5730;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_82CC5730:
	// addi r9,r1,2271
	ctx.r9.s64 = ctx.r1.s64 + 2271;
loc_82CC5734:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// bgt cr6,0x82cc5748
	if (ctx.cr6.gt) goto loc_82CC5748;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82cc578c
	if (ctx.cr6.eq) goto loc_82CC578C;
loc_82CC5748:
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// divdu r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 / ctx.r10.u64;
	// tdllei r10,0
	// mulld r7,r7,r10
	ctx.r7.s64 = ctx.r7.s64 * ctx.r10.s64;
	// subf r7,r7,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r7.s64;
	// divdu r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 / ctx.r10.u64;
	// tdllei r10,0
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// ble cr6,0x82cc577c
	if (!ctx.cr6.gt) goto loc_82CC577C;
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_82CC577C:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x82cc5734
	goto loc_82CC5734;
loc_82CC578C:
	// addi r11,r1,2271
	ctx.r11.s64 = ctx.r1.s64 + 2271;
	// rlwinm. r10,r27,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r25,r9,1
	ctx.r25.s64 = ctx.r9.s64 + 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq 0x82cc57cc
	if (ctx.cr0.eq) goto loc_82CC57CC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc57b8
	if (ctx.cr6.eq) goto loc_82CC57B8;
	// lbz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// beq cr6,0x82cc57cc
	if (ctx.cr6.eq) goto loc_82CC57CC;
loc_82CC57B8:
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// li r10,48
	ctx.r10.s64 = 48;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r10,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r10.u8);
loc_82CC57C8:
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_82CC57CC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82cc57e0
	if (!ctx.cr6.eq) goto loc_82CC57E0;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x82cc59b8
	if (ctx.cr6.eq) goto loc_82CC59B8;
loc_82CC57E0:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82cc59a4
	if (!ctx.cr6.eq) goto loc_82CC59A4;
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc5830
	if (ctx.cr0.eq) goto loc_82CC5830;
	// rlwinm. r11,r27,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc5804
	if (ctx.cr0.eq) goto loc_82CC5804;
	// li r11,45
	ctx.r11.s64 = 45;
	// b 0x82cc5810
	goto loc_82CC5810;
loc_82CC5804:
	// clrlwi. r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc5820
	if (ctx.cr0.eq) goto loc_82CC5820;
	// li r11,43
	ctx.r11.s64 = 43;
loc_82CC5810:
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// b 0x82cc5834
	goto loc_82CC5834;
loc_82CC5820:
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc5830
	if (ctx.cr0.eq) goto loc_82CC5830;
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x82cc5810
	goto loc_82CC5810;
loc_82CC5830:
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82CC5834:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm. r10,r27,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r11,r11,r21
	ctx.r11.s64 = ctx.r21.s64 - ctx.r11.s64;
	// subf r29,r30,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r30.s64;
	// bne 0x82cc587c
	if (!ctx.cr0.eq) goto loc_82CC587C;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82cc587c
	if (!ctx.cr6.gt) goto loc_82CC587C;
loc_82CC5854:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x82cc4730
	ctx.lr = 0x82CC5868;
	sub_82CC4730(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82cc587c
	if (ctx.cr6.eq) goto loc_82CC587C;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x82cc5854
	if (ctx.cr6.gt) goto loc_82CC5854;
loc_82CC587C:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82cc4818
	ctx.lr = 0x82CC5890;
	sub_82CC4818(ctx, base);
	// rlwinm. r11,r27,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc58d4
	if (ctx.cr0.eq) goto loc_82CC58D4;
	// rlwinm. r11,r27,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cc58d4
	if (!ctx.cr0.eq) goto loc_82CC58D4;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82cc58d4
	if (!ctx.cr6.gt) goto loc_82CC58D4;
loc_82CC58AC:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x82cc4730
	ctx.lr = 0x82CC58C0;
	sub_82CC4730(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82cc58d4
	if (ctx.cr6.eq) goto loc_82CC58D4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x82cc58ac
	if (ctx.cr6.gt) goto loc_82CC58AC;
loc_82CC58D4:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc594c
	if (ctx.cr6.eq) goto loc_82CC594C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82cc594c
	if (!ctx.cr6.gt) goto loc_82CC594C;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_82CC58F4:
	// li r5,6
	ctx.r5.s64 = 6;
	// lhz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// bl 0x82cce308
	ctx.lr = 0x82CC5910;
	sub_82CCE308(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82cc5940
	if (!ctx.cr0.eq) goto loc_82CC5940;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82cc5940
	if (ctx.cr6.eq) goto loc_82CC5940;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82cc4818
	ctx.lr = 0x82CC5934;
	sub_82CC4818(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82cc58f4
	if (!ctx.cr6.eq) goto loc_82CC58F4;
	// b 0x82cc595c
	goto loc_82CC595C;
loc_82CC5940:
	// li r16,-1
	ctx.r16.s64 = -1;
	// stw r16,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r16.u32);
	// b 0x82cc5960
	goto loc_82CC5960;
loc_82CC594C:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82cc4818
	ctx.lr = 0x82CC595C;
	sub_82CC4818(ctx, base);
loc_82CC595C:
	// lwz r16,84(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82CC5960:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// blt cr6,0x82cc59a4
	if (ctx.cr6.lt) goto loc_82CC59A4;
	// rlwinm. r11,r27,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc59a4
	if (ctx.cr0.eq) goto loc_82CC59A4;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82cc59a4
	if (!ctx.cr6.gt) goto loc_82CC59A4;
loc_82CC597C:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x82cc4730
	ctx.lr = 0x82CC5990;
	sub_82CC4730(ctx, base);
	// lwz r16,84(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r16,-1
	ctx.cr6.compare<int32_t>(ctx.r16.s32, -1, ctx.xer);
	// beq cr6,0x82cc59a4
	if (ctx.cr6.eq) goto loc_82CC59A4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x82cc597c
	if (ctx.cr6.gt) goto loc_82CC597C;
loc_82CC59A4:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82cc59b8
	if (ctx.cr6.eq) goto loc_82CC59B8;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82cb3d50
	ctx.lr = 0x82CC59B4;
	sub_82CB3D50(ctx, base);
	// li r19,0
	ctx.r19.s64 = 0;
loc_82CC59B8:
	// lbz r29,0(r22)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// extsb. r31,r29
	ctx.r31.s64 = ctx.r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82cc4ab0
	if (!ctx.cr0.eq) goto loc_82CC4AB0;
loc_82CC59C8:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82cc59d8
	if (ctx.cr6.eq) goto loc_82CC59D8;
	// cmpwi cr6,r18,7
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 7, ctx.xer);
	// bne cr6,0x82cc4910
	if (!ctx.cr6.eq) goto loc_82CC4910;
loc_82CC59D8:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82cc5a54
	if (!ctx.cr6.eq) goto loc_82CC5A54;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x82cc5a54
	if (!ctx.cr6.eq) goto loc_82CC5A54;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// blt cr6,0x82cc5a54
	if (ctx.cr6.lt) goto loc_82CC5A54;
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
loc_82CC59F8:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82cc5a34
	if (ctx.cr6.eq) goto loc_82CC5A34;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82cc5a34
	if (ctx.cr6.eq) goto loc_82CC5A34;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82cc5a34
	if (ctx.cr6.eq) goto loc_82CC5A34;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82cc5a34
	if (ctx.cr6.eq) goto loc_82CC5A34;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x82cc5a34
	if (ctx.cr6.eq) goto loc_82CC5A34;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x82cc5a34
	if (ctx.cr6.eq) goto loc_82CC5A34;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x82cc4910
	if (!ctx.cr6.eq) goto loc_82CC4910;
loc_82CC5A34:
	// addi r10,r24,7
	ctx.r10.s64 = ctx.r24.s64 + 7;
	// stw r24,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r24,r10,8
	ctx.r24.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r9,r15
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r15.s32, ctx.xer);
	// ble cr6,0x82cc59f8
	if (!ctx.cr6.gt) goto loc_82CC59F8;
loc_82CC5A54:
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// cmpwi cr6,r14,2
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 2, ctx.xer);
	// blt cr6,0x82cc4a68
	if (ctx.cr6.lt) goto loc_82CC4A68;
loc_82CC5A60:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// b 0x82cc5a9c
	goto loc_82CC5A9C;
loc_82CC5A68:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,2272
	ctx.r3.s64 = ctx.r1.s64 + 2272;
	// bl 0x82cb2578
	ctx.lr = 0x82CC5A7C;
	sub_82CB2578(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x82cc5a90
	if (!ctx.cr6.eq) goto loc_82CC5A90;
	// li r31,511
	ctx.r31.s64 = 511;
	// stb r27,2783(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2783, ctx.r27.u8);
loc_82CC5A90:
	// addi r3,r1,2272
	ctx.r3.s64 = ctx.r1.s64 + 2272;
	// bl 0x82e67098
	ctx.lr = 0x82CC5A98;
	sub_82E67098(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CC5A9C:
	// addi r1,r1,2944
	ctx.r1.s64 = ctx.r1.s64 + 2944;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC5AA4"))) PPC_WEAK_FUNC(sub_82CC5AA4);
PPC_FUNC_IMPL(__imp__sub_82CC5AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC5AA8"))) PPC_WEAK_FUNC(sub_82CC5AA8);
PPC_FUNC_IMPL(__imp__sub_82CC5AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x82CC5AB0;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// li r18,-2
	ctx.r18.s64 = -2;
	// mr r20,r31
	ctx.r20.u64 = ctx.r31.u64;
	// cmpwi cr6,r21,-2
	ctx.cr6.compare<int32_t>(ctx.r21.s32, -2, ctx.xer);
	// bne cr6,0x82cc5af4
	if (!ctx.cr6.eq) goto loc_82CC5AF4;
	// bl 0x82cb8f90
	ctx.lr = 0x82CC5AD4;
	sub_82CB8F90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82cb8f58
	ctx.lr = 0x82CC5AE0;
	sub_82CB8F58(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
loc_82CC5AE4:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82cc60d8
	goto loc_82CC60D8;
loc_82CC5AF4:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// blt cr6,0x82cc5b0c
	if (ctx.cr6.lt) goto loc_82CC5B0C;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// lwz r11,6244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6244);
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82cc5b44
	if (ctx.cr6.lt) goto loc_82CC5B44;
loc_82CC5B0C:
	// bl 0x82cb8f90
	ctx.lr = 0x82CC5B10;
	sub_82CB8F90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82cb8f58
	ctx.lr = 0x82CC5B1C;
	sub_82CB8F58(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
loc_82CC5B20:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CC5B3C;
	sub_82CB8DA0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82cc60d8
	goto loc_82CC60D8;
loc_82CC5B44:
	// srawi r11,r21,5
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 5;
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,6272
	ctx.r28.s64 = ctx.r10.s64 + 6272;
	// rlwinm r29,r21,6,21,25
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 6) & 0x7C0;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82cc5b0c
	if (ctx.cr0.eq) goto loc_82CC5B0C;
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82cc5b98
	if (!ctx.cr6.gt) goto loc_82CC5B98;
	// bl 0x82cb8f90
	ctx.lr = 0x82CC5B84;
	sub_82CB8F90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82CC5B8C:
	// bl 0x82cb8f58
	ctx.lr = 0x82CC5B90;
	sub_82CB8F58(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// b 0x82cc5b20
	goto loc_82CC5B20;
loc_82CC5B98:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// beq cr6,0x82cc60d4
	if (ctx.cr6.eq) goto loc_82CC60D4;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cc60d4
	if (!ctx.cr0.eq) goto loc_82CC60D4;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x82cc5bc4
	if (!ctx.cr6.eq) goto loc_82CC5BC4;
loc_82CC5BB8:
	// bl 0x82cb8f90
	ctx.lr = 0x82CC5BBC;
	sub_82CB8F90(ctx, base);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// b 0x82cc5b8c
	goto loc_82CC5B8C;
loc_82CC5BC4:
	// lbz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// rotlwi r11,r11,24
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 24);
	// srawi r11,r11,25
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 25;
	// extsb r22,r11
	ctx.r22.s64 = ctx.r11.s8;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// beq cr6,0x82cc5bfc
	if (ctx.cr6.eq) goto loc_82CC5BFC;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// bne cr6,0x82cc5bf4
	if (!ctx.cr6.eq) goto loc_82CC5BF4;
	// not r11,r31
	ctx.r11.u64 = ~ctx.r31.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc5bb8
	if (ctx.cr0.eq) goto loc_82CC5BB8;
	// rlwinm r31,r31,0,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
loc_82CC5BF4:
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
	// b 0x82cc5c5c
	goto loc_82CC5C5C;
loc_82CC5BFC:
	// not r11,r31
	ctx.r11.u64 = ~ctx.r31.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc5bb8
	if (ctx.cr0.eq) goto loc_82CC5BB8;
	// rlwinm r31,r31,31,1,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// bge cr6,0x82cc5c18
	if (!ctx.cr6.lt) goto loc_82CC5C18;
	// li r31,4
	ctx.r31.s64 = 4;
loc_82CC5C18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb0fe0
	ctx.lr = 0x82CC5C20;
	sub_82CB0FE0(ctx, base);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne 0x82cc5c40
	if (!ctx.cr0.eq) goto loc_82CC5C40;
	// bl 0x82cb8f58
	ctx.lr = 0x82CC5C2C;
	sub_82CB8F58(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82cb8f90
	ctx.lr = 0x82CC5C38;
	sub_82CB8F90(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x82cc5ae4
	goto loc_82CC5AE4;
loc_82CC5C40:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82cca8d8
	ctx.lr = 0x82CC5C50;
	sub_82CCA8D8(ctx, base);
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// std r3,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r3.u64);
loc_82CC5C5C:
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r24,10
	ctx.r24.s64 = 10;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// andi. r10,r10,72
	ctx.r10.u64 = ctx.r10.u64 & 72;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82cc5d2c
	if (ctx.cr0.eq) goto loc_82CC5D2C;
	// lbz r11,5(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82cc5d2c
	if (ctx.cr6.eq) goto loc_82CC5D2C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82cc5d2c
	if (ctx.cr6.eq) goto loc_82CC5D2C;
	// stb r11,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r11.u8);
	// addi r4,r23,1
	ctx.r4.s64 = ctx.r23.s64 + 1;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r24,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r24.u8);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82cc5d2c
	if (ctx.cr6.eq) goto loc_82CC5D2C;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r11,41(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82cc5d2c
	if (ctx.cr6.eq) goto loc_82CC5D2C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82cc5d2c
	if (ctx.cr6.eq) goto loc_82CC5D2C;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r30,2
	ctx.r30.s64 = 2;
	// stb r24,41(r11)
	PPC_STORE_U8(ctx.r11.u32 + 41, ctx.r24.u8);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// bne cr6,0x82cc5d2c
	if (!ctx.cr6.eq) goto loc_82CC5D2C;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r11,42(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 42);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82cc5d2c
	if (ctx.cr6.eq) goto loc_82CC5D2C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82cc5d2c
	if (ctx.cr6.eq) goto loc_82CC5D2C;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r30,3
	ctx.r30.s64 = 3;
	// stb r24,42(r11)
	PPC_STORE_U8(ctx.r11.u32 + 42, ctx.r24.u8);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82CC5D2C:
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x82e654a8
	ctx.lr = 0x82CC5D44;
	sub_82E654A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc60a0
	if (ctx.cr0.eq) goto loc_82CC60A0;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82cc60a0
	if (ctx.cr6.lt) goto loc_82CC60A0;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x82cc60a0
	if (ctx.cr6.gt) goto loc_82CC60A0;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm. r9,r9,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82cc6058
	if (ctx.cr0.eq) goto loc_82CC6058;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82cc5d98
	if (ctx.cr6.eq) goto loc_82CC5D98;
	// lbz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x82cc5d98
	if (!ctx.cr6.eq) goto loc_82CC5D98;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// b 0x82cc5da4
	goto loc_82CC5DA4;
loc_82CC5D98:
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_82CC5DA4:
	// add r25,r23,r30
	ctx.r25.u64 = ctx.r23.u64 + ctx.r30.u64;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmplw cr6,r23,r25
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82cc5f10
	if (!ctx.cr6.lt) goto loc_82CC5F10;
	// li r26,13
	ctx.r26.s64 = 13;
loc_82CC5DC0:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// beq cr6,0x82cc5ee0
	if (ctx.cr6.eq) goto loc_82CC5EE0;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82cc5de4
	if (ctx.cr6.eq) goto loc_82CC5DE4;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x82cc5ed0
	goto loc_82CC5ED0;
loc_82CC5DE4:
	// addi r11,r25,-1
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82cc5e18
	if (!ctx.cr6.lt) goto loc_82CC5E18;
	// lbz r9,1(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// bne cr6,0x82cc5e0c
	if (!ctx.cr6.eq) goto loc_82CC5E0C;
	// stb r24,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r24.u8);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// b 0x82cc5ed0
	goto loc_82CC5ED0;
loc_82CC5E0C:
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x82cc5ed0
	goto loc_82CC5ED0;
loc_82CC5E18:
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x82e654a8
	ctx.lr = 0x82CC5E38;
	sub_82E654A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82cc5e4c
	if (!ctx.cr0.eq) goto loc_82CC5E4C;
	// bl 0x82bf2188
	ctx.lr = 0x82CC5E44;
	sub_82BF2188(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82cc5ecc
	if (!ctx.cr0.eq) goto loc_82CC5ECC;
loc_82CC5E4C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc5ecc
	if (ctx.cr6.eq) goto loc_82CC5ECC;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// andi. r11,r11,72
	ctx.r11.u64 = ctx.r11.u64 & 72;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc5e9c
	if (ctx.cr0.eq) goto loc_82CC5E9C;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x82cc5e84
	if (!ctx.cr6.eq) goto loc_82CC5E84;
loc_82CC5E7C:
	// stb r24,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r24.u8);
	// b 0x82cc5ed0
	goto loc_82CC5ED0;
loc_82CC5E84:
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stb r10,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// b 0x82cc5ed0
	goto loc_82CC5ED0;
loc_82CC5E9C:
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x82cc5eb0
	if (!ctx.cr6.eq) goto loc_82CC5EB0;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82cc5e7c
	if (ctx.cr6.eq) goto loc_82CC5E7C;
loc_82CC5EB0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82cca8d8
	ctx.lr = 0x82CC5EC0;
	sub_82CCA8D8(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82cc5ed4
	if (ctx.cr6.eq) goto loc_82CC5ED4;
loc_82CC5ECC:
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
loc_82CC5ED0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82CC5ED4:
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82cc5dc0
	if (ctx.cr6.lt) goto loc_82CC5DC0;
	// b 0x82cc5f10
	goto loc_82CC5F10;
loc_82CC5EE0:
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82cc5f04
	if (!ctx.cr0.eq) goto loc_82CC5F04;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// b 0x82cc5f10
	goto loc_82CC5F10;
loc_82CC5F04:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82CC5F10:
	// subf r30,r23,r31
	ctx.r30.s64 = ctx.r31.s64 - ctx.r23.s64;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// bne cr6,0x82cc6058
	if (!ctx.cr6.eq) goto loc_82CC6058;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82cc6058
	if (ctx.cr6.eq) goto loc_82CC6058;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm. r11,r10,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cc5f3c
	if (!ctx.cr0.eq) goto loc_82CC5F3C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82cc6020
	goto loc_82CC6020;
loc_82CC5F3C:
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,14368
	ctx.r11.s64 = ctx.r11.s64 + 14368;
	// b 0x82cc5f68
	goto loc_82CC5F68;
loc_82CC5F4C:
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bgt cr6,0x82cc5f74
	if (ctx.cr6.gt) goto loc_82CC5F74;
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82cc5f74
	if (ctx.cr6.lt) goto loc_82CC5F74;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
loc_82CC5F68:
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cc5f4c
	if (ctx.cr6.eq) goto loc_82CC5F4C;
loc_82CC5F74:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lbzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cc5f98
	if (!ctx.cr0.eq) goto loc_82CC5F98;
	// bl 0x82cb8f58
	ctx.lr = 0x82CC5F8C;
	sub_82CB8F58(ctx, base);
	// li r11,42
	ctx.r11.s64 = 42;
loc_82CC5F90:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82cc6054
	goto loc_82CC6054;
loc_82CC5F98:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82cc5fac
	if (!ctx.cr6.eq) goto loc_82CC5FAC;
	// add r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 + ctx.r31.u64;
	// b 0x82cc6020
	goto loc_82CC6020;
loc_82CC5FAC:
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// andi. r8,r8,72
	ctx.r8.u64 = ctx.r8.u64 & 72;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82cc600c
	if (ctx.cr0.eq) goto loc_82CC600C;
	// stb r10,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x82cc5fe8
	if (ctx.cr6.lt) goto loc_82CC5FE8;
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stb r8,41(r10)
	PPC_STORE_U8(ctx.r10.u32 + 41, ctx.r8.u8);
loc_82CC5FE8:
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x82cc6004
	if (!ctx.cr6.eq) goto loc_82CC6004;
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stb r8,42(r10)
	PPC_STORE_U8(ctx.r10.u32 + 42, ctx.r8.u8);
loc_82CC6004:
	// subf r31,r9,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r9.s64;
	// b 0x82cc6020
	goto loc_82CC6020;
loc_82CC600C:
	// neg r11,r9
	ctx.r11.s64 = -ctx.r9.s64;
	// li r5,1
	ctx.r5.s64 = 1;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82cca8d8
	ctx.lr = 0x82CC6020;
	sub_82CCA8D8(ctx, base);
loc_82CC6020:
	// subf r31,r23,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r23.s64;
	// lis r3,0
	ctx.r3.s64 = 0;
	// rlwinm r8,r20,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x82beac80
	ctx.lr = 0x82CC6044;
	sub_82BEAC80(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82cc607c
	if (!ctx.cr0.eq) goto loc_82CC607C;
	// bl 0x82bf2188
	ctx.lr = 0x82CC6050;
	sub_82BF2188(ctx, base);
loc_82CC6050:
	// bl 0x82cb8fc8
	ctx.lr = 0x82CC6054;
	sub_82CB8FC8(ctx, base);
loc_82CC6054:
	// li r18,-1
	ctx.r18.s64 = -1;
loc_82CC6058:
	// cmplw cr6,r23,r19
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x82cc6068
	if (ctx.cr6.eq) goto loc_82CC6068;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82cb3d50
	ctx.lr = 0x82CC6068;
	sub_82CB3D50(ctx, base);
loc_82CC6068:
	// cmpwi cr6,r18,-2
	ctx.cr6.compare<int32_t>(ctx.r18.s32, -2, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82cc60d8
	if (ctx.cr6.eq) goto loc_82CC60D8;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// b 0x82cc60d8
	goto loc_82CC60D8;
loc_82CC607C:
	// subf r10,r30,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r30.s64;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// b 0x82cc6058
	goto loc_82CC6058;
loc_82CC60A0:
	// bl 0x82bf2188
	ctx.lr = 0x82CC60A4;
	sub_82BF2188(ctx, base);
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// bne cr6,0x82cc60c4
	if (!ctx.cr6.eq) goto loc_82CC60C4;
	// bl 0x82cb8f58
	ctx.lr = 0x82CC60B0;
	sub_82CB8F58(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82cb8f90
	ctx.lr = 0x82CC60BC;
	sub_82CB8F90(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82cc5f90
	goto loc_82CC5F90;
loc_82CC60C4:
	// cmplwi cr6,r3,109
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 109, ctx.xer);
	// bne cr6,0x82cc6050
	if (!ctx.cr6.eq) goto loc_82CC6050;
	// mr r18,r26
	ctx.r18.u64 = ctx.r26.u64;
	// b 0x82cc6058
	goto loc_82CC6058;
loc_82CC60D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CC60D8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC60E8"))) PPC_WEAK_FUNC(sub_82CC60E8);
PPC_FUNC_IMPL(__imp__sub_82CC60E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82CC60F0;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// bne cr6,0x82cc6134
	if (!ctx.cr6.eq) goto loc_82CC6134;
	// bl 0x82cb8f90
	ctx.lr = 0x82CC6114;
	sub_82CB8F90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82cb8f58
	ctx.lr = 0x82CC6120;
	sub_82CB8F58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82cc6244
	goto loc_82CC6244;
loc_82CC6134:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82cc614c
	if (ctx.cr6.lt) goto loc_82CC614C;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// lwz r11,6244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6244);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82cc6184
	if (ctx.cr6.lt) goto loc_82CC6184;
loc_82CC614C:
	// bl 0x82cb8f90
	ctx.lr = 0x82CC6150;
	sub_82CB8F90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82cb8f58
	ctx.lr = 0x82CC615C;
	sub_82CB8F58(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
loc_82CC6160:
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CC617C;
	sub_82CB8DA0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82cc6244
	goto loc_82CC6244;
loc_82CC6184:
	// srawi r11,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,6272
	ctx.r28.s64 = ctx.r10.s64 + 6272;
	// rlwinm r29,r30,6,21,25
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0x7C0;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc614c
	if (ctx.cr0.eq) goto loc_82CC614C;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// subfc r11,r26,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r26.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cc61dc
	if (!ctx.cr0.eq) goto loc_82CC61DC;
	// bl 0x82cb8f90
	ctx.lr = 0x82CC61C8;
	sub_82CB8F90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82cb8f58
	ctx.lr = 0x82CC61D4;
	sub_82CB8F58(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// b 0x82cc6160
	goto loc_82CC6160;
loc_82CC61DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ccad28
	ctx.lr = 0x82CC61E4;
	sub_82CCAD28(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc6214
	if (ctx.cr0.eq) goto loc_82CC6214;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cc5aa8
	ctx.lr = 0x82CC620C;
	sub_82CC5AA8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// b 0x82cc6234
	goto loc_82CC6234;
loc_82CC6214:
	// bl 0x82cb8f58
	ctx.lr = 0x82CC6218;
	sub_82CB8F58(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82cb8f90
	ctx.lr = 0x82CC6224;
	sub_82CB8F90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_82CC6234:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x82cc626c
	ctx.lr = 0x82CC6240;
	sub_82CC626C(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82CC6244:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC624C"))) PPC_WEAK_FUNC(sub_82CC624C);
PPC_FUNC_IMPL(__imp__sub_82CC624C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,180(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// b 0x82cc6284
	goto loc_82CC6284;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CC6284:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ccae20
	ctx.lr = 0x82CC628C;
	sub_82CCAE20(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC626C"))) PPC_WEAK_FUNC(sub_82CC626C);
PPC_FUNC_IMPL(__imp__sub_82CC626C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ccae20
	ctx.lr = 0x82CC628C;
	sub_82CCAE20(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC62A4"))) PPC_WEAK_FUNC(sub_82CC62A4);
PPC_FUNC_IMPL(__imp__sub_82CC62A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC62A8"))) PPC_WEAK_FUNC(sub_82CC62A8);
PPC_FUNC_IMPL(__imp__sub_82CC62A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82CC62B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82cc62d0
	if (!ctx.cr6.eq) goto loc_82CC62D0;
loc_82CC62C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cc6300
	goto loc_82CC6300;
loc_82CC62D0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cc6308
	if (!ctx.cr6.eq) goto loc_82CC6308;
	// bl 0x82cb8f58
	ctx.lr = 0x82CC62DC;
	sub_82CB8F58(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CC62FC;
	sub_82CB8DA0(ctx, base);
loc_82CC62FC:
	// li r3,22
	ctx.r3.s64 = 22;
loc_82CC6300:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82CC6308:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82cc6328
	if (ctx.cr6.eq) goto loc_82CC6328;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82cc6328
	if (ctx.cr6.lt) goto loc_82CC6328;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82CC6324;
	sub_82CB1160(ctx, base);
	// b 0x82cc62c8
	goto loc_82CC62C8;
loc_82CC6328:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cb16f0
	ctx.lr = 0x82CC6334;
	sub_82CB16F0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82cc6368
	if (!ctx.cr6.eq) goto loc_82CC6368;
	// bl 0x82cb8f58
	ctx.lr = 0x82CC6340;
	sub_82CB8F58(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_82CC6344:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CC6360;
	sub_82CB8DA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82cc6300
	goto loc_82CC6300;
loc_82CC6368:
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82cc62fc
	if (!ctx.cr6.lt) goto loc_82CC62FC;
	// bl 0x82cb8f58
	ctx.lr = 0x82CC6374;
	sub_82CB8F58(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x82cc6344
	goto loc_82CC6344;
}

__attribute__((alias("__imp__sub_82CC637C"))) PPC_WEAK_FUNC(sub_82CC637C);
PPC_FUNC_IMPL(__imp__sub_82CC637C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC6380"))) PPC_WEAK_FUNC(sub_82CC6380);
PPC_FUNC_IMPL(__imp__sub_82CC6380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82CC6388;
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
	// bl 0x82ccac58
	ctx.lr = 0x82CC639C;
	sub_82CCAC58(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82cc63bc
	if (!ctx.cr6.eq) goto loc_82CC63BC;
	// bl 0x82cb8f58
	ctx.lr = 0x82CC63A8;
	sub_82CB8F58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82cc642c
	goto loc_82CC642C;
loc_82CC63BC:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e651a8
	ctx.lr = 0x82CC63CC;
	sub_82E651A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x82cc63e0
	if (!ctx.cr6.eq) goto loc_82CC63E0;
	// bl 0x82bf2188
	ctx.lr = 0x82CC63DC;
	sub_82BF2188(ctx, base);
	// b 0x82cc63e4
	goto loc_82CC63E4;
loc_82CC63E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CC63E4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cc63f8
	if (ctx.cr6.eq) goto loc_82CC63F8;
	// bl 0x82cb8fc8
	ctx.lr = 0x82CC63F0;
	sub_82CB8FC8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82cc642c
	goto loc_82CC642C;
loc_82CC63F8:
	// srawi r11,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 5;
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,6272
	ctx.r10.s64 = ctx.r10.s64 + 6272;
	// rlwinm r11,r31,6,21,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0x7C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_82CC642C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC6434"))) PPC_WEAK_FUNC(sub_82CC6434);
PPC_FUNC_IMPL(__imp__sub_82CC6434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC6440"))) PPC_WEAK_FUNC(sub_82CC6440);
PPC_FUNC_IMPL(__imp__sub_82CC6440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82CC6448;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// bne cr6,0x82cc648c
	if (!ctx.cr6.eq) goto loc_82CC648C;
	// bl 0x82cb8f90
	ctx.lr = 0x82CC646C;
	sub_82CB8F90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82cb8f58
	ctx.lr = 0x82CC6478;
	sub_82CB8F58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82cc656c
	goto loc_82CC656C;
loc_82CC648C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82cc64a4
	if (ctx.cr6.lt) goto loc_82CC64A4;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// lwz r11,6244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6244);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82cc64dc
	if (ctx.cr6.lt) goto loc_82CC64DC;
loc_82CC64A4:
	// bl 0x82cb8f90
	ctx.lr = 0x82CC64A8;
	sub_82CB8F90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82cb8f58
	ctx.lr = 0x82CC64B4;
	sub_82CB8F58(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CC64D4;
	sub_82CB8DA0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82cc656c
	goto loc_82CC656C;
loc_82CC64DC:
	// srawi r11,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,6272
	ctx.r28.s64 = ctx.r10.s64 + 6272;
	// rlwinm r29,r30,6,21,25
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0x7C0;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc64a4
	if (ctx.cr0.eq) goto loc_82CC64A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ccad28
	ctx.lr = 0x82CC650C;
	sub_82CCAD28(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc653c
	if (ctx.cr0.eq) goto loc_82CC653C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cc6380
	ctx.lr = 0x82CC6534;
	sub_82CC6380(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// b 0x82cc655c
	goto loc_82CC655C;
loc_82CC653C:
	// bl 0x82cb8f58
	ctx.lr = 0x82CC6540;
	sub_82CB8F58(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82cb8f90
	ctx.lr = 0x82CC654C;
	sub_82CB8F90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_82CC655C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x82cc6594
	ctx.lr = 0x82CC6568;
	sub_82CC6594(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82CC656C:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC6574"))) PPC_WEAK_FUNC(sub_82CC6574);
PPC_FUNC_IMPL(__imp__sub_82CC6574) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,180(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// b 0x82cc65ac
	goto loc_82CC65AC;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CC65AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ccae20
	ctx.lr = 0x82CC65B4;
	sub_82CCAE20(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC6594"))) PPC_WEAK_FUNC(sub_82CC6594);
PPC_FUNC_IMPL(__imp__sub_82CC6594) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ccae20
	ctx.lr = 0x82CC65B4;
	sub_82CCAE20(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC65CC"))) PPC_WEAK_FUNC(sub_82CC65CC);
PPC_FUNC_IMPL(__imp__sub_82CC65CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC65D0"))) PPC_WEAK_FUNC(sub_82CC65D0);
PPC_FUNC_IMPL(__imp__sub_82CC65D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82CC65D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82cc6664
	if (!ctx.cr6.eq) goto loc_82CC6664;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82cc6640
	if (!ctx.cr6.eq) goto loc_82CC6640;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82cb92c0
	ctx.lr = 0x82CC6610;
	sub_82CB92C0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82cc6624
	if (!ctx.cr0.eq) goto loc_82CC6624;
loc_82CC661C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cc6668
	goto loc_82CC6668;
loc_82CC6624:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82cb1160
	ctx.lr = 0x82CC663C;
	sub_82CB1160(ctx, base);
	// b 0x82cc6658
	goto loc_82CC6658;
loc_82CC6640:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82cb4b10
	ctx.lr = 0x82CC664C;
	sub_82CB4B10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82cc661c
	if (ctx.cr0.eq) goto loc_82CC661C;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_82CC6658:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82CC6664:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CC6668:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC6670"))) PPC_WEAK_FUNC(sub_82CC6670);
PPC_FUNC_IMPL(__imp__sub_82CC6670) {
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
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x82cbdd38
	ctx.lr = 0x82CC668C;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc669c
	if (ctx.cr0.eq) goto loc_82CC669C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82cc66a4
	goto loc_82CC66A4;
loc_82CC669C:
	// rlwinm r11,r31,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r3,r11,-7
	ctx.r3.s64 = ctx.r11.s64 + -7;
loc_82CC66A4:
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

__attribute__((alias("__imp__sub_82CC66B8"))) PPC_WEAK_FUNC(sub_82CC66B8);
PPC_FUNC_IMPL(__imp__sub_82CC66B8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blt 0x82cc66e0
	if (ctx.cr0.lt) goto loc_82CC66E0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82CC66E0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82cb8a50
	sub_82CB8A50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC66E8"))) PPC_WEAK_FUNC(sub_82CC66E8);
PPC_FUNC_IMPL(__imp__sub_82CC66E8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82cd2ad8
	sub_82CD2AD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC66F4"))) PPC_WEAK_FUNC(sub_82CC66F4);
PPC_FUNC_IMPL(__imp__sub_82CC66F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC66F8"))) PPC_WEAK_FUNC(sub_82CC66F8);
PPC_FUNC_IMPL(__imp__sub_82CC66F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82CC6700;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_82CC670C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// blt 0x82cc673c
	if (ctx.cr0.lt) goto loc_82CC673C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x82cc6748
	goto loc_82CC6748;
loc_82CC673C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC6744;
	sub_82CB8A50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82CC6748:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82cc6760
	if (ctx.cr6.eq) goto loc_82CC6760;
	// clrlwi r3,r30,24
	ctx.r3.u64 = ctx.r30.u32 & 0xFF;
	// bl 0x82cbdde8
	ctx.lr = 0x82CC6758;
	sub_82CBDDE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82cc670c
	if (!ctx.cr0.eq) goto loc_82CC670C;
loc_82CC6760:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC676C"))) PPC_WEAK_FUNC(sub_82CC676C);
PPC_FUNC_IMPL(__imp__sub_82CC676C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC6770"))) PPC_WEAK_FUNC(sub_82CC6770);
PPC_FUNC_IMPL(__imp__sub_82CC6770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82CC6778;
	__savegprlr_14(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r6,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r6.u32);
	// li r23,0
	ctx.r23.s64 = 0;
	// li r11,350
	ctx.r11.s64 = 350;
	// stw r28,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r28.u32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// sth r23,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r23.u16);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bne cr6,0x82cc67dc
	if (!ctx.cr6.eq) goto loc_82CC67DC;
loc_82CC67B0:
	// bl 0x82cb8f58
	ctx.lr = 0x82CC67B4;
	sub_82CB8F58(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CC67D4;
	sub_82CB8DA0(ctx, base);
loc_82CC67D4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82cc7990
	goto loc_82CC7990;
loc_82CC67DC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82cc67b0
	if (ctx.cr6.eq) goto loc_82CC67B0;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cc68b0
	if (!ctx.cr0.eq) goto loc_82CC68B0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8d38
	ctx.lr = 0x82CC67F8;
	sub_82CB8D38(ctx, base);
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// addi r30,r11,6272
	ctx.r30.s64 = ctx.r11.s64 + 6272;
	// addi r29,r10,12760
	ctx.r29.s64 = ctx.r10.s64 + 12760;
	// beq cr6,0x82cc6848
	if (ctx.cr6.eq) goto loc_82CC6848;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8d38
	ctx.lr = 0x82CC6818;
	sub_82CB8D38(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82cc6848
	if (ctx.cr6.eq) goto loc_82CC6848;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8d38
	ctx.lr = 0x82CC6828;
	sub_82CB8D38(ctx, base);
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb8d38
	ctx.lr = 0x82CC6838;
	sub_82CB8D38(ctx, base);
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r10,r3,6,21,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82cc684c
	goto loc_82CC684C;
loc_82CC6848:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82CC684C:
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// rlwinm. r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cc67b0
	if (!ctx.cr0.eq) goto loc_82CC67B0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8d38
	ctx.lr = 0x82CC6860;
	sub_82CB8D38(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82cc68a0
	if (ctx.cr6.eq) goto loc_82CC68A0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8d38
	ctx.lr = 0x82CC6870;
	sub_82CB8D38(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82cc68a0
	if (ctx.cr6.eq) goto loc_82CC68A0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8d38
	ctx.lr = 0x82CC6880;
	sub_82CB8D38(ctx, base);
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb8d38
	ctx.lr = 0x82CC6890;
	sub_82CB8D38(ctx, base);
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r10,r3,6,21,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82cc68a4
	goto loc_82CC68A4;
loc_82CC68A0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82CC68A4:
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cc67b0
	if (!ctx.cr0.eq) goto loc_82CC67B0;
loc_82CC68B0:
	// lbz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// mr r14,r23
	ctx.r14.u64 = ctx.r23.u64;
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82cc798c
	if (ctx.cr0.eq) goto loc_82CC798C;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r19,716(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// addi r11,r11,13712
	ctx.r11.s64 = ctx.r11.s64 + 13712;
	// addi r10,r10,14320
	ctx.r10.s64 = ctx.r10.s64 + 14320;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_82CC68E4:
	// bl 0x82cbdde8
	ctx.lr = 0x82CC68E8;
	sub_82CBDDE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc6964
	if (ctx.cr0.eq) goto loc_82CC6964;
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
loc_82CC68F4:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc691c
	if (ctx.cr0.lt) goto loc_82CC691C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc6928
	goto loc_82CC6928;
loc_82CC691C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC6924;
	sub_82CB8A50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82CC6928:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x82cc694c
	if (ctx.cr6.eq) goto loc_82CC694C;
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x82cbdde8
	ctx.lr = 0x82CC6938;
	sub_82CBDDE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82cc68f4
	if (!ctx.cr0.eq) goto loc_82CC68F4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd2ad8
	ctx.lr = 0x82CC694C;
	sub_82CD2AD8(ctx, base);
loc_82CC694C:
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// lbz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// bl 0x82cbdde8
	ctx.lr = 0x82CC6958;
	sub_82CBDDE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82cc694c
	if (!ctx.cr0.eq) goto loc_82CC694C;
	// b 0x82cc7920
	goto loc_82CC7920;
loc_82CC6964:
	// lbz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bne cr6,0x82cc7858
	if (!ctx.cr6.eq) goto loc_82CC7858;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r15,1
	ctx.r15.s64 = 1;
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// mr r18,r27
	ctx.r18.u64 = ctx.r27.u64;
	// mr r17,r27
	ctx.r17.u64 = ctx.r27.u64;
	// mr r16,r27
	ctx.r16.u64 = ctx.r27.u64;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// mr r20,r27
	ctx.r20.u64 = ctx.r27.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
loc_82CC69A4:
	// addi r11,r19,1
	ctx.r11.s64 = ctx.r19.s64 + 1;
	// stw r11,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r11.u32);
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbdd38
	ctx.lr = 0x82CC69B8;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc69d4
	if (ctx.cr0.eq) goto loc_82CC69D4;
	// mulli r11,r16,10
	ctx.r11.s64 = ctx.r16.s64 * 10;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r16,r11,-48
	ctx.r16.s64 = ctx.r11.s64 + -48;
	// b 0x82cc6af4
	goto loc_82CC6AF4;
loc_82CC69D4:
	// cmpwi cr6,r31,78
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 78, ctx.xer);
	// bgt cr6,0x82cc6a8c
	if (ctx.cr6.gt) goto loc_82CC6A8C;
	// beq cr6,0x82cc6af4
	if (ctx.cr6.eq) goto loc_82CC6AF4;
	// cmpwi cr6,r31,42
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 42, ctx.xer);
	// beq cr6,0x82cc6a80
	if (ctx.cr6.eq) goto loc_82CC6A80;
	// cmpwi cr6,r31,70
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 70, ctx.xer);
	// beq cr6,0x82cc6af4
	if (ctx.cr6.eq) goto loc_82CC6AF4;
	// cmpwi cr6,r31,73
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 73, ctx.xer);
	// beq cr6,0x82cc6a08
	if (ctx.cr6.eq) goto loc_82CC6A08;
	// cmpwi cr6,r31,76
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 76, ctx.xer);
	// bne cr6,0x82cc6aa4
	if (!ctx.cr6.eq) goto loc_82CC6AA4;
	// addi r11,r15,1
	ctx.r11.s64 = ctx.r15.s64 + 1;
	// b 0x82cc6af0
	goto loc_82CC6AF0;
loc_82CC6A08:
	// lwz r19,716(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// lbz r10,1(r19)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r19.u32 + 1);
	// cmplwi cr6,r10,54
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 54, ctx.xer);
	// bne cr6,0x82cc6a3c
	if (!ctx.cr6.eq) goto loc_82CC6A3C;
	// lbz r9,2(r19)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r19.u32 + 2);
	// addi r11,r19,2
	ctx.r11.s64 = ctx.r19.s64 + 2;
	// cmplwi cr6,r9,52
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 52, ctx.xer);
	// bne cr6,0x82cc6a3c
	if (!ctx.cr6.eq) goto loc_82CC6A3C;
loc_82CC6A28:
	// std r27,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r27.u64);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
loc_82CC6A30:
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// stw r19,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r19.u32);
	// b 0x82cc6af8
	goto loc_82CC6AF8;
loc_82CC6A3C:
	// cmplwi cr6,r10,51
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 51, ctx.xer);
	// bne cr6,0x82cc6a54
	if (!ctx.cr6.eq) goto loc_82CC6A54;
	// lbz r9,2(r19)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r19.u32 + 2);
	// addi r11,r19,2
	ctx.r11.s64 = ctx.r19.s64 + 2;
	// cmplwi cr6,r9,50
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 50, ctx.xer);
	// beq cr6,0x82cc6a30
	if (ctx.cr6.eq) goto loc_82CC6A30;
loc_82CC6A54:
	// cmplwi cr6,r10,100
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 100, ctx.xer);
	// beq cr6,0x82cc6af8
	if (ctx.cr6.eq) goto loc_82CC6AF8;
	// cmplwi cr6,r10,105
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 105, ctx.xer);
	// beq cr6,0x82cc6af8
	if (ctx.cr6.eq) goto loc_82CC6AF8;
	// cmplwi cr6,r10,111
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 111, ctx.xer);
	// beq cr6,0x82cc6af8
	if (ctx.cr6.eq) goto loc_82CC6AF8;
	// cmplwi cr6,r10,120
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 120, ctx.xer);
	// beq cr6,0x82cc6af8
	if (ctx.cr6.eq) goto loc_82CC6AF8;
	// cmplwi cr6,r10,88
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 88, ctx.xer);
	// bne cr6,0x82cc6aa8
	if (!ctx.cr6.eq) goto loc_82CC6AA8;
	// b 0x82cc6af8
	goto loc_82CC6AF8;
loc_82CC6A80:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
	// b 0x82cc6af4
	goto loc_82CC6AF4;
loc_82CC6A8C:
	// cmpwi cr6,r31,104
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 104, ctx.xer);
	// beq cr6,0x82cc6ae4
	if (ctx.cr6.eq) goto loc_82CC6AE4;
	// cmpwi cr6,r31,108
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 108, ctx.xer);
	// beq cr6,0x82cc6ab4
	if (ctx.cr6.eq) goto loc_82CC6AB4;
	// cmpwi cr6,r31,119
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 119, ctx.xer);
	// beq cr6,0x82cc6ad4
	if (ctx.cr6.eq) goto loc_82CC6AD4;
loc_82CC6AA4:
	// lwz r19,716(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
loc_82CC6AA8:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	// b 0x82cc6af8
	goto loc_82CC6AF8;
loc_82CC6AB4:
	// lwz r19,716(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// addi r11,r19,1
	ctx.r11.s64 = ctx.r19.s64 + 1;
	// lbz r10,1(r19)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r19.u32 + 1);
	// cmplwi cr6,r10,108
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 108, ctx.xer);
	// beq cr6,0x82cc6a28
	if (ctx.cr6.eq) goto loc_82CC6A28;
	// addi r11,r15,1
	ctx.r11.s64 = ctx.r15.s64 + 1;
	// extsb r15,r11
	ctx.r15.s64 = ctx.r11.s8;
	// b 0x82cc6ad8
	goto loc_82CC6AD8;
loc_82CC6AD4:
	// lwz r19,716(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
loc_82CC6AD8:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// extsb r28,r11
	ctx.r28.s64 = ctx.r11.s8;
	// b 0x82cc6af8
	goto loc_82CC6AF8;
loc_82CC6AE4:
	// addi r10,r28,-1
	ctx.r10.s64 = ctx.r28.s64 + -1;
	// addi r11,r15,-1
	ctx.r11.s64 = ctx.r15.s64 + -1;
	// extsb r28,r10
	ctx.r28.s64 = ctx.r10.s8;
loc_82CC6AF0:
	// extsb r15,r11
	ctx.r15.s64 = ctx.r11.s8;
loc_82CC6AF4:
	// lwz r19,716(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
loc_82CC6AF8:
	// extsb. r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc69a4
	if (ctx.cr0.eq) goto loc_82CC69A4;
	// extsb. r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bne 0x82cc6b30
	if (!ctx.cr0.eq) goto loc_82CC6B30;
	// lwz r11,732(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 732);
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// rlwinm r11,r10,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r11.u32);
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x82cc6b34
	goto loc_82CC6B34;
loc_82CC6B30:
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
loc_82CC6B34:
	// extsb. r11,r28
	ctx.r11.s64 = ctx.r28.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// bne 0x82cc6b5c
	if (!ctx.cr0.eq) goto loc_82CC6B5C;
	// lbz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// cmplwi cr6,r11,83
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 83, ctx.xer);
	// beq cr6,0x82cc6b58
	if (ctx.cr6.eq) goto loc_82CC6B58;
	// cmplwi cr6,r11,67
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 67, ctx.xer);
	// li r28,-1
	ctx.r28.s64 = -1;
	// bne cr6,0x82cc6b5c
	if (!ctx.cr6.eq) goto loc_82CC6B5C;
loc_82CC6B58:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82CC6B5C:
	// lwz r10,716(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// ori r19,r11,32
	ctx.r19.u64 = ctx.r11.u64 | 32;
	// cmpwi cr6,r19,110
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 110, ctx.xer);
	// beq cr6,0x82cc6c14
	if (ctx.cr6.eq) goto loc_82CC6C14;
	// cmpwi cr6,r19,99
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 99, ctx.xer);
	// beq cr6,0x82cc6bd4
	if (ctx.cr6.eq) goto loc_82CC6BD4;
	// cmpwi cr6,r19,123
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 123, ctx.xer);
	// beq cr6,0x82cc6bd4
	if (ctx.cr6.eq) goto loc_82CC6BD4;
loc_82CC6B80:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc6ba8
	if (ctx.cr0.lt) goto loc_82CC6BA8;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc6bb4
	goto loc_82CC6BB4;
loc_82CC6BA8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC6BB0;
	sub_82CB8A50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82CC6BB4:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x82cc6bcc
	if (ctx.cr6.eq) goto loc_82CC6BCC;
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x82cbdde8
	ctx.lr = 0x82CC6BC4;
	sub_82CBDDE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82cc6b80
	if (!ctx.cr0.eq) goto loc_82CC6B80;
loc_82CC6BCC:
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// b 0x82cc6c08
	goto loc_82CC6C08;
loc_82CC6BD4:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc6bfc
	if (ctx.cr0.lt) goto loc_82CC6BFC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc6c08
	goto loc_82CC6C08;
loc_82CC6BFC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC6C04;
	sub_82CB8A50(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_82CC6C08:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// beq cr6,0x82cc7954
	if (ctx.cr6.eq) goto loc_82CC7954;
	// lwz r10,716(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
loc_82CC6C14:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x82cc6c24
	if (ctx.cr6.eq) goto loc_82CC6C24;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x82cc7940
	if (ctx.cr6.eq) goto loc_82CC7940;
loc_82CC6C24:
	// addi r11,r19,-99
	ctx.r11.s64 = ctx.r19.s64 + -99;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82cc780c
	if (ctx.cr6.gt) goto loc_82CC780C;
	// lis r12,-32256
	ctx.r12.s64 = -2113929216;
	// addi r12,r12,24760
	ctx.r12.s64 = ctx.r12.s64 + 24760;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32052
	ctx.r12.s64 = -2100559872;
	// addi r12,r12,27736
	ctx.r12.s64 = ctx.r12.s64 + 27736;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82CC6C58;
	case 1:
		goto loc_82CC70F8;
	case 2:
		goto loc_82CC7434;
	case 3:
		goto loc_82CC7434;
	case 4:
		goto loc_82CC7434;
	case 5:
		goto loc_82CC780C;
	case 6:
		goto loc_82CC6F98;
	case 7:
		goto loc_82CC780C;
	case 8:
		goto loc_82CC780C;
	case 9:
		goto loc_82CC780C;
	case 10:
		goto loc_82CC780C;
	case 11:
		goto loc_82CC73E4;
	case 12:
		goto loc_82CC70F8;
	case 13:
		goto loc_82CC70F4;
	case 14:
		goto loc_82CC780C;
	case 15:
		goto loc_82CC780C;
	case 16:
		goto loc_82CC6C68;
	case 17:
		goto loc_82CC780C;
	case 18:
		goto loc_82CC70F8;
	case 19:
		goto loc_82CC780C;
	case 20:
		goto loc_82CC780C;
	case 21:
		goto loc_82CC6F9C;
	case 22:
		goto loc_82CC780C;
	case 23:
		goto loc_82CC780C;
	case 24:
		goto loc_82CC6C78;
	default:
		__builtin_unreachable();
	}
loc_82CC6C58:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x82cc6c68
	if (!ctx.cr6.eq) goto loc_82CC6C68;
	// li r17,1
	ctx.r17.s64 = 1;
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
loc_82CC6C68:
	// extsb. r11,r28
	ctx.r11.s64 = ctx.r28.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82cc6dbc
	if (!ctx.cr0.gt) goto loc_82CC6DBC;
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x82cc6dbc
	goto loc_82CC6DBC;
loc_82CC6C78:
	// extsb. r11,r28
	ctx.r11.s64 = ctx.r28.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82cc6c84
	if (!ctx.cr0.gt) goto loc_82CC6C84;
	// li r24,1
	ctx.r24.s64 = 1;
loc_82CC6C84:
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r7.u32);
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// bne cr6,0x82cc6ca0
	if (!ctx.cr6.eq) goto loc_82CC6CA0;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// li r25,-1
	ctx.r25.s64 = -1;
loc_82CC6CA0:
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r19,123
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 123, ctx.xer);
	// std r6,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// std r6,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r6.u64);
	// std r6,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r6.u64);
	// bne cr6,0x82cc6cdc
	if (!ctx.cr6.eq) goto loc_82CC6CDC;
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// bne cr6,0x82cc6cdc
	if (!ctx.cr6.eq) goto loc_82CC6CDC;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r27,93
	ctx.r27.s64 = 93;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stb r11,155(r1)
	PPC_STORE_U8(ctx.r1.u32 + 155, ctx.r11.u8);
loc_82CC6CDC:
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// beq cr6,0x82cc6da4
	if (ctx.cr6.eq) goto loc_82CC6DA4;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82CC6CEC:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r9,45
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 45, ctx.xer);
	// bne cr6,0x82cc6d78
	if (!ctx.cr6.eq) goto loc_82CC6D78;
	// clrlwi. r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82cc6d78
	if (ctx.cr0.eq) goto loc_82CC6D78;
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// beq cr6,0x82cc6d78
	if (ctx.cr6.eq) goto loc_82CC6D78;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82cc6d2c
	if (!ctx.cr6.lt) goto loc_82CC6D2C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82cc6d34
	goto loc_82CC6D34;
loc_82CC6D2C:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82CC6D34:
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82cc6d70
	if (ctx.cr6.gt) goto loc_82CC6D70;
loc_82CC6D44:
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// clrlwi r4,r11,29
	ctx.r4.u64 = ctx.r11.u32 & 0x7;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r4,r5,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r4.u8 & 0x3F));
	// lbzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// or r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 | ctx.r3.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// stbx r4,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r4.u8);
	// ble cr6,0x82cc6d44
	if (!ctx.cr6.gt) goto loc_82CC6D44;
loc_82CC6D70:
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// b 0x82cc6d98
	goto loc_82CC6D98;
loc_82CC6D78:
	// rlwinm r10,r9,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// slw r9,r5,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r9.u8 & 0x3F));
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
loc_82CC6D98:
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// bne cr6,0x82cc6cec
	if (!ctx.cr6.eq) goto loc_82CC6CEC;
loc_82CC6DA4:
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82cc7954
	if (ctx.cr0.eq) goto loc_82CC7954;
	// cmpwi cr6,r19,123
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 123, ctx.xer);
	// bne cr6,0x82cc6dbc
	if (!ctx.cr6.eq) goto loc_82CC6DBC;
	// stw r7,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r7.u32);
loc_82CC6DBC:
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// beq cr6,0x82cc6ddc
	if (ctx.cr6.eq) goto loc_82CC6DDC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82cd2ad8
	ctx.lr = 0x82CC6DDC;
	sub_82CD2AD8(ctx, base);
loc_82CC6DDC:
	// lwz r29,124(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_82CC6DE0:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x82cc6df4
	if (ctx.cr6.eq) goto loc_82CC6DF4;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// addi r16,r16,-1
	ctx.r16.s64 = ctx.r16.s64 + -1;
	// beq cr6,0x82cc6f4c
	if (ctx.cr6.eq) goto loc_82CC6F4C;
loc_82CC6DF4:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc6e1c
	if (ctx.cr0.lt) goto loc_82CC6E1C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc6e28
	goto loc_82CC6E28;
loc_82CC6E1C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC6E24;
	sub_82CB8A50(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_82CC6E28:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// beq cr6,0x82cc6f34
	if (ctx.cr6.eq) goto loc_82CC6F34;
	// cmpwi cr6,r19,99
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 99, ctx.xer);
	// beq cr6,0x82cc6e8c
	if (ctx.cr6.eq) goto loc_82CC6E8C;
	// cmpwi cr6,r19,115
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 115, ctx.xer);
	// bne cr6,0x82cc6e58
	if (!ctx.cr6.eq) goto loc_82CC6E58;
	// cmpwi cr6,r23,9
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 9, ctx.xer);
	// blt cr6,0x82cc6e50
	if (ctx.cr6.lt) goto loc_82CC6E50;
	// cmpwi cr6,r23,13
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 13, ctx.xer);
	// ble cr6,0x82cc6f34
	if (!ctx.cr6.gt) goto loc_82CC6F34;
loc_82CC6E50:
	// cmpwi cr6,r23,32
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 32, ctx.xer);
	// bne cr6,0x82cc6e8c
	if (!ctx.cr6.eq) goto loc_82CC6E8C;
loc_82CC6E58:
	// cmpwi cr6,r19,123
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 123, ctx.xer);
	// bne cr6,0x82cc6f34
	if (!ctx.cr6.eq) goto loc_82CC6F34;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// srawi r11,r23,3
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r23.s32 >> 3;
	// clrlwi r9,r23,29
	ctx.r9.u64 = ctx.r23.u32 & 0x7;
	// extsb r8,r25
	ctx.r8.s64 = ctx.r25.s8;
	// li r7,1
	ctx.r7.s64 = 1;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// slw r10,r7,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc6f34
	if (ctx.cr0.eq) goto loc_82CC6F34;
loc_82CC6E8C:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82cc6f2c
	if (!ctx.cr6.eq) goto loc_82CC6F2C;
	// extsb. r11,r24
	ctx.r11.s64 = ctx.r24.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc6f18
	if (ctx.cr0.eq) goto loc_82CC6F18;
	// stb r23,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r23.u8);
	// clrlwi r3,r23,24
	ctx.r3.u64 = ctx.r23.u32 & 0xFF;
	// bl 0x82cb5520
	ctx.lr = 0x82CC6EAC;
	sub_82CB5520(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc6ee8
	if (ctx.cr0.eq) goto loc_82CC6EE8;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc6edc
	if (ctx.cr0.lt) goto loc_82CC6EDC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc6ee4
	goto loc_82CC6EE4;
loc_82CC6EDC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC6EE4;
	sub_82CB8A50(ctx, base);
loc_82CC6EE4:
	// stb r3,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r3.u8);
loc_82CC6EE8:
	// li r10,63
	ctx.r10.s64 = 63;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// sth r10,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,172(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// bl 0x82ccb948
	ctx.lr = 0x82CC6F08;
	sub_82CCB948(ctx, base);
	// lhz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// b 0x82cc6f24
	goto loc_82CC6F24;
loc_82CC6F18:
	// extsb r11,r23
	ctx.r11.s64 = ctx.r23.s8;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82CC6F24:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// b 0x82cc6de0
	goto loc_82CC6DE0;
loc_82CC6F2C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82cc6de0
	goto loc_82CC6DE0;
loc_82CC6F34:
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// beq cr6,0x82cc6f4c
	if (ctx.cr6.eq) goto loc_82CC6F4C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82cd2ad8
	ctx.lr = 0x82CC6F4C;
	sub_82CD2AD8(ctx, base);
loc_82CC6F4C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82cc7954
	if (ctx.cr6.eq) goto loc_82CC7954;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82cc7838
	if (!ctx.cr6.eq) goto loc_82CC7838;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r19,99
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 99, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x82cc7838
	if (ctx.cr6.eq) goto loc_82CC7838;
	// extsb. r11,r24
	ctx.r11.s64 = ctx.r24.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// beq 0x82cc6f8c
	if (ctx.cr0.eq) goto loc_82CC6F8C;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// b 0x82cc7838
	goto loc_82CC7838;
loc_82CC6F8C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x82cc7838
	goto loc_82CC7838;
loc_82CC6F98:
	// li r19,100
	ctx.r19.s64 = 100;
loc_82CC6F9C:
	// cmpwi cr6,r23,45
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 45, ctx.xer);
	// bne cr6,0x82cc6fac
	if (!ctx.cr6.eq) goto loc_82CC6FAC;
	// li r20,1
	ctx.r20.s64 = 1;
	// b 0x82cc6fb4
	goto loc_82CC6FB4;
loc_82CC6FAC:
	// cmpwi cr6,r23,43
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 43, ctx.xer);
	// bne cr6,0x82cc7000
	if (!ctx.cr6.eq) goto loc_82CC7000;
loc_82CC6FB4:
	// addic. r16,r16,-1
	ctx.xer.ca = ctx.r16.u32 > 0;
	ctx.r16.s64 = ctx.r16.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// bne 0x82cc6fcc
	if (!ctx.cr0.eq) goto loc_82CC6FCC;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x82cc6fcc
	if (ctx.cr6.eq) goto loc_82CC6FCC;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82cc7000
	goto loc_82CC7000;
loc_82CC6FCC:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc6ff4
	if (ctx.cr0.lt) goto loc_82CC6FF4;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc7000
	goto loc_82CC7000;
loc_82CC6FF4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC6FFC;
	sub_82CB8A50(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_82CC7000:
	// cmpwi cr6,r23,48
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 48, ctx.xer);
	// bne cr6,0x82cc715c
	if (!ctx.cr6.eq) goto loc_82CC715C;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc7030
	if (ctx.cr0.lt) goto loc_82CC7030;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc703c
	goto loc_82CC703C;
loc_82CC7030:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC7038;
	sub_82CB8A50(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_82CC703C:
	// extsb r11,r23
	ctx.r11.s64 = ctx.r23.s8;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x82cc709c
	if (ctx.cr6.eq) goto loc_82CC709C;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// beq cr6,0x82cc709c
	if (ctx.cr6.eq) goto loc_82CC709C;
	// li r18,1
	ctx.r18.s64 = 1;
	// cmpwi cr6,r19,120
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 120, ctx.xer);
	// beq cr6,0x82cc707c
	if (ctx.cr6.eq) goto loc_82CC707C;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x82cc7074
	if (ctx.cr6.eq) goto loc_82CC7074;
	// addic. r16,r16,-1
	ctx.xer.ca = ctx.r16.u32 > 0;
	ctx.r16.s64 = ctx.r16.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// bne 0x82cc7074
	if (!ctx.cr0.eq) goto loc_82CC7074;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
loc_82CC7074:
	// li r19,111
	ctx.r19.s64 = 111;
	// b 0x82cc715c
	goto loc_82CC715C;
loc_82CC707C:
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// beq cr6,0x82cc7094
	if (ctx.cr6.eq) goto loc_82CC7094;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82cd2ad8
	ctx.lr = 0x82CC7094;
	sub_82CD2AD8(ctx, base);
loc_82CC7094:
	// li r23,48
	ctx.r23.s64 = 48;
	// b 0x82cc715c
	goto loc_82CC715C;
loc_82CC709C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc70c4
	if (ctx.cr0.lt) goto loc_82CC70C4;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc70d0
	goto loc_82CC70D0;
loc_82CC70C4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC70CC;
	sub_82CB8A50(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_82CC70D0:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x82cc70ec
	if (ctx.cr6.eq) goto loc_82CC70EC;
	// addi r16,r16,-2
	ctx.r16.s64 = ctx.r16.s64 + -2;
	// cmpwi cr6,r16,1
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 1, ctx.xer);
	// bge cr6,0x82cc70ec
	if (!ctx.cr6.lt) goto loc_82CC70EC;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
loc_82CC70EC:
	// li r19,120
	ctx.r19.s64 = 120;
	// b 0x82cc715c
	goto loc_82CC715C;
loc_82CC70F4:
	// li r15,1
	ctx.r15.s64 = 1;
loc_82CC70F8:
	// cmpwi cr6,r23,45
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 45, ctx.xer);
	// bne cr6,0x82cc7108
	if (!ctx.cr6.eq) goto loc_82CC7108;
	// li r20,1
	ctx.r20.s64 = 1;
	// b 0x82cc7110
	goto loc_82CC7110;
loc_82CC7108:
	// cmpwi cr6,r23,43
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 43, ctx.xer);
	// bne cr6,0x82cc715c
	if (!ctx.cr6.eq) goto loc_82CC715C;
loc_82CC7110:
	// addic. r16,r16,-1
	ctx.xer.ca = ctx.r16.u32 > 0;
	ctx.r16.s64 = ctx.r16.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// bne 0x82cc7128
	if (!ctx.cr0.eq) goto loc_82CC7128;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x82cc7128
	if (ctx.cr6.eq) goto loc_82CC7128;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82cc715c
	goto loc_82CC715C;
loc_82CC7128:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc7150
	if (ctx.cr0.lt) goto loc_82CC7150;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc715c
	goto loc_82CC715C;
loc_82CC7150:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC7158;
	sub_82CB8A50(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_82CC715C:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// extsb. r31,r29
	ctx.r31.s64 = ctx.r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82cc72a4
	if (ctx.cr6.eq) goto loc_82CC72A4;
	// bne 0x82cc728c
	if (!ctx.cr0.eq) goto loc_82CC728C;
loc_82CC716C:
	// cmpwi cr6,r19,120
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 120, ctx.xer);
	// beq cr6,0x82cc71b8
	if (ctx.cr6.eq) goto loc_82CC71B8;
	// cmpwi cr6,r19,112
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 112, ctx.xer);
	// beq cr6,0x82cc71b8
	if (ctx.cr6.eq) goto loc_82CC71B8;
	// clrlwi r3,r23,24
	ctx.r3.u64 = ctx.r23.u32 & 0xFF;
	// bl 0x82cbdd38
	ctx.lr = 0x82CC7184;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc71f4
	if (ctx.cr0.eq) goto loc_82CC71F4;
	// cmpwi cr6,r19,111
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 111, ctx.xer);
	// bne cr6,0x82cc71ac
	if (!ctx.cr6.eq) goto loc_82CC71AC;
	// cmpwi cr6,r23,56
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 56, ctx.xer);
	// bge cr6,0x82cc71f4
	if (!ctx.cr6.lt) goto loc_82CC71F4;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// rldicr r11,r11,3,60
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 3) & 0xFFFFFFFFFFFFFFF8;
loc_82CC71A4:
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// b 0x82cc71fc
	goto loc_82CC71FC;
loc_82CC71AC:
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mulli r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 * 10;
	// b 0x82cc71a4
	goto loc_82CC71A4;
loc_82CC71B8:
	// clrlwi r30,r23,24
	ctx.r30.u64 = ctx.r23.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cbdd90
	ctx.lr = 0x82CC71C4;
	sub_82CBDD90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc71f4
	if (ctx.cr0.eq) goto loc_82CC71F4;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicr r11,r11,4,59
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// bl 0x82cbdd38
	ctx.lr = 0x82CC71E0;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82cc71fc
	if (!ctx.cr0.eq) goto loc_82CC71FC;
	// rlwinm r11,r23,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r23,r11,-7
	ctx.r23.s64 = ctx.r11.s64 + -7;
	// b 0x82cc71fc
	goto loc_82CC71FC;
loc_82CC71F4:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
loc_82CC71FC:
	// extsb. r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cc726c
	if (!ctx.cr0.eq) goto loc_82CC726C;
	// addi r11,r23,-48
	ctx.r11.s64 = ctx.r23.s64 + -48;
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// beq cr6,0x82cc7234
	if (ctx.cr6.eq) goto loc_82CC7234;
	// addic. r16,r16,-1
	ctx.xer.ca = ctx.r16.u32 > 0;
	ctx.r16.s64 = ctx.r16.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// bne 0x82cc7234
	if (!ctx.cr0.eq) goto loc_82CC7234;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82cc7284
	goto loc_82CC7284;
loc_82CC7234:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc725c
	if (ctx.cr0.lt) goto loc_82CC725C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc7284
	goto loc_82CC7284;
loc_82CC725C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC7264;
	sub_82CB8A50(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x82cc7284
	goto loc_82CC7284;
loc_82CC726C:
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// beq cr6,0x82cc7284
	if (ctx.cr6.eq) goto loc_82CC7284;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82cd2ad8
	ctx.lr = 0x82CC7284;
	sub_82CD2AD8(ctx, base);
loc_82CC7284:
	// extsb. r31,r29
	ctx.r31.s64 = ctx.r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82cc716c
	if (ctx.cr0.eq) goto loc_82CC716C;
loc_82CC728C:
	// extsb. r11,r20
	ctx.r11.s64 = ctx.r20.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc73b4
	if (ctx.cr0.eq) goto loc_82CC73B4;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// b 0x82cc73b4
	goto loc_82CC73B4;
loc_82CC72A4:
	// bne 0x82cc73a8
	if (!ctx.cr0.eq) goto loc_82CC73A8;
loc_82CC72A8:
	// cmpwi cr6,r19,120
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 120, ctx.xer);
	// beq cr6,0x82cc72e8
	if (ctx.cr6.eq) goto loc_82CC72E8;
	// cmpwi cr6,r19,112
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 112, ctx.xer);
	// beq cr6,0x82cc72e8
	if (ctx.cr6.eq) goto loc_82CC72E8;
	// clrlwi r3,r23,24
	ctx.r3.u64 = ctx.r23.u32 & 0xFF;
	// bl 0x82cbdd38
	ctx.lr = 0x82CC72C0;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc731c
	if (ctx.cr0.eq) goto loc_82CC731C;
	// cmpwi cr6,r19,111
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 111, ctx.xer);
	// bne cr6,0x82cc72e0
	if (!ctx.cr6.eq) goto loc_82CC72E0;
	// cmpwi cr6,r23,56
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 56, ctx.xer);
	// bge cr6,0x82cc731c
	if (!ctx.cr6.lt) goto loc_82CC731C;
	// rlwinm r22,r22,3,0,28
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x82cc7324
	goto loc_82CC7324;
loc_82CC72E0:
	// mulli r22,r22,10
	ctx.r22.s64 = ctx.r22.s64 * 10;
	// b 0x82cc7324
	goto loc_82CC7324;
loc_82CC72E8:
	// clrlwi r30,r23,24
	ctx.r30.u64 = ctx.r23.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cbdd90
	ctx.lr = 0x82CC72F4;
	sub_82CBDD90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc731c
	if (ctx.cr0.eq) goto loc_82CC731C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r22,r22,4,0,27
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82cbdd38
	ctx.lr = 0x82CC7308;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82cc7324
	if (!ctx.cr0.eq) goto loc_82CC7324;
	// rlwinm r11,r23,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r23,r11,-7
	ctx.r23.s64 = ctx.r11.s64 + -7;
	// b 0x82cc7324
	goto loc_82CC7324;
loc_82CC731C:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
loc_82CC7324:
	// extsb. r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cc7388
	if (!ctx.cr0.eq) goto loc_82CC7388;
	// add r11,r22,r23
	ctx.r11.u64 = ctx.r22.u64 + ctx.r23.u64;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r22,r11,-48
	ctx.r22.s64 = ctx.r11.s64 + -48;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x82cc7350
	if (ctx.cr6.eq) goto loc_82CC7350;
	// addic. r16,r16,-1
	ctx.xer.ca = ctx.r16.u32 > 0;
	ctx.r16.s64 = ctx.r16.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// bne 0x82cc7350
	if (!ctx.cr0.eq) goto loc_82CC7350;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82cc73a0
	goto loc_82CC73A0;
loc_82CC7350:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc7378
	if (ctx.cr0.lt) goto loc_82CC7378;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc73a0
	goto loc_82CC73A0;
loc_82CC7378:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC7380;
	sub_82CB8A50(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x82cc73a0
	goto loc_82CC73A0;
loc_82CC7388:
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// beq cr6,0x82cc73a0
	if (ctx.cr6.eq) goto loc_82CC73A0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82cd2ad8
	ctx.lr = 0x82CC73A0;
	sub_82CD2AD8(ctx, base);
loc_82CC73A0:
	// extsb. r31,r29
	ctx.r31.s64 = ctx.r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82cc72a8
	if (ctx.cr0.eq) goto loc_82CC72A8;
loc_82CC73A8:
	// extsb. r11,r20
	ctx.r11.s64 = ctx.r20.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc73b4
	if (ctx.cr0.eq) goto loc_82CC73B4;
	// neg r22,r22
	ctx.r22.s64 = -ctx.r22.s64;
loc_82CC73B4:
	// cmpwi cr6,r19,70
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 70, ctx.xer);
	// bne cr6,0x82cc73c0
	if (!ctx.cr6.eq) goto loc_82CC73C0;
	// li r18,0
	ctx.r18.s64 = 0;
loc_82CC73C0:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82cc7954
	if (ctx.cr6.eq) goto loc_82CC7954;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82cc7838
	if (!ctx.cr6.eq) goto loc_82CC7838;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// b 0x82cc7400
	goto loc_82CC7400;
loc_82CC73E4:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r22,r14
	ctx.r22.u64 = ctx.r14.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82cc7838
	if (!ctx.cr6.eq) goto loc_82CC7838;
	// bl 0x82ccb920
	ctx.lr = 0x82CC73F8;
	sub_82CCB920(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc7838
	if (ctx.cr0.eq) goto loc_82CC7838;
loc_82CC7400:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82cc7418
	if (ctx.cr6.eq) goto loc_82CC7418;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// b 0x82cc7838
	goto loc_82CC7838;
loc_82CC7418:
	// extsb. r11,r15
	ctx.r11.s64 = ctx.r15.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// beq 0x82cc742c
	if (ctx.cr0.eq) goto loc_82CC742C;
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// b 0x82cc7838
	goto loc_82CC7838;
loc_82CC742C:
	// sth r22,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r22.u16);
	// b 0x82cc7838
	goto loc_82CC7838;
loc_82CC7434:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r23,45
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 45, ctx.xer);
	// bne cr6,0x82cc7454
	if (!ctx.cr6.eq) goto loc_82CC7454;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,45
	ctx.r10.s64 = 45;
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x82cc745c
	goto loc_82CC745C;
loc_82CC7454:
	// cmpwi cr6,r23,43
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 43, ctx.xer);
	// bne cr6,0x82cc7494
	if (!ctx.cr6.eq) goto loc_82CC7494;
loc_82CC745C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r16,r16,-1
	ctx.r16.s64 = ctx.r16.s64 + -1;
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc7488
	if (ctx.cr0.lt) goto loc_82CC7488;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc7494
	goto loc_82CC7494;
loc_82CC7488:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC7490;
	sub_82CB8A50(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_82CC7494:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x82cc7514
	if (!ctx.cr6.eq) goto loc_82CC7514;
	// li r16,-1
	ctx.r16.s64 = -1;
	// b 0x82cc7514
	goto loc_82CC7514;
loc_82CC74A4:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// addi r16,r16,-1
	ctx.r16.s64 = ctx.r16.s64 + -1;
	// beq cr6,0x82cc7528
	if (ctx.cr6.eq) goto loc_82CC7528;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// stbx r31,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cc65d0
	ctx.lr = 0x82CC74D8;
	sub_82CC65D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc7954
	if (ctx.cr0.eq) goto loc_82CC7954;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc7508
	if (ctx.cr0.lt) goto loc_82CC7508;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc7514
	goto loc_82CC7514;
loc_82CC7508:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC7510;
	sub_82CB8A50(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_82CC7514:
	// clrlwi r31,r23,24
	ctx.r31.u64 = ctx.r23.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbdd38
	ctx.lr = 0x82CC7520;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82cc74a4
	if (!ctx.cr0.eq) goto loc_82CC74A4;
loc_82CC7528:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// extsb r10,r23
	ctx.r10.s64 = ctx.r23.s8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82cc7640
	if (!ctx.cr6.eq) goto loc_82CC7640;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// addi r16,r16,-1
	ctx.r16.s64 = ctx.r16.s64 + -1;
	// beq cr6,0x82cc7640
	if (ctx.cr6.eq) goto loc_82CC7640;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc7580
	if (ctx.cr0.lt) goto loc_82CC7580;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc758c
	goto loc_82CC758C;
loc_82CC7580:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC7588;
	sub_82CB8A50(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_82CC758C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stbx r31,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cc65d0
	ctx.lr = 0x82CC75B0;
	sub_82CC65D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc7954
	if (ctx.cr0.eq) goto loc_82CC7954;
	// b 0x82cc762c
	goto loc_82CC762C;
loc_82CC75BC:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// addi r16,r16,-1
	ctx.r16.s64 = ctx.r16.s64 + -1;
	// beq cr6,0x82cc7640
	if (ctx.cr6.eq) goto loc_82CC7640;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// stbx r31,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cc65d0
	ctx.lr = 0x82CC75F0;
	sub_82CC65D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc7954
	if (ctx.cr0.eq) goto loc_82CC7954;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc7620
	if (ctx.cr0.lt) goto loc_82CC7620;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc762c
	goto loc_82CC762C;
loc_82CC7620:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC7628;
	sub_82CB8A50(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_82CC762C:
	// clrlwi r31,r23,24
	ctx.r31.u64 = ctx.r23.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbdd38
	ctx.lr = 0x82CC7638;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82cc75bc
	if (!ctx.cr0.eq) goto loc_82CC75BC;
loc_82CC7640:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82cc77a4
	if (ctx.cr6.eq) goto loc_82CC77A4;
	// cmpwi cr6,r23,101
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 101, ctx.xer);
	// beq cr6,0x82cc7658
	if (ctx.cr6.eq) goto loc_82CC7658;
	// cmpwi cr6,r23,69
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 69, ctx.xer);
	// bne cr6,0x82cc77a4
	if (!ctx.cr6.eq) goto loc_82CC77A4;
loc_82CC7658:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// addi r29,r16,-1
	ctx.r29.s64 = ctx.r16.s64 + -1;
	// beq cr6,0x82cc77a4
	if (ctx.cr6.eq) goto loc_82CC77A4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,101
	ctx.r10.s64 = 101;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stbx r10,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cc65d0
	ctx.lr = 0x82CC768C;
	sub_82CC65D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc7954
	if (ctx.cr0.eq) goto loc_82CC7954;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc76bc
	if (ctx.cr0.lt) goto loc_82CC76BC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc76c8
	goto loc_82CC76C8;
loc_82CC76BC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC76C4;
	sub_82CB8A50(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_82CC76C8:
	// cmpwi cr6,r23,45
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 45, ctx.xer);
	// bne cr6,0x82cc7704
	if (!ctx.cr6.eq) goto loc_82CC7704;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,45
	ctx.r10.s64 = 45;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stbx r10,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cc65d0
	ctx.lr = 0x82CC76F8;
	sub_82CC65D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc7954
	if (ctx.cr0.eq) goto loc_82CC7954;
	// b 0x82cc770c
	goto loc_82CC770C;
loc_82CC7704:
	// cmpwi cr6,r23,43
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 43, ctx.xer);
	// bne cr6,0x82cc7790
	if (!ctx.cr6.eq) goto loc_82CC7790;
loc_82CC770C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// bne cr6,0x82cc775c
	if (!ctx.cr6.eq) goto loc_82CC775C;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82cc7790
	goto loc_82CC7790;
loc_82CC7720:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// beq cr6,0x82cc77a4
	if (ctx.cr6.eq) goto loc_82CC77A4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// stbx r31,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cc65d0
	ctx.lr = 0x82CC7754;
	sub_82CC65D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc7954
	if (ctx.cr0.eq) goto loc_82CC7954;
loc_82CC775C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc7784
	if (ctx.cr0.lt) goto loc_82CC7784;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc7790
	goto loc_82CC7790;
loc_82CC7784:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC778C;
	sub_82CB8A50(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_82CC7790:
	// clrlwi r31,r23,24
	ctx.r31.u64 = ctx.r23.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbdd38
	ctx.lr = 0x82CC779C;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82cc7720
	if (!ctx.cr0.eq) goto loc_82CC7720;
loc_82CC77A4:
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// beq cr6,0x82cc77bc
	if (ctx.cr6.eq) goto loc_82CC77BC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82cd2ad8
	ctx.lr = 0x82CC77BC;
	sub_82CD2AD8(ctx, base);
loc_82CC77BC:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82cc7954
	if (ctx.cr6.eq) goto loc_82CC7954;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82cc7838
	if (!ctx.cr6.eq) goto loc_82CC7838;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsb r11,r15
	ctx.r11.s64 = ctx.r15.s8;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stbx r10,r30,r5
	PPC_STORE_U8(ctx.r30.u32 + ctx.r5.u32, ctx.r10.u8);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lwz r11,28(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CC7808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82cc7838
	goto loc_82CC7838;
loc_82CC780C:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bne cr6,0x82cc7940
	if (!ctx.cr6.eq) goto loc_82CC7940;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bne cr6,0x82cc7838
	if (!ctx.cr6.eq) goto loc_82CC7838;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r11.u32);
loc_82CC7838:
	// lwz r11,716(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r9,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r9.u32);
	// rotlwi r19,r9,0
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// b 0x82cc78f8
	goto loc_82CC78F8;
loc_82CC7858:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc7880
	if (ctx.cr0.lt) goto loc_82CC7880;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc788c
	goto loc_82CC788C;
loc_82CC7880:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC7888;
	sub_82CB8A50(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_82CC788C:
	// lbz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// stw r19,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r19.u32);
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bne cr6,0x82cc7940
	if (!ctx.cr6.eq) goto loc_82CC7940;
	// clrlwi r3,r23,24
	ctx.r3.u64 = ctx.r23.u32 & 0xFF;
	// bl 0x82cb5520
	ctx.lr = 0x82CC78A8;
	sub_82CB5520(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc78f8
	if (ctx.cr0.eq) goto loc_82CC78F8;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r31,r14,1
	ctx.r31.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc78d8
	if (ctx.cr0.lt) goto loc_82CC78D8;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc78e0
	goto loc_82CC78E0;
loc_82CC78D8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC78E0;
	sub_82CB8A50(ctx, base);
loc_82CC78E0:
	// lbz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// stw r19,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r19.u32);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82cc7930
	if (!ctx.cr6.eq) goto loc_82CC7930;
	// addi r14,r31,-1
	ctx.r14.s64 = ctx.r31.s64 + -1;
loc_82CC78F8:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// bne cr6,0x82cc7920
	if (!ctx.cr6.eq) goto loc_82CC7920;
	// lbz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bne cr6,0x82cc7954
	if (!ctx.cr6.eq) goto loc_82CC7954;
	// lwz r11,716(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// bne cr6,0x82cc7954
	if (!ctx.cr6.eq) goto loc_82CC7954;
	// lwz r19,716(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
loc_82CC7920:
	// lbz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82cc68e4
	if (!ctx.cr0.eq) goto loc_82CC68E4;
	// b 0x82cc7954
	goto loc_82CC7954;
loc_82CC7930:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82cc7940
	if (ctx.cr6.eq) goto loc_82CC7940;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82cd2ad8
	ctx.lr = 0x82CC7940;
	sub_82CD2AD8(ctx, base);
loc_82CC7940:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// beq cr6,0x82cc7954
	if (ctx.cr6.eq) goto loc_82CC7954;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82cd2ad8
	ctx.lr = 0x82CC7954;
	sub_82CD2AD8(ctx, base);
loc_82CC7954:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82cc7968
	if (!ctx.cr6.eq) goto loc_82CC7968;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82cb3d50
	ctx.lr = 0x82CC7968;
	sub_82CB3D50(ctx, base);
loc_82CC7968:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// bne cr6,0x82cc798c
	if (!ctx.cr6.eq) goto loc_82CC798C;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cc7990
	if (!ctx.cr6.eq) goto loc_82CC7990;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82cc7990
	if (!ctx.cr0.eq) goto loc_82CC7990;
	// b 0x82cc67d4
	goto loc_82CC67D4;
loc_82CC798C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82CC7990:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC7998"))) PPC_WEAK_FUNC(sub_82CC7998);
PPC_FUNC_IMPL(__imp__sub_82CC7998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82CC79A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82cc7a2c
	if (!ctx.cr6.eq) goto loc_82CC7A2C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82cc7a08
	if (!ctx.cr6.eq) goto loc_82CC7A08;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82cb92c0
	ctx.lr = 0x82CC79D8;
	sub_82CB92C0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82cc79ec
	if (!ctx.cr0.eq) goto loc_82CC79EC;
loc_82CC79E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cc7a30
	goto loc_82CC7A30;
loc_82CC79EC:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82cb1160
	ctx.lr = 0x82CC7A04;
	sub_82CB1160(ctx, base);
	// b 0x82cc7a20
	goto loc_82CC7A20;
loc_82CC7A08:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82cb4b10
	ctx.lr = 0x82CC7A14;
	sub_82CB4B10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82cc79e4
	if (ctx.cr0.eq) goto loc_82CC79E4;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_82CC7A20:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82CC7A2C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CC7A30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC7A38"))) PPC_WEAK_FUNC(sub_82CC7A38);
PPC_FUNC_IMPL(__imp__sub_82CC7A38) {
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
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x82cbdd38
	ctx.lr = 0x82CC7A54;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc7a64
	if (ctx.cr0.eq) goto loc_82CC7A64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82cc7a6c
	goto loc_82CC7A6C;
loc_82CC7A64:
	// rlwinm r11,r31,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r3,r11,-7
	ctx.r3.s64 = ctx.r11.s64 + -7;
loc_82CC7A6C:
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

__attribute__((alias("__imp__sub_82CC7A80"))) PPC_WEAK_FUNC(sub_82CC7A80);
PPC_FUNC_IMPL(__imp__sub_82CC7A80) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blt 0x82cc7aa8
	if (ctx.cr0.lt) goto loc_82CC7AA8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82CC7AA8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82cb8a50
	sub_82CB8A50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC7AB0"))) PPC_WEAK_FUNC(sub_82CC7AB0);
PPC_FUNC_IMPL(__imp__sub_82CC7AB0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82cd2ad8
	sub_82CD2AD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC7ABC"))) PPC_WEAK_FUNC(sub_82CC7ABC);
PPC_FUNC_IMPL(__imp__sub_82CC7ABC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC7AC0"))) PPC_WEAK_FUNC(sub_82CC7AC0);
PPC_FUNC_IMPL(__imp__sub_82CC7AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82CC7AC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_82CC7AD4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// blt 0x82cc7b04
	if (ctx.cr0.lt) goto loc_82CC7B04;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x82cc7b10
	goto loc_82CC7B10;
loc_82CC7B04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC7B0C;
	sub_82CB8A50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82CC7B10:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82cc7b28
	if (ctx.cr6.eq) goto loc_82CC7B28;
	// clrlwi r3,r30,24
	ctx.r3.u64 = ctx.r30.u32 & 0xFF;
	// bl 0x82cbdde8
	ctx.lr = 0x82CC7B20;
	sub_82CBDDE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82cc7ad4
	if (!ctx.cr0.eq) goto loc_82CC7AD4;
loc_82CC7B28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC7B34"))) PPC_WEAK_FUNC(sub_82CC7B34);
PPC_FUNC_IMPL(__imp__sub_82CC7B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC7B38"))) PPC_WEAK_FUNC(sub_82CC7B38);
PPC_FUNC_IMPL(__imp__sub_82CC7B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82CC7B40;
	__savegprlr_14(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,0
	ctx.r21.s64 = 0;
	// stw r6,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r6.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r11,350
	ctx.r11.s64 = 350;
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// stw r28,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r28.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// sth r21,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r21.u16);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r21.u32);
	// bne cr6,0x82cc7ba8
	if (!ctx.cr6.eq) goto loc_82CC7BA8;
loc_82CC7B7C:
	// bl 0x82cb8f58
	ctx.lr = 0x82CC7B80;
	sub_82CB8F58(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CC7BA0;
	sub_82CB8DA0(ctx, base);
loc_82CC7BA0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82cc8f20
	goto loc_82CC8F20;
loc_82CC7BA8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82cc7b7c
	if (ctx.cr6.eq) goto loc_82CC7B7C;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cc7cac
	if (!ctx.cr0.eq) goto loc_82CC7CAC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8d38
	ctx.lr = 0x82CC7BC4;
	sub_82CB8D38(ctx, base);
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// addi r30,r11,6272
	ctx.r30.s64 = ctx.r11.s64 + 6272;
	// addi r29,r10,12760
	ctx.r29.s64 = ctx.r10.s64 + 12760;
	// beq cr6,0x82cc7c14
	if (ctx.cr6.eq) goto loc_82CC7C14;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8d38
	ctx.lr = 0x82CC7BE4;
	sub_82CB8D38(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82cc7c14
	if (ctx.cr6.eq) goto loc_82CC7C14;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8d38
	ctx.lr = 0x82CC7BF4;
	sub_82CB8D38(ctx, base);
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb8d38
	ctx.lr = 0x82CC7C04;
	sub_82CB8D38(ctx, base);
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r10,r3,6,21,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82cc7c18
	goto loc_82CC7C18;
loc_82CC7C14:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82CC7C18:
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// rlwinm. r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cc7c7c
	if (!ctx.cr0.eq) goto loc_82CC7C7C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8d38
	ctx.lr = 0x82CC7C2C;
	sub_82CB8D38(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82cc7c6c
	if (ctx.cr6.eq) goto loc_82CC7C6C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8d38
	ctx.lr = 0x82CC7C3C;
	sub_82CB8D38(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82cc7c6c
	if (ctx.cr6.eq) goto loc_82CC7C6C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8d38
	ctx.lr = 0x82CC7C4C;
	sub_82CB8D38(ctx, base);
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb8d38
	ctx.lr = 0x82CC7C5C;
	sub_82CB8D38(ctx, base);
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r10,r3,6,21,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82cc7c70
	goto loc_82CC7C70;
loc_82CC7C6C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82CC7C70:
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc7cac
	if (ctx.cr0.eq) goto loc_82CC7CAC;
loc_82CC7C7C:
	// bl 0x82cb8f58
	ctx.lr = 0x82CC7C80;
	sub_82CB8F58(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
loc_82CC7C84:
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CC7CA4;
	sub_82CB8DA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82cc8f20
	goto loc_82CC8F20;
loc_82CC7CAC:
	// lbz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// stb r21,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r21.u8);
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// beq 0x82cc8f1c
	if (ctx.cr0.eq) goto loc_82CC8F1C;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// addi r11,r11,13712
	ctx.r11.s64 = ctx.r11.s64 + 13712;
	// addi r10,r10,14320
	ctx.r10.s64 = ctx.r10.s64 + 14320;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
loc_82CC7CDC:
	// bl 0x82cbdde8
	ctx.lr = 0x82CC7CE0;
	sub_82CBDDE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc7d6c
	if (ctx.cr0.eq) goto loc_82CC7D6C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
loc_82CC7CF0:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc7d1c
	if (ctx.cr0.lt) goto loc_82CC7D1C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc7d28
	goto loc_82CC7D28;
loc_82CC7D1C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC7D24;
	sub_82CB8A50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82CC7D28:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x82cc7d4c
	if (ctx.cr6.eq) goto loc_82CC7D4C;
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x82cbdde8
	ctx.lr = 0x82CC7D38;
	sub_82CBDDE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82cc7cf0
	if (!ctx.cr0.eq) goto loc_82CC7CF0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd2ad8
	ctx.lr = 0x82CC7D4C;
	sub_82CD2AD8(ctx, base);
loc_82CC7D4C:
	// lwz r30,716(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
loc_82CC7D50:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82cbdde8
	ctx.lr = 0x82CC7D5C;
	sub_82CBDDE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82cc7d50
	if (!ctx.cr0.eq) goto loc_82CC7D50;
	// stw r30,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r30.u32);
	// b 0x82cc8e34
	goto loc_82CC8E34;
loc_82CC7D6C:
	// lwz r18,716(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// lbz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 0);
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bne cr6,0x82cc8d60
	if (!ctx.cr6.eq) goto loc_82CC8D60;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r17,0
	ctx.r17.s64 = 0;
	// li r16,0
	ctx.r16.s64 = 0;
	// li r14,0
	ctx.r14.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r19,0
	ctx.r19.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r15,1
	ctx.r15.s64 = 1;
	// li r20,0
	ctx.r20.s64 = 0;
loc_82CC7DB4:
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// lbz r31,0(r18)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r18.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbdd38
	ctx.lr = 0x82CC7DC4;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc7de0
	if (ctx.cr0.eq) goto loc_82CC7DE0;
	// mulli r11,r14,10
	ctx.r11.s64 = ctx.r14.s64 * 10;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r14,r11,-48
	ctx.r14.s64 = ctx.r11.s64 + -48;
	// b 0x82cc7ef4
	goto loc_82CC7EF4;
loc_82CC7DE0:
	// cmpwi cr6,r31,78
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 78, ctx.xer);
	// bgt cr6,0x82cc7e9c
	if (ctx.cr6.gt) goto loc_82CC7E9C;
	// beq cr6,0x82cc7ef4
	if (ctx.cr6.eq) goto loc_82CC7EF4;
	// cmpwi cr6,r31,42
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 42, ctx.xer);
	// beq cr6,0x82cc7e90
	if (ctx.cr6.eq) goto loc_82CC7E90;
	// cmpwi cr6,r31,70
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 70, ctx.xer);
	// beq cr6,0x82cc7ef4
	if (ctx.cr6.eq) goto loc_82CC7EF4;
	// cmpwi cr6,r31,73
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 73, ctx.xer);
	// beq cr6,0x82cc7e14
	if (ctx.cr6.eq) goto loc_82CC7E14;
	// cmpwi cr6,r31,76
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 76, ctx.xer);
	// bne cr6,0x82cc7eb4
	if (!ctx.cr6.eq) goto loc_82CC7EB4;
	// addi r11,r15,1
	ctx.r11.s64 = ctx.r15.s64 + 1;
	// b 0x82cc7ef0
	goto loc_82CC7EF0;
loc_82CC7E14:
	// lbz r10,1(r18)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r18.u32 + 1);
	// cmplwi cr6,r10,54
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 54, ctx.xer);
	// bne cr6,0x82cc7e44
	if (!ctx.cr6.eq) goto loc_82CC7E44;
	// lbz r9,2(r18)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r18.u32 + 2);
	// addi r11,r18,2
	ctx.r11.s64 = ctx.r18.s64 + 2;
	// cmplwi cr6,r9,52
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 52, ctx.xer);
	// bne cr6,0x82cc7e44
	if (!ctx.cr6.eq) goto loc_82CC7E44;
loc_82CC7E30:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// b 0x82cc7ef4
	goto loc_82CC7EF4;
loc_82CC7E44:
	// cmplwi cr6,r10,51
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 51, ctx.xer);
	// bne cr6,0x82cc7e64
	if (!ctx.cr6.eq) goto loc_82CC7E64;
	// lbz r9,2(r18)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r18.u32 + 2);
	// addi r11,r18,2
	ctx.r11.s64 = ctx.r18.s64 + 2;
	// cmplwi cr6,r9,50
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 50, ctx.xer);
	// bne cr6,0x82cc7e64
	if (!ctx.cr6.eq) goto loc_82CC7E64;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// b 0x82cc7ef4
	goto loc_82CC7EF4;
loc_82CC7E64:
	// cmplwi cr6,r10,100
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 100, ctx.xer);
	// beq cr6,0x82cc7ef4
	if (ctx.cr6.eq) goto loc_82CC7EF4;
	// cmplwi cr6,r10,105
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 105, ctx.xer);
	// beq cr6,0x82cc7ef4
	if (ctx.cr6.eq) goto loc_82CC7EF4;
	// cmplwi cr6,r10,111
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 111, ctx.xer);
	// beq cr6,0x82cc7ef4
	if (ctx.cr6.eq) goto loc_82CC7EF4;
	// cmplwi cr6,r10,120
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 120, ctx.xer);
	// beq cr6,0x82cc7ef4
	if (ctx.cr6.eq) goto loc_82CC7EF4;
	// cmplwi cr6,r10,88
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 88, ctx.xer);
	// bne cr6,0x82cc7eb4
	if (!ctx.cr6.eq) goto loc_82CC7EB4;
	// b 0x82cc7ef4
	goto loc_82CC7EF4;
loc_82CC7E90:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
	// b 0x82cc7ef4
	goto loc_82CC7EF4;
loc_82CC7E9C:
	// cmpwi cr6,r31,104
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 104, ctx.xer);
	// beq cr6,0x82cc7ee4
	if (ctx.cr6.eq) goto loc_82CC7EE4;
	// cmpwi cr6,r31,108
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 108, ctx.xer);
	// beq cr6,0x82cc7ec0
	if (ctx.cr6.eq) goto loc_82CC7EC0;
	// cmpwi cr6,r31,119
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 119, ctx.xer);
	// beq cr6,0x82cc7ed8
	if (ctx.cr6.eq) goto loc_82CC7ED8;
loc_82CC7EB4:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	// b 0x82cc7ef4
	goto loc_82CC7EF4;
loc_82CC7EC0:
	// lbz r10,1(r18)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r18.u32 + 1);
	// addi r11,r18,1
	ctx.r11.s64 = ctx.r18.s64 + 1;
	// cmplwi cr6,r10,108
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 108, ctx.xer);
	// beq cr6,0x82cc7e30
	if (ctx.cr6.eq) goto loc_82CC7E30;
	// addi r11,r15,1
	ctx.r11.s64 = ctx.r15.s64 + 1;
	// extsb r15,r11
	ctx.r15.s64 = ctx.r11.s8;
loc_82CC7ED8:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// extsb r28,r11
	ctx.r28.s64 = ctx.r11.s8;
	// b 0x82cc7ef4
	goto loc_82CC7EF4;
loc_82CC7EE4:
	// addi r10,r28,-1
	ctx.r10.s64 = ctx.r28.s64 + -1;
	// addi r11,r15,-1
	ctx.r11.s64 = ctx.r15.s64 + -1;
	// extsb r28,r10
	ctx.r28.s64 = ctx.r10.s8;
loc_82CC7EF0:
	// extsb r15,r11
	ctx.r15.s64 = ctx.r11.s8;
loc_82CC7EF4:
	// extsb. r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc7db4
	if (ctx.cr0.eq) goto loc_82CC7DB4;
	// extsb. r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r18,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r18.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bne 0x82cc7f2c
	if (!ctx.cr0.eq) goto loc_82CC7F2C;
	// lwz r11,732(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 732);
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// rlwinm r11,r10,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r11.u32);
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x82cc7f30
	goto loc_82CC7F30;
loc_82CC7F2C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CC7F30:
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// extsb. r11,r28
	ctx.r11.s64 = ctx.r28.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// bne 0x82cc7f5c
	if (!ctx.cr0.eq) goto loc_82CC7F5C;
	// lbz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 0);
	// cmplwi cr6,r11,83
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 83, ctx.xer);
	// beq cr6,0x82cc7f58
	if (ctx.cr6.eq) goto loc_82CC7F58;
	// cmplwi cr6,r11,67
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 67, ctx.xer);
	// li r28,-1
	ctx.r28.s64 = -1;
	// bne cr6,0x82cc7f5c
	if (!ctx.cr6.eq) goto loc_82CC7F5C;
loc_82CC7F58:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82CC7F5C:
	// lwz r9,716(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// ori r18,r11,32
	ctx.r18.u64 = ctx.r11.u64 | 32;
	// cmpwi cr6,r18,110
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 110, ctx.xer);
	// beq cr6,0x82cc8024
	if (ctx.cr6.eq) goto loc_82CC8024;
	// cmpwi cr6,r18,99
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 99, ctx.xer);
	// beq cr6,0x82cc7fdc
	if (ctx.cr6.eq) goto loc_82CC7FDC;
	// cmpwi cr6,r18,123
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 123, ctx.xer);
	// beq cr6,0x82cc7fdc
	if (ctx.cr6.eq) goto loc_82CC7FDC;
loc_82CC7F80:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// blt 0x82cc7fb0
	if (ctx.cr0.lt) goto loc_82CC7FB0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc7fbc
	goto loc_82CC7FBC;
loc_82CC7FB0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC7FB8;
	sub_82CB8A50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82CC7FBC:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x82cc7fd4
	if (ctx.cr6.eq) goto loc_82CC7FD4;
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x82cbdde8
	ctx.lr = 0x82CC7FCC;
	sub_82CBDDE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82cc7f80
	if (!ctx.cr0.eq) goto loc_82CC7F80;
loc_82CC7FD4:
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
	// b 0x82cc8018
	goto loc_82CC8018;
loc_82CC7FDC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc800c
	if (ctx.cr0.lt) goto loc_82CC800C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r21,0(r11)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc8018
	goto loc_82CC8018;
loc_82CC800C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC8014;
	sub_82CB8A50(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
loc_82CC8018:
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, -1, ctx.xer);
	// beq cr6,0x82cc8ecc
	if (ctx.cr6.eq) goto loc_82CC8ECC;
	// lwz r9,716(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
loc_82CC8024:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x82cc8034
	if (ctx.cr6.eq) goto loc_82CC8034;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x82cc8eb8
	if (ctx.cr6.eq) goto loc_82CC8EB8;
loc_82CC8034:
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82cc80a4
	if (!ctx.cr6.eq) goto loc_82CC80A4;
	// cmpwi cr6,r18,99
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 99, ctx.xer);
	// beq cr6,0x82cc8058
	if (ctx.cr6.eq) goto loc_82CC8058;
	// cmpwi cr6,r18,115
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 115, ctx.xer);
	// beq cr6,0x82cc8058
	if (ctx.cr6.eq) goto loc_82CC8058;
	// cmpwi cr6,r18,123
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 123, ctx.xer);
	// bne cr6,0x82cc80a4
	if (!ctx.cr6.eq) goto loc_82CC80A4;
loc_82CC8058:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r30,-4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// stw r11,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r11.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// lwz r25,-4(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 1, ctx.xer);
	// bge cr6,0x82cc80a8
	if (!ctx.cr6.lt) goto loc_82CC80A8;
	// extsb. r11,r28
	ctx.r11.s64 = ctx.r28.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82cc8e44
	if (!ctx.cr0.gt) goto loc_82CC8E44;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// b 0x82cc8e4c
	goto loc_82CC8E4C;
loc_82CC80A4:
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82CC80A8:
	// addi r11,r18,-99
	ctx.r11.s64 = ctx.r18.s64 + -99;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82cc8d18
	if (ctx.cr6.gt) goto loc_82CC8D18;
	// lis r12,-32256
	ctx.r12.s64 = -2113929216;
	// addi r12,r12,24816
	ctx.r12.s64 = ctx.r12.s64 + 24816;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32051
	ctx.r12.s64 = -2100494336;
	// addi r12,r12,-32548
	ctx.r12.s64 = ctx.r12.s64 + -32548;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82CC80DC;
	case 1:
		goto loc_82CC85C0;
	case 2:
		goto loc_82CC8920;
	case 3:
		goto loc_82CC8920;
	case 4:
		goto loc_82CC8920;
	case 5:
		goto loc_82CC8D18;
	case 6:
		goto loc_82CC8448;
	case 7:
		goto loc_82CC8D18;
	case 8:
		goto loc_82CC8D18;
	case 9:
		goto loc_82CC8D18;
	case 10:
		goto loc_82CC8D18;
	case 11:
		goto loc_82CC88D4;
	case 12:
		goto loc_82CC85C0;
	case 13:
		goto loc_82CC85BC;
	case 14:
		goto loc_82CC8D18;
	case 15:
		goto loc_82CC8D18;
	case 16:
		goto loc_82CC80EC;
	case 17:
		goto loc_82CC8D18;
	case 18:
		goto loc_82CC85C0;
	case 19:
		goto loc_82CC8D18;
	case 20:
		goto loc_82CC8D18;
	case 21:
		goto loc_82CC844C;
	case 22:
		goto loc_82CC8D18;
	case 23:
		goto loc_82CC8D18;
	case 24:
		goto loc_82CC80FC;
	default:
		__builtin_unreachable();
	}
loc_82CC80DC:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// bne cr6,0x82cc80ec
	if (!ctx.cr6.eq) goto loc_82CC80EC;
	// li r16,1
	ctx.r16.s64 = 1;
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
loc_82CC80EC:
	// extsb. r11,r28
	ctx.r11.s64 = ctx.r28.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82cc8244
	if (!ctx.cr0.gt) goto loc_82CC8244;
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x82cc8244
	goto loc_82CC8244;
loc_82CC80FC:
	// extsb. r11,r28
	ctx.r11.s64 = ctx.r28.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82cc8108
	if (!ctx.cr0.gt) goto loc_82CC8108;
	// li r23,1
	ctx.r23.s64 = 1;
loc_82CC8108:
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stw r7,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r7.u32);
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// bne cr6,0x82cc8124
	if (!ctx.cr6.eq) goto loc_82CC8124;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// li r24,-1
	ctx.r24.s64 = -1;
loc_82CC8124:
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r18,123
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 123, ctx.xer);
	// std r6,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// std r6,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r6.u64);
	// std r6,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r6.u64);
	// bne cr6,0x82cc8160
	if (!ctx.cr6.eq) goto loc_82CC8160;
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// bne cr6,0x82cc8160
	if (!ctx.cr6.eq) goto loc_82CC8160;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r27,93
	ctx.r27.s64 = 93;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stb r11,155(r1)
	PPC_STORE_U8(ctx.r1.u32 + 155, ctx.r11.u8);
loc_82CC8160:
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// beq cr6,0x82cc8228
	if (ctx.cr6.eq) goto loc_82CC8228;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82CC8170:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r9,45
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 45, ctx.xer);
	// bne cr6,0x82cc81fc
	if (!ctx.cr6.eq) goto loc_82CC81FC;
	// clrlwi. r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82cc81fc
	if (ctx.cr0.eq) goto loc_82CC81FC;
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// beq cr6,0x82cc81fc
	if (ctx.cr6.eq) goto loc_82CC81FC;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82cc81b0
	if (!ctx.cr6.lt) goto loc_82CC81B0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82cc81b8
	goto loc_82CC81B8;
loc_82CC81B0:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82CC81B8:
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82cc81f4
	if (ctx.cr6.gt) goto loc_82CC81F4;
loc_82CC81C8:
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// clrlwi r4,r11,29
	ctx.r4.u64 = ctx.r11.u32 & 0x7;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r4,r5,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r4.u8 & 0x3F));
	// lbzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// or r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 | ctx.r3.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// stbx r4,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r4.u8);
	// ble cr6,0x82cc81c8
	if (!ctx.cr6.gt) goto loc_82CC81C8;
loc_82CC81F4:
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// b 0x82cc821c
	goto loc_82CC821C;
loc_82CC81FC:
	// rlwinm r10,r9,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// slw r9,r5,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r9.u8 & 0x3F));
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
loc_82CC821C:
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// bne cr6,0x82cc8170
	if (!ctx.cr6.eq) goto loc_82CC8170;
loc_82CC8228:
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82cc8ecc
	if (ctx.cr0.eq) goto loc_82CC8ECC;
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r18,123
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 123, ctx.xer);
	// bne cr6,0x82cc8244
	if (!ctx.cr6.eq) goto loc_82CC8244;
	// stw r7,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r7.u32);
loc_82CC8244:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, -1, ctx.xer);
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// beq cr6,0x82cc8268
	if (ctx.cr6.eq) goto loc_82CC8268;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82cd2ad8
	ctx.lr = 0x82CC8268;
	sub_82CD2AD8(ctx, base);
loc_82CC8268:
	// cmpwi cr6,r18,99
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 99, ctx.xer);
	// beq cr6,0x82cc8274
	if (ctx.cr6.eq) goto loc_82CC8274;
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
loc_82CC8274:
	// lwz r28,128(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_82CC8278:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x82cc828c
	if (ctx.cr6.eq) goto loc_82CC828C;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// beq cr6,0x82cc83fc
	if (ctx.cr6.eq) goto loc_82CC83FC;
loc_82CC828C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc82b8
	if (ctx.cr0.lt) goto loc_82CC82B8;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r21,0(r11)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc82c4
	goto loc_82CC82C4;
loc_82CC82B8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC82C0;
	sub_82CB8A50(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
loc_82CC82C4:
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, -1, ctx.xer);
	// beq cr6,0x82cc83e0
	if (ctx.cr6.eq) goto loc_82CC83E0;
	// cmpwi cr6,r18,99
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 99, ctx.xer);
	// beq cr6,0x82cc8328
	if (ctx.cr6.eq) goto loc_82CC8328;
	// cmpwi cr6,r18,115
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 115, ctx.xer);
	// bne cr6,0x82cc82f4
	if (!ctx.cr6.eq) goto loc_82CC82F4;
	// cmpwi cr6,r21,9
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 9, ctx.xer);
	// blt cr6,0x82cc82ec
	if (ctx.cr6.lt) goto loc_82CC82EC;
	// cmpwi cr6,r21,13
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 13, ctx.xer);
	// ble cr6,0x82cc83e0
	if (!ctx.cr6.gt) goto loc_82CC83E0;
loc_82CC82EC:
	// cmpwi cr6,r21,32
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 32, ctx.xer);
	// bne cr6,0x82cc8328
	if (!ctx.cr6.eq) goto loc_82CC8328;
loc_82CC82F4:
	// cmpwi cr6,r18,123
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 123, ctx.xer);
	// bne cr6,0x82cc83e0
	if (!ctx.cr6.eq) goto loc_82CC83E0;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// srawi r11,r21,3
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 3;
	// clrlwi r9,r21,29
	ctx.r9.u64 = ctx.r21.u32 & 0x7;
	// extsb r8,r24
	ctx.r8.s64 = ctx.r24.s8;
	// li r7,1
	ctx.r7.s64 = 1;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// slw r10,r7,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc83e0
	if (ctx.cr0.eq) goto loc_82CC83E0;
loc_82CC8328:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82cc83d8
	if (!ctx.cr6.eq) goto loc_82CC83D8;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82cc8e5c
	if (ctx.cr6.eq) goto loc_82CC8E5C;
	// extsb. r11,r23
	ctx.r11.s64 = ctx.r23.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc83c0
	if (ctx.cr0.eq) goto loc_82CC83C0;
	// stb r21,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r21.u8);
	// clrlwi r3,r21,24
	ctx.r3.u64 = ctx.r21.u32 & 0xFF;
	// bl 0x82cb5520
	ctx.lr = 0x82CC8350;
	sub_82CB5520(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc8390
	if (ctx.cr0.eq) goto loc_82CC8390;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc8384
	if (ctx.cr0.lt) goto loc_82CC8384;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc838c
	goto loc_82CC838C;
loc_82CC8384:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC838C;
	sub_82CB8A50(ctx, base);
loc_82CC838C:
	// stb r3,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r3.u8);
loc_82CC8390:
	// li r10,63
	ctx.r10.s64 = 63;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// sth r10,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r10.u16);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r5,172(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// bl 0x82ccb948
	ctx.lr = 0x82CC83B0;
	sub_82CCB948(ctx, base);
	// lhz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// b 0x82cc83cc
	goto loc_82CC83CC;
loc_82CC83C0:
	// extsb r11,r21
	ctx.r11.s64 = ctx.r21.s8;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82CC83CC:
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// b 0x82cc8278
	goto loc_82CC8278;
loc_82CC83D8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82cc8278
	goto loc_82CC8278;
loc_82CC83E0:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, -1, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82cc83fc
	if (ctx.cr6.eq) goto loc_82CC83FC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82cd2ad8
	ctx.lr = 0x82CC83FC;
	sub_82CD2AD8(ctx, base);
loc_82CC83FC:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82cc8ecc
	if (ctx.cr6.eq) goto loc_82CC8ECC;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82cc8d40
	if (!ctx.cr6.eq) goto loc_82CC8D40;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r18,99
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 99, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// beq cr6,0x82cc8d40
	if (ctx.cr6.eq) goto loc_82CC8D40;
	// extsb. r11,r23
	ctx.r11.s64 = ctx.r23.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// beq 0x82cc843c
	if (ctx.cr0.eq) goto loc_82CC843C;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// b 0x82cc8d40
	goto loc_82CC8D40;
loc_82CC843C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x82cc8d40
	goto loc_82CC8D40;
loc_82CC8448:
	// li r18,100
	ctx.r18.s64 = 100;
loc_82CC844C:
	// cmpwi cr6,r21,45
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 45, ctx.xer);
	// bne cr6,0x82cc845c
	if (!ctx.cr6.eq) goto loc_82CC845C;
	// li r19,1
	ctx.r19.s64 = 1;
	// b 0x82cc8464
	goto loc_82CC8464;
loc_82CC845C:
	// cmpwi cr6,r21,43
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 43, ctx.xer);
	// bne cr6,0x82cc84b8
	if (!ctx.cr6.eq) goto loc_82CC84B8;
loc_82CC8464:
	// addic. r14,r14,-1
	ctx.xer.ca = ctx.r14.u32 > 0;
	ctx.r14.s64 = ctx.r14.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne 0x82cc847c
	if (!ctx.cr0.eq) goto loc_82CC847C;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x82cc847c
	if (ctx.cr6.eq) goto loc_82CC847C;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82cc84b8
	goto loc_82CC84B8;
loc_82CC847C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc84ac
	if (ctx.cr0.lt) goto loc_82CC84AC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r21,0(r11)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc84b8
	goto loc_82CC84B8;
loc_82CC84AC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC84B4;
	sub_82CB8A50(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
loc_82CC84B8:
	// cmpwi cr6,r21,48
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 48, ctx.xer);
	// bne cr6,0x82cc862c
	if (!ctx.cr6.eq) goto loc_82CC862C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc84f0
	if (ctx.cr0.lt) goto loc_82CC84F0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r21,0(r11)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc84fc
	goto loc_82CC84FC;
loc_82CC84F0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC84F8;
	sub_82CB8A50(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
loc_82CC84FC:
	// extsb r11,r21
	ctx.r11.s64 = ctx.r21.s8;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x82cc8560
	if (ctx.cr6.eq) goto loc_82CC8560;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// beq cr6,0x82cc8560
	if (ctx.cr6.eq) goto loc_82CC8560;
	// li r17,1
	ctx.r17.s64 = 1;
	// cmpwi cr6,r18,120
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 120, ctx.xer);
	// beq cr6,0x82cc853c
	if (ctx.cr6.eq) goto loc_82CC853C;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x82cc8534
	if (ctx.cr6.eq) goto loc_82CC8534;
	// addic. r14,r14,-1
	ctx.xer.ca = ctx.r14.u32 > 0;
	ctx.r14.s64 = ctx.r14.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne 0x82cc8534
	if (!ctx.cr0.eq) goto loc_82CC8534;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
loc_82CC8534:
	// li r18,111
	ctx.r18.s64 = 111;
	// b 0x82cc862c
	goto loc_82CC862C;
loc_82CC853C:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, -1, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82cc8558
	if (ctx.cr6.eq) goto loc_82CC8558;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82cd2ad8
	ctx.lr = 0x82CC8558;
	sub_82CD2AD8(ctx, base);
loc_82CC8558:
	// li r21,48
	ctx.r21.s64 = 48;
	// b 0x82cc862c
	goto loc_82CC862C;
loc_82CC8560:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc858c
	if (ctx.cr0.lt) goto loc_82CC858C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r21,0(r11)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc8598
	goto loc_82CC8598;
loc_82CC858C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC8594;
	sub_82CB8A50(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
loc_82CC8598:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x82cc85b4
	if (ctx.cr6.eq) goto loc_82CC85B4;
	// addi r14,r14,-2
	ctx.r14.s64 = ctx.r14.s64 + -2;
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// bge cr6,0x82cc85b4
	if (!ctx.cr6.lt) goto loc_82CC85B4;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
loc_82CC85B4:
	// li r18,120
	ctx.r18.s64 = 120;
	// b 0x82cc862c
	goto loc_82CC862C;
loc_82CC85BC:
	// li r15,1
	ctx.r15.s64 = 1;
loc_82CC85C0:
	// cmpwi cr6,r21,45
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 45, ctx.xer);
	// bne cr6,0x82cc85d0
	if (!ctx.cr6.eq) goto loc_82CC85D0;
	// li r19,1
	ctx.r19.s64 = 1;
	// b 0x82cc85d8
	goto loc_82CC85D8;
loc_82CC85D0:
	// cmpwi cr6,r21,43
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 43, ctx.xer);
	// bne cr6,0x82cc862c
	if (!ctx.cr6.eq) goto loc_82CC862C;
loc_82CC85D8:
	// addic. r14,r14,-1
	ctx.xer.ca = ctx.r14.u32 > 0;
	ctx.r14.s64 = ctx.r14.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne 0x82cc85f0
	if (!ctx.cr0.eq) goto loc_82CC85F0;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x82cc85f0
	if (ctx.cr6.eq) goto loc_82CC85F0;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82cc862c
	goto loc_82CC862C;
loc_82CC85F0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc8620
	if (ctx.cr0.lt) goto loc_82CC8620;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r21,0(r11)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc862c
	goto loc_82CC862C;
loc_82CC8620:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC8628;
	sub_82CB8A50(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
loc_82CC862C:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// extsb. r31,r29
	ctx.r31.s64 = ctx.r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82cc8784
	if (ctx.cr6.eq) goto loc_82CC8784;
	// bne 0x82cc876c
	if (!ctx.cr0.eq) goto loc_82CC876C;
loc_82CC863C:
	// cmpwi cr6,r18,120
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 120, ctx.xer);
	// beq cr6,0x82cc8688
	if (ctx.cr6.eq) goto loc_82CC8688;
	// cmpwi cr6,r18,112
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 112, ctx.xer);
	// beq cr6,0x82cc8688
	if (ctx.cr6.eq) goto loc_82CC8688;
	// clrlwi r3,r21,24
	ctx.r3.u64 = ctx.r21.u32 & 0xFF;
	// bl 0x82cbdd38
	ctx.lr = 0x82CC8654;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc86c4
	if (ctx.cr0.eq) goto loc_82CC86C4;
	// cmpwi cr6,r18,111
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 111, ctx.xer);
	// bne cr6,0x82cc867c
	if (!ctx.cr6.eq) goto loc_82CC867C;
	// cmpwi cr6,r21,56
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 56, ctx.xer);
	// bge cr6,0x82cc86c4
	if (!ctx.cr6.lt) goto loc_82CC86C4;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// rldicr r11,r11,3,60
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 3) & 0xFFFFFFFFFFFFFFF8;
loc_82CC8674:
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// b 0x82cc86cc
	goto loc_82CC86CC;
loc_82CC867C:
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mulli r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 * 10;
	// b 0x82cc8674
	goto loc_82CC8674;
loc_82CC8688:
	// clrlwi r30,r21,24
	ctx.r30.u64 = ctx.r21.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cbdd90
	ctx.lr = 0x82CC8694;
	sub_82CBDD90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc86c4
	if (ctx.cr0.eq) goto loc_82CC86C4;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicr r11,r11,4,59
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// bl 0x82cbdd38
	ctx.lr = 0x82CC86B0;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82cc86cc
	if (!ctx.cr0.eq) goto loc_82CC86CC;
	// rlwinm r11,r21,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r21,r11,-7
	ctx.r21.s64 = ctx.r11.s64 + -7;
	// b 0x82cc86cc
	goto loc_82CC86CC;
loc_82CC86C4:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
loc_82CC86CC:
	// extsb. r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cc8744
	if (!ctx.cr0.eq) goto loc_82CC8744;
	// addi r11,r21,-48
	ctx.r11.s64 = ctx.r21.s64 + -48;
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// beq cr6,0x82cc8704
	if (ctx.cr6.eq) goto loc_82CC8704;
	// addic. r14,r14,-1
	ctx.xer.ca = ctx.r14.u32 > 0;
	ctx.r14.s64 = ctx.r14.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne 0x82cc8704
	if (!ctx.cr0.eq) goto loc_82CC8704;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82cc8764
	goto loc_82CC8764;
loc_82CC8704:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc8734
	if (ctx.cr0.lt) goto loc_82CC8734;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r21,0(r11)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc8764
	goto loc_82CC8764;
loc_82CC8734:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC873C;
	sub_82CB8A50(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// b 0x82cc8764
	goto loc_82CC8764;
loc_82CC8744:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, -1, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82cc8764
	if (ctx.cr6.eq) goto loc_82CC8764;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82cd2ad8
	ctx.lr = 0x82CC8764;
	sub_82CD2AD8(ctx, base);
loc_82CC8764:
	// extsb. r31,r29
	ctx.r31.s64 = ctx.r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82cc863c
	if (ctx.cr0.eq) goto loc_82CC863C;
loc_82CC876C:
	// extsb. r11,r19
	ctx.r11.s64 = ctx.r19.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc88a4
	if (ctx.cr0.eq) goto loc_82CC88A4;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// b 0x82cc88a4
	goto loc_82CC88A4;
loc_82CC8784:
	// bne 0x82cc8898
	if (!ctx.cr0.eq) goto loc_82CC8898;
loc_82CC8788:
	// cmpwi cr6,r18,120
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 120, ctx.xer);
	// beq cr6,0x82cc87c8
	if (ctx.cr6.eq) goto loc_82CC87C8;
	// cmpwi cr6,r18,112
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 112, ctx.xer);
	// beq cr6,0x82cc87c8
	if (ctx.cr6.eq) goto loc_82CC87C8;
	// clrlwi r3,r21,24
	ctx.r3.u64 = ctx.r21.u32 & 0xFF;
	// bl 0x82cbdd38
	ctx.lr = 0x82CC87A0;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc87fc
	if (ctx.cr0.eq) goto loc_82CC87FC;
	// cmpwi cr6,r18,111
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 111, ctx.xer);
	// bne cr6,0x82cc87c0
	if (!ctx.cr6.eq) goto loc_82CC87C0;
	// cmpwi cr6,r21,56
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 56, ctx.xer);
	// bge cr6,0x82cc87fc
	if (!ctx.cr6.lt) goto loc_82CC87FC;
	// rlwinm r22,r22,3,0,28
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x82cc8804
	goto loc_82CC8804;
loc_82CC87C0:
	// mulli r22,r22,10
	ctx.r22.s64 = ctx.r22.s64 * 10;
	// b 0x82cc8804
	goto loc_82CC8804;
loc_82CC87C8:
	// clrlwi r30,r21,24
	ctx.r30.u64 = ctx.r21.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cbdd90
	ctx.lr = 0x82CC87D4;
	sub_82CBDD90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc87fc
	if (ctx.cr0.eq) goto loc_82CC87FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r22,r22,4,0,27
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82cbdd38
	ctx.lr = 0x82CC87E8;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82cc8804
	if (!ctx.cr0.eq) goto loc_82CC8804;
	// rlwinm r11,r21,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r21,r11,-7
	ctx.r21.s64 = ctx.r11.s64 + -7;
	// b 0x82cc8804
	goto loc_82CC8804;
loc_82CC87FC:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
loc_82CC8804:
	// extsb. r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cc8870
	if (!ctx.cr0.eq) goto loc_82CC8870;
	// add r11,r22,r21
	ctx.r11.u64 = ctx.r22.u64 + ctx.r21.u64;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r22,r11,-48
	ctx.r22.s64 = ctx.r11.s64 + -48;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x82cc8830
	if (ctx.cr6.eq) goto loc_82CC8830;
	// addic. r14,r14,-1
	ctx.xer.ca = ctx.r14.u32 > 0;
	ctx.r14.s64 = ctx.r14.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne 0x82cc8830
	if (!ctx.cr0.eq) goto loc_82CC8830;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82cc8890
	goto loc_82CC8890;
loc_82CC8830:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc8860
	if (ctx.cr0.lt) goto loc_82CC8860;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r21,0(r11)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc8890
	goto loc_82CC8890;
loc_82CC8860:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC8868;
	sub_82CB8A50(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// b 0x82cc8890
	goto loc_82CC8890;
loc_82CC8870:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, -1, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82cc8890
	if (ctx.cr6.eq) goto loc_82CC8890;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82cd2ad8
	ctx.lr = 0x82CC8890;
	sub_82CD2AD8(ctx, base);
loc_82CC8890:
	// extsb. r31,r29
	ctx.r31.s64 = ctx.r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82cc8788
	if (ctx.cr0.eq) goto loc_82CC8788;
loc_82CC8898:
	// extsb. r11,r19
	ctx.r11.s64 = ctx.r19.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cc88a4
	if (ctx.cr0.eq) goto loc_82CC88A4;
	// neg r22,r22
	ctx.r22.s64 = -ctx.r22.s64;
loc_82CC88A4:
	// cmpwi cr6,r18,70
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 70, ctx.xer);
	// bne cr6,0x82cc88b0
	if (!ctx.cr6.eq) goto loc_82CC88B0;
	// li r17,0
	ctx.r17.s64 = 0;
loc_82CC88B0:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x82cc8ecc
	if (ctx.cr6.eq) goto loc_82CC8ECC;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82cc8d40
	if (!ctx.cr6.eq) goto loc_82CC8D40;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// b 0x82cc88ec
	goto loc_82CC88EC;
loc_82CC88D4:
	// lwz r22,80(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82cc8d40
	if (!ctx.cr6.eq) goto loc_82CC8D40;
	// bl 0x82ccb920
	ctx.lr = 0x82CC88E4;
	sub_82CCB920(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc8d40
	if (ctx.cr0.eq) goto loc_82CC8D40;
loc_82CC88EC:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x82cc8904
	if (ctx.cr6.eq) goto loc_82CC8904;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// b 0x82cc8d40
	goto loc_82CC8D40;
loc_82CC8904:
	// extsb. r11,r15
	ctx.r11.s64 = ctx.r15.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// beq 0x82cc8918
	if (ctx.cr0.eq) goto loc_82CC8918;
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// b 0x82cc8d40
	goto loc_82CC8D40;
loc_82CC8918:
	// sth r22,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r22.u16);
	// b 0x82cc8d40
	goto loc_82CC8D40;
loc_82CC8920:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r21,45
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 45, ctx.xer);
	// bne cr6,0x82cc8940
	if (!ctx.cr6.eq) goto loc_82CC8940;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,45
	ctx.r10.s64 = 45;
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x82cc8948
	goto loc_82CC8948;
loc_82CC8940:
	// cmpwi cr6,r21,43
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 43, ctx.xer);
	// bne cr6,0x82cc8988
	if (!ctx.cr6.eq) goto loc_82CC8988;
loc_82CC8948:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc897c
	if (ctx.cr0.lt) goto loc_82CC897C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r21,0(r11)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc8988
	goto loc_82CC8988;
loc_82CC897C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC8984;
	sub_82CB8A50(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
loc_82CC8988:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// bne cr6,0x82cc8a10
	if (!ctx.cr6.eq) goto loc_82CC8A10;
	// li r14,-1
	ctx.r14.s64 = -1;
	// b 0x82cc8a10
	goto loc_82CC8A10;
loc_82CC8998:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// beq cr6,0x82cc8a24
	if (ctx.cr6.eq) goto loc_82CC8A24;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// stbx r31,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cc7998
	ctx.lr = 0x82CC89CC;
	sub_82CC7998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc8ecc
	if (ctx.cr0.eq) goto loc_82CC8ECC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc8a04
	if (ctx.cr0.lt) goto loc_82CC8A04;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r21,0(r11)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc8a10
	goto loc_82CC8A10;
loc_82CC8A04:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC8A0C;
	sub_82CB8A50(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
loc_82CC8A10:
	// clrlwi r31,r21,24
	ctx.r31.u64 = ctx.r21.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbdd38
	ctx.lr = 0x82CC8A1C;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82cc8998
	if (!ctx.cr0.eq) goto loc_82CC8998;
loc_82CC8A24:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// extsb r10,r21
	ctx.r10.s64 = ctx.r21.s8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82cc8b44
	if (!ctx.cr6.eq) goto loc_82CC8B44;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// beq cr6,0x82cc8b44
	if (ctx.cr6.eq) goto loc_82CC8B44;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r28,r10,1
	ctx.r28.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc8a80
	if (ctx.cr0.lt) goto loc_82CC8A80;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r21,0(r11)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc8a8c
	goto loc_82CC8A8C;
loc_82CC8A80:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC8A88;
	sub_82CB8A50(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
loc_82CC8A8C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// stbx r31,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cc7998
	ctx.lr = 0x82CC8AB0;
	sub_82CC7998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc8ecc
	if (ctx.cr0.eq) goto loc_82CC8ECC;
	// b 0x82cc8b2c
	goto loc_82CC8B2C;
loc_82CC8ABC:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// beq cr6,0x82cc8b48
	if (ctx.cr6.eq) goto loc_82CC8B48;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// stbx r31,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cc7998
	ctx.lr = 0x82CC8AF0;
	sub_82CC7998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc8ecc
	if (ctx.cr0.eq) goto loc_82CC8ECC;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc8b20
	if (ctx.cr0.lt) goto loc_82CC8B20;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r21,0(r11)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc8b2c
	goto loc_82CC8B2C;
loc_82CC8B20:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC8B28;
	sub_82CB8A50(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
loc_82CC8B2C:
	// clrlwi r31,r21,24
	ctx.r31.u64 = ctx.r21.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbdd38
	ctx.lr = 0x82CC8B38;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82cc8abc
	if (!ctx.cr0.eq) goto loc_82CC8ABC;
	// b 0x82cc8b48
	goto loc_82CC8B48;
loc_82CC8B44:
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82CC8B48:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x82cc8cac
	if (ctx.cr6.eq) goto loc_82CC8CAC;
	// cmpwi cr6,r21,101
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 101, ctx.xer);
	// beq cr6,0x82cc8b60
	if (ctx.cr6.eq) goto loc_82CC8B60;
	// cmpwi cr6,r21,69
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 69, ctx.xer);
	// bne cr6,0x82cc8cac
	if (!ctx.cr6.eq) goto loc_82CC8CAC;
loc_82CC8B60:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// addi r29,r14,-1
	ctx.r29.s64 = ctx.r14.s64 + -1;
	// beq cr6,0x82cc8cac
	if (ctx.cr6.eq) goto loc_82CC8CAC;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,101
	ctx.r10.s64 = 101;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// stbx r10,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cc7998
	ctx.lr = 0x82CC8B94;
	sub_82CC7998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc8ecc
	if (ctx.cr0.eq) goto loc_82CC8ECC;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc8bc4
	if (ctx.cr0.lt) goto loc_82CC8BC4;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r21,0(r11)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc8bd0
	goto loc_82CC8BD0;
loc_82CC8BC4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC8BCC;
	sub_82CB8A50(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
loc_82CC8BD0:
	// cmpwi cr6,r21,45
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 45, ctx.xer);
	// bne cr6,0x82cc8c0c
	if (!ctx.cr6.eq) goto loc_82CC8C0C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,45
	ctx.r10.s64 = 45;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// stbx r10,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cc7998
	ctx.lr = 0x82CC8C00;
	sub_82CC7998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc8ecc
	if (ctx.cr0.eq) goto loc_82CC8ECC;
	// b 0x82cc8c14
	goto loc_82CC8C14;
loc_82CC8C0C:
	// cmpwi cr6,r21,43
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 43, ctx.xer);
	// bne cr6,0x82cc8c98
	if (!ctx.cr6.eq) goto loc_82CC8C98;
loc_82CC8C14:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// bne cr6,0x82cc8c64
	if (!ctx.cr6.eq) goto loc_82CC8C64;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82cc8c98
	goto loc_82CC8C98;
loc_82CC8C28:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// beq cr6,0x82cc8cac
	if (ctx.cr6.eq) goto loc_82CC8CAC;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// stbx r31,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cc7998
	ctx.lr = 0x82CC8C5C;
	sub_82CC7998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc8ecc
	if (ctx.cr0.eq) goto loc_82CC8ECC;
loc_82CC8C64:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc8c8c
	if (ctx.cr0.lt) goto loc_82CC8C8C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r21,0(r11)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc8c98
	goto loc_82CC8C98;
loc_82CC8C8C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC8C94;
	sub_82CB8A50(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
loc_82CC8C98:
	// clrlwi r31,r21,24
	ctx.r31.u64 = ctx.r21.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbdd38
	ctx.lr = 0x82CC8CA4;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82cc8c28
	if (!ctx.cr0.eq) goto loc_82CC8C28;
loc_82CC8CAC:
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, -1, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82cc8cc8
	if (ctx.cr6.eq) goto loc_82CC8CC8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82cd2ad8
	ctx.lr = 0x82CC8CC8;
	sub_82CD2AD8(ctx, base);
loc_82CC8CC8:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x82cc8ecc
	if (ctx.cr6.eq) goto loc_82CC8ECC;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82cc8d40
	if (!ctx.cr6.eq) goto loc_82CC8D40;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// extsb r11,r15
	ctx.r11.s64 = ctx.r15.s8;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stbx r10,r30,r5
	PPC_STORE_U8(ctx.r30.u32 + ctx.r5.u32, ctx.r10.u8);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lwz r11,28(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CC8D14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82cc8d40
	goto loc_82CC8D40;
loc_82CC8D18:
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// bne cr6,0x82cc8e88
	if (!ctx.cr6.eq) goto loc_82CC8E88;
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// bne cr6,0x82cc8d40
	if (!ctx.cr6.eq) goto loc_82CC8D40;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r11.u32);
loc_82CC8D40:
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lwz r10,716(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// stw r10,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r10.u32);
	// rotlwi r30,r10,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x82cc8e0c
	goto loc_82CC8E0C;
loc_82CC8D60:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc8d90
	if (ctx.cr0.lt) goto loc_82CC8D90;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r21,0(r11)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc8d9c
	goto loc_82CC8D9C;
loc_82CC8D90:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC8D98;
	sub_82CB8A50(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
loc_82CC8D9C:
	// lbz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 0);
	// addi r30,r18,1
	ctx.r30.s64 = ctx.r18.s64 + 1;
	// stw r30,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r30.u32);
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// bne cr6,0x82cc8eb8
	if (!ctx.cr6.eq) goto loc_82CC8EB8;
	// clrlwi r3,r21,24
	ctx.r3.u64 = ctx.r21.u32 & 0xFF;
	// bl 0x82cb5520
	ctx.lr = 0x82CC8DB8;
	sub_82CB5520(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc8e0c
	if (ctx.cr0.eq) goto loc_82CC8E0C;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82cc8de8
	if (ctx.cr0.lt) goto loc_82CC8DE8;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82cc8df0
	goto loc_82CC8DF0;
loc_82CC8DE8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb8a50
	ctx.lr = 0x82CC8DF0;
	sub_82CB8A50(ctx, base);
loc_82CC8DF0:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r30,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r30.u32);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82cc8ea8
	if (!ctx.cr6.eq) goto loc_82CC8EA8;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82CC8E0C:
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, -1, ctx.xer);
	// bne cr6,0x82cc8e34
	if (!ctx.cr6.eq) goto loc_82CC8E34;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bne cr6,0x82cc8ecc
	if (!ctx.cr6.eq) goto loc_82CC8ECC;
	// lwz r11,716(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// bne cr6,0x82cc8ecc
	if (!ctx.cr6.eq) goto loc_82CC8ECC;
	// lwz r30,716(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
loc_82CC8E34:
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82cc7cdc
	if (!ctx.cr0.eq) goto loc_82CC7CDC;
	// b 0x82cc8ecc
	goto loc_82CC8ECC;
loc_82CC8E44:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_82CC8E4C:
	// bl 0x82cb8f58
	ctx.lr = 0x82CC8E50;
	sub_82CB8F58(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82cc8ecc
	goto loc_82CC8ECC;
loc_82CC8E5C:
	// bl 0x82cb8f58
	ctx.lr = 0x82CC8E60;
	sub_82CB8F58(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// extsb. r10,r23
	ctx.r10.s64 = ctx.r23.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82cc8e7c
	if (ctx.cr0.eq) goto loc_82CC8E7C;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// b 0x82cc8ecc
	goto loc_82CC8ECC;
loc_82CC8E7C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x82cc8ecc
	goto loc_82CC8ECC;
loc_82CC8E88:
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, -1, ctx.xer);
	// beq cr6,0x82cc8e9c
	if (ctx.cr6.eq) goto loc_82CC8E9C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82cd2ad8
	ctx.lr = 0x82CC8E9C;
	sub_82CD2AD8(ctx, base);
loc_82CC8E9C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// b 0x82cc8ecc
	goto loc_82CC8ECC;
loc_82CC8EA8:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82cc8eb8
	if (ctx.cr6.eq) goto loc_82CC8EB8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82cd2ad8
	ctx.lr = 0x82CC8EB8;
	sub_82CD2AD8(ctx, base);
loc_82CC8EB8:
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, -1, ctx.xer);
	// beq cr6,0x82cc8ecc
	if (ctx.cr6.eq) goto loc_82CC8ECC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82cd2ad8
	ctx.lr = 0x82CC8ECC;
	sub_82CD2AD8(ctx, base);
loc_82CC8ECC:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82cc8ee0
	if (!ctx.cr6.eq) goto loc_82CC8EE0;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82cb3d50
	ctx.lr = 0x82CC8EE0;
	sub_82CB3D50(ctx, base);
loc_82CC8EE0:
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, -1, ctx.xer);
	// bne cr6,0x82cc8f04
	if (!ctx.cr6.eq) goto loc_82CC8F04;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cc8f20
	if (!ctx.cr6.eq) goto loc_82CC8F20;
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82cc8f20
	if (!ctx.cr0.eq) goto loc_82CC8F20;
	// b 0x82cc7ba0
	goto loc_82CC7BA0;
loc_82CC8F04:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82cc8f1c
	if (!ctx.cr6.eq) goto loc_82CC8F1C;
	// bl 0x82cb8f58
	ctx.lr = 0x82CC8F14;
	sub_82CB8F58(ctx, base);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x82cc7c84
	goto loc_82CC7C84;
loc_82CC8F1C:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82CC8F20:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC8F28"))) PPC_WEAK_FUNC(sub_82CC8F28);
PPC_FUNC_IMPL(__imp__sub_82CC8F28) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC8F30"))) PPC_WEAK_FUNC(sub_82CC8F30);
PPC_FUNC_IMPL(__imp__sub_82CC8F30) {
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
	// bl 0x82cbdc88
	ctx.lr = 0x82CC8F48;
	sub_82CBDC88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bne 0x82cc8f58
	if (!ctx.cr0.eq) goto loc_82CC8F58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CC8F58:
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

__attribute__((alias("__imp__sub_82CC8F6C"))) PPC_WEAK_FUNC(sub_82CC8F6C);
PPC_FUNC_IMPL(__imp__sub_82CC8F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC8F70"))) PPC_WEAK_FUNC(sub_82CC8F70);
PPC_FUNC_IMPL(__imp__sub_82CC8F70) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-65
	ctx.r11.s64 = ctx.r3.s64 + -65;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC8F84"))) PPC_WEAK_FUNC(sub_82CC8F84);
PPC_FUNC_IMPL(__imp__sub_82CC8F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC8F88"))) PPC_WEAK_FUNC(sub_82CC8F88);
PPC_FUNC_IMPL(__imp__sub_82CC8F88) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82cc8fb0
	if (ctx.cr6.eq) goto loc_82CC8FB0;
loc_82CC8F94:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cc8fb0
	if (ctx.cr6.eq) goto loc_82CC8FB0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82cc8f94
	if (ctx.cr6.lt) goto loc_82CC8F94;
loc_82CC8FB0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC8FB8"))) PPC_WEAK_FUNC(sub_82CC8FB8);
PPC_FUNC_IMPL(__imp__sub_82CC8FB8) {
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
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// lwz r11,-15068(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15068);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-15068(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15068, ctx.r11.u32);
	// bl 0x82cb0fe0
	ctx.lr = 0x82CC8FE4;
	sub_82CB0FE0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// beq 0x82cc9004
	if (ctx.cr0.eq) goto loc_82CC9004;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// b 0x82cc9018
	goto loc_82CC9018;
loc_82CC9004:
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// li r9,2
	ctx.r9.s64 = 2;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
loc_82CC9018:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82CC9040"))) PPC_WEAK_FUNC(sub_82CC9040);
PPC_FUNC_IMPL(__imp__sub_82CC9040) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6236(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6236, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC9050"))) PPC_WEAK_FUNC(sub_82CC9050);
PPC_FUNC_IMPL(__imp__sub_82CC9050) {
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
	// lwz r31,15144(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15144);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x82cc9078
	if (!ctx.cr0.eq) goto loc_82CC9078;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82cb1798
	ctx.lr = 0x82CC9078;
	sub_82CB1798(ctx, base);
loc_82CC9078:
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

__attribute__((alias("__imp__sub_82CC9090"))) PPC_WEAK_FUNC(sub_82CC9090);
PPC_FUNC_IMPL(__imp__sub_82CC9090) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC9098"))) PPC_WEAK_FUNC(sub_82CC9098);
PPC_FUNC_IMPL(__imp__sub_82CC9098) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC90A0"))) PPC_WEAK_FUNC(sub_82CC90A0);
PPC_FUNC_IMPL(__imp__sub_82CC90A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC90A8"))) PPC_WEAK_FUNC(sub_82CC90A8);
PPC_FUNC_IMPL(__imp__sub_82CC90A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// lwz r10,6540(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6540);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82cc90cc
	if (!ctx.cr6.eq) goto loc_82CC90CC;
	// lis r8,-31902
	ctx.r8.s64 = -2090729472;
	// li r10,-3
	ctx.r10.s64 = -3;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,6540(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6540, ctx.r9.u32);
	// stw r10,-14548(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14548, ctx.r10.u32);
loc_82CC90CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC90D4"))) PPC_WEAK_FUNC(sub_82CC90D4);
PPC_FUNC_IMPL(__imp__sub_82CC90D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC90D8"))) PPC_WEAK_FUNC(sub_82CC90D8);
PPC_FUNC_IMPL(__imp__sub_82CC90D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82CC90E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r9,7
	ctx.r9.s64 = 7;
	// lwz r30,15336(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15336);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82CC90F8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82CC9100:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82cc9100
	if (!ctx.cr6.eq) goto loc_82CC9100;
	// subf r8,r8,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r8.s64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
loc_82CC9124:
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82cc9124
	if (!ctx.cr6.eq) goto loc_82CC9124;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r29,r10,2
	ctx.r29.s64 = ctx.r10.s64 + 2;
	// bne 0x82cc90f8
	if (!ctx.cr0.eq) goto loc_82CC90F8;
	// addi r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 1;
	// bl 0x82cb0fe0
	ctx.lr = 0x82CC9160;
	sub_82CB0FE0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82cc924c
	if (ctx.cr0.eq) goto loc_82CC924C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// li r26,7
	ctx.r26.s64 = 7;
	// li r27,58
	ctx.r27.s64 = 58;
loc_82CC9174:
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82cb6030
	ctx.lr = 0x82CC9194;
	sub_82CB6030(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc91b4
	if (ctx.cr0.eq) goto loc_82CC91B4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8e40
	ctx.lr = 0x82CC91B4;
	sub_82CB8E40(ctx, base);
loc_82CC91B4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82CC91B8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc91b8
	if (!ctx.cr6.eq) goto loc_82CC91B8;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// lwz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82cb6030
	ctx.lr = 0x82CC91F8;
	sub_82CB6030(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc9218
	if (ctx.cr0.eq) goto loc_82CC9218;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8e40
	ctx.lr = 0x82CC9218;
	sub_82CB8E40(ctx, base);
loc_82CC9218:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82CC921C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc921c
	if (!ctx.cr6.eq) goto loc_82CC921C;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bne 0x82cc9174
	if (!ctx.cr0.eq) goto loc_82CC9174;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_82CC924C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC9258"))) PPC_WEAK_FUNC(sub_82CC9258);
PPC_FUNC_IMPL(__imp__sub_82CC9258) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cc90d8
	sub_82CC90D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC9260"))) PPC_WEAK_FUNC(sub_82CC9260);
PPC_FUNC_IMPL(__imp__sub_82CC9260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82CC9268;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r11,15336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15336);
	// addi r30,r11,104
	ctx.r30.s64 = ctx.r11.s64 + 104;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82CC9284:
	// lwz r10,-48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -48);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82CC928C:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82cc928c
	if (!ctx.cr6.eq) goto loc_82CC928C;
	// subf r8,r8,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r8.s64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
loc_82CC92B0:
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82cc92b0
	if (!ctx.cr6.eq) goto loc_82CC92B0;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r29,r10,2
	ctx.r29.s64 = ctx.r10.s64 + 2;
	// bne 0x82cc9284
	if (!ctx.cr0.eq) goto loc_82CC9284;
	// addi r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 1;
	// bl 0x82cb0fe0
	ctx.lr = 0x82CC92EC;
	sub_82CB0FE0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82cc93d8
	if (ctx.cr0.eq) goto loc_82CC93D8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// li r26,12
	ctx.r26.s64 = 12;
	// li r27,58
	ctx.r27.s64 = 58;
loc_82CC9300:
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// lwz r5,-48(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -48);
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82cb6030
	ctx.lr = 0x82CC9320;
	sub_82CB6030(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc9340
	if (ctx.cr0.eq) goto loc_82CC9340;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8e40
	ctx.lr = 0x82CC9340;
	sub_82CB8E40(ctx, base);
loc_82CC9340:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82CC9344:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc9344
	if (!ctx.cr6.eq) goto loc_82CC9344;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82cb6030
	ctx.lr = 0x82CC9384;
	sub_82CB6030(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc93a4
	if (ctx.cr0.eq) goto loc_82CC93A4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8e40
	ctx.lr = 0x82CC93A4;
	sub_82CB8E40(ctx, base);
loc_82CC93A4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82CC93A8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc93a8
	if (!ctx.cr6.eq) goto loc_82CC93A8;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bne 0x82cc9300
	if (!ctx.cr0.eq) goto loc_82CC9300;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_82CC93D8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC93E4"))) PPC_WEAK_FUNC(sub_82CC93E4);
PPC_FUNC_IMPL(__imp__sub_82CC93E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC93E8"))) PPC_WEAK_FUNC(sub_82CC93E8);
PPC_FUNC_IMPL(__imp__sub_82CC93E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cc9260
	sub_82CC9260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC93F0"))) PPC_WEAK_FUNC(sub_82CC93F0);
PPC_FUNC_IMPL(__imp__sub_82CC93F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82CC93F8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r9,7
	ctx.r9.s64 = 7;
	// lwz r25,15336(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15336);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82CC9410:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82CC9418:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82cc9418
	if (!ctx.cr6.eq) goto loc_82CC9418;
	// subf r8,r8,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r8.s64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
loc_82CC943C:
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82cc943c
	if (!ctx.cr6.eq) goto loc_82CC943C;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// bne 0x82cc9410
	if (!ctx.cr0.eq) goto loc_82CC9410;
	// addi r11,r25,104
	ctx.r11.s64 = ctx.r25.s64 + 104;
	// li r9,12
	ctx.r9.s64 = 12;
loc_82CC9478:
	// lwz r10,-48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -48);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82CC9480:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82cc9480
	if (!ctx.cr6.eq) goto loc_82CC9480;
	// subf r8,r8,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r8.s64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
loc_82CC94A4:
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82cc94a4
	if (!ctx.cr6.eq) goto loc_82CC94A4;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// bne 0x82cc9478
	if (!ctx.cr0.eq) goto loc_82CC9478;
	// lwz r11,152(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 152);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82CC94E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82cc94e0
	if (!ctx.cr6.eq) goto loc_82CC94E0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,156(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 156);
	// rotlwi r6,r10,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82CC9504:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82cc9504
	if (!ctx.cr6.eq) goto loc_82CC9504;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,160(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 160);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82CC9528:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82cc9528
	if (!ctx.cr6.eq) goto loc_82CC9528;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,164(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 164);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82CC954C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82cc954c
	if (!ctx.cr6.eq) goto loc_82CC954C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,168(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 168);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82CC9570:
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82cc9570
	if (!ctx.cr6.eq) goto loc_82CC9570;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r29,r11,189
	ctx.r29.s64 = ctx.r11.s64 + 189;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb0fe0
	ctx.lr = 0x82CC95AC;
	sub_82CB0FE0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82cc9938
	if (ctx.cr0.eq) goto loc_82CC9938;
	// li r5,184
	ctx.r5.s64 = 184;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r31,184
	ctx.r30.s64 = ctx.r31.s64 + 184;
	// bl 0x82cb1160
	ctx.lr = 0x82CC95C8;
	sub_82CB1160(ctx, base);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// addi r28,r25,28
	ctx.r28.s64 = ctx.r25.s64 + 28;
	// subf r24,r25,r31
	ctx.r24.s64 = ctx.r31.s64 - ctx.r25.s64;
	// li r26,7
	ctx.r26.s64 = 7;
loc_82CC95D8:
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,-28(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + -28);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82cb6030
	ctx.lr = 0x82CC95F0;
	sub_82CB6030(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc9610
	if (ctx.cr0.eq) goto loc_82CC9610;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8e40
	ctx.lr = 0x82CC9610;
	sub_82CB8E40(ctx, base);
loc_82CC9610:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82CC9614:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc9614
	if (!ctx.cr6.eq) goto loc_82CC9614;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// stwx r30,r24,r28
	PPC_STORE_U32(ctx.r24.u32 + ctx.r28.u32, ctx.r30.u32);
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82cb6030
	ctx.lr = 0x82CC9650;
	sub_82CB6030(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc9670
	if (ctx.cr0.eq) goto loc_82CC9670;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8e40
	ctx.lr = 0x82CC9670;
	sub_82CB8E40(ctx, base);
loc_82CC9670:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82CC9674:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc9674
	if (!ctx.cr6.eq) goto loc_82CC9674;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// bne 0x82cc95d8
	if (!ctx.cr0.eq) goto loc_82CC95D8;
	// addi r27,r31,104
	ctx.r27.s64 = ctx.r31.s64 + 104;
	// addi r28,r25,56
	ctx.r28.s64 = ctx.r25.s64 + 56;
	// li r26,12
	ctx.r26.s64 = 12;
loc_82CC96B4:
	// stwx r30,r28,r24
	PPC_STORE_U32(ctx.r28.u32 + ctx.r24.u32, ctx.r30.u32);
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82cb6030
	ctx.lr = 0x82CC96CC;
	sub_82CB6030(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc96ec
	if (ctx.cr0.eq) goto loc_82CC96EC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8e40
	ctx.lr = 0x82CC96EC;
	sub_82CB8E40(ctx, base);
loc_82CC96EC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82CC96F0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc96f0
	if (!ctx.cr6.eq) goto loc_82CC96F0;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r5,48(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82cb6030
	ctx.lr = 0x82CC972C;
	sub_82CB6030(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc974c
	if (ctx.cr0.eq) goto loc_82CC974C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8e40
	ctx.lr = 0x82CC974C;
	sub_82CB8E40(ctx, base);
loc_82CC974C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82CC9750:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc9750
	if (!ctx.cr6.eq) goto loc_82CC9750;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// bne 0x82cc96b4
	if (!ctx.cr0.eq) goto loc_82CC96B4;
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,152(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 152);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82cb6030
	ctx.lr = 0x82CC979C;
	sub_82CB6030(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc97bc
	if (ctx.cr0.eq) goto loc_82CC97BC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8e40
	ctx.lr = 0x82CC97BC;
	sub_82CB8E40(ctx, base);
loc_82CC97BC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82CC97C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc97c0
	if (!ctx.cr6.eq) goto loc_82CC97C0;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r5,156(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 156);
	// bl 0x82cb6030
	ctx.lr = 0x82CC97FC;
	sub_82CB6030(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc981c
	if (ctx.cr0.eq) goto loc_82CC981C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8e40
	ctx.lr = 0x82CC981C;
	sub_82CB8E40(ctx, base);
loc_82CC981C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82CC9820:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc9820
	if (!ctx.cr6.eq) goto loc_82CC9820;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r5,160(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 160);
	// bl 0x82cb6030
	ctx.lr = 0x82CC985C;
	sub_82CB6030(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc987c
	if (ctx.cr0.eq) goto loc_82CC987C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8e40
	ctx.lr = 0x82CC987C;
	sub_82CB8E40(ctx, base);
loc_82CC987C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82CC9880:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc9880
	if (!ctx.cr6.eq) goto loc_82CC9880;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r5,164(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 164);
	// bl 0x82cb6030
	ctx.lr = 0x82CC98BC;
	sub_82CB6030(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc98dc
	if (ctx.cr0.eq) goto loc_82CC98DC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8e40
	ctx.lr = 0x82CC98DC;
	sub_82CB8E40(ctx, base);
loc_82CC98DC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82CC98E0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc98e0
	if (!ctx.cr6.eq) goto loc_82CC98E0;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// lwz r5,168(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 168);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82cb6030
	ctx.lr = 0x82CC9918;
	sub_82CB6030(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc9938
	if (ctx.cr0.eq) goto loc_82CC9938;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8e40
	ctx.lr = 0x82CC9938;
	sub_82CB8E40(ctx, base);
loc_82CC9938:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC9944"))) PPC_WEAK_FUNC(sub_82CC9944);
PPC_FUNC_IMPL(__imp__sub_82CC9944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC9948"))) PPC_WEAK_FUNC(sub_82CC9948);
PPC_FUNC_IMPL(__imp__sub_82CC9948) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cc93f0
	sub_82CC93F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC9950"))) PPC_WEAK_FUNC(sub_82CC9950);
PPC_FUNC_IMPL(__imp__sub_82CC9950) {
	PPC_FUNC_PROLOGUE();
	// b 0x82cc9984
	goto loc_82CC9984;
loc_82CC9954:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82CC9984:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc9954
	if (!ctx.cr6.eq) goto loc_82CC9954;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC9994"))) PPC_WEAK_FUNC(sub_82CC9994);
PPC_FUNC_IMPL(__imp__sub_82CC9994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC9998"))) PPC_WEAK_FUNC(sub_82CC9998);
PPC_FUNC_IMPL(__imp__sub_82CC9998) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82cc99e0
	if (!ctx.cr6.gt) goto loc_82CC99E0;
	// li r9,10
	ctx.r9.s64 = 10;
loc_82CC99AC:
	// divw r10,r3,r9
	ctx.r10.s32 = ctx.r3.s32 / ctx.r9.s32;
	// mulli r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 * 10;
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// divw. r3,r3,r9
	ctx.r3.s32 = ctx.r3.s32 / ctx.r9.s32;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// ble 0x82cc99e0
	if (!ctx.cr0.gt) goto loc_82CC99E0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x82cc99ac
	if (ctx.cr6.gt) goto loc_82CC99AC;
loc_82CC99E0:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82CC99EC:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82cc99ec
	if (ctx.cr6.lt) goto loc_82CC99EC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC9A10"))) PPC_WEAK_FUNC(sub_82CC9A10);
PPC_FUNC_IMPL(__imp__sub_82CC9A10) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82cc9a98
	if (ctx.cr6.eq) goto loc_82CC9A98;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x82cc9a68
	if (!ctx.cr6.gt) goto loc_82CC9A68;
	// li r9,10
	ctx.r9.s64 = 10;
loc_82CC9A34:
	// divw r8,r11,r9
	ctx.r8.s32 = ctx.r11.s32 / ctx.r9.s32;
	// mulli r8,r8,10
	ctx.r8.s64 = ctx.r8.s64 * 10;
	// subf r8,r8,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r8.s64;
	// divw. r11,r11,r9
	ctx.r11.s32 = ctx.r11.s32 / ctx.r9.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// ble 0x82cc9a68
	if (!ctx.cr0.gt) goto loc_82CC9A68;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x82cc9a34
	if (ctx.cr6.gt) goto loc_82CC9A34;
loc_82CC9A68:
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
loc_82CC9A74:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82cc9a74
	if (ctx.cr6.lt) goto loc_82CC9A74;
	// blr 
	return;
loc_82CC9A98:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82cc9afc
	if (!ctx.cr6.lt) goto loc_82CC9AFC;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addic. r9,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r9.s64 = ctx.r10.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82cc9ae0
	if (ctx.cr0.eq) goto loc_82CC9AE0;
	// li r9,10
	ctx.r9.s64 = 10;
loc_82CC9AB4:
	// divw r7,r11,r9
	ctx.r7.s32 = ctx.r11.s32 / ctx.r9.s32;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mulli r7,r7,10
	ctx.r7.s64 = ctx.r7.s64 * 10;
	// subf r7,r7,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r7.s64;
	// divw r11,r11,r9
	ctx.r11.s32 = ctx.r11.s32 / ctx.r9.s32;
	// addi r7,r7,48
	ctx.r7.s64 = ctx.r7.s64 + 48;
	// stbx r7,r4,r10
	PPC_STORE_U8(ctx.r4.u32 + ctx.r10.u32, ctx.r7.u8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82cc9ab4
	if (!ctx.cr6.eq) goto loc_82CC9AB4;
loc_82CC9AE0:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82CC9AFC:
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC9B04"))) PPC_WEAK_FUNC(sub_82CC9B04);
PPC_FUNC_IMPL(__imp__sub_82CC9B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC9B08"))) PPC_WEAK_FUNC(sub_82CC9B08);
PPC_FUNC_IMPL(__imp__sub_82CC9B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82CC9B10;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,89
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 89, ctx.xer);
	// bgt cr6,0x82cc9dc4
	if (ctx.cr6.gt) goto loc_82CC9DC4;
	// beq cr6,0x82cc9d84
	if (ctx.cr6.eq) goto loc_82CC9D84;
	// cmpwi cr6,r11,73
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 73, ctx.xer);
	// bgt cr6,0x82cc9cb0
	if (ctx.cr6.gt) goto loc_82CC9CB0;
	// beq cr6,0x82cc9c80
	if (ctx.cr6.eq) goto loc_82CC9C80;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82cca17c
	if (ctx.cr6.eq) goto loc_82CCA17C;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82cca17c
	if (ctx.cr6.eq) goto loc_82CCA17C;
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// beq cr6,0x82cc9c58
	if (ctx.cr6.eq) goto loc_82CC9C58;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// beq cr6,0x82cc9bf4
	if (ctx.cr6.eq) goto loc_82CC9BF4;
	// cmpwi cr6,r11,66
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 66, ctx.xer);
	// beq cr6,0x82cc9b90
	if (ctx.cr6.eq) goto loc_82CC9B90;
	// cmpwi cr6,r11,72
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 72, ctx.xer);
	// bne cr6,0x82cc9f70
	if (!ctx.cr6.eq) goto loc_82CC9F70;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82cc9f4c
	if (ctx.cr6.lt) goto loc_82CC9F4C;
	// cmpwi cr6,r3,23
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 23, ctx.xer);
loc_82CC9B88:
	// ble cr6,0x82cc9e34
	if (!ctx.cr6.gt) goto loc_82CC9E34;
	// b 0x82cc9f4c
	goto loc_82CC9F4C;
loc_82CC9B90:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82cc9f4c
	if (ctx.cr6.lt) goto loc_82CC9F4C;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bgt cr6,0x82cc9f4c
	if (ctx.cr6.gt) goto loc_82CC9F4C;
	// addi r11,r11,26
	ctx.r11.s64 = ctx.r11.s64 + 26;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// b 0x82cc9be4
	goto loc_82CC9BE4;
loc_82CC9BB4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82cca17c
	if (ctx.cr0.eq) goto loc_82CCA17C;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82CC9BE4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc9bb4
	if (!ctx.cr6.eq) goto loc_82CC9BB4;
	// b 0x82cca17c
	goto loc_82CCA17C;
loc_82CC9BF4:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82cc9f4c
	if (ctx.cr6.lt) goto loc_82CC9F4C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bgt cr6,0x82cc9f4c
	if (ctx.cr6.gt) goto loc_82CC9F4C;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// b 0x82cc9c48
	goto loc_82CC9C48;
loc_82CC9C18:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82cca17c
	if (ctx.cr0.eq) goto loc_82CCA17C;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82CC9C48:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc9c18
	if (!ctx.cr6.eq) goto loc_82CC9C18;
	// b 0x82cca17c
	goto loc_82CCA17C;
loc_82CC9C58:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,37
	ctx.r10.s64 = 37;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82cca17c
	goto loc_82CCA17C;
loc_82CC9C80:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82cc9f4c
	if (ctx.cr6.lt) goto loc_82CC9F4C;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// bgt cr6,0x82cc9f4c
	if (ctx.cr6.gt) goto loc_82CC9F4C;
	// li r10,12
	ctx.r10.s64 = 12;
	// divw r10,r11,r10
	ctx.r10.s32 = ctx.r11.s32 / ctx.r10.s32;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// subf. r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82cc9e34
	if (!ctx.cr0.eq) goto loc_82CC9E34;
	// li r3,12
	ctx.r3.s64 = 12;
	// b 0x82cc9e34
	goto loc_82CC9E34;
loc_82CC9CB0:
	// cmpwi cr6,r11,77
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 77, ctx.xer);
	// beq cr6,0x82cc9d70
	if (ctx.cr6.eq) goto loc_82CC9D70;
	// cmpwi cr6,r11,83
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 83, ctx.xer);
	// beq cr6,0x82cc9d68
	if (ctx.cr6.eq) goto loc_82CC9D68;
	// cmpwi cr6,r11,85
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 85, ctx.xer);
	// beq cr6,0x82cc9d08
	if (ctx.cr6.eq) goto loc_82CC9D08;
	// cmpwi cr6,r11,87
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 87, ctx.xer);
	// beq cr6,0x82cc9cdc
	if (ctx.cr6.eq) goto loc_82CC9CDC;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// bne cr6,0x82cc9f70
	if (!ctx.cr6.eq) goto loc_82CC9F70;
	// b 0x82cc9ea4
	goto loc_82CC9EA4;
loc_82CC9CDC:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82cc9f4c
	if (ctx.cr6.lt) goto loc_82CC9F4C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bgt cr6,0x82cc9f4c
	if (ctx.cr6.gt) goto loc_82CC9F4C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82cc9d00
	if (!ctx.cr6.eq) goto loc_82CC9D00;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82cc9d1c
	goto loc_82CC9D1C;
loc_82CC9D00:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82cc9d1c
	goto loc_82CC9D1C;
loc_82CC9D08:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82cc9f4c
	if (ctx.cr6.lt) goto loc_82CC9F4C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bgt cr6,0x82cc9f4c
	if (ctx.cr6.gt) goto loc_82CC9F4C;
loc_82CC9D1C:
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82cc9f4c
	if (ctx.cr6.lt) goto loc_82CC9F4C;
	// cmpwi cr6,r10,365
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 365, ctx.xer);
	// bgt cr6,0x82cc9f4c
	if (ctx.cr6.gt) goto loc_82CC9F4C;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82cc9d40
	if (!ctx.cr6.lt) goto loc_82CC9D40;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cc9e34
	goto loc_82CC9E34;
loc_82CC9D40:
	// lwz r9,28(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// li r10,7
	ctx.r10.s64 = 7;
	// divw r8,r9,r10
	ctx.r8.s32 = ctx.r9.s32 / ctx.r10.s32;
	// divw r3,r9,r10
	ctx.r3.s32 = ctx.r9.s32 / ctx.r10.s32;
	// mulli r10,r8,7
	ctx.r10.s64 = ctx.r8.s64 * 7;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82cc9e34
	if (ctx.cr6.lt) goto loc_82CC9E34;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x82cc9e34
	goto loc_82CC9E34;
loc_82CC9D68:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82cc9d74
	goto loc_82CC9D74;
loc_82CC9D70:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_82CC9D74:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82cc9f4c
	if (ctx.cr6.lt) goto loc_82CC9F4C;
	// cmpwi cr6,r3,59
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 59, ctx.xer);
	// b 0x82cc9b88
	goto loc_82CC9B88;
loc_82CC9D84:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r11,-1900
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1900, ctx.xer);
	// blt cr6,0x82cc9f4c
	if (ctx.cr6.lt) goto loc_82CC9F4C;
	// cmpwi cr6,r11,8099
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8099, ctx.xer);
	// bgt cr6,0x82cc9f4c
	if (ctx.cr6.gt) goto loc_82CC9F4C;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r10,100
	ctx.r10.s64 = 100;
	// li r4,4
	ctx.r4.s64 = 4;
	// divw r11,r9,r10
	ctx.r11.s32 = ctx.r9.s32 / ctx.r10.s32;
	// divw r10,r9,r10
	ctx.r10.s32 = ctx.r9.s32 / ctx.r10.s32;
	// addi r11,r11,19
	ctx.r11.s64 = ctx.r11.s64 + 19;
	// mulli r8,r10,100
	ctx.r8.s64 = ctx.r10.s64 * 100;
	// mulli r10,r11,100
	ctx.r10.s64 = ctx.r11.s64 * 100;
	// subf r11,r8,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82cc9e38
	goto loc_82CC9E38;
loc_82CC9DC4:
	// cmpwi cr6,r11,109
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 109, ctx.xer);
	// bgt cr6,0x82cc9fe0
	if (ctx.cr6.gt) goto loc_82CC9FE0;
	// beq cr6,0x82cc9fc4
	if (ctx.cr6.eq) goto loc_82CC9FC4;
	// cmpwi cr6,r11,90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// beq cr6,0x82cca008
	if (ctx.cr6.eq) goto loc_82CCA008;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// beq cr6,0x82cc9f38
	if (ctx.cr6.eq) goto loc_82CC9F38;
	// cmpwi cr6,r11,98
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 98, ctx.xer);
	// beq cr6,0x82cc9ed4
	if (ctx.cr6.eq) goto loc_82CC9ED4;
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// beq cr6,0x82cc9e48
	if (ctx.cr6.eq) goto loc_82CC9E48;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// beq cr6,0x82cc9e20
	if (ctx.cr6.eq) goto loc_82CC9E20;
	// cmpwi cr6,r11,106
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 106, ctx.xer);
	// bne cr6,0x82cc9f70
	if (!ctx.cr6.eq) goto loc_82CC9F70;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82cc9f4c
	if (ctx.cr6.lt) goto loc_82CC9F4C;
	// cmpwi cr6,r11,365
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 365, ctx.xer);
	// bgt cr6,0x82cc9f4c
	if (ctx.cr6.gt) goto loc_82CC9F4C;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// b 0x82cc9e38
	goto loc_82CC9E38;
loc_82CC9E20:
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x82cc9f4c
	if (ctx.cr6.lt) goto loc_82CC9F4C;
	// cmpwi cr6,r3,31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 31, ctx.xer);
	// bgt cr6,0x82cc9f4c
	if (ctx.cr6.gt) goto loc_82CC9F4C;
loc_82CC9E34:
	// li r4,2
	ctx.r4.s64 = 2;
loc_82CC9E38:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82cc9a10
	ctx.lr = 0x82CC9E44;
	sub_82CC9A10(ctx, base);
	// b 0x82cca17c
	goto loc_82CCA17C;
loc_82CC9E48:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x82cc9ecc
	if (ctx.cr6.eq) goto loc_82CC9ECC;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82CC9E68:
	// bl 0x82cca188
	ctx.lr = 0x82CC9E6C;
	sub_82CCA188(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cc9f70
	if (ctx.cr0.eq) goto loc_82CC9F70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc9f70
	if (ctx.cr6.eq) goto loc_82CC9F70;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82CC9EA4:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82CC9EBC:
	// bl 0x82cca188
	ctx.lr = 0x82CC9EC0;
	sub_82CCA188(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82cca17c
	if (!ctx.cr0.eq) goto loc_82CCA17C;
	// b 0x82cc9f70
	goto loc_82CC9F70;
loc_82CC9ECC:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82cc9e68
	goto loc_82CC9E68;
loc_82CC9ED4:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82cc9f4c
	if (ctx.cr6.lt) goto loc_82CC9F4C;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bgt cr6,0x82cc9f4c
	if (ctx.cr6.gt) goto loc_82CC9F4C;
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// b 0x82cc9f28
	goto loc_82CC9F28;
loc_82CC9EF8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82cca17c
	if (ctx.cr0.eq) goto loc_82CCA17C;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82CC9F28:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc9ef8
	if (!ctx.cr6.eq) goto loc_82CC9EF8;
	// b 0x82cca17c
	goto loc_82CCA17C;
loc_82CC9F38:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82cc9f4c
	if (ctx.cr6.lt) goto loc_82CC9F4C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x82cc9f78
	if (!ctx.cr6.gt) goto loc_82CC9F78;
loc_82CC9F4C:
	// bl 0x82cb8f58
	ctx.lr = 0x82CC9F50;
	sub_82CB8F58(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CC9F70;
	sub_82CB8DA0(ctx, base);
loc_82CC9F70:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cca180
	goto loc_82CCA180;
loc_82CC9F78:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// b 0x82cc9fb4
	goto loc_82CC9FB4;
loc_82CC9F84:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82cca17c
	if (ctx.cr0.eq) goto loc_82CCA17C;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82CC9FB4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc9f84
	if (!ctx.cr6.eq) goto loc_82CC9F84;
	// b 0x82cca17c
	goto loc_82CCA17C;
loc_82CC9FC4:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82cc9f4c
	if (ctx.cr6.lt) goto loc_82CC9F4C;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bgt cr6,0x82cc9f4c
	if (ctx.cr6.gt) goto loc_82CC9F4C;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// b 0x82cc9e34
	goto loc_82CC9E34;
loc_82CC9FE0:
	// cmpwi cr6,r11,112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 112, ctx.xer);
	// beq cr6,0x82cca0d0
	if (ctx.cr6.eq) goto loc_82CCA0D0;
	// cmpwi cr6,r11,119
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 119, ctx.xer);
	// beq cr6,0x82cca0b4
	if (ctx.cr6.eq) goto loc_82CCA0B4;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x82cca088
	if (ctx.cr6.eq) goto loc_82CCA088;
	// cmpwi cr6,r11,121
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 121, ctx.xer);
	// beq cr6,0x82cca068
	if (ctx.cr6.eq) goto loc_82CCA068;
	// cmpwi cr6,r11,122
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 122, ctx.xer);
	// bne cr6,0x82cc9f70
	if (!ctx.cr6.eq) goto loc_82CC9F70;
loc_82CCA008:
	// bl 0x82cd3798
	ctx.lr = 0x82CCA00C;
	sub_82CD3798(ctx, base);
	// bl 0x82cd2ff8
	ctx.lr = 0x82CCA010;
	sub_82CD2FF8(ctx, base);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,29,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x4;
	// xori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 ^ 4;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// b 0x82cca058
	goto loc_82CCA058;
loc_82CCA028:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82cca17c
	if (ctx.cr0.eq) goto loc_82CCA17C;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82CCA058:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cca028
	if (!ctx.cr6.eq) goto loc_82CCA028;
	// b 0x82cca17c
	goto loc_82CCA17C;
loc_82CCA068:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82cc9f4c
	if (ctx.cr6.lt) goto loc_82CC9F4C;
	// li r10,100
	ctx.r10.s64 = 100;
	// divw r10,r11,r10
	ctx.r10.s32 = ctx.r11.s32 / ctx.r10.s32;
	// mulli r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 * 100;
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x82cc9e34
	goto loc_82CC9E34;
loc_82CCA088:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x82cca0ac
	if (ctx.cr6.eq) goto loc_82CCA0AC;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82cc9ebc
	goto loc_82CC9EBC;
loc_82CCA0AC:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82cc9ebc
	goto loc_82CC9EBC;
loc_82CCA0B4:
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82cc9f4c
	if (ctx.cr6.lt) goto loc_82CC9F4C;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bgt cr6,0x82cc9f4c
	if (ctx.cr6.gt) goto loc_82CC9F4C;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82cc9e38
	goto loc_82CC9E38;
loc_82CCA0D0:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82cc9f4c
	if (ctx.cr6.lt) goto loc_82CC9F4C;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// bgt cr6,0x82cc9f4c
	if (ctx.cr6.gt) goto loc_82CC9F4C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bgt cr6,0x82cca138
	if (ctx.cr6.gt) goto loc_82CCA138;
	// lwz r11,152(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 152);
	// b 0x82cca12c
	goto loc_82CCA12C;
loc_82CCA0F8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82cca17c
	if (ctx.cr0.eq) goto loc_82CCA17C;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82CCA12C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cca0f8
	if (!ctx.cr6.eq) goto loc_82CCA0F8;
	// b 0x82cca17c
	goto loc_82CCA17C;
loc_82CCA138:
	// lwz r11,156(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	// b 0x82cca174
	goto loc_82CCA174;
loc_82CCA140:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82cca17c
	if (ctx.cr0.eq) goto loc_82CCA17C;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82CCA174:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cca140
	if (!ctx.cr6.eq) goto loc_82CCA140;
loc_82CCA17C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CCA180:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCA188"))) PPC_WEAK_FUNC(sub_82CCA188);
PPC_FUNC_IMPL(__imp__sub_82CCA188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82CCA190;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82cca1c4
	if (ctx.cr6.lt) goto loc_82CCA1C4;
	// beq cr6,0x82cca1bc
	if (ctx.cr6.eq) goto loc_82CCA1BC;
	// lwz r31,168(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 168);
	// b 0x82cca1c8
	goto loc_82CCA1C8;
loc_82CCA1BC:
	// lwz r31,164(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 164);
	// b 0x82cca1c8
	goto loc_82CCA1C8;
loc_82CCA1C4:
	// lwz r31,160(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 160);
loc_82CCA1C8:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb. r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82cca67c
	if (ctx.cr0.eq) goto loc_82CCA67C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r24,r10,25176
	ctx.r24.s64 = ctx.r10.s64 + 25176;
	// addi r23,r11,25168
	ctx.r23.s64 = ctx.r11.s64 + 25168;
loc_82CCA1E4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cca67c
	if (ctx.cr6.eq) goto loc_82CCA67C;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_82CCA200:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82cca200
	if (ctx.cr6.eq) goto loc_82CCA200;
	// cmpwi cr6,r9,100
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 100, ctx.xer);
	// bgt cr6,0x82cca3d0
	if (ctx.cr6.gt) goto loc_82CCA3D0;
	// beq cr6,0x82cca394
	if (ctx.cr6.eq) goto loc_82CCA394;
	// cmpwi cr6,r9,39
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 39, ctx.xer);
	// beq cr6,0x82cca2e4
	if (ctx.cr6.eq) goto loc_82CCA2E4;
	// cmpwi cr6,r9,65
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 65, ctx.xer);
	// beq cr6,0x82cca24c
	if (ctx.cr6.eq) goto loc_82CCA24C;
	// cmpwi cr6,r9,72
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 72, ctx.xer);
	// beq cr6,0x82cca2a4
	if (ctx.cr6.eq) goto loc_82CCA2A4;
	// cmpwi cr6,r9,77
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 77, ctx.xer);
	// beq cr6,0x82cca268
	if (ctx.cr6.eq) goto loc_82CCA268;
	// cmpwi cr6,r9,97
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 97, ctx.xer);
	// bne cr6,0x82cca5b8
	if (!ctx.cr6.eq) goto loc_82CCA5B8;
loc_82CCA24C:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd3928
	ctx.lr = 0x82CCA258;
	sub_82CD3928(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82cca2c4
	if (!ctx.cr0.eq) goto loc_82CCA2C4;
	// addi r27,r31,5
	ctx.r27.s64 = ctx.r31.s64 + 5;
	// b 0x82cca2dc
	goto loc_82CCA2DC;
loc_82CCA268:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82cca298
	if (ctx.cr6.eq) goto loc_82CCA298;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82cca29c
	if (ctx.cr6.eq) goto loc_82CCA29C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82cca290
	if (ctx.cr6.eq) goto loc_82CCA290;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82cca5b8
	if (!ctx.cr6.eq) goto loc_82CCA5B8;
	// li r4,66
	ctx.r4.s64 = 66;
	// b 0x82cca5b8
	goto loc_82CCA5B8;
loc_82CCA290:
	// li r4,98
	ctx.r4.s64 = 98;
	// b 0x82cca5b8
	goto loc_82CCA5B8;
loc_82CCA298:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82CCA29C:
	// li r4,109
	ctx.r4.s64 = 109;
	// b 0x82cca5b8
	goto loc_82CCA5B8;
loc_82CCA2A4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82cca2b8
	if (ctx.cr6.eq) goto loc_82CCA2B8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82cca2bc
	if (ctx.cr6.eq) goto loc_82CCA2BC;
	// b 0x82cca5b8
	goto loc_82CCA5B8;
loc_82CCA2B8:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82CCA2BC:
	// li r4,72
	ctx.r4.s64 = 72;
	// b 0x82cca5b8
	goto loc_82CCA5B8;
loc_82CCA2C4:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd3928
	ctx.lr = 0x82CCA2D0;
	sub_82CD3928(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82cca2dc
	if (!ctx.cr0.eq) goto loc_82CCA2DC;
	// addi r27,r31,3
	ctx.r27.s64 = ctx.r31.s64 + 3;
loc_82CCA2DC:
	// li r4,112
	ctx.r4.s64 = 112;
	// b 0x82cca5b8
	goto loc_82CCA5B8;
loc_82CCA2E4:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq 0x82cca670
	if (ctx.cr0.eq) goto loc_82CCA670;
	// b 0x82cca384
	goto loc_82CCA384;
loc_82CCA2F4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cca670
	if (ctx.cr6.eq) goto loc_82CCA670;
	// cmpwi cr6,r3,39
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 39, ctx.xer);
	// beq cr6,0x82cca66c
	if (ctx.cr6.eq) goto loc_82CCA66C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82cb5500
	ctx.lr = 0x82CCA310;
	sub_82CB5500(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cca35c
	if (ctx.cr0.eq) goto loc_82CCA35C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82cca35c
	if (!ctx.cr6.gt) goto loc_82CCA35C;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cca688
	if (ctx.cr6.eq) goto loc_82CCA688;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82CCA35C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82CCA384:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb. r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82cca2f4
	if (!ctx.cr0.eq) goto loc_82CCA2F4;
	// b 0x82cca670
	goto loc_82CCA670;
loc_82CCA394:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82cca3c4
	if (ctx.cr6.eq) goto loc_82CCA3C4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82cca3c8
	if (ctx.cr6.eq) goto loc_82CCA3C8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82cca3bc
	if (ctx.cr6.eq) goto loc_82CCA3BC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82cca5b8
	if (!ctx.cr6.eq) goto loc_82CCA5B8;
	// li r4,65
	ctx.r4.s64 = 65;
	// b 0x82cca5b8
	goto loc_82CCA5B8;
loc_82CCA3BC:
	// li r4,97
	ctx.r4.s64 = 97;
	// b 0x82cca5b8
	goto loc_82CCA5B8;
loc_82CCA3C4:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82CCA3C8:
	// li r4,100
	ctx.r4.s64 = 100;
	// b 0x82cca5b8
	goto loc_82CCA5B8;
loc_82CCA3D0:
	// cmpwi cr6,r9,104
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 104, ctx.xer);
	// beq cr6,0x82cca59c
	if (ctx.cr6.eq) goto loc_82CCA59C;
	// cmpwi cr6,r9,109
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 109, ctx.xer);
	// beq cr6,0x82cca57c
	if (ctx.cr6.eq) goto loc_82CCA57C;
	// cmpwi cr6,r9,115
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 115, ctx.xer);
	// beq cr6,0x82cca55c
	if (ctx.cr6.eq) goto loc_82CCA55C;
	// cmpwi cr6,r9,116
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 116, ctx.xer);
	// beq cr6,0x82cca418
	if (ctx.cr6.eq) goto loc_82CCA418;
	// cmpwi cr6,r9,121
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 121, ctx.xer);
	// bne cr6,0x82cca5b8
	if (!ctx.cr6.eq) goto loc_82CCA5B8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82cca410
	if (ctx.cr6.eq) goto loc_82CCA410;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82cca5b8
	if (!ctx.cr6.eq) goto loc_82CCA5B8;
	// li r4,89
	ctx.r4.s64 = 89;
	// b 0x82cca5b8
	goto loc_82CCA5B8;
loc_82CCA410:
	// li r4,121
	ctx.r4.s64 = 121;
	// b 0x82cca5b8
	goto loc_82CCA5B8;
loc_82CCA418:
	// lwz r9,8(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// cmpwi cr6,r9,11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 11, ctx.xer);
	// bgt cr6,0x82cca42c
	if (ctx.cr6.gt) goto loc_82CCA42C;
	// lwz r31,152(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 152);
	// b 0x82cca430
	goto loc_82CCA430;
loc_82CCA42C:
	// lwz r31,156(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 156);
loc_82CCA430:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82cca54c
	if (!ctx.cr6.eq) goto loc_82CCA54C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cca54c
	if (ctx.cr6.eq) goto loc_82CCA54C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cb5500
	ctx.lr = 0x82CCA450;
	sub_82CB5500(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cca49c
	if (ctx.cr0.eq) goto loc_82CCA49C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82cca49c
	if (!ctx.cr6.gt) goto loc_82CCA49C;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cca688
	if (ctx.cr6.eq) goto loc_82CCA688;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82CCA49C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82cca5e4
	goto loc_82CCA5E4;
loc_82CCA4C4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82cca5e4
	if (!ctx.cr6.gt) goto loc_82CCA5E4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82cb5500
	ctx.lr = 0x82CCA4D8;
	sub_82CB5500(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cca524
	if (ctx.cr0.eq) goto loc_82CCA524;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82cca524
	if (!ctx.cr6.gt) goto loc_82CCA524;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cca688
	if (ctx.cr6.eq) goto loc_82CCA688;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82CCA524:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82CCA54C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb. r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82cca4c4
	if (!ctx.cr0.eq) goto loc_82CCA4C4;
	// b 0x82cca5e4
	goto loc_82CCA5E4;
loc_82CCA55C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82cca570
	if (ctx.cr6.eq) goto loc_82CCA570;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82cca574
	if (ctx.cr6.eq) goto loc_82CCA574;
	// b 0x82cca5b8
	goto loc_82CCA5B8;
loc_82CCA570:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82CCA574:
	// li r4,83
	ctx.r4.s64 = 83;
	// b 0x82cca5b8
	goto loc_82CCA5B8;
loc_82CCA57C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82cca590
	if (ctx.cr6.eq) goto loc_82CCA590;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82cca594
	if (ctx.cr6.eq) goto loc_82CCA594;
	// b 0x82cca5b8
	goto loc_82CCA5B8;
loc_82CCA590:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82CCA594:
	// li r4,77
	ctx.r4.s64 = 77;
	// b 0x82cca5b8
	goto loc_82CCA5B8;
loc_82CCA59C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82cca5b0
	if (ctx.cr6.eq) goto loc_82CCA5B0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82cca5b4
	if (ctx.cr6.eq) goto loc_82CCA5B4;
	// b 0x82cca5b8
	goto loc_82CCA5B8;
loc_82CCA5B0:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82CCA5B4:
	// li r4,73
	ctx.r4.s64 = 73;
loc_82CCA5B8:
	// extsb. r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cca5ec
	if (ctx.cr0.eq) goto loc_82CCA5EC;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82cc9b08
	ctx.lr = 0x82CCA5DC;
	sub_82CC9B08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cca688
	if (ctx.cr0.eq) goto loc_82CCA688;
loc_82CCA5E4:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// b 0x82cca670
	goto loc_82CCA670;
loc_82CCA5EC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cb5500
	ctx.lr = 0x82CCA5FC;
	sub_82CB5500(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cca648
	if (ctx.cr0.eq) goto loc_82CCA648;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82cca648
	if (!ctx.cr6.gt) goto loc_82CCA648;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cca688
	if (ctx.cr6.eq) goto loc_82CCA688;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82CCA648:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82CCA66C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82CCA670:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb. r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82cca1e4
	if (!ctx.cr0.eq) goto loc_82CCA1E4;
loc_82CCA67C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CCA680:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82CCA688:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cca680
	goto loc_82CCA680;
}

__attribute__((alias("__imp__sub_82CCA690"))) PPC_WEAK_FUNC(sub_82CCA690);
PPC_FUNC_IMPL(__imp__sub_82CCA690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82CCA698;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cca850
	if (ctx.cr6.eq) goto loc_82CCA850;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82cca850
	if (ctx.cr6.eq) goto loc_82CCA850;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stb r25,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r25.u8);
	// beq cr6,0x82cca850
	if (ctx.cr6.eq) goto loc_82CCA850;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// addi r30,r11,13712
	ctx.r30.s64 = ctx.r11.s64 + 13712;
	// bne cr6,0x82cca6f0
	if (!ctx.cr6.eq) goto loc_82CCA6F0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r29,212(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// b 0x82cca6f4
	goto loc_82CCA6F4;
loc_82CCA6F0:
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
loc_82CCA6F4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82cca828
	if (ctx.cr6.eq) goto loc_82CCA828;
loc_82CCA704:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb. r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cca7ec
	if (ctx.cr0.eq) goto loc_82CCA7EC;
	// cmpwi cr6,r3,37
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 37, ctx.xer);
	// beq cr6,0x82cca794
	if (ctx.cr6.eq) goto loc_82CCA794;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb5500
	ctx.lr = 0x82CCA720;
	sub_82CB5500(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cca76c
	if (ctx.cr0.eq) goto loc_82CCA76C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82cca76c
	if (!ctx.cr6.gt) goto loc_82CCA76C;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cca824
	if (ctx.cr6.eq) goto loc_82CCA824;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82CCA76C:
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// b 0x82cca7e0
	goto loc_82CCA7E0;
loc_82CCA794:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82cca808
	if (ctx.cr6.eq) goto loc_82CCA808;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,35
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 35, ctx.xer);
	// bne cr6,0x82cca7b8
	if (!ctx.cr6.eq) goto loc_82CCA7B8;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82CCA7B8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,180
	ctx.r6.s64 = ctx.r1.s64 + 180;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82cc9b08
	ctx.lr = 0x82CCA7D4;
	sub_82CC9B08(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cca81c
	if (ctx.cr0.eq) goto loc_82CCA81C;
loc_82CCA7E0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cca704
	if (!ctx.cr6.eq) goto loc_82CCA704;
loc_82CCA7EC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cca828
	if (ctx.cr6.eq) goto loc_82CCA828;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stb r25,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r25.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r3,r11,r27
	ctx.r3.s64 = ctx.r27.s64 - ctx.r11.s64;
	// b 0x82cca878
	goto loc_82CCA878;
loc_82CCA808:
	// bl 0x82cb8f58
	ctx.lr = 0x82CCA80C;
	sub_82CB8F58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,22
	ctx.r10.s64 = 22;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82cca874
	goto loc_82CCA874;
loc_82CCA81C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cca828
	if (ctx.cr6.eq) goto loc_82CCA828;
loc_82CCA824:
	// li r26,1
	ctx.r26.s64 = 1;
loc_82CCA828:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stb r25,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r25.u8);
	// bne cr6,0x82cca850
	if (!ctx.cr6.eq) goto loc_82CCA850;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cca850
	if (!ctx.cr6.eq) goto loc_82CCA850;
	// bl 0x82cb8f58
	ctx.lr = 0x82CCA844;
	sub_82CB8F58(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82cca874
	goto loc_82CCA874;
loc_82CCA850:
	// bl 0x82cb8f58
	ctx.lr = 0x82CCA854;
	sub_82CB8F58(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CCA874;
	sub_82CB8DA0(ctx, base);
loc_82CCA874:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CCA878:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCA880"))) PPC_WEAK_FUNC(sub_82CCA880);
PPC_FUNC_IMPL(__imp__sub_82CCA880) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82cca690
	sub_82CCA690(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCA88C"))) PPC_WEAK_FUNC(sub_82CCA88C);
PPC_FUNC_IMPL(__imp__sub_82CCA88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCA890"))) PPC_WEAK_FUNC(sub_82CCA890);
PPC_FUNC_IMPL(__imp__sub_82CCA890) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82cca690
	sub_82CCA690(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCA89C"))) PPC_WEAK_FUNC(sub_82CCA89C);
PPC_FUNC_IMPL(__imp__sub_82CCA89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCA8A0"))) PPC_WEAK_FUNC(sub_82CCA8A0);
PPC_FUNC_IMPL(__imp__sub_82CCA8A0) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82cca690
	sub_82CCA690(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCA8A8"))) PPC_WEAK_FUNC(sub_82CCA8A8);
PPC_FUNC_IMPL(__imp__sub_82CCA8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r3,15344(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15344);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCA8B4"))) PPC_WEAK_FUNC(sub_82CCA8B4);
PPC_FUNC_IMPL(__imp__sub_82CCA8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCA8B8"))) PPC_WEAK_FUNC(sub_82CCA8B8);
PPC_FUNC_IMPL(__imp__sub_82CCA8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r3,15340(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15340);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCA8C4"))) PPC_WEAK_FUNC(sub_82CCA8C4);
PPC_FUNC_IMPL(__imp__sub_82CCA8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCA8C8"))) PPC_WEAK_FUNC(sub_82CCA8C8);
PPC_FUNC_IMPL(__imp__sub_82CCA8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r3,15400(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15400);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCA8D4"))) PPC_WEAK_FUNC(sub_82CCA8D4);
PPC_FUNC_IMPL(__imp__sub_82CCA8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCA8D8"))) PPC_WEAK_FUNC(sub_82CCA8D8);
PPC_FUNC_IMPL(__imp__sub_82CCA8D8) {
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
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82ccac58
	ctx.lr = 0x82CCA8FC;
	sub_82CCAC58(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82cca91c
	if (!ctx.cr6.eq) goto loc_82CCA91C;
	// bl 0x82cb8f58
	ctx.lr = 0x82CCA908;
	sub_82CB8F58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82cca984
	goto loc_82CCA984;
loc_82CCA91C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82e651a8
	ctx.lr = 0x82CCA92C;
	sub_82E651A8(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82cca950
	if (!ctx.cr6.eq) goto loc_82CCA950;
	// bl 0x82bf2188
	ctx.lr = 0x82CCA93C;
	sub_82BF2188(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82cca950
	if (ctx.cr0.eq) goto loc_82CCA950;
	// bl 0x82cb8fc8
	ctx.lr = 0x82CCA948;
	sub_82CB8FC8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82cca984
	goto loc_82CCA984;
loc_82CCA950:
	// srawi r11,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 5;
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,6272
	ctx.r10.s64 = ctx.r10.s64 + 6272;
	// rlwinm r11,r31,6,21,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0x7C0;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82CCA984:
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

__attribute__((alias("__imp__sub_82CCA99C"))) PPC_WEAK_FUNC(sub_82CCA99C);
PPC_FUNC_IMPL(__imp__sub_82CCA99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCA9A8"))) PPC_WEAK_FUNC(sub_82CCA9A8);
PPC_FUNC_IMPL(__imp__sub_82CCA9A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82CCA9B0;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// li r24,-1
	ctx.r24.s64 = -1;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// std r24,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r24.u64);
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// bne cr6,0x82cca9fc
	if (!ctx.cr6.eq) goto loc_82CCA9FC;
	// bl 0x82cb8f90
	ctx.lr = 0x82CCA9DC;
	sub_82CB8F90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82cb8f58
	ctx.lr = 0x82CCA9E8;
	sub_82CB8F58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82ccaad8
	goto loc_82CCAAD8;
loc_82CCA9FC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82ccaa14
	if (ctx.cr6.lt) goto loc_82CCAA14;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// lwz r11,6244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6244);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ccaa4c
	if (ctx.cr6.lt) goto loc_82CCAA4C;
loc_82CCAA14:
	// bl 0x82cb8f90
	ctx.lr = 0x82CCAA18;
	sub_82CB8F90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82cb8f58
	ctx.lr = 0x82CCAA24;
	sub_82CB8F58(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CCAA44;
	sub_82CB8DA0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ccaad8
	goto loc_82CCAAD8;
loc_82CCAA4C:
	// srawi r11,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,6272
	ctx.r28.s64 = ctx.r10.s64 + 6272;
	// rlwinm r29,r30,6,21,25
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0x7C0;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccaa14
	if (ctx.cr0.eq) goto loc_82CCAA14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ccad28
	ctx.lr = 0x82CCAA7C;
	sub_82CCAD28(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccaaac
	if (ctx.cr0.eq) goto loc_82CCAAAC;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cca8d8
	ctx.lr = 0x82CCAAA4;
	sub_82CCA8D8(ctx, base);
	// std r3,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r3.u64);
	// b 0x82ccaac8
	goto loc_82CCAAC8;
loc_82CCAAAC:
	// bl 0x82cb8f58
	ctx.lr = 0x82CCAAB0;
	sub_82CB8F58(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82cb8f90
	ctx.lr = 0x82CCAABC;
	sub_82CB8F90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// std r24,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r24.u64);
loc_82CCAAC8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x82ccab00
	ctx.lr = 0x82CCAAD4;
	sub_82CCAB00(ctx, base);
	// ld r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
loc_82CCAAD8:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCAAE0"))) PPC_WEAK_FUNC(sub_82CCAAE0);
PPC_FUNC_IMPL(__imp__sub_82CCAAE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,180(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// b 0x82ccab18
	goto loc_82CCAB18;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CCAB18:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ccae20
	ctx.lr = 0x82CCAB20;
	sub_82CCAE20(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCAB00"))) PPC_WEAK_FUNC(sub_82CCAB00);
PPC_FUNC_IMPL(__imp__sub_82CCAB00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ccae20
	ctx.lr = 0x82CCAB20;
	sub_82CCAE20(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCAB38"))) PPC_WEAK_FUNC(sub_82CCAB38);
PPC_FUNC_IMPL(__imp__sub_82CCAB38) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ccab8c
	if (ctx.cr6.lt) goto loc_82CCAB8C;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// lwz r11,6244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6244);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ccab8c
	if (!ctx.cr6.lt) goto loc_82CCAB8C;
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,6272
	ctx.r10.s64 = ctx.r10.s64 + 6272;
	// rlwinm r11,r3,6,21,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82ccab8c
	if (!ctx.cr6.eq) goto loc_82CCAB8C;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ccabac
	goto loc_82CCABAC;
loc_82CCAB8C:
	// bl 0x82cb8f58
	ctx.lr = 0x82CCAB90;
	sub_82CB8F58(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82cb8f90
	ctx.lr = 0x82CCAB9C;
	sub_82CB8F90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82CCABAC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCABBC"))) PPC_WEAK_FUNC(sub_82CCABBC);
PPC_FUNC_IMPL(__imp__sub_82CCABBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCABC0"))) PPC_WEAK_FUNC(sub_82CCABC0);
PPC_FUNC_IMPL(__imp__sub_82CCABC0) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ccac24
	if (ctx.cr6.lt) goto loc_82CCAC24;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// lwz r11,6244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6244);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ccac24
	if (!ctx.cr6.lt) goto loc_82CCAC24;
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,6272
	ctx.r10.s64 = ctx.r10.s64 + 6272;
	// rlwinm r11,r3,6,21,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ccac24
	if (ctx.cr0.eq) goto loc_82CCAC24;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82ccac24
	if (ctx.cr6.eq) goto loc_82CCAC24;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ccac40
	goto loc_82CCAC40;
loc_82CCAC24:
	// bl 0x82cb8f58
	ctx.lr = 0x82CCAC28;
	sub_82CB8F58(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82cb8f90
	ctx.lr = 0x82CCAC34;
	sub_82CB8F90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CCAC40:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCAC54"))) PPC_WEAK_FUNC(sub_82CCAC54);
PPC_FUNC_IMPL(__imp__sub_82CCAC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCAC58"))) PPC_WEAK_FUNC(sub_82CCAC58);
PPC_FUNC_IMPL(__imp__sub_82CCAC58) {
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
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x82ccac90
	if (!ctx.cr6.eq) goto loc_82CCAC90;
	// bl 0x82cb8f90
	ctx.lr = 0x82CCAC70;
	sub_82CB8F90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82cb8f58
	ctx.lr = 0x82CCAC7C;
	sub_82CB8F58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82ccad0c
	goto loc_82CCAD0C;
loc_82CCAC90:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ccaca8
	if (ctx.cr6.lt) goto loc_82CCACA8;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// lwz r11,6244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6244);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ccace0
	if (ctx.cr6.lt) goto loc_82CCACE0;
loc_82CCACA8:
	// bl 0x82cb8f90
	ctx.lr = 0x82CCACAC;
	sub_82CB8F90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82cb8f58
	ctx.lr = 0x82CCACB8;
	sub_82CB8F58(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CCACD8;
	sub_82CB8DA0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ccad0c
	goto loc_82CCAD0C;
loc_82CCACE0:
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,6272
	ctx.r10.s64 = ctx.r10.s64 + 6272;
	// rlwinm r11,r3,6,21,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ccaca8
	if (ctx.cr0.eq) goto loc_82CCACA8;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82CCAD0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCAD1C"))) PPC_WEAK_FUNC(sub_82CCAD1C);
PPC_FUNC_IMPL(__imp__sub_82CCAD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCAD28"))) PPC_WEAK_FUNC(sub_82CCAD28);
PPC_FUNC_IMPL(__imp__sub_82CCAD28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82CCAD30;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// addi r11,r11,6272
	ctx.r11.s64 = ctx.r11.s64 + 6272;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r3,6,21,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82ccadb8
	if (!ctx.cr6.eq) goto loc_82CCADB8;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82cb9680
	ctx.lr = 0x82CCAD74;
	sub_82CB9680(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ccadac
	if (!ctx.cr6.eq) goto loc_82CCADAC;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x82cbb2f0
	ctx.lr = 0x82CCAD90;
	sub_82CBB2F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ccada0
	if (!ctx.cr0.eq) goto loc_82CCADA0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_82CCADA0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_82CCADAC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x82ccade8
	ctx.lr = 0x82CCADB8;
	sub_82CCADE8(ctx, base);
loc_82CCADB8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82ccaddc
	if (ctx.cr6.eq) goto loc_82CCADDC;
	// srawi r9,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 5;
	// rlwinm r10,r3,6,21,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x833b77e4
	ctx.lr = 0x82CCADDC;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_82CCADDC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCADE8"))) PPC_WEAK_FUNC(sub_82CCADE8);
PPC_FUNC_IMPL(__imp__sub_82CCADE8) {
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
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82cb9508
	ctx.lr = 0x82CCADFC;
	sub_82CB9508(ctx, base);
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r29,80(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r11,6272
	ctx.r11.s64 = ctx.r11.s64 + 6272;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCAE1C"))) PPC_WEAK_FUNC(sub_82CCAE1C);
PPC_FUNC_IMPL(__imp__sub_82CCAE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCAE20"))) PPC_WEAK_FUNC(sub_82CCAE20);
PPC_FUNC_IMPL(__imp__sub_82CCAE20) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,6272
	ctx.r10.s64 = ctx.r10.s64 + 6272;
	// rlwinm r11,r3,6,21,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// b 0x833b77f4
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCAE44"))) PPC_WEAK_FUNC(sub_82CCAE44);
PPC_FUNC_IMPL(__imp__sub_82CCAE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCAE50"))) PPC_WEAK_FUNC(sub_82CCAE50);
PPC_FUNC_IMPL(__imp__sub_82CCAE50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82CCAE58;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,-1
	ctx.r24.s64 = -1;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r3,11
	ctx.r3.s64 = 11;
	// stw r24,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// bl 0x82cb9540
	ctx.lr = 0x82CCAE78;
	sub_82CB9540(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ccae88
	if (!ctx.cr0.eq) goto loc_82CCAE88;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ccb058
	goto loc_82CCB058;
loc_82CCAE88:
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x82cb9680
	ctx.lr = 0x82CCAE90;
	sub_82CB9680(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r28,r11,6272
	ctx.r28.s64 = ctx.r11.s64 + 6272;
loc_82CCAEA4:
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// cmpwi cr6,r29,64
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 64, ctx.xer);
	// bge cr6,0x82ccb048
	if (!ctx.cr6.lt) goto loc_82CCB048;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r28
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ccafb8
	if (ctx.cr6.eq) goto loc_82CCAFB8;
loc_82CCAEC0:
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ccafa0
	if (!ctx.cr6.lt) goto loc_82CCAFA0;
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ccaf70
	if (!ctx.cr0.eq) goto loc_82CCAF70;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ccaf3c
	if (!ctx.cr6.eq) goto loc_82CCAF3C;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82cb9680
	ctx.lr = 0x82CCAEF8;
	sub_82CB9680(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ccaf30
	if (!ctx.cr6.eq) goto loc_82CCAF30;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x82cbb2f0
	ctx.lr = 0x82CCAF14;
	sub_82CBB2F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ccaf24
	if (!ctx.cr0.eq) goto loc_82CCAF24;
	// stw r26,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r26.u32);
	// b 0x82ccaf30
	goto loc_82CCAF30;
loc_82CCAF24:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_82CCAF30:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x82ccb084
	ctx.lr = 0x82CCAF3C;
	sub_82CCB084(ctx, base);
loc_82CCAF3C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x82ccaf70
	if (!ctx.cr6.eq) goto loc_82CCAF70;
	// addi r27,r30,12
	ctx.r27.s64 = ctx.r30.s64 + 12;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833b77e4
	ctx.lr = 0x82CCAF50;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccaf68
	if (ctx.cr0.eq) goto loc_82CCAF68;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833b77f4
	ctx.lr = 0x82CCAF64;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82ccaf70
	goto loc_82CCAF70;
loc_82CCAF68:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82ccaf7c
	if (ctx.cr6.eq) goto loc_82CCAF7C;
loc_82CCAF70:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// b 0x82ccaec0
	goto loc_82CCAEC0;
loc_82CCAF7C:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r26,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r26.u8);
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
	// rlwinm r10,r29,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_82CCAFA0:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82ccb048
	if (!ctx.cr6.eq) goto loc_82CCB048;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x82ccaea4
	goto loc_82CCAEA4;
loc_82CCAFB8:
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82cb92c0
	ctx.lr = 0x82CCAFC4;
	sub_82CB92C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ccb048
	if (ctx.cr0.eq) goto loc_82CCB048;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-31881
	ctx.r8.s64 = -2089353216;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r3,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r3.u32);
	// lwz r11,6244(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6244);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,6244(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6244, ctx.r11.u32);
loc_82CCAFE8:
	// lwzx r11,r10,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ccb018
	if (!ctx.cr6.lt) goto loc_82CCB018;
	// li r11,10
	ctx.r11.s64 = 10;
	// stb r9,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r9.u8);
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r24.u32);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// b 0x82ccafe8
	goto loc_82CCAFE8;
loc_82CCB018:
	// rlwinm r3,r29,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// li r10,0
	ctx.r10.s64 = 0;
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r26,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r26.u8);
	// bl 0x82ccad28
	ctx.lr = 0x82CCB03C;
	sub_82CCAD28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ccb048
	if (!ctx.cr0.eq) goto loc_82CCB048;
	// stw r24,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
loc_82CCB048:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x82ccb060
	ctx.lr = 0x82CCB054;
	sub_82CCB060(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82CCB058:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCB060"))) PPC_WEAK_FUNC(sub_82CCB060);
PPC_FUNC_IMPL(__imp__sub_82CCB060) {
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
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x82cb9508
	ctx.lr = 0x82CCB074;
	sub_82CB9508(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCB084"))) PPC_WEAK_FUNC(sub_82CCB084);
PPC_FUNC_IMPL(__imp__sub_82CCB084) {
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
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82cb9508
	ctx.lr = 0x82CCB098;
	sub_82CB9508(ctx, base);
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// lwz r25,84(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r29,92(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r24,-1
	ctx.r24.s64 = -1;
	// lwz r30,88(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r28,r11,6272
	ctx.r28.s64 = ctx.r11.s64 + 6272;
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCB0C4"))) PPC_WEAK_FUNC(sub_82CCB0C4);
PPC_FUNC_IMPL(__imp__sub_82CCB0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCB0D0"))) PPC_WEAK_FUNC(sub_82CCB0D0);
PPC_FUNC_IMPL(__imp__sub_82CCB0D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82CCB0D8;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm. r11,r4,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// beq 0x82ccb0fc
	if (ctx.cr0.eq) goto loc_82CCB0FC;
	// li r29,32
	ctx.r29.s64 = 32;
loc_82CCB0FC:
	// rlwinm. r11,r4,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccb110
	if (ctx.cr0.eq) goto loc_82CCB110;
	// li r10,-128
	ctx.r10.s64 = -128;
	// or r11,r29,r10
	ctx.r11.u64 = ctx.r29.u64 | ctx.r10.u64;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
loc_82CCB110:
	// rlwinm. r11,r4,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccb120
	if (ctx.cr0.eq) goto loc_82CCB120;
	// ori r11,r29,16
	ctx.r11.u64 = ctx.r29.u64 | 16;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
loc_82CCB120:
	// bl 0x82ccae50
	ctx.lr = 0x82CCB124;
	sub_82CCAE50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x82ccb150
	if (!ctx.cr6.eq) goto loc_82CCB150;
	// bl 0x82cb8f58
	ctx.lr = 0x82CCB138;
	sub_82CB8F58(ctx, base);
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82cb8f90
	ctx.lr = 0x82CCB144;
	sub_82CB8F90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// b 0x82ccb1e0
	goto loc_82CCB1E0;
loc_82CCB150:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ccab38
	ctx.lr = 0x82CCB164;
	sub_82CCAB38(ctx, base);
	// srawi r10,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 5;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,6272
	ctx.r11.s64 = ctx.r11.s64 + 6272;
	// rlwinm r8,r30,6,21,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0x7C0;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r7,r29,1
	ctx.r7.u64 = ctx.r29.u64 | 1;
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stb r7,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r7.u8);
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r7,40(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// clrlwi r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	// stb r7,40(r10)
	PPC_STORE_U8(ctx.r10.u32 + 40, ctx.r7.u8);
	// addi r7,r10,40
	ctx.r7.s64 = ctx.r10.s64 + 40;
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// rlwinm r8,r9,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r9,r10,40
	ctx.r9.s64 = ctx.r10.s64 + 40;
	// stb r8,40(r10)
	PPC_STORE_U8(ctx.r10.u32 + 40, ctx.r8.u8);
	// stw r6,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x82ccb214
	ctx.lr = 0x82CCB1D0;
	sub_82CCB214(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bne cr6,0x82ccb1e4
	if (!ctx.cr6.eq) goto loc_82CCB1E4;
loc_82CCB1E0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CCB1E4:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCB1EC"))) PPC_WEAK_FUNC(sub_82CCB1EC);
PPC_FUNC_IMPL(__imp__sub_82CCB1EC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// lwz r30,84(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r11,r11,6272
	ctx.r11.s64 = ctx.r11.s64 + 6272;
	// b 0x82ccb22c
	goto loc_82CCB22C;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CCB22C:
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82ccb260
	if (!ctx.cr6.eq) goto loc_82CCB260;
	// srawi r10,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 5;
	// rlwinm r9,r30,6,21,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0x7C0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lbz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r9,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r9.u8);
loc_82CCB260:
	// srawi r9,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r30.s32 >> 5;
	// rlwinm r10,r30,6,21,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0x7C0;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x833b77f4
	ctx.lr = 0x82CCB27C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCB214"))) PPC_WEAK_FUNC(sub_82CCB214);
PPC_FUNC_IMPL(__imp__sub_82CCB214) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82ccb260
	if (!ctx.cr6.eq) goto loc_82CCB260;
	// srawi r10,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 5;
	// rlwinm r9,r30,6,21,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0x7C0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lbz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r9,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r9.u8);
loc_82CCB260:
	// srawi r9,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r30.s32 >> 5;
	// rlwinm r10,r30,6,21,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0x7C0;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x833b77f4
	ctx.lr = 0x82CCB27C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCB294"))) PPC_WEAK_FUNC(sub_82CCB294);
PPC_FUNC_IMPL(__imp__sub_82CCB294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCB298"))) PPC_WEAK_FUNC(sub_82CCB298);
PPC_FUNC_IMPL(__imp__sub_82CCB298) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCB2A0"))) PPC_WEAK_FUNC(sub_82CCB2A0);
PPC_FUNC_IMPL(__imp__sub_82CCB2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82CCB2A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// sth r27,166(r1)
	PPC_STORE_U16(ctx.r1.u32 + 166, ctx.r27.u16);
	// bl 0x82caff58
	ctx.lr = 0x82CCB2BC;
	sub_82CAFF58(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ccb564
	if (ctx.cr6.eq) goto loc_82CCB564;
	// bl 0x82caff58
	ctx.lr = 0x82CCB2CC;
	sub_82CAFF58(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ccb564
	if (ctx.cr6.eq) goto loc_82CCB564;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ccb350
	if (!ctx.cr0.eq) goto loc_82CCB350;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8d38
	ctx.lr = 0x82CCB2EC;
	sub_82CB8D38(ctx, base);
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// addi r30,r11,6272
	ctx.r30.s64 = ctx.r11.s64 + 6272;
	// addi r28,r10,12760
	ctx.r28.s64 = ctx.r10.s64 + 12760;
	// beq cr6,0x82ccb33c
	if (ctx.cr6.eq) goto loc_82CCB33C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8d38
	ctx.lr = 0x82CCB30C;
	sub_82CB8D38(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82ccb33c
	if (ctx.cr6.eq) goto loc_82CCB33C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8d38
	ctx.lr = 0x82CCB31C;
	sub_82CB8D38(ctx, base);
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb8d38
	ctx.lr = 0x82CCB32C;
	sub_82CB8D38(ctx, base);
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// rlwinm r11,r3,6,21,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82ccb340
	goto loc_82CCB340;
loc_82CCB33C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82CCB340:
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82ccb38c
	if (!ctx.cr6.eq) goto loc_82CCB38C;
loc_82CCB350:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-2
	ctx.xer.ca = ctx.r11.u32 > 1;
	ctx.r11.s64 = ctx.r11.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// blt 0x82ccb378
	if (ctx.cr0.lt) goto loc_82CCB378;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r27,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r27.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82ccb578
	goto loc_82CCB578;
loc_82CCB378:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// clrlwi r3,r27,16
	ctx.r3.u64 = ctx.r27.u32 & 0xFFFF;
	// bl 0x82cd39d0
	ctx.lr = 0x82CCB384;
	sub_82CD39D0(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// b 0x82ccb57c
	goto loc_82CCB57C;
loc_82CCB38C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8d38
	ctx.lr = 0x82CCB394;
	sub_82CB8D38(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82ccb3d4
	if (ctx.cr6.eq) goto loc_82CCB3D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8d38
	ctx.lr = 0x82CCB3A4;
	sub_82CB8D38(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82ccb3d4
	if (ctx.cr6.eq) goto loc_82CCB3D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8d38
	ctx.lr = 0x82CCB3B4;
	sub_82CB8D38(ctx, base);
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb8d38
	ctx.lr = 0x82CCB3C4;
	sub_82CB8D38(ctx, base);
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// rlwinm r11,r3,6,21,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82ccb3d8
	goto loc_82CCB3D8;
loc_82CCB3D4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82CCB3D8:
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82ccb484
	if (!ctx.cr6.eq) goto loc_82CCB484;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// blt 0x82ccb418
	if (ctx.cr0.lt) goto loc_82CCB418;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,166(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 166);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x82ccb428
	goto loc_82CCB428;
loc_82CCB418:
	// lbz r11,166(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 166);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cbb650
	ctx.lr = 0x82CCB428;
	sub_82CBB650(ctx, base);
loc_82CCB428:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82ccb438
	if (!ctx.cr6.eq) goto loc_82CCB438;
loc_82CCB430:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ccb57c
	goto loc_82CCB57C;
loc_82CCB438:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// blt 0x82ccb468
	if (ctx.cr0.lt) goto loc_82CCB468;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,167(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 167);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x82ccb478
	goto loc_82CCB478;
loc_82CCB468:
	// lbz r11,167(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 167);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cbb650
	ctx.lr = 0x82CCB478;
	sub_82CBB650(ctx, base);
loc_82CCB478:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82ccb578
	if (!ctx.cr6.eq) goto loc_82CCB578;
	// b 0x82ccb430
	goto loc_82CCB430;
loc_82CCB484:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8d38
	ctx.lr = 0x82CCB48C;
	sub_82CB8D38(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82ccb4cc
	if (ctx.cr6.eq) goto loc_82CCB4CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8d38
	ctx.lr = 0x82CCB49C;
	sub_82CB8D38(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82ccb4cc
	if (ctx.cr6.eq) goto loc_82CCB4CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8d38
	ctx.lr = 0x82CCB4AC;
	sub_82CB8D38(ctx, base);
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb8d38
	ctx.lr = 0x82CCB4BC;
	sub_82CB8D38(ctx, base);
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// rlwinm r11,r3,6,21,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82ccb4d0
	goto loc_82CCB4D0;
loc_82CCB4CC:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82CCB4D0:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccb350
	if (ctx.cr0.eq) goto loc_82CCB350;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cce308
	ctx.lr = 0x82CCB4F0;
	sub_82CCE308(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ccb430
	if (!ctx.cr0.eq) goto loc_82CCB430;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ccb578
	if (!ctx.cr6.gt) goto loc_82CCB578;
loc_82CCB508:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// lbzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// blt 0x82ccb53c
	if (ctx.cr0.lt) goto loc_82CCB53C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x82ccb548
	goto loc_82CCB548;
loc_82CCB53C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cbb650
	ctx.lr = 0x82CCB548;
	sub_82CBB650(ctx, base);
loc_82CCB548:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82ccb430
	if (ctx.cr6.eq) goto loc_82CCB430;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ccb508
	if (ctx.cr6.lt) goto loc_82CCB508;
	// b 0x82ccb578
	goto loc_82CCB578;
loc_82CCB564:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r27,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r27.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// bl 0x82e65e28
	ctx.lr = 0x82CCB578;
	sub_82E65E28(ctx, base);
loc_82CCB578:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82CCB57C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCB584"))) PPC_WEAK_FUNC(sub_82CCB584);
PPC_FUNC_IMPL(__imp__sub_82CCB584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCB590"))) PPC_WEAK_FUNC(sub_82CCB590);
PPC_FUNC_IMPL(__imp__sub_82CCB590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82CCB598;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ccb5e8
	if (!ctx.cr6.eq) goto loc_82CCB5E8;
	// bl 0x82cb8f58
	ctx.lr = 0x82CCB5C0;
	sub_82CB8F58(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CCB5E0;
	sub_82CB8DA0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ccb618
	goto loc_82CCB618;
loc_82CCB5E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// bl 0x82cb00c8
	ctx.lr = 0x82CCB5F4;
	sub_82CB00C8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ccb2a0
	ctx.lr = 0x82CCB604;
	sub_82CCB2A0(ctx, base);
	// sth r3,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r3.u16);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x82ccb620
	ctx.lr = 0x82CCB614;
	sub_82CCB620(ctx, base);
	// lhz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 80);
loc_82CCB618:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCB620"))) PPC_WEAK_FUNC(sub_82CCB620);
PPC_FUNC_IMPL(__imp__sub_82CCB620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82cb0188
	ctx.lr = 0x82CCB63C;
	sub_82CB0188(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// lwz r12,-16(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCB650"))) PPC_WEAK_FUNC(sub_82CCB650);
PPC_FUNC_IMPL(__imp__sub_82CCB650) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ccb590
	sub_82CCB590(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCB654"))) PPC_WEAK_FUNC(sub_82CCB654);
PPC_FUNC_IMPL(__imp__sub_82CCB654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCB660"))) PPC_WEAK_FUNC(sub_82CCB660);
PPC_FUNC_IMPL(__imp__sub_82CCB660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82CCB668;
	__savegprlr_29(ctx, base);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
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
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ccb6d0
	if (!ctx.cr6.eq) goto loc_82CCB6D0;
	// bl 0x82cb8f58
	ctx.lr = 0x82CCB6A8;
	sub_82CB8F58(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CCB6C8;
	sub_82CB8DA0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ccb73c
	goto loc_82CCB73C;
loc_82CCB6D0:
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// addi r10,r31,152
	ctx.r10.s64 = ctx.r31.s64 + 152;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82caff58
	ctx.lr = 0x82CCB6E0;
	sub_82CAFF58(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82cb0138
	ctx.lr = 0x82CCB6EC;
	sub_82CB0138(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x82caff58
	ctx.lr = 0x82CCB6F4;
	sub_82CAFF58(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x82cb9d10
	ctx.lr = 0x82CCB6FC;
	sub_82CB9D10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82caff58
	ctx.lr = 0x82CCB704;
	sub_82CAFF58(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82cbb9c0
	ctx.lr = 0x82CCB718;
	sub_82CBB9C0(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// bl 0x82caff58
	ctx.lr = 0x82CCB720;
	sub_82CAFF58(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb9de8
	ctx.lr = 0x82CCB72C;
	sub_82CB9DE8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x82ccb744
	ctx.lr = 0x82CCB738;
	sub_82CCB744(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
loc_82CCB73C:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCB744"))) PPC_WEAK_FUNC(sub_82CCB744);
PPC_FUNC_IMPL(__imp__sub_82CCB744) {
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
	// bl 0x82caff58
	ctx.lr = 0x82CCB754;
	sub_82CAFF58(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82cb01c8
	ctx.lr = 0x82CCB760;
	sub_82CB01C8(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCB770"))) PPC_WEAK_FUNC(sub_82CCB770);
PPC_FUNC_IMPL(__imp__sub_82CCB770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82cd3ce0
	ctx.lr = 0x82CCB7A8;
	sub_82CD3CE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCB7B8"))) PPC_WEAK_FUNC(sub_82CCB7B8);
PPC_FUNC_IMPL(__imp__sub_82CCB7B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82cd3cf8
	ctx.lr = 0x82CCB7F0;
	sub_82CD3CF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCB800"))) PPC_WEAK_FUNC(sub_82CCB800);
PPC_FUNC_IMPL(__imp__sub_82CCB800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82cd3cf8
	ctx.lr = 0x82CCB840;
	sub_82CD3CF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCB850"))) PPC_WEAK_FUNC(sub_82CCB850);
PPC_FUNC_IMPL(__imp__sub_82CCB850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82cd3d10
	ctx.lr = 0x82CCB888;
	sub_82CD3D10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCB898"))) PPC_WEAK_FUNC(sub_82CCB898);
PPC_FUNC_IMPL(__imp__sub_82CCB898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82cd3d10
	ctx.lr = 0x82CCB8D8;
	sub_82CD3D10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCB8E8"))) PPC_WEAK_FUNC(sub_82CCB8E8);
PPC_FUNC_IMPL(__imp__sub_82CCB8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// lis r11,-31902
	ctx.r11.s64 = -2090729472;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r10,16336(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16336);
	// lwz r9,-14532(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14532);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bne cr6,0x82ccb914
	if (!ctx.cr6.eq) goto loc_82CCB914;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82CCB914:
	// stw r10,-14532(r11)
	PPC_STORE_U32(ctx.r11.u32 + -14532, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCB91C"))) PPC_WEAK_FUNC(sub_82CCB91C);
PPC_FUNC_IMPL(__imp__sub_82CCB91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCB920"))) PPC_WEAK_FUNC(sub_82CCB920);
PPC_FUNC_IMPL(__imp__sub_82CCB920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// lwz r11,16336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16336);
	// lwz r10,-14532(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14532);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCB944"))) PPC_WEAK_FUNC(sub_82CCB944);
PPC_FUNC_IMPL(__imp__sub_82CCB944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCB948"))) PPC_WEAK_FUNC(sub_82CCB948);
PPC_FUNC_IMPL(__imp__sub_82CCB948) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ccb974
	if (ctx.cr6.eq) goto loc_82CCB974;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82ccb974
	if (ctx.cr6.eq) goto loc_82CCB974;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82ccb97c
	if (!ctx.cr0.eq) goto loc_82CCB97C;
	// beq cr6,0x82ccb974
	if (ctx.cr6.eq) goto loc_82CCB974;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
loc_82CCB974:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82CCB97C:
	// beq cr6,0x82ccb988
	if (ctx.cr6.eq) goto loc_82CCB988;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
loc_82CCB988:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCB990"))) PPC_WEAK_FUNC(sub_82CCB990);
PPC_FUNC_IMPL(__imp__sub_82CCB990) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ccb9bc
	if (ctx.cr6.eq) goto loc_82CCB9BC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82ccb9bc
	if (ctx.cr6.eq) goto loc_82CCB9BC;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82ccb9c4
	if (!ctx.cr0.eq) goto loc_82CCB9C4;
	// beq cr6,0x82ccb9bc
	if (ctx.cr6.eq) goto loc_82CCB9BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
loc_82CCB9BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82CCB9C4:
	// beq cr6,0x82ccb9d0
	if (ctx.cr6.eq) goto loc_82CCB9D0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
loc_82CCB9D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCB9D8"))) PPC_WEAK_FUNC(sub_82CCB9D8);
PPC_FUNC_IMPL(__imp__sub_82CCB9D8) {
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
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccba04
	if (ctx.cr0.eq) goto loc_82CCBA04;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ccba1c
	if (ctx.cr6.eq) goto loc_82CCBA1C;
loc_82CCBA04:
	// bl 0x82ccb2a0
	ctx.lr = 0x82CCBA08;
	sub_82CCB2A0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x82ccba1c
	if (!ctx.cr6.eq) goto loc_82CCBA1C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82ccba24
	goto loc_82CCBA24;
loc_82CCBA1C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82CCBA24:
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

__attribute__((alias("__imp__sub_82CCBA3C"))) PPC_WEAK_FUNC(sub_82CCBA3C);
PPC_FUNC_IMPL(__imp__sub_82CCBA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCBA40"))) PPC_WEAK_FUNC(sub_82CCBA40);
PPC_FUNC_IMPL(__imp__sub_82CCBA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82CCBA48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// b 0x82ccba80
	goto loc_82CCBA80;
loc_82CCBA60:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x82ccb9d8
	ctx.lr = 0x82CCBA74;
	sub_82CCB9D8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82ccba88
	if (ctx.cr6.eq) goto loc_82CCBA88;
loc_82CCBA80:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x82ccba60
	if (ctx.cr6.gt) goto loc_82CCBA60;
loc_82CCBA88:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCBA90"))) PPC_WEAK_FUNC(sub_82CCBA90);
PPC_FUNC_IMPL(__imp__sub_82CCBA90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82CCBA98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccbb18
	if (ctx.cr0.eq) goto loc_82CCBB18;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ccbb18
	if (!ctx.cr6.eq) goto loc_82CCBB18;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82ccbb20
	goto loc_82CCBB20;
loc_82CCBAD4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lhz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// bl 0x82ccb9d8
	ctx.lr = 0x82CCBAE8;
	sub_82CCB9D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82ccbb18
	if (!ctx.cr6.eq) goto loc_82CCBB18;
	// bl 0x82cb8f58
	ctx.lr = 0x82CCBAFC;
	sub_82CB8F58(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// bne cr6,0x82ccbb20
	if (!ctx.cr6.eq) goto loc_82CCBB20;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x82ccb9d8
	ctx.lr = 0x82CCBB18;
	sub_82CCB9D8(ctx, base);
loc_82CCBB18:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x82ccbad4
	if (ctx.cr6.gt) goto loc_82CCBAD4;
loc_82CCBB20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCBB28"))) PPC_WEAK_FUNC(sub_82CCBB28);
PPC_FUNC_IMPL(__imp__sub_82CCBB28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82CCBB30;
	__savegprlr_14(ctx, base);
	// stwu r1,-2336(r1)
	ea = -2336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// mr r14,r28
	ctx.r14.u64 = ctx.r28.u64;
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
	// mr r17,r28
	ctx.r17.u64 = ctx.r28.u64;
	// mr r19,r28
	ctx.r19.u64 = ctx.r28.u64;
	// bne cr6,0x82ccbb98
	if (!ctx.cr6.eq) goto loc_82CCBB98;
loc_82CCBB6C:
	// bl 0x82cb8f58
	ctx.lr = 0x82CCBB70;
	sub_82CB8F58(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CCBB90;
	sub_82CB8DA0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ccc680
	goto loc_82CCC680;
loc_82CCBB98:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x82ccbb6c
	if (ctx.cr6.eq) goto loc_82CCBB6C;
	// bl 0x82caff58
	ctx.lr = 0x82CCBBA4;
	sub_82CAFF58(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ccc64c
	if (ctx.cr6.eq) goto loc_82CCC64C;
	// bl 0x82caff58
	ctx.lr = 0x82CCBBB4;
	sub_82CAFF58(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ccc64c
	if (ctx.cr6.eq) goto loc_82CCC64C;
	// lhz r29,0(r15)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r15.u32 + 0);
	// mr r20,r28
	ctx.r20.u64 = ctx.r28.u64;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr. r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// beq 0x82ccc644
	if (ctx.cr0.eq) goto loc_82CCC644;
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// lwz r16,100(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r27,100(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r18,r10,14320
	ctx.r18.s64 = ctx.r10.s64 + 14320;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// addi r10,r9,27496
	ctx.r10.s64 = ctx.r9.s64 + 27496;
	// addi r22,r11,13712
	ctx.r22.s64 = ctx.r11.s64 + 13712;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_82CCBC04:
	// addi r15,r15,2
	ctx.r15.s64 = ctx.r15.s64 + 2;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// blt cr6,0x82ccc634
	if (ctx.cr6.lt) goto loc_82CCC634;
	// cmplwi cr6,r8,32
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 32, ctx.xer);
	// blt cr6,0x82ccbc30
	if (ctx.cr6.lt) goto loc_82CCBC30;
	// cmplwi cr6,r8,120
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 120, ctx.xer);
	// bgt cr6,0x82ccbc30
	if (ctx.cr6.gt) goto loc_82CCBC30;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r11,-32(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// b 0x82ccbc34
	goto loc_82CCBC34;
loc_82CCBC30:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82CCBC34:
	// mulli r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 * 9;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82ccbb6c
	if (ctx.cr6.eq) goto loc_82CCBB6C;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82ccc614
	if (ctx.cr6.gt) goto loc_82CCC614;
	// lis r12,-32256
	ctx.r12.s64 = -2113929216;
	// addi r12,r12,27352
	ctx.r12.s64 = ctx.r12.s64 + 27352;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32051
	ctx.r12.s64 = -2100494336;
	// addi r12,r12,-17280
	ctx.r12.s64 = ctx.r12.s64 + -17280;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82CCBE34;
	case 1:
		goto loc_82CCBC80;
	case 2:
		goto loc_82CCBCA0;
	case 3:
		goto loc_82CCBCF0;
	case 4:
		goto loc_82CCBD2C;
	case 5:
		goto loc_82CCBD34;
	case 6:
		goto loc_82CCBD6C;
	case 7:
		goto loc_82CCBE50;
	default:
		__builtin_unreachable();
	}
loc_82CCBC80:
	// mr r16,r28
	ctx.r16.u64 = ctx.r28.u64;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// mr r14,r28
	ctx.r14.u64 = ctx.r28.u64;
	// mr r17,r28
	ctx.r17.u64 = ctx.r28.u64;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// li r23,-1
	ctx.r23.s64 = -1;
	// mr r19,r28
	ctx.r19.u64 = ctx.r28.u64;
	// b 0x82ccc614
	goto loc_82CCC614;
loc_82CCBCA0:
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// beq cr6,0x82ccbce8
	if (ctx.cr6.eq) goto loc_82CCBCE8;
	// cmpwi cr6,r8,35
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 35, ctx.xer);
	// beq cr6,0x82ccbce0
	if (ctx.cr6.eq) goto loc_82CCBCE0;
	// cmpwi cr6,r8,43
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 43, ctx.xer);
	// beq cr6,0x82ccbcd8
	if (ctx.cr6.eq) goto loc_82CCBCD8;
	// cmpwi cr6,r8,45
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 45, ctx.xer);
	// beq cr6,0x82ccbcd0
	if (ctx.cr6.eq) goto loc_82CCBCD0;
	// cmpwi cr6,r8,48
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 48, ctx.xer);
	// bne cr6,0x82ccc614
	if (!ctx.cr6.eq) goto loc_82CCC614;
	// ori r25,r25,8
	ctx.r25.u64 = ctx.r25.u64 | 8;
	// b 0x82ccc614
	goto loc_82CCC614;
loc_82CCBCD0:
	// ori r25,r25,4
	ctx.r25.u64 = ctx.r25.u64 | 4;
	// b 0x82ccc614
	goto loc_82CCC614;
loc_82CCBCD8:
	// ori r25,r25,1
	ctx.r25.u64 = ctx.r25.u64 | 1;
	// b 0x82ccc614
	goto loc_82CCC614;
loc_82CCBCE0:
	// ori r25,r25,128
	ctx.r25.u64 = ctx.r25.u64 | 128;
	// b 0x82ccc614
	goto loc_82CCC614;
loc_82CCBCE8:
	// ori r25,r25,2
	ctx.r25.u64 = ctx.r25.u64 | 2;
	// b 0x82ccc614
	goto loc_82CCC614;
loc_82CCBCF0:
	// cmplwi cr6,r8,42
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 42, ctx.xer);
	// bne cr6,0x82ccbd1c
	if (!ctx.cr6.eq) goto loc_82CCBD1C;
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// lwz r14,4(r11)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bge cr6,0x82ccc614
	if (!ctx.cr6.lt) goto loc_82CCC614;
	// ori r25,r25,4
	ctx.r25.u64 = ctx.r25.u64 | 4;
	// neg r14,r14
	ctx.r14.s64 = -ctx.r14.s64;
	// b 0x82ccc614
	goto loc_82CCC614;
loc_82CCBD1C:
	// mulli r11,r14,10
	ctx.r11.s64 = ctx.r14.s64 * 10;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r14,r11,-48
	ctx.r14.s64 = ctx.r11.s64 + -48;
	// b 0x82ccc614
	goto loc_82CCC614;
loc_82CCBD2C:
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
	// b 0x82ccc614
	goto loc_82CCC614;
loc_82CCBD34:
	// cmplwi cr6,r8,42
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 42, ctx.xer);
	// bne cr6,0x82ccbd5c
	if (!ctx.cr6.eq) goto loc_82CCBD5C;
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// lwz r23,4(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bge cr6,0x82ccc614
	if (!ctx.cr6.lt) goto loc_82CCC614;
	// li r23,-1
	ctx.r23.s64 = -1;
	// b 0x82ccc614
	goto loc_82CCC614;
loc_82CCBD5C:
	// mulli r11,r23,10
	ctx.r11.s64 = ctx.r23.s64 * 10;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r23,r11,-48
	ctx.r23.s64 = ctx.r11.s64 + -48;
	// b 0x82ccc614
	goto loc_82CCC614;
loc_82CCBD6C:
	// cmpwi cr6,r8,73
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 73, ctx.xer);
	// beq cr6,0x82ccbdbc
	if (ctx.cr6.eq) goto loc_82CCBDBC;
	// cmpwi cr6,r8,104
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 104, ctx.xer);
	// beq cr6,0x82ccbdb4
	if (ctx.cr6.eq) goto loc_82CCBDB4;
	// cmpwi cr6,r8,108
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 108, ctx.xer);
	// beq cr6,0x82ccbd94
	if (ctx.cr6.eq) goto loc_82CCBD94;
	// cmpwi cr6,r8,119
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 119, ctx.xer);
	// bne cr6,0x82ccc614
	if (!ctx.cr6.eq) goto loc_82CCC614;
	// ori r25,r25,2048
	ctx.r25.u64 = ctx.r25.u64 | 2048;
	// b 0x82ccc614
	goto loc_82CCC614;
loc_82CCBD94:
	// lhz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r15.u32 + 0);
	// cmplwi cr6,r11,108
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 108, ctx.xer);
	// bne cr6,0x82ccbdac
	if (!ctx.cr6.eq) goto loc_82CCBDAC;
	// addi r15,r15,2
	ctx.r15.s64 = ctx.r15.s64 + 2;
	// ori r25,r25,4096
	ctx.r25.u64 = ctx.r25.u64 | 4096;
	// b 0x82ccc614
	goto loc_82CCC614;
loc_82CCBDAC:
	// ori r25,r25,16
	ctx.r25.u64 = ctx.r25.u64 | 16;
	// b 0x82ccc614
	goto loc_82CCC614;
loc_82CCBDB4:
	// ori r25,r25,32
	ctx.r25.u64 = ctx.r25.u64 | 32;
	// b 0x82ccc614
	goto loc_82CCC614;
loc_82CCBDBC:
	// lhz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r15.u32 + 0);
	// cmplwi cr6,r11,54
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 54, ctx.xer);
	// bne cr6,0x82ccbde0
	if (!ctx.cr6.eq) goto loc_82CCBDE0;
	// lhz r10,2(r15)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r15.u32 + 2);
	// cmplwi cr6,r10,52
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 52, ctx.xer);
	// bne cr6,0x82ccbde0
	if (!ctx.cr6.eq) goto loc_82CCBDE0;
	// addi r15,r15,4
	ctx.r15.s64 = ctx.r15.s64 + 4;
	// ori r25,r25,32768
	ctx.r25.u64 = ctx.r25.u64 | 32768;
	// b 0x82ccc614
	goto loc_82CCC614;
loc_82CCBDE0:
	// cmplwi cr6,r11,51
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 51, ctx.xer);
	// bne cr6,0x82ccbe00
	if (!ctx.cr6.eq) goto loc_82CCBE00;
	// lhz r10,2(r15)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r15.u32 + 2);
	// cmplwi cr6,r10,50
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 50, ctx.xer);
	// bne cr6,0x82ccbe00
	if (!ctx.cr6.eq) goto loc_82CCBE00;
	// addi r15,r15,4
	ctx.r15.s64 = ctx.r15.s64 + 4;
	// rlwinm r25,r25,0,17,15
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// b 0x82ccc614
	goto loc_82CCC614;
loc_82CCBE00:
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// beq cr6,0x82ccc614
	if (ctx.cr6.eq) goto loc_82CCC614;
	// cmplwi cr6,r11,105
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 105, ctx.xer);
	// beq cr6,0x82ccc614
	if (ctx.cr6.eq) goto loc_82CCC614;
	// cmplwi cr6,r11,111
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 111, ctx.xer);
	// beq cr6,0x82ccc614
	if (ctx.cr6.eq) goto loc_82CCC614;
	// cmplwi cr6,r11,117
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 117, ctx.xer);
	// beq cr6,0x82ccc614
	if (ctx.cr6.eq) goto loc_82CCC614;
	// cmplwi cr6,r11,120
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 120, ctx.xer);
	// beq cr6,0x82ccc614
	if (ctx.cr6.eq) goto loc_82CCC614;
	// cmplwi cr6,r11,88
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 88, ctx.xer);
	// beq cr6,0x82ccc614
	if (ctx.cr6.eq) goto loc_82CCC614;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
loc_82CCBE34:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r19,1
	ctx.r19.s64 = 1;
	// bl 0x82ccb9d8
	ctx.lr = 0x82CCBE48;
	sub_82CCB9D8(ctx, base);
	// lwz r20,80(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82ccc614
	goto loc_82CCC614;
loc_82CCBE50:
	// addi r11,r8,-65
	ctx.r11.s64 = ctx.r8.s64 + -65;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// bgt cr6,0x82ccc374
	if (ctx.cr6.gt) goto loc_82CCC374;
	// lis r12,-32256
	ctx.r12.s64 = -2113929216;
	// addi r12,r12,27240
	ctx.r12.s64 = ctx.r12.s64 + 27240;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32051
	ctx.r12.s64 = -2100494336;
	// addi r12,r12,-16764
	ctx.r12.s64 = ctx.r12.s64 + -16764;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82CCC090;
	case 1:
		goto loc_82CCC374;
	case 2:
		goto loc_82CCBE84;
	case 3:
		goto loc_82CCC374;
	case 4:
		goto loc_82CCC090;
	case 5:
		goto loc_82CCC374;
	case 6:
		goto loc_82CCC090;
	case 7:
		goto loc_82CCC374;
	case 8:
		goto loc_82CCC374;
	case 9:
		goto loc_82CCC374;
	case 10:
		goto loc_82CCC374;
	case 11:
		goto loc_82CCC374;
	case 12:
		goto loc_82CCC374;
	case 13:
		goto loc_82CCC374;
	case 14:
		goto loc_82CCC374;
	case 15:
		goto loc_82CCC374;
	case 16:
		goto loc_82CCC374;
	case 17:
		goto loc_82CCC374;
	case 18:
		goto loc_82CCBF7C;
	case 19:
		goto loc_82CCC374;
	case 20:
		goto loc_82CCC374;
	case 21:
		goto loc_82CCC374;
	case 22:
		goto loc_82CCC374;
	case 23:
		goto loc_82CCC1D4;
	case 24:
		goto loc_82CCC374;
	case 25:
		goto loc_82CCBEFC;
	case 26:
		goto loc_82CCC374;
	case 27:
		goto loc_82CCC374;
	case 28:
		goto loc_82CCC374;
	case 29:
		goto loc_82CCC374;
	case 30:
		goto loc_82CCC374;
	case 31:
		goto loc_82CCC374;
	case 32:
		goto loc_82CCC09C;
	case 33:
		goto loc_82CCC374;
	case 34:
		goto loc_82CCBE94;
	case 35:
		goto loc_82CCC1C4;
	case 36:
		goto loc_82CCC09C;
	case 37:
		goto loc_82CCC09C;
	case 38:
		goto loc_82CCC09C;
	case 39:
		goto loc_82CCC374;
	case 40:
		goto loc_82CCC1C4;
	case 41:
		goto loc_82CCC374;
	case 42:
		goto loc_82CCC374;
	case 43:
		goto loc_82CCC374;
	case 44:
		goto loc_82CCC374;
	case 45:
		goto loc_82CCC054;
	case 46:
		goto loc_82CCC208;
	case 47:
		goto loc_82CCC1D0;
	case 48:
		goto loc_82CCC374;
	case 49:
		goto loc_82CCC374;
	case 50:
		goto loc_82CCBF8C;
	case 51:
		goto loc_82CCC374;
	case 52:
		goto loc_82CCC1C8;
	case 53:
		goto loc_82CCC374;
	case 54:
		goto loc_82CCC374;
	case 55:
		goto loc_82CCC1DC;
	default:
		__builtin_unreachable();
	}
loc_82CCBE84:
	// andi. r11,r25,2096
	ctx.r11.u64 = ctx.r25.u64 & 2096;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ccbe94
	if (!ctx.cr0.eq) goto loc_82CCBE94;
	// ori r25,r25,32
	ctx.r25.u64 = ctx.r25.u64 | 32;
loc_82CCBE94:
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// li r26,1
	ctx.r26.s64 = 1;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm. r10,r25,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r19,r26
	ctx.r19.u64 = ctx.r26.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// beq 0x82ccbef0
	if (ctx.cr0.eq) goto loc_82CCBEF0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// stb r10,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r10.u8);
	// addi r4,r1,86
	ctx.r4.s64 = ctx.r1.s64 + 86;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r5,172(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// bl 0x82ccb948
	ctx.lr = 0x82CCBEE0;
	sub_82CCB948(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ccbef4
	if (!ctx.cr0.lt) goto loc_82CCBEF4;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// b 0x82ccbef4
	goto loc_82CCBEF4;
loc_82CCBEF0:
	// sth r11,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r11.u16);
loc_82CCBEF4:
	// addi r27,r1,128
	ctx.r27.s64 = ctx.r1.s64 + 128;
	// b 0x82ccc374
	goto loc_82CCC374;
loc_82CCBEFC:
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ccbf4c
	if (ctx.cr6.eq) goto loc_82CCBF4C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ccbf4c
	if (ctx.cr6.eq) goto loc_82CCBF4C;
	// rlwinm. r9,r25,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// beq 0x82ccbf40
	if (ctx.cr0.eq) goto loc_82CCBF40;
	// lha r11,0(r11)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 0));
	// li r19,1
	ctx.r19.s64 = 1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r26,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r26.s64 = temp.s64;
	// b 0x82ccc374
	goto loc_82CCC374;
loc_82CCBF40:
	// lha r26,0(r11)
	ctx.r26.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 0));
	// mr r19,r28
	ctx.r19.u64 = ctx.r28.u64;
	// b 0x82ccc374
	goto loc_82CCC374;
loc_82CCBF4C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r27,24020(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24020);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82CCBF5C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ccbf5c
	if (!ctx.cr6.eq) goto loc_82CCBF5C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82CCBF70:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r26,r11,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82ccc374
	goto loc_82CCC374;
loc_82CCBF7C:
	// andi. r11,r25,2096
	ctx.r11.u64 = ctx.r25.u64 & 2096;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ccbf8c
	if (!ctx.cr0.eq) goto loc_82CCBF8C;
	// ori r25,r25,32
	ctx.r25.u64 = ctx.r25.u64 | 32;
loc_82CCBF8C:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// bne cr6,0x82ccbfa0
	if (!ctx.cr6.eq) goto loc_82CCBFA0;
	// lis r30,32767
	ctx.r30.s64 = 2147418112;
	// ori r30,r30,65535
	ctx.r30.u64 = ctx.r30.u64 | 65535;
	// b 0x82ccbfa4
	goto loc_82CCBFA4;
loc_82CCBFA0:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82CCBFA4:
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm. r10,r25,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// lwz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq 0x82ccc014
	if (ctx.cr0.eq) goto loc_82CCC014;
	// bne cr6,0x82ccbfcc
	if (!ctx.cr6.eq) goto loc_82CCBFCC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r27,24020(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24020);
loc_82CCBFCC:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82ccc374
	if (!ctx.cr6.gt) goto loc_82CCC374;
loc_82CCBFDC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ccc374
	if (ctx.cr0.eq) goto loc_82CCC374;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82cb5500
	ctx.lr = 0x82CCBFF4;
	sub_82CB5500(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ccc000
	if (ctx.cr0.eq) goto loc_82CCC000;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82CCC000:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r26,r30
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82ccbfdc
	if (ctx.cr6.lt) goto loc_82CCBFDC;
	// b 0x82ccc374
	goto loc_82CCC374;
loc_82CCC014:
	// bne cr6,0x82ccc020
	if (!ctx.cr6.eq) goto loc_82CCC020;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r27,24024(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24024);
loc_82CCC020:
	// li r19,1
	ctx.r19.s64 = 1;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ccc040
	goto loc_82CCC040;
loc_82CCC02C:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82ccc048
	if (ctx.cr0.eq) goto loc_82CCC048;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82CCC040:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82ccc02c
	if (!ctx.cr6.eq) goto loc_82CCC02C;
loc_82CCC048:
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// srawi r26,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 1;
	// b 0x82ccc374
	goto loc_82CCC374;
loc_82CCC054:
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82ccb920
	ctx.lr = 0x82CCC068;
	sub_82CCB920(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ccbb6c
	if (ctx.cr0.eq) goto loc_82CCBB6C;
	// rlwinm. r11,r25,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccc080
	if (ctx.cr0.eq) goto loc_82CCC080;
	// sth r20,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r20.u16);
	// b 0x82ccc084
	goto loc_82CCC084;
loc_82CCC080:
	// stw r20,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r20.u32);
loc_82CCC084:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// b 0x82ccc5f8
	goto loc_82CCC5F8;
loc_82CCC090:
	// addi r11,r8,32
	ctx.r11.s64 = ctx.r8.s64 + 32;
	// li r16,1
	ctx.r16.s64 = 1;
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
loc_82CCC09C:
	// ori r25,r25,64
	ctx.r25.u64 = ctx.r25.u64 | 64;
	// addi r27,r1,128
	ctx.r27.s64 = ctx.r1.s64 + 128;
	// li r30,512
	ctx.r30.s64 = 512;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bge cr6,0x82ccc0b8
	if (!ctx.cr6.lt) goto loc_82CCC0B8;
	// li r23,6
	ctx.r23.s64 = 6;
	// b 0x82ccc10c
	goto loc_82CCC10C;
loc_82CCC0B8:
	// bne cr6,0x82ccc0d0
	if (!ctx.cr6.eq) goto loc_82CCC0D0;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,103
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 103, ctx.xer);
	// bne cr6,0x82ccc10c
	if (!ctx.cr6.eq) goto loc_82CCC10C;
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x82ccc10c
	goto loc_82CCC10C;
loc_82CCC0D0:
	// cmpwi cr6,r23,512
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 512, ctx.xer);
	// ble cr6,0x82ccc0dc
	if (!ctx.cr6.gt) goto loc_82CCC0DC;
	// li r23,512
	ctx.r23.s64 = 512;
loc_82CCC0DC:
	// cmpwi cr6,r23,163
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 163, ctx.xer);
	// ble cr6,0x82ccc10c
	if (!ctx.cr6.gt) goto loc_82CCC10C;
	// addi r31,r23,349
	ctx.r31.s64 = ctx.r23.s64 + 349;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb0fe0
	ctx.lr = 0x82CCC0F0;
	sub_82CB0FE0(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ccc108
	if (ctx.cr0.eq) goto loc_82CCC108;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// b 0x82ccc10c
	goto loc_82CCC10C;
loc_82CCC108:
	// li r23,163
	ctx.r23.s64 = 163;
loc_82CCC10C:
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// lwz r10,24(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 24);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// extsb r6,r29
	ctx.r6.s64 = ctx.r29.s8;
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CCC148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm. r31,r25,0,24,24
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82ccc16c
	if (ctx.cr0.eq) goto loc_82CCC16C;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x82ccc16c
	if (!ctx.cr6.eq) goto loc_82CCC16C;
	// lwz r11,36(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 36);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CCC16C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CCC16C:
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,103
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 103, ctx.xer);
	// bne cr6,0x82ccc194
	if (!ctx.cr6.eq) goto loc_82CCC194;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82ccc194
	if (!ctx.cr6.eq) goto loc_82CCC194;
	// lwz r11,32(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CCC194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CCC194:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// bne cr6,0x82ccc1a8
	if (!ctx.cr6.eq) goto loc_82CCC1A8;
	// ori r25,r25,256
	ctx.r25.u64 = ctx.r25.u64 | 256;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_82CCC1A8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82CCC1AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ccc1ac
	if (!ctx.cr6.eq) goto loc_82CCC1AC;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// b 0x82ccbf70
	goto loc_82CCBF70;
loc_82CCC1C4:
	// ori r25,r25,64
	ctx.r25.u64 = ctx.r25.u64 | 64;
loc_82CCC1C8:
	// li r8,10
	ctx.r8.s64 = 10;
	// b 0x82ccc218
	goto loc_82CCC218;
loc_82CCC1D0:
	// li r23,8
	ctx.r23.s64 = 8;
loc_82CCC1D4:
	// li r31,7
	ctx.r31.s64 = 7;
	// b 0x82ccc1e0
	goto loc_82CCC1E0;
loc_82CCC1DC:
	// li r31,39
	ctx.r31.s64 = 39;
loc_82CCC1E0:
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// rlwinm. r11,r25,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r8,16
	ctx.r8.s64 = 16;
	// beq 0x82ccc218
	if (ctx.cr0.eq) goto loc_82CCC218;
	// addi r11,r31,81
	ctx.r11.s64 = ctx.r31.s64 + 81;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r17,2
	ctx.r17.s64 = 2;
	// sth r11,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r11.u16);
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// b 0x82ccc218
	goto loc_82CCC218;
loc_82CCC208:
	// rlwinm. r11,r25,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r8,8
	ctx.r8.s64 = 8;
	// beq 0x82ccc218
	if (ctx.cr0.eq) goto loc_82CCC218;
	// ori r25,r25,512
	ctx.r25.u64 = ctx.r25.u64 | 512;
loc_82CCC218:
	// rlwinm. r11,r25,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ccc228
	if (!ctx.cr0.eq) goto loc_82CCC228;
	// rlwinm. r11,r25,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccc23c
	if (ctx.cr0.eq) goto loc_82CCC23C;
loc_82CCC228:
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// b 0x82ccc28c
	goto loc_82CCC28C;
loc_82CCC23C:
	// rlwinm. r11,r25,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccc26c
	if (ctx.cr0.eq) goto loc_82CCC26C;
	// rlwinm. r11,r25,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq 0x82ccc264
	if (ctx.cr0.eq) goto loc_82CCC264;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x82ccc28c
	goto loc_82CCC28C;
loc_82CCC264:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x82ccc28c
	goto loc_82CCC28C;
loc_82CCC26C:
	// rlwinm. r11,r25,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// beq 0x82ccc288
	if (ctx.cr0.eq) goto loc_82CCC288;
	// lwa r11,4(r11)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 4));
	// b 0x82ccc28c
	goto loc_82CCC28C;
loc_82CCC288:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82CCC28C:
	// rlwinm. r10,r25,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ccc2a4
	if (ctx.cr0.eq) goto loc_82CCC2A4;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bge cr6,0x82ccc2a4
	if (!ctx.cr6.lt) goto loc_82CCC2A4;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// ori r25,r25,256
	ctx.r25.u64 = ctx.r25.u64 | 256;
loc_82CCC2A4:
	// rlwinm. r10,r25,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ccc2b8
	if (!ctx.cr0.eq) goto loc_82CCC2B8;
	// rlwinm. r10,r25,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ccc2b8
	if (!ctx.cr0.eq) goto loc_82CCC2B8;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
loc_82CCC2B8:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bge cr6,0x82ccc2c8
	if (!ctx.cr6.lt) goto loc_82CCC2C8;
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x82ccc2d8
	goto loc_82CCC2D8;
loc_82CCC2C8:
	// rlwinm r25,r25,0,29,27
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// cmpwi cr6,r23,512
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 512, ctx.xer);
	// ble cr6,0x82ccc2d8
	if (!ctx.cr6.gt) goto loc_82CCC2D8;
	// li r23,512
	ctx.r23.s64 = 512;
loc_82CCC2D8:
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x82ccc2e4
	if (!ctx.cr6.eq) goto loc_82CCC2E4;
	// mr r17,r28
	ctx.r17.u64 = ctx.r28.u64;
loc_82CCC2E4:
	// addi r9,r1,639
	ctx.r9.s64 = ctx.r1.s64 + 639;
loc_82CCC2E8:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// bgt cr6,0x82ccc2fc
	if (ctx.cr6.gt) goto loc_82CCC2FC;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82ccc33c
	if (ctx.cr6.eq) goto loc_82CCC33C;
loc_82CCC2FC:
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// divdu r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 / ctx.r10.u64;
	// tdllei r10,0
	// mulld r7,r7,r10
	ctx.r7.s64 = ctx.r7.s64 * ctx.r10.s64;
	// subf r7,r7,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r7.s64;
	// divdu r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 / ctx.r10.u64;
	// tdllei r10,0
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// ble cr6,0x82ccc32c
	if (!ctx.cr6.gt) goto loc_82CCC32C;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_82CCC32C:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x82ccc2e8
	goto loc_82CCC2E8;
loc_82CCC33C:
	// addi r11,r1,639
	ctx.r11.s64 = ctx.r1.s64 + 639;
	// rlwinm. r10,r25,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r26,r9,r11
	ctx.r26.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r27,r9,1
	ctx.r27.s64 = ctx.r9.s64 + 1;
	// beq 0x82ccc374
	if (ctx.cr0.eq) goto loc_82CCC374;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82ccc364
	if (ctx.cr6.eq) goto loc_82CCC364;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x82ccc374
	if (ctx.cr6.eq) goto loc_82CCC374;
loc_82CCC364:
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// li r11,48
	ctx.r11.s64 = 48;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stb r11,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r11.u8);
loc_82CCC374:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ccc5f8
	if (!ctx.cr6.eq) goto loc_82CCC5F8;
	// rlwinm. r11,r25,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccc3bc
	if (ctx.cr0.eq) goto loc_82CCC3BC;
	// rlwinm. r11,r25,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccc398
	if (ctx.cr0.eq) goto loc_82CCC398;
	// li r11,45
	ctx.r11.s64 = 45;
	// b 0x82ccc3b4
	goto loc_82CCC3B4;
loc_82CCC398:
	// clrlwi. r11,r25,31
	ctx.r11.u64 = ctx.r25.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccc3a8
	if (ctx.cr0.eq) goto loc_82CCC3A8;
	// li r11,43
	ctx.r11.s64 = 43;
	// b 0x82ccc3b4
	goto loc_82CCC3B4;
loc_82CCC3A8:
	// rlwinm. r11,r25,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccc3bc
	if (ctx.cr0.eq) goto loc_82CCC3BC;
	// li r11,32
	ctx.r11.s64 = 32;
loc_82CCC3B4:
	// li r17,1
	ctx.r17.s64 = 1;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
loc_82CCC3BC:
	// subf r11,r26,r14
	ctx.r11.s64 = ctx.r14.s64 - ctx.r26.s64;
	// rlwinm. r10,r25,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r28,r17,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r17.s64;
	// bne 0x82ccc400
	if (!ctx.cr0.eq) goto loc_82CCC400;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82ccc400
	if (!ctx.cr6.gt) goto loc_82CCC400;
loc_82CCC3D8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x82ccb9d8
	ctx.lr = 0x82CCC3EC;
	sub_82CCB9D8(ctx, base);
	// lwz r20,80(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r20,-1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, -1, ctx.xer);
	// beq cr6,0x82ccc400
	if (ctx.cr6.eq) goto loc_82CCC400;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x82ccc3d8
	if (ctx.cr6.gt) goto loc_82CCC3D8;
loc_82CCC400:
	// lwz r11,12(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// addi r31,r1,88
	ctx.r31.s64 = ctx.r1.s64 + 88;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccc42c
	if (ctx.cr0.eq) goto loc_82CCC42C;
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ccc42c
	if (!ctx.cr6.eq) goto loc_82CCC42C;
	// add r20,r20,r17
	ctx.r20.u64 = ctx.r20.u64 + ctx.r17.u64;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// b 0x82ccc484
	goto loc_82CCC484;
loc_82CCC42C:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// ble cr6,0x82ccc484
	if (!ctx.cr6.gt) goto loc_82CCC484;
loc_82CCC434:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// bl 0x82ccb9d8
	ctx.lr = 0x82CCC448;
	sub_82CCB9D8(ctx, base);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lwz r20,80(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r20,-1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, -1, ctx.xer);
	// bne cr6,0x82ccc47c
	if (!ctx.cr6.eq) goto loc_82CCC47C;
	// bl 0x82cb8f58
	ctx.lr = 0x82CCC45C;
	sub_82CB8F58(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// bne cr6,0x82ccc484
	if (!ctx.cr6.eq) goto loc_82CCC484;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x82ccb9d8
	ctx.lr = 0x82CCC478;
	sub_82CCB9D8(ctx, base);
	// lwz r20,80(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82CCC47C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x82ccc434
	if (ctx.cr6.gt) goto loc_82CCC434;
loc_82CCC484:
	// rlwinm. r11,r25,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccc4c8
	if (ctx.cr0.eq) goto loc_82CCC4C8;
	// rlwinm. r11,r25,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ccc4c8
	if (!ctx.cr0.eq) goto loc_82CCC4C8;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82ccc4c8
	if (!ctx.cr6.gt) goto loc_82CCC4C8;
loc_82CCC4A0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x82ccb9d8
	ctx.lr = 0x82CCC4B4;
	sub_82CCB9D8(ctx, base);
	// lwz r20,80(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r20,-1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, -1, ctx.xer);
	// beq cr6,0x82ccc4c8
	if (ctx.cr6.eq) goto loc_82CCC4C8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x82ccc4a0
	if (ctx.cr6.gt) goto loc_82CCC4A0;
loc_82CCC4C8:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x82ccc530
	if (!ctx.cr6.eq) goto loc_82CCC530;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82ccc530
	if (!ctx.cr6.gt) goto loc_82CCC530;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82CCC4E0:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lwz r5,172(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// bl 0x82ccb948
	ctx.lr = 0x82CCC4FC;
	sub_82CCB948(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble 0x82ccc528
	if (!ctx.cr0.gt) goto loc_82CCC528;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82ccb9d8
	ctx.lr = 0x82CCC514;
	sub_82CCB9D8(ctx, base);
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x82ccc4e0
	if (ctx.cr6.gt) goto loc_82CCC4E0;
	// lwz r20,80(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82ccc5b4
	goto loc_82CCC5B4;
loc_82CCC528:
	// li r20,-1
	ctx.r20.s64 = -1;
	// b 0x82ccc554
	goto loc_82CCC554;
loc_82CCC530:
	// lwz r11,12(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccc55c
	if (ctx.cr0.eq) goto loc_82CCC55C;
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ccc55c
	if (!ctx.cr6.eq) goto loc_82CCC55C;
	// add r20,r26,r20
	ctx.r20.u64 = ctx.r26.u64 + ctx.r20.u64;
loc_82CCC554:
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// b 0x82ccc5b4
	goto loc_82CCC5B4;
loc_82CCC55C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82ccc5b4
	if (!ctx.cr6.gt) goto loc_82CCC5B4;
loc_82CCC564:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// bl 0x82ccb9d8
	ctx.lr = 0x82CCC578;
	sub_82CCB9D8(ctx, base);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lwz r20,80(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r20,-1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, -1, ctx.xer);
	// bne cr6,0x82ccc5ac
	if (!ctx.cr6.eq) goto loc_82CCC5AC;
	// bl 0x82cb8f58
	ctx.lr = 0x82CCC58C;
	sub_82CB8F58(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// bne cr6,0x82ccc5f8
	if (!ctx.cr6.eq) goto loc_82CCC5F8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x82ccb9d8
	ctx.lr = 0x82CCC5A8;
	sub_82CCB9D8(ctx, base);
	// lwz r20,80(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82CCC5AC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x82ccc564
	if (ctx.cr6.gt) goto loc_82CCC564;
loc_82CCC5B4:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// blt cr6,0x82ccc5f8
	if (ctx.cr6.lt) goto loc_82CCC5F8;
	// rlwinm. r11,r25,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccc5f8
	if (ctx.cr0.eq) goto loc_82CCC5F8;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82ccc5f8
	if (!ctx.cr6.gt) goto loc_82CCC5F8;
loc_82CCC5D0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x82ccb9d8
	ctx.lr = 0x82CCC5E4;
	sub_82CCB9D8(ctx, base);
	// lwz r20,80(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r20,-1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, -1, ctx.xer);
	// beq cr6,0x82ccc5f8
	if (ctx.cr6.eq) goto loc_82CCC5F8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x82ccc5d0
	if (ctx.cr6.gt) goto loc_82CCC5D0;
loc_82CCC5F8:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ccc614
	if (ctx.cr6.eq) goto loc_82CCC614;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82cb3d50
	ctx.lr = 0x82CCC60C;
	sub_82CB3D50(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_82CCC614:
	// lhz r29,0(r15)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r15.u32 + 0);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr. r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82ccc634
	if (ctx.cr0.eq) goto loc_82CCC634;
	// lwz r31,108(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x82ccbc04
	goto loc_82CCBC04;
loc_82CCC634:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82ccc644
	if (ctx.cr6.eq) goto loc_82CCC644;
	// cmpwi cr6,r7,7
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 7, ctx.xer);
	// bne cr6,0x82ccbb6c
	if (!ctx.cr6.eq) goto loc_82CCBB6C;
loc_82CCC644:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// b 0x82ccc680
	goto loc_82CCC680;
loc_82CCC64C:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x82cb2478
	ctx.lr = 0x82CCC660;
	sub_82CB2478(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x82ccc674
	if (!ctx.cr6.eq) goto loc_82CCC674;
	// li r31,511
	ctx.r31.s64 = 511;
	// sth r28,2174(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2174, ctx.r28.u16);
loc_82CCC674:
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x82e65e28
	ctx.lr = 0x82CCC67C;
	sub_82E65E28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CCC680:
	// addi r1,r1,2336
	ctx.r1.s64 = ctx.r1.s64 + 2336;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCC688"))) PPC_WEAK_FUNC(sub_82CCC688);
PPC_FUNC_IMPL(__imp__sub_82CCC688) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,112
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 112, ctx.xer);
	// beq cr6,0x82ccc80c
	if (ctx.cr6.eq) goto loc_82CCC80C;
	// clrlwi r8,r5,16
	ctx.r8.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r8,112
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 112, ctx.xer);
	// beq cr6,0x82ccc80c
	if (ctx.cr6.eq) goto loc_82CCC80C;
	// cmplwi cr6,r11,115
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 115, ctx.xer);
	// beq cr6,0x82ccc6b4
	if (ctx.cr6.eq) goto loc_82CCC6B4;
	// cmplwi cr6,r11,83
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 83, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// bne cr6,0x82ccc6b8
	if (!ctx.cr6.eq) goto loc_82CCC6B8;
loc_82CCC6B4:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82CCC6B8:
	// cmplwi cr6,r8,115
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 115, ctx.xer);
	// beq cr6,0x82ccc6cc
	if (ctx.cr6.eq) goto loc_82CCC6CC;
	// cmplwi cr6,r8,83
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 83, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x82ccc6d0
	if (!ctx.cr6.eq) goto loc_82CCC6D0;
loc_82CCC6CC:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82CCC6D0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82ccc7e0
	if (!ctx.cr6.eq) goto loc_82CCC7E0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82ccc804
	if (!ctx.cr6.eq) goto loc_82CCC804;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// beq cr6,0x82ccc774
	if (ctx.cr6.eq) goto loc_82CCC774;
	// cmplwi cr6,r11,105
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 105, ctx.xer);
	// beq cr6,0x82ccc740
	if (ctx.cr6.eq) goto loc_82CCC740;
	// cmplwi cr6,r11,111
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 111, ctx.xer);
	// beq cr6,0x82ccc740
	if (ctx.cr6.eq) goto loc_82CCC740;
	// cmplwi cr6,r11,117
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 117, ctx.xer);
	// beq cr6,0x82ccc740
	if (ctx.cr6.eq) goto loc_82CCC740;
	// cmplwi cr6,r11,120
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 120, ctx.xer);
	// beq cr6,0x82ccc740
	if (ctx.cr6.eq) goto loc_82CCC740;
	// cmplwi cr6,r11,88
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 88, ctx.xer);
	// beq cr6,0x82ccc740
	if (ctx.cr6.eq) goto loc_82CCC740;
	// cmplwi cr6,r8,100
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 100, ctx.xer);
	// beq cr6,0x82ccc740
	if (ctx.cr6.eq) goto loc_82CCC740;
	// cmplwi cr6,r8,105
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 105, ctx.xer);
	// beq cr6,0x82ccc740
	if (ctx.cr6.eq) goto loc_82CCC740;
	// cmplwi cr6,r8,111
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 111, ctx.xer);
	// beq cr6,0x82ccc740
	if (ctx.cr6.eq) goto loc_82CCC740;
	// cmplwi cr6,r8,117
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 117, ctx.xer);
	// beq cr6,0x82ccc740
	if (ctx.cr6.eq) goto loc_82CCC740;
	// cmplwi cr6,r8,120
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 120, ctx.xer);
	// beq cr6,0x82ccc740
	if (ctx.cr6.eq) goto loc_82CCC740;
	// cmplwi cr6,r8,88
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 88, ctx.xer);
	// bne cr6,0x82ccc7d4
	if (!ctx.cr6.eq) goto loc_82CCC7D4;
loc_82CCC740:
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// beq cr6,0x82ccc774
	if (ctx.cr6.eq) goto loc_82CCC774;
	// cmplwi cr6,r11,105
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 105, ctx.xer);
	// beq cr6,0x82ccc774
	if (ctx.cr6.eq) goto loc_82CCC774;
	// cmplwi cr6,r11,111
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 111, ctx.xer);
	// beq cr6,0x82ccc774
	if (ctx.cr6.eq) goto loc_82CCC774;
	// cmplwi cr6,r11,117
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 117, ctx.xer);
	// beq cr6,0x82ccc774
	if (ctx.cr6.eq) goto loc_82CCC774;
	// cmplwi cr6,r11,120
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 120, ctx.xer);
	// beq cr6,0x82ccc774
	if (ctx.cr6.eq) goto loc_82CCC774;
	// cmplwi cr6,r11,88
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 88, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x82ccc778
	if (!ctx.cr6.eq) goto loc_82CCC778;
loc_82CCC774:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82CCC778:
	// cmplwi cr6,r8,100
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 100, ctx.xer);
	// beq cr6,0x82ccc7ac
	if (ctx.cr6.eq) goto loc_82CCC7AC;
	// cmplwi cr6,r8,105
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 105, ctx.xer);
	// beq cr6,0x82ccc7ac
	if (ctx.cr6.eq) goto loc_82CCC7AC;
	// cmplwi cr6,r8,111
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 111, ctx.xer);
	// beq cr6,0x82ccc7ac
	if (ctx.cr6.eq) goto loc_82CCC7AC;
	// cmplwi cr6,r8,117
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 117, ctx.xer);
	// beq cr6,0x82ccc7ac
	if (ctx.cr6.eq) goto loc_82CCC7AC;
	// cmplwi cr6,r8,120
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 120, ctx.xer);
	// beq cr6,0x82ccc7ac
	if (ctx.cr6.eq) goto loc_82CCC7AC;
	// cmplwi cr6,r8,88
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 88, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82ccc7b0
	if (!ctx.cr6.eq) goto loc_82CCC7B0;
loc_82CCC7AC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82CCC7B0:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82ccc804
	if (!ctx.cr6.eq) goto loc_82CCC804;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// xor r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// rlwinm. r10,r10,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ccc804
	if (!ctx.cr0.eq) goto loc_82CCC804;
	// xor r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ccc804
	if (!ctx.cr0.eq) goto loc_82CCC804;
loc_82CCC7D4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// b 0x82ccc814
	goto loc_82CCC814;
loc_82CCC7E0:
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82ccc804
	if (!ctx.cr6.eq) goto loc_82CCC804;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r6,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
loc_82CCC804:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82CCC80C:
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82CCC814:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCC820"))) PPC_WEAK_FUNC(sub_82CCC820);
PPC_FUNC_IMPL(__imp__sub_82CCC820) {
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
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccc84c
	if (ctx.cr0.eq) goto loc_82CCC84C;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ccc864
	if (ctx.cr6.eq) goto loc_82CCC864;
loc_82CCC84C:
	// bl 0x82ccb2a0
	ctx.lr = 0x82CCC850;
	sub_82CCB2A0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x82ccc864
	if (!ctx.cr6.eq) goto loc_82CCC864;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82ccc86c
	goto loc_82CCC86C;
loc_82CCC864:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82CCC86C:
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

__attribute__((alias("__imp__sub_82CCC884"))) PPC_WEAK_FUNC(sub_82CCC884);
PPC_FUNC_IMPL(__imp__sub_82CCC884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCC888"))) PPC_WEAK_FUNC(sub_82CCC888);
PPC_FUNC_IMPL(__imp__sub_82CCC888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82CCC890;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// b 0x82ccc8c8
	goto loc_82CCC8C8;
loc_82CCC8A8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x82ccc820
	ctx.lr = 0x82CCC8BC;
	sub_82CCC820(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82ccc8d0
	if (ctx.cr6.eq) goto loc_82CCC8D0;
loc_82CCC8C8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x82ccc8a8
	if (ctx.cr6.gt) goto loc_82CCC8A8;
loc_82CCC8D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCC8D8"))) PPC_WEAK_FUNC(sub_82CCC8D8);
PPC_FUNC_IMPL(__imp__sub_82CCC8D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82CCC8E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccc960
	if (ctx.cr0.eq) goto loc_82CCC960;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ccc960
	if (!ctx.cr6.eq) goto loc_82CCC960;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82ccc968
	goto loc_82CCC968;
loc_82CCC91C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lhz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// bl 0x82ccc820
	ctx.lr = 0x82CCC930;
	sub_82CCC820(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82ccc960
	if (!ctx.cr6.eq) goto loc_82CCC960;
	// bl 0x82cb8f58
	ctx.lr = 0x82CCC944;
	sub_82CB8F58(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// bne cr6,0x82ccc968
	if (!ctx.cr6.eq) goto loc_82CCC968;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x82ccc820
	ctx.lr = 0x82CCC960;
	sub_82CCC820(ctx, base);
loc_82CCC960:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x82ccc91c
	if (ctx.cr6.gt) goto loc_82CCC91C;
loc_82CCC968:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCC970"))) PPC_WEAK_FUNC(sub_82CCC970);
PPC_FUNC_IMPL(__imp__sub_82CCC970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82CCC978;
	__savegprlr_14(ctx, base);
	// stwu r1,-2944(r1)
	ea = -2944 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r6,2988(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2988, ctx.r6.u32);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// li r14,-1
	ctx.r14.s64 = -1;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// bne cr6,0x82ccc9dc
	if (!ctx.cr6.eq) goto loc_82CCC9DC;
loc_82CCC9B0:
	// bl 0x82cb8f58
	ctx.lr = 0x82CCC9B4;
	sub_82CB8F58(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb8da0
	ctx.lr = 0x82CCC9D4;
	sub_82CB8DA0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ccdbb4
	goto loc_82CCDBB4;
loc_82CCC9DC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ccc9b0
	if (ctx.cr6.eq) goto loc_82CCC9B0;
	// bl 0x82caff58
	ctx.lr = 0x82CCC9E8;
	sub_82CAFF58(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ccdb80
	if (ctx.cr6.eq) goto loc_82CCDB80;
	// bl 0x82caff58
	ctx.lr = 0x82CCC9F8;
	sub_82CAFF58(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ccdb80
	if (ctx.cr6.eq) goto loc_82CCDB80;
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// lwz r7,2988(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2988);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// mr r16,r26
	ctx.r16.u64 = ctx.r26.u64;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// stw r22,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r22.u32);
	// addi r10,r10,14320
	ctx.r10.s64 = ctx.r10.s64 + 14320;
	// lwz r25,128(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r9,r9,27496
	ctx.r9.s64 = ctx.r9.s64 + 27496;
	// stw r16,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r16.u32);
	// li r20,1
	ctx.r20.s64 = 1;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// addi r15,r11,13712
	ctx.r15.s64 = ctx.r11.s64 + 13712;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
loc_82CCCA44:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ccca58
	if (!ctx.cr6.eq) goto loc_82CCCA58;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x82ccdb78
	if (ctx.cr6.eq) goto loc_82CCDB78;
loc_82CCCA58:
	// lhz r29,0(r22)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r18,r26
	ctx.r18.u64 = ctx.r26.u64;
	// mr. r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// mr r19,r26
	ctx.r19.u64 = ctx.r26.u64;
	// mr r21,r26
	ctx.r21.u64 = ctx.r26.u64;
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// li r24,-1
	ctx.r24.s64 = -1;
	// li r14,-1
	ctx.r14.s64 = -1;
	// beq 0x82ccdb58
	if (ctx.cr0.eq) goto loc_82CCDB58;
loc_82CCCA84:
	// addi r22,r22,2
	ctx.r22.s64 = ctx.r22.s64 + 2;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// blt cr6,0x82ccdab8
	if (ctx.cr6.lt) goto loc_82CCDAB8;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// blt cr6,0x82cccab4
	if (ctx.cr6.lt) goto loc_82CCCAB4;
	// cmplwi cr6,r31,120
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 120, ctx.xer);
	// bgt cr6,0x82cccab4
	if (ctx.cr6.gt) goto loc_82CCCAB4;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbz r11,-32(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// b 0x82cccab8
	goto loc_82CCCAB8;
loc_82CCCAB4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CCCAB8:
	// mulli r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 * 9;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r18,r11,28,4,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// cmpwi cr6,r18,1
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 1, ctx.xer);
	// bne cr6,0x82cccba0
	if (!ctx.cr6.eq) goto loc_82CCCBA0;
	// lhz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// beq cr6,0x82cccbb0
	if (ctx.cr6.eq) goto loc_82CCCBB0;
	// cmpwi cr6,r14,-1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, -1, ctx.xer);
	// bne cr6,0x82cccb3c
	if (!ctx.cr6.eq) goto loc_82CCCB3C;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82cb29c8
	ctx.lr = 0x82CCCAF8;
	sub_82CB29C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82cccb34
	if (!ctx.cr0.gt) goto loc_82CCCB34;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// bne cr6,0x82cccb34
	if (!ctx.cr6.eq) goto loc_82CCCB34;
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82cccb2c
	if (!ctx.cr6.eq) goto loc_82CCCB2C;
	// li r5,1600
	ctx.r5.s64 = 1600;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82cb16f0
	ctx.lr = 0x82CCCB2C;
	sub_82CB16F0(ctx, base);
loc_82CCCB2C:
	// mr r14,r20
	ctx.r14.u64 = ctx.r20.u64;
	// b 0x82cccb48
	goto loc_82CCCB48;
loc_82CCCB34:
	// lwz r7,2988(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2988);
	// li r14,0
	ctx.r14.s64 = 0;
loc_82CCCB3C:
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// bne cr6,0x82cccbb0
	if (!ctx.cr6.eq) goto loc_82CCCBB0;
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82CCCB48:
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82cb29c8
	ctx.lr = 0x82CCCB58;
	sub_82CB29C8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r24,r3,-1
	ctx.r24.s64 = ctx.r3.s64 + -1;
	// addi r22,r11,2
	ctx.r22.s64 = ctx.r11.s64 + 2;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82cccbdc
	if (!ctx.cr6.eq) goto loc_82CCCBDC;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt cr6,0x82ccc9b0
	if (ctx.cr6.lt) goto loc_82CCC9B0;
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// bne cr6,0x82ccc9b0
	if (!ctx.cr6.eq) goto loc_82CCC9B0;
	// cmpwi cr6,r24,100
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 100, ctx.xer);
	// bge cr6,0x82ccc9b0
	if (!ctx.cr6.lt) goto loc_82CCC9B0;
	// cmpw cr6,r24,r28
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x82cccbdc
	if (!ctx.cr6.gt) goto loc_82CCCBDC;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// lwz r7,2988(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2988);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// b 0x82cccbb4
	goto loc_82CCCBB4;
loc_82CCCBA0:
	// cmpwi cr6,r18,8
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 8, ctx.xer);
	// beq cr6,0x82ccc9b0
	if (ctx.cr6.eq) goto loc_82CCC9B0;
	// cmplwi cr6,r18,7
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 7, ctx.xer);
	// bgt cr6,0x82ccdaa8
	if (ctx.cr6.gt) goto loc_82CCDAA8;
loc_82CCCBB0:
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82CCCBB4:
	// lis r12,-32256
	ctx.r12.s64 = -2113929216;
	// addi r12,r12,27480
	ctx.r12.s64 = ctx.r12.s64 + 27480;
	// rlwinm r0,r18,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32051
	ctx.r12.s64 = -2100494336;
	// addi r12,r12,-13348
	ctx.r12.s64 = ctx.r12.s64 + -13348;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r18.u64) {
	case 0:
		goto loc_82CCCBE4;
	case 1:
		goto loc_82CCCC08;
	case 2:
		goto loc_82CCCC28;
	case 3:
		goto loc_82CCCC78;
	case 4:
		goto loc_82CCCD38;
	case 5:
		goto loc_82CCCD40;
	case 6:
		goto loc_82CCCE0C;
	case 7:
		goto loc_82CCCEF8;
	default:
		__builtin_unreachable();
	}
loc_82CCCBDC:
	// lwz r7,2988(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2988);
	// b 0x82cccbb4
	goto loc_82CCCBB4;
loc_82CCCBE4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82cccbf4
	if (!ctx.cr6.eq) goto loc_82CCCBF4;
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// beq cr6,0x82ccdaa8
	if (ctx.cr6.eq) goto loc_82CCDAA8;
loc_82CCCBF4:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x82ccced4
	if (!ctx.cr6.eq) goto loc_82CCCED4;
	// cmpwi cr6,r14,-1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, -1, ctx.xer);
	// bne cr6,0x82ccced4
	if (!ctx.cr6.eq) goto loc_82CCCED4;
	// b 0x82ccdaa8
	goto loc_82CCDAA8;
loc_82CCCC08:
	// li r27,0
	ctx.r27.s64 = 0;
	// li r23,-1
	ctx.r23.s64 = -1;
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// b 0x82ccdaa8
	goto loc_82CCDAA8;
loc_82CCCC28:
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// beq cr6,0x82cccc70
	if (ctx.cr6.eq) goto loc_82CCCC70;
	// cmpwi cr6,r31,35
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 35, ctx.xer);
	// beq cr6,0x82cccc68
	if (ctx.cr6.eq) goto loc_82CCCC68;
	// cmpwi cr6,r31,43
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 43, ctx.xer);
	// beq cr6,0x82cccc60
	if (ctx.cr6.eq) goto loc_82CCCC60;
	// cmpwi cr6,r31,45
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 45, ctx.xer);
	// beq cr6,0x82cccc58
	if (ctx.cr6.eq) goto loc_82CCCC58;
	// cmpwi cr6,r31,48
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 48, ctx.xer);
	// bne cr6,0x82ccdaa8
	if (!ctx.cr6.eq) goto loc_82CCDAA8;
	// ori r27,r27,8
	ctx.r27.u64 = ctx.r27.u64 | 8;
	// b 0x82ccdaa8
	goto loc_82CCDAA8;
loc_82CCCC58:
	// ori r27,r27,4
	ctx.r27.u64 = ctx.r27.u64 | 4;
	// b 0x82ccdaa8
	goto loc_82CCDAA8;
loc_82CCCC60:
	// ori r27,r27,1
	ctx.r27.u64 = ctx.r27.u64 | 1;
	// b 0x82ccdaa8
	goto loc_82CCDAA8;
loc_82CCCC68:
	// ori r27,r27,128
	ctx.r27.u64 = ctx.r27.u64 | 128;
	// b 0x82ccdaa8
	goto loc_82CCDAA8;
loc_82CCCC70:
	// ori r27,r27,2
	ctx.r27.u64 = ctx.r27.u64 | 2;
	// b 0x82ccdaa8
	goto loc_82CCDAA8;
loc_82CCCC78:
	// cmplwi cr6,r31,42
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 42, ctx.xer);
	// bne cr6,0x82cccd28
	if (!ctx.cr6.eq) goto loc_82CCCD28;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x82cccca0
	if (!ctx.cr6.eq) goto loc_82CCCCA0;
	// addi r11,r7,7
	ctx.r11.s64 = ctx.r7.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,2988(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2988, ctx.r7.u32);
	// lwz r21,-4(r7)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// b 0x82cccce0
	goto loc_82CCCCE0;
loc_82CCCCA0:
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82cb29c8
	ctx.lr = 0x82CCCCB0;
	sub_82CB29C8(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// addi r22,r10,2
	ctx.r22.s64 = ctx.r10.s64 + 2;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82cccd8c
	if (ctx.cr6.eq) goto loc_82CCCD8C;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r7,2988(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2988);
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r21,4(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82CCCCE0:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bge cr6,0x82ccdaa8
	if (!ctx.cr6.lt) goto loc_82CCDAA8;
	// ori r27,r27,4
	ctx.r27.u64 = ctx.r27.u64 | 4;
	// neg r21,r21
	ctx.r21.s64 = -ctx.r21.s64;
	// b 0x82ccdaa8
	goto loc_82CCDAA8;
loc_82CCCCF4:
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// stw r20,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r20.u32);
	// addi r9,r1,172
	ctx.r9.s64 = ctx.r1.s64 + 172;
	// sthx r29,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u16);
	// stwx r27,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r27.u32);
	// b 0x82ccdaa4
	goto loc_82CCDAA4;
loc_82CCCD0C:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82ccc688
	ctx.lr = 0x82CCCD1C;
	sub_82CCC688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ccc9b0
	if (ctx.cr0.eq) goto loc_82CCC9B0;
	// b 0x82ccdaa4
	goto loc_82CCDAA4;
loc_82CCCD28:
	// mulli r11,r21,10
	ctx.r11.s64 = ctx.r21.s64 * 10;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r21,r11,-48
	ctx.r21.s64 = ctx.r11.s64 + -48;
	// b 0x82ccdaa8
	goto loc_82CCDAA8;
loc_82CCCD38:
	// li r23,0
	ctx.r23.s64 = 0;
	// b 0x82ccdaa8
	goto loc_82CCDAA8;
loc_82CCCD40:
	// cmplwi cr6,r31,42
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 42, ctx.xer);
	// bne cr6,0x82cccdfc
	if (!ctx.cr6.eq) goto loc_82CCCDFC;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x82cccd68
	if (!ctx.cr6.eq) goto loc_82CCCD68;
	// addi r11,r7,7
	ctx.r11.s64 = ctx.r7.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,2988(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2988, ctx.r7.u32);
	// lwz r23,-4(r7)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// b 0x82cccdec
	goto loc_82CCCDEC;
loc_82CCCD68:
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82cb29c8
	ctx.lr = 0x82CCCD78;
	sub_82CB29C8(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// addi r22,r10,2
	ctx.r22.s64 = ctx.r10.s64 + 2;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82cccdd0
	if (!ctx.cr6.eq) goto loc_82CCCDD0;
loc_82CCCD8C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82ccc9b0
	if (ctx.cr6.lt) goto loc_82CCC9B0;
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,36
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 36, ctx.xer);
	// bne cr6,0x82ccc9b0
	if (!ctx.cr6.eq) goto loc_82CCC9B0;
	// cmpwi cr6,r24,100
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 100, ctx.xer);
	// bge cr6,0x82ccc9b0
	if (!ctx.cr6.lt) goto loc_82CCC9B0;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x82cccdb4
	if (!ctx.cr6.gt) goto loc_82CCCDB4;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_82CCCDB4:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ccccf4
	if (ctx.cr6.eq) goto loc_82CCCCF4;
	// b 0x82cccd0c
	goto loc_82CCCD0C;
loc_82CCCDD0:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r7,2988(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2988);
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r23,4(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82CCCDEC:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bge cr6,0x82ccdaa8
	if (!ctx.cr6.lt) goto loc_82CCDAA8;
	// li r23,-1
	ctx.r23.s64 = -1;
	// b 0x82ccdaa8
	goto loc_82CCDAA8;
loc_82CCCDFC:
	// mulli r11,r23,10
	ctx.r11.s64 = ctx.r23.s64 * 10;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r23,r11,-48
	ctx.r23.s64 = ctx.r11.s64 + -48;
	// b 0x82ccdaa8
	goto loc_82CCDAA8;
loc_82CCCE0C:
	// cmpwi cr6,r31,73
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 73, ctx.xer);
	// beq cr6,0x82ccce5c
	if (ctx.cr6.eq) goto loc_82CCCE5C;
	// cmpwi cr6,r31,104
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 104, ctx.xer);
	// beq cr6,0x82ccce54
	if (ctx.cr6.eq) goto loc_82CCCE54;
	// cmpwi cr6,r31,108
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 108, ctx.xer);
	// beq cr6,0x82ccce34
	if (ctx.cr6.eq) goto loc_82CCCE34;
	// cmpwi cr6,r31,119
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 119, ctx.xer);
	// bne cr6,0x82ccdaa8
	if (!ctx.cr6.eq) goto loc_82CCDAA8;
	// ori r27,r27,2048
	ctx.r27.u64 = ctx.r27.u64 | 2048;
	// b 0x82ccdaa8
	goto loc_82CCDAA8;
loc_82CCCE34:
	// lhz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,108
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 108, ctx.xer);
	// bne cr6,0x82ccce4c
	if (!ctx.cr6.eq) goto loc_82CCCE4C;
	// addi r22,r22,2
	ctx.r22.s64 = ctx.r22.s64 + 2;
	// ori r27,r27,4096
	ctx.r27.u64 = ctx.r27.u64 | 4096;
	// b 0x82ccdaa8
	goto loc_82CCDAA8;
loc_82CCCE4C:
	// ori r27,r27,16
	ctx.r27.u64 = ctx.r27.u64 | 16;
	// b 0x82ccdaa8
	goto loc_82CCDAA8;
loc_82CCCE54:
	// ori r27,r27,32
	ctx.r27.u64 = ctx.r27.u64 | 32;
	// b 0x82ccdaa8
	goto loc_82CCDAA8;
loc_82CCCE5C:
	// lhz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,54
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 54, ctx.xer);
	// bne cr6,0x82ccce80
	if (!ctx.cr6.eq) goto loc_82CCCE80;
	// lhz r10,2(r22)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r22.u32 + 2);
	// cmplwi cr6,r10,52
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 52, ctx.xer);
	// bne cr6,0x82ccce80
	if (!ctx.cr6.eq) goto loc_82CCCE80;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// ori r27,r27,32768
	ctx.r27.u64 = ctx.r27.u64 | 32768;
	// b 0x82ccdaa8
	goto loc_82CCDAA8;
loc_82CCCE80:
	// cmplwi cr6,r11,51
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 51, ctx.xer);
	// bne cr6,0x82cccea0
	if (!ctx.cr6.eq) goto loc_82CCCEA0;
	// lhz r10,2(r22)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r22.u32 + 2);
	// cmplwi cr6,r10,50
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 50, ctx.xer);
	// bne cr6,0x82cccea0
	if (!ctx.cr6.eq) goto loc_82CCCEA0;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// rlwinm r27,r27,0,17,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// b 0x82ccdaa8
	goto loc_82CCDAA8;
loc_82CCCEA0:
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// beq cr6,0x82cccef0
	if (ctx.cr6.eq) goto loc_82CCCEF0;
	// cmplwi cr6,r11,105
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 105, ctx.xer);
	// beq cr6,0x82cccef0
	if (ctx.cr6.eq) goto loc_82CCCEF0;
	// cmplwi cr6,r11,111
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 111, ctx.xer);
	// beq cr6,0x82cccef0
	if (ctx.cr6.eq) goto loc_82CCCEF0;
	// cmplwi cr6,r11,117
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 117, ctx.xer);
	// beq cr6,0x82cccef0
	if (ctx.cr6.eq) goto loc_82CCCEF0;
	// cmplwi cr6,r11,120
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 120, ctx.xer);
	// beq cr6,0x82cccef0
	if (ctx.cr6.eq) goto loc_82CCCEF0;
	// cmplwi cr6,r11,88
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 88, ctx.xer);
	// beq cr6,0x82cccef0
	if (ctx.cr6.eq) goto loc_82CCCEF0;
	// li r18,0
	ctx.r18.s64 = 0;
loc_82CCCED4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ccc820
	ctx.lr = 0x82CCCEE8;
	sub_82CCC820(ctx, base);
	// lwz r16,80(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82ccdaa4
	goto loc_82CCDAA4;
loc_82CCCEF0:
	// oris r27,r27,1
	ctx.r27.u64 = ctx.r27.u64 | 65536;
	// b 0x82ccdaa8
	goto loc_82CCDAA8;
loc_82CCCEF8:
	// addi r11,r31,-65
	ctx.r11.s64 = ctx.r31.s64 + -65;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// bgt cr6,0x82ccd1d8
	if (ctx.cr6.gt) goto loc_82CCD1D8;
	// lis r12,-32256
	ctx.r12.s64 = -2113929216;
	// addi r12,r12,27368
	ctx.r12.s64 = ctx.r12.s64 + 27368;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32051
	ctx.r12.s64 = -2100494336;
	// addi r12,r12,-12500
	ctx.r12.s64 = ctx.r12.s64 + -12500;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82CCD2C4;
	case 1:
		goto loc_82CCD1D8;
	case 2:
		goto loc_82CCCF2C;
	case 3:
		goto loc_82CCD1D8;
	case 4:
		goto loc_82CCD2C4;
	case 5:
		goto loc_82CCD1D8;
	case 6:
		goto loc_82CCD2C4;
	case 7:
		goto loc_82CCD1D8;
	case 8:
		goto loc_82CCD1D8;
	case 9:
		goto loc_82CCD1D8;
	case 10:
		goto loc_82CCD1D8;
	case 11:
		goto loc_82CCD1D8;
	case 12:
		goto loc_82CCD1D8;
	case 13:
		goto loc_82CCD1D8;
	case 14:
		goto loc_82CCD1D8;
	case 15:
		goto loc_82CCD1D8;
	case 16:
		goto loc_82CCD1D8;
	case 17:
		goto loc_82CCD1D8;
	case 18:
		goto loc_82CCD0E8;
	case 19:
		goto loc_82CCD1D8;
	case 20:
		goto loc_82CCD1D8;
	case 21:
		goto loc_82CCD1D8;
	case 22:
		goto loc_82CCD1D8;
	case 23:
		goto loc_82CCD4B0;
	case 24:
		goto loc_82CCD1D8;
	case 25:
		goto loc_82CCD01C;
	case 26:
		goto loc_82CCD1D8;
	case 27:
		goto loc_82CCD1D8;
	case 28:
		goto loc_82CCD1D8;
	case 29:
		goto loc_82CCD1D8;
	case 30:
		goto loc_82CCD1D8;
	case 31:
		goto loc_82CCD1D8;
	case 32:
		goto loc_82CCD2D0;
	case 33:
		goto loc_82CCD1D8;
	case 34:
		goto loc_82CCCF3C;
	case 35:
		goto loc_82CCD4A0;
	case 36:
		goto loc_82CCD2D0;
	case 37:
		goto loc_82CCD2D0;
	case 38:
		goto loc_82CCD2D0;
	case 39:
		goto loc_82CCD1D8;
	case 40:
		goto loc_82CCD4A0;
	case 41:
		goto loc_82CCD1D8;
	case 42:
		goto loc_82CCD1D8;
	case 43:
		goto loc_82CCD1D8;
	case 44:
		goto loc_82CCD1D8;
	case 45:
		goto loc_82CCD250;
	case 46:
		goto loc_82CCD4E8;
	case 47:
		goto loc_82CCD4AC;
	case 48:
		goto loc_82CCD1D8;
	case 49:
		goto loc_82CCD1D8;
	case 50:
		goto loc_82CCD0F8;
	case 51:
		goto loc_82CCD1D8;
	case 52:
		goto loc_82CCD4A4;
	case 53:
		goto loc_82CCD1D8;
	case 54:
		goto loc_82CCD1D8;
	case 55:
		goto loc_82CCD4B8;
	default:
		__builtin_unreachable();
	}
loc_82CCCF2C:
	// andi. r11,r27,2096
	ctx.r11.u64 = ctx.r27.u64 & 2096;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cccf3c
	if (!ctx.cr0.eq) goto loc_82CCCF3C;
	// ori r27,r27,32
	ctx.r27.u64 = ctx.r27.u64 | 32;
loc_82CCCF3C:
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x82cccf60
	if (!ctx.cr6.eq) goto loc_82CCCF60;
	// addi r11,r7,7
	ctx.r11.s64 = ctx.r7.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,2988(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2988, ctx.r7.u32);
	// lwz r11,-4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// b 0x82cccf8c
	goto loc_82CCCF8C;
loc_82CCCF60:
	// cmplwi cr6,r24,99
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 99, ctx.xer);
	// bgt cr6,0x82ccc9b0
	if (ctx.cr6.gt) goto loc_82CCC9B0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r11,r24,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// beq cr6,0x82ccd600
	if (ctx.cr6.eq) goto loc_82CCD600;
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82CCCF8C:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm. r10,r27,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// beq 0x82ccd00c
	if (ctx.cr0.eq) goto loc_82CCD00C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r10.u8);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// stb r9,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r9.u8);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r1,1760
	ctx.r3.s64 = ctx.r1.s64 + 1760;
	// lwz r5,172(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// bl 0x82ccb948
	ctx.lr = 0x82CCCFC4;
	sub_82CCB948(ctx, base);
	// lwz r7,2988(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2988);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ccd010
	if (!ctx.cr0.lt) goto loc_82CCD010;
	// stw r20,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r20.u32);
	// b 0x82ccd010
	goto loc_82CCD010;
loc_82CCCFD8:
	// stw r20,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r20.u32);
loc_82CCCFDC:
	// addi r9,r1,172
	ctx.r9.s64 = ctx.r1.s64 + 172;
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// stwx r27,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r27.u32);
	// sthx r29,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u16);
	// b 0x82ccd1d8
	goto loc_82CCD1D8;
loc_82CCCFF0:
	// li r4,1
	ctx.r4.s64 = 1;
loc_82CCCFF4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x82ccc688
	ctx.lr = 0x82CCD000;
	sub_82CCC688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ccc9b0
	if (ctx.cr0.eq) goto loc_82CCC9B0;
	// b 0x82ccd1d8
	goto loc_82CCD1D8;
loc_82CCD00C:
	// sth r11,1760(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1760, ctx.r11.u16);
loc_82CCD010:
	// addi r25,r1,1760
	ctx.r25.s64 = ctx.r1.s64 + 1760;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// b 0x82ccd1d8
	goto loc_82CCD1D8;
loc_82CCD01C:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x82ccd03c
	if (!ctx.cr6.eq) goto loc_82CCD03C;
	// addi r11,r7,7
	ctx.r11.s64 = ctx.r7.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,2988(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2988, ctx.r7.u32);
	// lwz r11,-4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// b 0x82ccd068
	goto loc_82CCD068;
loc_82CCD03C:
	// cmplwi cr6,r24,99
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 99, ctx.xer);
	// bgt cr6,0x82ccc9b0
	if (ctx.cr6.gt) goto loc_82CCC9B0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r11,r24,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// beq cr6,0x82ccd148
	if (ctx.cr6.eq) goto loc_82CCD148;
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82CCD068:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ccd0b8
	if (ctx.cr6.eq) goto loc_82CCD0B8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ccd0b8
	if (ctx.cr6.eq) goto loc_82CCD0B8;
	// rlwinm. r9,r27,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// beq 0x82ccd0a8
	if (ctx.cr0.eq) goto loc_82CCD0A8;
	// lha r11,0(r11)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 0));
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// addze r26,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r26.s64 = temp.s64;
	// b 0x82ccd1d8
	goto loc_82CCD1D8;
loc_82CCD09C:
	// li r8,2
	ctx.r8.s64 = 2;
loc_82CCD0A0:
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// b 0x82cccfdc
	goto loc_82CCCFDC;
loc_82CCD0A8:
	// li r9,0
	ctx.r9.s64 = 0;
	// lha r26,0(r11)
	ctx.r26.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 0));
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// b 0x82ccd1d8
	goto loc_82CCD1D8;
loc_82CCD0B8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r25,24020(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24020);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_82CCD0C8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ccd0c8
	if (!ctx.cr6.eq) goto loc_82CCD0C8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r26,r11,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82ccd1d8
	goto loc_82CCD1D8;
loc_82CCD0E8:
	// andi. r11,r27,2096
	ctx.r11.u64 = ctx.r27.u64 & 2096;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ccd0f8
	if (!ctx.cr0.eq) goto loc_82CCD0F8;
	// ori r27,r27,32
	ctx.r27.u64 = ctx.r27.u64 | 32;
loc_82CCD0F8:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// bne cr6,0x82ccd10c
	if (!ctx.cr6.eq) goto loc_82CCD10C;
	// lis r30,32767
	ctx.r30.s64 = 2147418112;
	// ori r30,r30,65535
	ctx.r30.u64 = ctx.r30.u64 | 65535;
	// b 0x82ccd110
	goto loc_82CCD110;
loc_82CCD10C:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82CCD110:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x82ccd130
	if (!ctx.cr6.eq) goto loc_82CCD130;
	// addi r11,r7,7
	ctx.r11.s64 = ctx.r7.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,2988(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2988, ctx.r7.u32);
	// lwz r25,-4(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// b 0x82ccd178
	goto loc_82CCD178;
loc_82CCD130:
	// cmplwi cr6,r24,99
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 99, ctx.xer);
	// bgt cr6,0x82ccc9b0
	if (ctx.cr6.gt) goto loc_82CCC9B0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r11,r24,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// bne cr6,0x82ccd164
	if (!ctx.cr6.eq) goto loc_82CCD164;
loc_82CCD148:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ccd09c
	if (ctx.cr6.eq) goto loc_82CCD09C;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82cccff4
	goto loc_82CCCFF4;
loc_82CCD164:
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r25,4(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82CCD178:
	// rlwinm. r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq 0x82ccd210
	if (ctx.cr0.eq) goto loc_82CCD210;
	// bne cr6,0x82ccd190
	if (!ctx.cr6.eq) goto loc_82CCD190;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r25,24020(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24020);
loc_82CCD190:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82ccd1d8
	if (!ctx.cr6.gt) goto loc_82CCD1D8;
loc_82CCD1A0:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ccd1d4
	if (ctx.cr0.eq) goto loc_82CCD1D4;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82cb5500
	ctx.lr = 0x82CCD1B8;
	sub_82CB5500(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ccd1c4
	if (ctx.cr0.eq) goto loc_82CCD1C4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82CCD1C4:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r26,r30
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82ccd1a0
	if (ctx.cr6.lt) goto loc_82CCD1A0;
loc_82CCD1D4:
	// lwz r7,2988(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2988);
loc_82CCD1D8:
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// bne cr6,0x82ccd1ec
	if (!ctx.cr6.eq) goto loc_82CCD1EC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ccdaa8
	if (ctx.cr6.eq) goto loc_82CCDAA8;
loc_82CCD1EC:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ccda90
	if (!ctx.cr6.eq) goto loc_82CCDA90;
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccd838
	if (ctx.cr0.eq) goto loc_82CCD838;
	// rlwinm. r11,r27,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccd814
	if (ctx.cr0.eq) goto loc_82CCD814;
	// li r11,45
	ctx.r11.s64 = 45;
	// b 0x82ccd830
	goto loc_82CCD830;
loc_82CCD210:
	// bne cr6,0x82ccd21c
	if (!ctx.cr6.eq) goto loc_82CCD21C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r25,24024(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24024);
loc_82CCD21C:
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x82ccd23c
	goto loc_82CCD23C;
loc_82CCD228:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82ccd244
	if (ctx.cr0.eq) goto loc_82CCD244;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82CCD23C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82ccd228
	if (!ctx.cr6.eq) goto loc_82CCD228;
loc_82CCD244:
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// srawi r26,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 1;
	// b 0x82ccd1d8
	goto loc_82CCD1D8;
loc_82CCD250:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x82ccd270
	if (!ctx.cr6.eq) goto loc_82CCD270;
	// addi r11,r7,7
	ctx.r11.s64 = ctx.r7.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,2988(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2988, ctx.r11.u32);
	// lwz r31,-4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x82ccd29c
	goto loc_82CCD29C;
loc_82CCD270:
	// cmplwi cr6,r24,99
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 99, ctx.xer);
	// bgt cr6,0x82ccc9b0
	if (ctx.cr6.gt) goto loc_82CCC9B0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r11,r24,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// beq cr6,0x82ccd148
	if (ctx.cr6.eq) goto loc_82CCD148;
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82CCD29C:
	// bl 0x82ccb920
	ctx.lr = 0x82CCD2A0;
	sub_82CCB920(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ccc9b0
	if (ctx.cr0.eq) goto loc_82CCC9B0;
	// rlwinm. r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccd2b8
	if (ctx.cr0.eq) goto loc_82CCD2B8;
	// sth r16,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r16.u16);
	// b 0x82ccd2bc
	goto loc_82CCD2BC;
loc_82CCD2B8:
	// stw r16,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r16.u32);
loc_82CCD2BC:
	// stw r20,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r20.u32);
	// b 0x82ccd1d4
	goto loc_82CCD1D4;
loc_82CCD2C4:
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// stw r20,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r20.u32);
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
loc_82CCD2D0:
	// ori r27,r27,64
	ctx.r27.u64 = ctx.r27.u64 | 64;
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// bne cr6,0x82ccd340
	if (!ctx.cr6.eq) goto loc_82CCD340;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ccd340
	if (!ctx.cr6.eq) goto loc_82CCD340;
	// cmplwi cr6,r24,99
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 99, ctx.xer);
	// bgt cr6,0x82ccc9b0
	if (ctx.cr6.gt) goto loc_82CCC9B0;
	// rlwinm r11,r24,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82ccd324
	if (!ctx.cr6.eq) goto loc_82CCD324;
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// addi r9,r1,172
	ctx.r9.s64 = ctx.r1.s64 + 172;
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// sthx r29,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u16);
	// stwx r27,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r27.u32);
	// b 0x82ccdaa8
	goto loc_82CCDAA8;
loc_82CCD324:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82ccc688
	ctx.lr = 0x82CCD334;
	sub_82CCC688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ccc9b0
	if (ctx.cr0.eq) goto loc_82CCC9B0;
	// b 0x82ccdaa8
	goto loc_82CCDAA8;
loc_82CCD340:
	// addi r25,r1,1760
	ctx.r25.s64 = ctx.r1.s64 + 1760;
	// li r30,512
	ctx.r30.s64 = 512;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bge cr6,0x82ccd358
	if (!ctx.cr6.lt) goto loc_82CCD358;
	// li r23,6
	ctx.r23.s64 = 6;
	// b 0x82ccd3ac
	goto loc_82CCD3AC;
loc_82CCD358:
	// bne cr6,0x82ccd370
	if (!ctx.cr6.eq) goto loc_82CCD370;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,103
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 103, ctx.xer);
	// bne cr6,0x82ccd3ac
	if (!ctx.cr6.eq) goto loc_82CCD3AC;
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// b 0x82ccd3ac
	goto loc_82CCD3AC;
loc_82CCD370:
	// cmpwi cr6,r23,512
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 512, ctx.xer);
	// ble cr6,0x82ccd37c
	if (!ctx.cr6.gt) goto loc_82CCD37C;
	// li r23,512
	ctx.r23.s64 = 512;
loc_82CCD37C:
	// cmpwi cr6,r23,163
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 163, ctx.xer);
	// ble cr6,0x82ccd3ac
	if (!ctx.cr6.gt) goto loc_82CCD3AC;
	// addi r31,r23,349
	ctx.r31.s64 = ctx.r23.s64 + 349;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb0fe0
	ctx.lr = 0x82CCD390;
	sub_82CB0FE0(ctx, base);
	// lwz r7,2988(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2988);
	// mr. r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq 0x82ccd3a8
	if (ctx.cr0.eq) goto loc_82CCD3A8;
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// b 0x82ccd3ac
	goto loc_82CCD3AC;
loc_82CCD3A8:
	// li r23,163
	ctx.r23.s64 = 163;
loc_82CCD3AC:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x82ccd3cc
	if (!ctx.cr6.eq) goto loc_82CCD3CC;
	// addi r11,r7,7
	ctx.r11.s64 = ctx.r7.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,2988(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2988, ctx.r11.u32);
	// ld r11,-8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -8);
	// b 0x82ccd3ec
	goto loc_82CCD3EC;
loc_82CCD3CC:
	// cmplwi cr6,r24,99
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 99, ctx.xer);
	// bgt cr6,0x82ccc9b0
	if (ctx.cr6.gt) goto loc_82CCC9B0;
	// rlwinm r11,r24,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
loc_82CCD3EC:
	// lwz r28,136(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// extsb r6,r29
	ctx.r6.s64 = ctx.r29.s8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CCD41C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm. r31,r27,0,24,24
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82ccd440
	if (ctx.cr0.eq) goto loc_82CCD440;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x82ccd440
	if (!ctx.cr6.eq) goto loc_82CCD440;
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CCD440;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CCD440:
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,103
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 103, ctx.xer);
	// bne cr6,0x82ccd468
	if (!ctx.cr6.eq) goto loc_82CCD468;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82ccd468
	if (!ctx.cr6.eq) goto loc_82CCD468;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CCD468;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CCD468:
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// bne cr6,0x82ccd47c
	if (!ctx.cr6.eq) goto loc_82CCD47C;
	// ori r27,r27,256
	ctx.r27.u64 = ctx.r27.u64 | 256;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_82CCD47C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82CCD480:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ccd480
	if (!ctx.cr6.eq) goto loc_82CCD480;
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r26,r11,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82ccd1d4
	goto loc_82CCD1D4;
loc_82CCD4A0:
	// ori r27,r27,64
	ctx.r27.u64 = ctx.r27.u64 | 64;
loc_82CCD4A4:
	// li r8,10
	ctx.r8.s64 = 10;
	// b 0x82ccd4f8
	goto loc_82CCD4F8;
loc_82CCD4AC:
	// li r23,8
	ctx.r23.s64 = 8;
loc_82CCD4B0:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82ccd4bc
	goto loc_82CCD4BC;
loc_82CCD4B8:
	// li r11,39
	ctx.r11.s64 = 39;
loc_82CCD4BC:
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// rlwinm. r10,r27,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r8,16
	ctx.r8.s64 = 16;
	// beq 0x82ccd4f8
	if (ctx.cr0.eq) goto loc_82CCD4F8;
	// addi r11,r11,81
	ctx.r11.s64 = ctx.r11.s64 + 81;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r9,2
	ctx.r9.s64 = 2;
	// sth r11,114(r1)
	PPC_STORE_U16(ctx.r1.u32 + 114, ctx.r11.u16);
	// sth r10,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r10.u16);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// b 0x82ccd4f8
	goto loc_82CCD4F8;
loc_82CCD4E8:
	// rlwinm. r11,r27,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r8,8
	ctx.r8.s64 = 8;
	// beq 0x82ccd4f8
	if (ctx.cr0.eq) goto loc_82CCD4F8;
	// ori r27,r27,512
	ctx.r27.u64 = ctx.r27.u64 | 512;
loc_82CCD4F8:
	// rlwinm. r11,r27,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq 0x82ccd55c
	if (ctx.cr0.eq) goto loc_82CCD55C;
	// bne cr6,0x82ccd520
	if (!ctx.cr6.eq) goto loc_82CCD520;
loc_82CCD508:
	// addi r11,r7,7
	ctx.r11.s64 = ctx.r7.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,2988(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2988, ctx.r7.u32);
	// ld r11,-8(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + -8);
	// b 0x82ccd720
	goto loc_82CCD720;
loc_82CCD520:
	// cmplwi cr6,r24,99
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 99, ctx.xer);
	// bgt cr6,0x82ccc9b0
	if (ctx.cr6.gt) goto loc_82CCC9B0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r11,r24,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// bne cr6,0x82ccd5a4
	if (!ctx.cr6.eq) goto loc_82CCD5A4;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82ccd554
	if (!ctx.cr6.eq) goto loc_82CCD554;
	// li r8,3
	ctx.r8.s64 = 3;
	// b 0x82ccd0a0
	goto loc_82CCD0A0;
loc_82CCD554:
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82cccff4
	goto loc_82CCCFF4;
loc_82CCD55C:
	// rlwinm. r11,r27,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccd5bc
	if (ctx.cr0.eq) goto loc_82CCD5BC;
	// beq cr6,0x82ccd508
	if (ctx.cr6.eq) goto loc_82CCD508;
	// cmplwi cr6,r24,99
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 99, ctx.xer);
	// bgt cr6,0x82ccc9b0
	if (ctx.cr6.gt) goto loc_82CCC9B0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r11,r24,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// bne cr6,0x82ccd5a4
	if (!ctx.cr6.eq) goto loc_82CCD5A4;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82ccd59c
	if (!ctx.cr6.eq) goto loc_82CCD59C;
	// li r8,4
	ctx.r8.s64 = 4;
	// b 0x82ccd0a0
	goto loc_82CCD0A0;
loc_82CCD59C:
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82cccff4
	goto loc_82CCCFF4;
loc_82CCD5A4:
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// b 0x82ccd720
	goto loc_82CCD720;
loc_82CCD5BC:
	// rlwinm. r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccd684
	if (ctx.cr0.eq) goto loc_82CCD684;
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccd634
	if (ctx.cr0.eq) goto loc_82CCD634;
	// bne cr6,0x82ccd5e8
	if (!ctx.cr6.eq) goto loc_82CCD5E8;
	// addi r11,r7,7
	ctx.r11.s64 = ctx.r7.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,2988(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2988, ctx.r7.u32);
	// lwz r11,-4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// b 0x82ccd62c
	goto loc_82CCD62C;
loc_82CCD5E8:
	// cmplwi cr6,r24,99
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 99, ctx.xer);
	// bgt cr6,0x82ccc9b0
	if (ctx.cr6.gt) goto loc_82CCC9B0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r11,r24,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// bne cr6,0x82ccd618
	if (!ctx.cr6.eq) goto loc_82CCD618;
loc_82CCD600:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82cccfd8
	if (ctx.cr6.eq) goto loc_82CCCFD8;
	// b 0x82cccff0
	goto loc_82CCCFF0;
loc_82CCD618:
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82CCD62C:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x82ccd720
	goto loc_82CCD720;
loc_82CCD634:
	// bne cr6,0x82ccd650
	if (!ctx.cr6.eq) goto loc_82CCD650;
	// addi r11,r7,7
	ctx.r11.s64 = ctx.r7.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,2988(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2988, ctx.r7.u32);
	// lwz r11,-4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// b 0x82ccd67c
	goto loc_82CCD67C;
loc_82CCD650:
	// cmplwi cr6,r24,99
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 99, ctx.xer);
	// bgt cr6,0x82ccc9b0
	if (ctx.cr6.gt) goto loc_82CCC9B0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r11,r24,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// beq cr6,0x82ccd600
	if (ctx.cr6.eq) goto loc_82CCD600;
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82CCD67C:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x82ccd720
	goto loc_82CCD720;
loc_82CCD684:
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccd6d8
	if (ctx.cr0.eq) goto loc_82CCD6D8;
	// bne cr6,0x82ccd6a8
	if (!ctx.cr6.eq) goto loc_82CCD6A8;
	// addi r11,r7,7
	ctx.r11.s64 = ctx.r7.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,2988(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2988, ctx.r7.u32);
	// lwa r11,-4(r7)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r7.u32 + -4));
	// b 0x82ccd720
	goto loc_82CCD720;
loc_82CCD6A8:
	// cmplwi cr6,r24,99
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 99, ctx.xer);
	// bgt cr6,0x82ccc9b0
	if (ctx.cr6.gt) goto loc_82CCC9B0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r11,r24,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// beq cr6,0x82ccd600
	if (ctx.cr6.eq) goto loc_82CCD600;
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwa r11,4(r11)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 4));
	// b 0x82ccd720
	goto loc_82CCD720;
loc_82CCD6D8:
	// bne cr6,0x82ccd6f4
	if (!ctx.cr6.eq) goto loc_82CCD6F4;
	// addi r11,r7,7
	ctx.r11.s64 = ctx.r7.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,2988(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2988, ctx.r7.u32);
	// lwz r11,-4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// b 0x82ccd720
	goto loc_82CCD720;
loc_82CCD6F4:
	// cmplwi cr6,r24,99
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 99, ctx.xer);
	// bgt cr6,0x82ccc9b0
	if (ctx.cr6.gt) goto loc_82CCC9B0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r11,r24,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// beq cr6,0x82ccd600
	if (ctx.cr6.eq) goto loc_82CCD600;
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82CCD720:
	// rlwinm. r10,r27,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ccd738
	if (ctx.cr0.eq) goto loc_82CCD738;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bge cr6,0x82ccd738
	if (!ctx.cr6.lt) goto loc_82CCD738;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// ori r27,r27,256
	ctx.r27.u64 = ctx.r27.u64 | 256;
loc_82CCD738:
	// rlwinm. r10,r27,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ccd74c
	if (!ctx.cr0.eq) goto loc_82CCD74C;
	// rlwinm. r10,r27,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ccd74c
	if (!ctx.cr0.eq) goto loc_82CCD74C;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
loc_82CCD74C:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bge cr6,0x82ccd75c
	if (!ctx.cr6.lt) goto loc_82CCD75C;
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// b 0x82ccd76c
	goto loc_82CCD76C;
loc_82CCD75C:
	// rlwinm r27,r27,0,29,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// cmpwi cr6,r23,512
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 512, ctx.xer);
	// ble cr6,0x82ccd76c
	if (!ctx.cr6.gt) goto loc_82CCD76C;
	// li r23,512
	ctx.r23.s64 = 512;
loc_82CCD76C:
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x82ccd77c
	if (!ctx.cr6.eq) goto loc_82CCD77C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_82CCD77C:
	// addi r9,r1,2271
	ctx.r9.s64 = ctx.r1.s64 + 2271;
loc_82CCD780:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// bgt cr6,0x82ccd794
	if (ctx.cr6.gt) goto loc_82CCD794;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82ccd7d8
	if (ctx.cr6.eq) goto loc_82CCD7D8;
loc_82CCD794:
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// divdu r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 / ctx.r10.u64;
	// tdllei r10,0
	// mulld r6,r6,r10
	ctx.r6.s64 = ctx.r6.s64 * ctx.r10.s64;
	// subf r6,r6,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r6.s64;
	// divdu r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 / ctx.r10.u64;
	// tdllei r10,0
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// ble cr6,0x82ccd7c8
	if (!ctx.cr6.gt) goto loc_82CCD7C8;
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
loc_82CCD7C8:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x82ccd780
	goto loc_82CCD780;
loc_82CCD7D8:
	// addi r11,r1,2271
	ctx.r11.s64 = ctx.r1.s64 + 2271;
	// rlwinm. r10,r27,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r26,r9,r11
	ctx.r26.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r25,r9,1
	ctx.r25.s64 = ctx.r9.s64 + 1;
	// beq 0x82ccd1d8
	if (ctx.cr0.eq) goto loc_82CCD1D8;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82ccd800
	if (ctx.cr6.eq) goto loc_82CCD800;
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x82ccd1d8
	if (ctx.cr6.eq) goto loc_82CCD1D8;
loc_82CCD800:
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// li r11,48
	ctx.r11.s64 = 48;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stb r11,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r11.u8);
	// b 0x82ccd1d8
	goto loc_82CCD1D8;
loc_82CCD814:
	// clrlwi. r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccd824
	if (ctx.cr0.eq) goto loc_82CCD824;
	// li r11,43
	ctx.r11.s64 = 43;
	// b 0x82ccd830
	goto loc_82CCD830;
loc_82CCD824:
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccd838
	if (ctx.cr0.eq) goto loc_82CCD838;
	// li r11,32
	ctx.r11.s64 = 32;
loc_82CCD830:
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// sth r11,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r11.u16);
loc_82CCD838:
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subf r11,r26,r21
	ctx.r11.s64 = ctx.r21.s64 - ctx.r26.s64;
	// rlwinm. r10,r27,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r28,r30,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r30.s64;
	// bne 0x82ccd884
	if (!ctx.cr0.eq) goto loc_82CCD884;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82ccd884
	if (!ctx.cr6.gt) goto loc_82CCD884;
loc_82CCD858:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x82ccc820
	ctx.lr = 0x82CCD86C;
	sub_82CCC820(ctx, base);
	// lwz r16,80(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r16,-1
	ctx.cr6.compare<int32_t>(ctx.r16.s32, -1, ctx.xer);
	// beq cr6,0x82ccd880
	if (ctx.cr6.eq) goto loc_82CCD880;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x82ccd858
	if (ctx.cr6.gt) goto loc_82CCD858;
loc_82CCD880:
	// lwz r7,2988(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2988);
loc_82CCD884:
	// lwz r11,12(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccd8ac
	if (ctx.cr0.eq) goto loc_82CCD8AC;
	// lwz r11,8(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ccd8ac
	if (!ctx.cr6.eq) goto loc_82CCD8AC;
	// add r16,r16,r30
	ctx.r16.u64 = ctx.r16.u64 + ctx.r30.u64;
	// stw r16,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r16.u32);
	// b 0x82ccd908
	goto loc_82CCD908;
loc_82CCD8AC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82ccd908
	if (!ctx.cr6.gt) goto loc_82CCD908;
loc_82CCD8B4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// bl 0x82ccc820
	ctx.lr = 0x82CCD8C8;
	sub_82CCC820(ctx, base);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lwz r16,80(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r16,-1
	ctx.cr6.compare<int32_t>(ctx.r16.s32, -1, ctx.xer);
	// bne cr6,0x82ccd8fc
	if (!ctx.cr6.eq) goto loc_82CCD8FC;
	// bl 0x82cb8f58
	ctx.lr = 0x82CCD8DC;
	sub_82CB8F58(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// bne cr6,0x82ccd904
	if (!ctx.cr6.eq) goto loc_82CCD904;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x82ccc820
	ctx.lr = 0x82CCD8F8;
	sub_82CCC820(ctx, base);
	// lwz r16,80(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82CCD8FC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x82ccd8b4
	if (ctx.cr6.gt) goto loc_82CCD8B4;
loc_82CCD904:
	// lwz r7,2988(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2988);
loc_82CCD908:
	// rlwinm. r11,r27,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccd950
	if (ctx.cr0.eq) goto loc_82CCD950;
	// rlwinm. r11,r27,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ccd950
	if (!ctx.cr0.eq) goto loc_82CCD950;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82ccd950
	if (!ctx.cr6.gt) goto loc_82CCD950;
loc_82CCD924:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x82ccc820
	ctx.lr = 0x82CCD938;
	sub_82CCC820(ctx, base);
	// lwz r16,80(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r16,-1
	ctx.cr6.compare<int32_t>(ctx.r16.s32, -1, ctx.xer);
	// beq cr6,0x82ccd94c
	if (ctx.cr6.eq) goto loc_82CCD94C;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x82ccd924
	if (ctx.cr6.gt) goto loc_82CCD924;
loc_82CCD94C:
	// lwz r7,2988(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2988);
loc_82CCD950:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ccd9c0
	if (!ctx.cr6.eq) goto loc_82CCD9C0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82ccd9c0
	if (!ctx.cr6.gt) goto loc_82CCD9C0;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82CCD96C:
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lwz r5,172(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// bl 0x82ccb948
	ctx.lr = 0x82CCD988;
	sub_82CCB948(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble 0x82ccd9b4
	if (!ctx.cr0.gt) goto loc_82CCD9B4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x82ccc820
	ctx.lr = 0x82CCD9A0;
	sub_82CCC820(ctx, base);
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x82ccd96c
	if (ctx.cr6.gt) goto loc_82CCD96C;
	// lwz r16,80(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82ccda44
	goto loc_82CCDA44;
loc_82CCD9B4:
	// li r16,-1
	ctx.r16.s64 = -1;
	// stw r16,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r16.u32);
	// b 0x82ccda44
	goto loc_82CCDA44;
loc_82CCD9C0:
	// lwz r11,12(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccd9ec
	if (ctx.cr0.eq) goto loc_82CCD9EC;
	// lwz r11,8(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ccd9ec
	if (!ctx.cr6.eq) goto loc_82CCD9EC;
	// add r16,r26,r16
	ctx.r16.u64 = ctx.r26.u64 + ctx.r16.u64;
	// stw r16,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r16.u32);
	// b 0x82ccda48
	goto loc_82CCDA48;
loc_82CCD9EC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82ccda48
	if (!ctx.cr6.gt) goto loc_82CCDA48;
loc_82CCD9F4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// bl 0x82ccc820
	ctx.lr = 0x82CCDA08;
	sub_82CCC820(ctx, base);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lwz r16,80(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r16,-1
	ctx.cr6.compare<int32_t>(ctx.r16.s32, -1, ctx.xer);
	// bne cr6,0x82ccda3c
	if (!ctx.cr6.eq) goto loc_82CCDA3C;
	// bl 0x82cb8f58
	ctx.lr = 0x82CCDA1C;
	sub_82CB8F58(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// bne cr6,0x82ccda8c
	if (!ctx.cr6.eq) goto loc_82CCDA8C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x82ccc820
	ctx.lr = 0x82CCDA38;
	sub_82CCC820(ctx, base);
	// lwz r16,80(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82CCDA3C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x82ccd9f4
	if (ctx.cr6.gt) goto loc_82CCD9F4;
loc_82CCDA44:
	// lwz r7,2988(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2988);
loc_82CCDA48:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// blt cr6,0x82ccda90
	if (ctx.cr6.lt) goto loc_82CCDA90;
	// rlwinm. r11,r27,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccda90
	if (ctx.cr0.eq) goto loc_82CCDA90;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82ccda90
	if (!ctx.cr6.gt) goto loc_82CCDA90;
loc_82CCDA64:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x82ccc820
	ctx.lr = 0x82CCDA78;
	sub_82CCC820(ctx, base);
	// lwz r16,80(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r16,-1
	ctx.cr6.compare<int32_t>(ctx.r16.s32, -1, ctx.xer);
	// beq cr6,0x82ccda8c
	if (ctx.cr6.eq) goto loc_82CCDA8C;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x82ccda64
	if (ctx.cr6.gt) goto loc_82CCDA64;
loc_82CCDA8C:
	// lwz r7,2988(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2988);
loc_82CCDA90:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82ccdaa8
	if (ctx.cr6.eq) goto loc_82CCDAA8;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82cb3d50
	ctx.lr = 0x82CCDAA0;
	sub_82CB3D50(ctx, base);
	// li r19,0
	ctx.r19.s64 = 0;
loc_82CCDAA4:
	// lwz r7,2988(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2988);
loc_82CCDAA8:
	// lhz r29,0(r22)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
	// lwz r28,104(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr. r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82ccca84
	if (!ctx.cr0.eq) goto loc_82CCCA84;
loc_82CCDAB8:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82ccdac8
	if (ctx.cr6.eq) goto loc_82CCDAC8;
	// cmpwi cr6,r18,7
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 7, ctx.xer);
	// bne cr6,0x82ccc9b0
	if (!ctx.cr6.eq) goto loc_82CCC9B0;
loc_82CCDAC8:
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// bne cr6,0x82ccdb58
	if (!ctx.cr6.eq) goto loc_82CCDB58;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ccdb58
	if (!ctx.cr6.eq) goto loc_82CCDB58;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82ccdb58
	if (ctx.cr6.lt) goto loc_82CCDB58;
	// addi r31,r1,164
	ctx.r31.s64 = ctx.r1.s64 + 164;
loc_82CCDAEC:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82ccdb34
	if (ctx.cr6.eq) goto loc_82CCDB34;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82ccdb34
	if (ctx.cr6.eq) goto loc_82CCDB34;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82ccdb34
	if (ctx.cr6.eq) goto loc_82CCDB34;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82ccdb34
	if (ctx.cr6.eq) goto loc_82CCDB34;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82ccdb34
	if (ctx.cr6.eq) goto loc_82CCDB34;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82ccc9b0
	if (!ctx.cr6.eq) goto loc_82CCC9B0;
	// addi r3,r1,2988
	ctx.r3.s64 = ctx.r1.s64 + 2988;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// bl 0x82cc48b0
	ctx.lr = 0x82CCDB2C;
	sub_82CC48B0(ctx, base);
	// lwz r7,2988(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2988);
	// b 0x82ccdb48
	goto loc_82CCDB48;
loc_82CCDB34:
	// addi r11,r7,7
	ctx.r11.s64 = ctx.r7.s64 + 7;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,2988(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2988, ctx.r7.u32);
loc_82CCDB48:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x82ccdaec
	if (!ctx.cr6.gt) goto loc_82CCDAEC;
loc_82CCDB58:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82ccdb78
	if (!ctx.cr6.lt) goto loc_82CCDB78;
	// lwz r22,128(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x82ccca44
	goto loc_82CCCA44;
loc_82CCDB78:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// b 0x82ccdbb4
	goto loc_82CCDBB4;
loc_82CCDB80:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r6,2988(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2988);
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82cb2478
	ctx.lr = 0x82CCDB94;
	sub_82CB2478(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x82ccdba8
	if (!ctx.cr6.eq) goto loc_82CCDBA8;
	// li r31,511
	ctx.r31.s64 = 511;
	// sth r26,1182(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1182, ctx.r26.u16);
loc_82CCDBA8:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e65e28
	ctx.lr = 0x82CCDBB0;
	sub_82E65E28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CCDBB4:
	// addi r1,r1,2944
	ctx.r1.s64 = ctx.r1.s64 + 2944;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCDBBC"))) PPC_WEAK_FUNC(sub_82CCDBBC);
PPC_FUNC_IMPL(__imp__sub_82CCDBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

