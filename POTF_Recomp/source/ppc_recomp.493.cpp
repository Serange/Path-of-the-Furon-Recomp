#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82FC3FC8"))) PPC_WEAK_FUNC(sub_82FC3FC8);
PPC_FUNC_IMPL(__imp__sub_82FC3FC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82FC3FD0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fb8448
	ctx.lr = 0x82FC3FEC;
	sub_82FB8448(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r8,r11,15808
	ctx.r8.s64 = ctx.r11.s64 + 15808;
	// addi r7,r10,15768
	ctx.r7.s64 = ctx.r10.s64 + 15768;
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// addi r6,r9,15672
	ctx.r6.s64 = ctx.r9.s64 + 15672;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lbz r11,69(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 69);
	// stb r11,264(r31)
	PPC_STORE_U8(ctx.r31.u32 + 264, ctx.r11.u8);
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// stb r30,292(r31)
	PPC_STORE_U8(ctx.r31.u32 + 292, ctx.r30.u8);
	// stw r30,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r30.u32);
	// stw r30,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
	// stb r30,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r30.u8);
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// bl 0x82fb8158
	ctx.lr = 0x82FC4050;
	sub_82FB8158(ctx, base);
	// lis r10,744
	ctx.r10.s64 = 48758784;
	// ori r9,r10,47662
	ctx.r9.u64 = ctx.r10.u64 | 47662;
	// lbz r28,56(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// mulli r4,r28,88
	ctx.r4.s64 = ctx.r28.s64 * 88;
	// ble cr6,0x82fc406c
	if (!ctx.cr6.gt) goto loc_82FC406C;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_82FC406C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC4080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82fc40c0
	if (ctx.cr6.eq) goto loc_82FC40C0;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// blt 0x82fc40b8
	if (ctx.cr0.lt) goto loc_82FC40B8;
loc_82FC4098:
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82FC40A8;
	sub_82CB16F0(ctx, base);
	// stw r30,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r30.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,88
	ctx.r29.s64 = ctx.r29.s64 + 88;
	// bge 0x82fc4098
	if (!ctx.cr0.lt) goto loc_82FC4098;
loc_82FC40B8:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82fc40c4
	goto loc_82FC40C4;
loc_82FC40C0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82FC40C4:
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// vspltisw v0,15
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0xF)));
	// li r9,204
	ctx.r9.s64 = 204;
	// vspltisw128 v63,4
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x4)));
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// vspltisw v13,1
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_set1_epi32(int(0x1)));
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// li r5,56
	ctx.r5.s64 = 56;
	// lvlx128 v62,r27,r10
	temp.u32 = ctx.r27.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vexptefp128 v61,v62
	ctx.fpscr.enableFlushMode();
	ctx.v61.f32[0] = exp2f(ctx.v62.f32[0]);
	ctx.v61.f32[1] = exp2f(ctx.v62.f32[1]);
	ctx.v61.f32[2] = exp2f(ctx.v62.f32[2]);
	ctx.v61.f32[3] = exp2f(ctx.v62.f32[3]);
	// vcfpsxws128 v12,v61,4
	_mm_store_si128((__m128i*)ctx.v12.s32, _mm_vctsxs(_mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_set1_ps(16))));
	// vadduws v11,v12,v0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vsraw128 v10,v11,v63
	ctx.v10.s32[0] = ctx.v11.s32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v10.s32[1] = ctx.v11.s32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v10.s32[2] = ctx.v11.s32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v10.s32[3] = ctx.v11.s32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vmaxsw v9,v10,v13
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_max_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vspltw128 v60,v9,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFF));
	// stvewx128 v60,r31,r9
	ea = (ctx.r31.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// bl 0x82cb1160
	ctx.lr = 0x82FC410C;
	sub_82CB1160(ctx, base);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,108(r31)
	PPC_STORE_U16(ctx.r31.u32 + 108, ctx.r11.u16);
	// sth r11,110(r31)
	PPC_STORE_U16(ctx.r31.u32 + 110, ctx.r11.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC4130"))) PPC_WEAK_FUNC(sub_82FC4130);
PPC_FUNC_IMPL(__imp__sub_82FC4130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82FC4138;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r24,r31,296
	ctx.r24.s64 = ctx.r31.s64 + 296;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// bl 0x833b8a44
	ctx.lr = 0x82FC415C;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc417c
	if (ctx.cr6.eq) goto loc_82FC417C;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fc418c
	if (ctx.cr6.eq) goto loc_82FC418C;
loc_82FC417C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC4184;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stb r29,12(r24)
	PPC_STORE_U8(ctx.r24.u32 + 12, ctx.r29.u8);
	// stw r30,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r30.u32);
loc_82FC418C:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r11.u32);
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x82fb9a28
	ctx.lr = 0x82FC41A0;
	sub_82FB9A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82fc4ba0
	if (ctx.cr6.eq) goto loc_82FC4BA0;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x82fba6b0
	ctx.lr = 0x82FC41B0;
	sub_82FBA6B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82fc4210
	if (!ctx.cr6.lt) goto loc_82FC4210;
loc_82FC41BC:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc4200
	if (ctx.cr6.eq) goto loc_82FC4200;
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc4200
	if (!ctx.cr6.eq) goto loc_82FC4200;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r11.u32);
	// bne 0x82fc4200
	if (!ctx.cr0.eq) goto loc_82FC4200;
	// lbz r31,12(r24)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r24.u32 + 12);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r23,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r23.u32);
	// stb r23,12(r24)
	PPC_STORE_U8(ctx.r24.u32 + 12, ctx.r23.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC41F8;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC4200;
	__imp__KfLowerIrql(ctx, base);
loc_82FC4200:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82FC4210:
	// bl 0x833b8a44
	ctx.lr = 0x82FC4214;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r25,r11,20216
	ctx.r25.s64 = ctx.r11.s64 + 20216;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc423c
	if (ctx.cr6.eq) goto loc_82FC423C;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc4250
	if (ctx.cr6.eq) goto loc_82FC4250;
loc_82FC423C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC4244;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stw r30,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r30.u32);
	// stb r29,12(r25)
	PPC_STORE_U8(ctx.r25.u32 + 12, ctx.r29.u8);
loc_82FC4250:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fb9160
	ctx.lr = 0x82FC4264;
	sub_82FB9160(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82fc42c8
	if (ctx.cr6.lt) goto loc_82FC42C8;
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc42a8
	if (ctx.cr6.eq) goto loc_82FC42A8;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82FC4288:
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r9,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// lbzx r9,r6,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r31.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// blt cr6,0x82fc4288
	if (ctx.cr6.lt) goto loc_82FC4288;
loc_82FC42A8:
	// stb r10,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r10.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fb9550
	ctx.lr = 0x82FC42BC;
	sub_82FB9550(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82fc457c
	if (!ctx.cr6.lt) goto loc_82FC457C;
loc_82FC42C8:
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fc4314
	if (ctx.cr6.eq) goto loc_82FC4314;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fc4314
	if (!ctx.cr6.eq) goto loc_82FC4314;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// bne 0x82fc4314
	if (!ctx.cr0.eq) goto loc_82FC4314;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lbz r29,12(r25)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r25.u32 + 12);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r10,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r10.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stb r11,12(r25)
	PPC_STORE_U8(ctx.r25.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC430C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC4314;
	__imp__KfLowerIrql(ctx, base);
loc_82FC4314:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82fc41bc
	if (!ctx.cr6.eq) goto loc_82FC41BC;
loc_82FC431C:
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x82fba748
	ctx.lr = 0x82FC4324;
	sub_82FBA748(ctx, base);
	// lbz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 292);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82fc4338
	if (!ctx.cr6.eq) goto loc_82FC4338;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fc3980
	ctx.lr = 0x82FC4338;
	sub_82FC3980(ctx, base);
loc_82FC4338:
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc44b8
	if (ctx.cr6.eq) goto loc_82FC44B8;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_82FC4348:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x82fb9c60
	ctx.lr = 0x82FC4354;
	sub_82FB9C60(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82fc43f8
	if (ctx.cr6.eq) goto loc_82FC43F8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82fb9ef0
	ctx.lr = 0x82FC4374;
	sub_82FB9EF0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fc43f8
	if (ctx.cr6.eq) goto loc_82FC43F8;
	// mulli r30,r27,88
	ctx.r30.s64 = ctx.r27.s64 * 88;
loc_82FC4380:
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// beq cr6,0x82fc43a0
	if (ctx.cr6.eq) goto loc_82FC43A0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_82FC43A0:
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82fd3098
	ctx.lr = 0x82FC43B0;
	sub_82FD3098(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r29,r5,r29
	ctx.r29.u64 = ctx.r5.u64 + ctx.r29.u64;
	// bl 0x82fb9d38
	ctx.lr = 0x82FC43C8;
	sub_82FB9D38(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subf. r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82fc43f8
	if (ctx.cr0.eq) goto loc_82FC43F8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82fb9ef0
	ctx.lr = 0x82FC43F0;
	sub_82FB9EF0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82fc4380
	if (!ctx.cr6.eq) goto loc_82FC4380;
loc_82FC43F8:
	// addi r11,r27,138
	ctx.r11.s64 = ctx.r27.s64 + 138;
	// subf r10,r29,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r29.s64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r31.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82fc4414
	if (ctx.cr6.gt) goto loc_82FC4414;
	// li r22,1
	ctx.r22.s64 = 1;
loc_82FC4414:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82fc00b8
	ctx.lr = 0x82FC4420;
	sub_82FC00B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x82fc00b8
	ctx.lr = 0x82FC442C;
	sub_82FC00B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x82fba250
	ctx.lr = 0x82FC4438;
	sub_82FBA250(ctx, base);
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mulli r11,r27,88
	ctx.r11.s64 = ctx.r27.s64 * 88;
	// stw r3,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// subf. r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r29,13(r30)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + 13);
	// beq 0x82fc4490
	if (ctx.cr0.eq) goto loc_82FC4490;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82fc448c
	if (ctx.cr6.eq) goto loc_82FC448C;
	// rlwinm r26,r10,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82FC446C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82FC4480;
	sub_82CB16F0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,1024
	ctx.r28.s64 = ctx.r28.s64 + 1024;
	// bne 0x82fc446c
	if (!ctx.cr0.eq) goto loc_82FC446C;
loc_82FC448C:
	// li r26,1
	ctx.r26.s64 = 1;
loc_82FC4490:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82fc44a4
	if (!ctx.cr6.eq) goto loc_82FC44A4;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82fc00b8
	ctx.lr = 0x82FC44A4;
	sub_82FC00B8(ctx, base);
loc_82FC44A4:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// lbz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fc4348
	if (ctx.cr6.lt) goto loc_82FC4348;
loc_82FC44B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fc3098
	ctx.lr = 0x82FC44C0;
	sub_82FC3098(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x833b8a44
	ctx.lr = 0x82FC44C8;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc44e8
	if (ctx.cr6.eq) goto loc_82FC44E8;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc44fc
	if (ctx.cr6.eq) goto loc_82FC44FC;
loc_82FC44E8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC44F0;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stw r30,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r30.u32);
	// stb r29,12(r25)
	PPC_STORE_U8(ctx.r25.u32 + 12, ctx.r29.u8);
loc_82FC44FC:
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r7.u32);
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc4540
	if (ctx.cr6.eq) goto loc_82FC4540;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82FC4514:
	// lwz r9,200(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mulli r10,r11,88
	ctx.r10.s64 = ctx.r11.s64 * 88;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lfs f0,40(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// lbz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fc4514
	if (ctx.cr6.lt) goto loc_82FC4514;
	// lwz r7,4(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
loc_82FC4540:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc48d4
	if (ctx.cr6.eq) goto loc_82FC48D4;
	// lbz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 172);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fc48a4
	if (!ctx.cr6.eq) goto loc_82FC48A4;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// addi r9,r31,20
	ctx.r9.s64 = ctx.r31.s64 + 20;
loc_82FC4568:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fc4830
	if (ctx.cr6.eq) goto loc_82FC4830;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82fc4834
	goto loc_82FC4834;
loc_82FC457C:
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc45dc
	if (ctx.cr6.eq) goto loc_82FC45DC;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// li r7,256
	ctx.r7.s64 = 256;
loc_82FC4594:
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mulli r8,r10,88
	ctx.r8.s64 = ctx.r10.s64 * 88;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// rlwinm r5,r8,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r7,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// stw r23,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r23.u32);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lbzx r11,r5,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r31.u32);
	// rotlwi r11,r11,10
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 10);
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// blt cr6,0x82fc4594
	if (ctx.cr6.lt) goto loc_82FC4594;
loc_82FC45DC:
	// lbz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 172);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fc4768
	if (ctx.cr6.eq) goto loc_82FC4768;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fc4768
	if (!ctx.cr6.eq) goto loc_82FC4768;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f31,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82fc4698
	if (ctx.cr6.eq) goto loc_82FC4698;
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc467c
	if (ctx.cr6.eq) goto loc_82FC467C;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
loc_82FC461C:
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mulli r11,r8,88
	ctx.r11.s64 = ctx.r8.s64 * 88;
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r9,6
	ctx.r9.s64 = 6;
	// stfs f0,40(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f13,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,52
	ctx.r10.s64 = ctx.r11.s64 + 52;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82FC4658:
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82fc4658
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82FC4658;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// stfs f31,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lbz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82fc461c
	if (ctx.cr6.lt) goto loc_82FC461C;
loc_82FC467C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC4698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FC4698:
	// lbz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 172);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fc4718
	if (ctx.cr6.eq) goto loc_82FC4718;
	// lhz r10,174(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 174);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lwz r9,200(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// addis r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 65536;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// lfs f13,40(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// sth r7,174(r31)
	PPC_STORE_U16(ctx.r31.u32 + 174, ctx.r7.u16);
	// beq cr6,0x82fc46e0
	if (ctx.cr6.eq) goto loc_82FC46E0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,15568(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15568);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82fc46e4
	goto loc_82FC46E4;
loc_82FC46E0:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_82FC46E4:
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc4718
	if (ctx.cr6.eq) goto loc_82FC4718;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82FC46F4:
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mulli r9,r11,88
	ctx.r9.s64 = ctx.r11.s64 * 88;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stfs f0,40(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lbz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82fc46f4
	if (ctx.cr6.lt) goto loc_82FC46F4;
loc_82FC4718:
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fc431c
	if (ctx.cr6.eq) goto loc_82FC431C;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fc431c
	if (!ctx.cr6.eq) goto loc_82FC431C;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// bne 0x82fc431c
	if (!ctx.cr0.eq) goto loc_82FC431C;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lbz r30,12(r25)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r25.u32 + 12);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r10,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r10.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stb r11,12(r25)
	PPC_STORE_U8(ctx.r25.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC475C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC4764;
	__imp__KfLowerIrql(ctx, base);
	// b 0x82fc431c
	goto loc_82FC431C;
loc_82FC4768:
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc47dc
	if (ctx.cr6.eq) goto loc_82FC47DC;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
loc_82FC4778:
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mulli r10,r26,88
	ctx.r10.s64 = ctx.r26.s64 * 88;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lbz r30,13(r28)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r28.u32 + 13);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc47c4
	if (ctx.cr6.eq) goto loc_82FC47C4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fc47c4
	if (ctx.cr6.eq) goto loc_82FC47C4;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_82FC47A4:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82FC47B8;
	sub_82CB16F0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,1024
	ctx.r29.s64 = ctx.r29.s64 + 1024;
	// bne 0x82fc47a4
	if (!ctx.cr0.eq) goto loc_82FC47A4;
loc_82FC47C4:
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// lbz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fc4778
	if (ctx.cr6.lt) goto loc_82FC4778;
loc_82FC47DC:
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fc4828
	if (ctx.cr6.eq) goto loc_82FC4828;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fc4828
	if (!ctx.cr6.eq) goto loc_82FC4828;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// bne 0x82fc4828
	if (!ctx.cr0.eq) goto loc_82FC4828;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lbz r31,12(r25)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r25.u32 + 12);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r10,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r10.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stb r11,12(r25)
	PPC_STORE_U8(ctx.r25.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC4820;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC4828;
	__imp__KfLowerIrql(ctx, base);
loc_82FC4828:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82fc41bc
	goto loc_82FC41BC;
loc_82FC4830:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82FC4834:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fc484c
	if (ctx.cr6.eq) goto loc_82FC484C;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x82fc4850
	goto loc_82FC4850;
loc_82FC484C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82FC4850:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc4878
	if (ctx.cr6.eq) goto loc_82FC4878;
	// lbz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 116);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 ^ 1;
	// or r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 | ctx.r8.u64;
	// b 0x82fc4568
	goto loc_82FC4568;
loc_82FC4878:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fc48d4
	if (!ctx.cr6.eq) goto loc_82FC48D4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC48A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82fc48d0
	goto loc_82FC48D0;
loc_82FC48A4:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82fc48d4
	if (!ctx.cr6.eq) goto loc_82FC48D4;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fc48d4
	if (!ctx.cr6.eq) goto loc_82FC48D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC48D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FC48D0:
	// lwz r7,4(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
loc_82FC48D4:
	// lbz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 172);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fc4918
	if (ctx.cr6.eq) goto loc_82FC4918;
	// lhz r10,174(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 174);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fc48fc
	if (ctx.cr6.eq) goto loc_82FC48FC;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc4918
	if (ctx.cr6.eq) goto loc_82FC4918;
loc_82FC48FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC4914;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,4(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
loc_82FC4918:
	// lbz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 172);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fc4934
	if (ctx.cr6.eq) goto loc_82FC4934;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc4ad4
	if (ctx.cr6.eq) goto loc_82FC4AD4;
loc_82FC4934:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r27,r31,20
	ctx.r27.s64 = ctx.r31.s64 + 20;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fc4950
	if (ctx.cr6.eq) goto loc_82FC4950;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x82fc4954
	goto loc_82FC4954;
loc_82FC4950:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82FC4954:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc4ad4
	if (ctx.cr6.eq) goto loc_82FC4AD4;
loc_82FC4960:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82fc4978
	if (ctx.cr6.eq) goto loc_82FC4978;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x82fc497c
	goto loc_82FC497C;
loc_82FC4978:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82FC497C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fc4994
	if (ctx.cr6.eq) goto loc_82FC4994;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// subf r28,r10,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x82fc4998
	goto loc_82FC4998;
loc_82FC4994:
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_82FC4998:
	// lbz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82fc4acc
	if (!ctx.cr6.eq) goto loc_82FC4ACC;
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82fc49ec
	if (ctx.cr6.eq) goto loc_82FC49EC;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82fc49ec
	if (!ctx.cr6.eq) goto loc_82FC49EC;
	// addic. r11,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r11.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// bne 0x82fc49ec
	if (!ctx.cr0.eq) goto loc_82FC49EC;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// lbz r29,12(r25)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r25.u32 + 12);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stb r11,12(r25)
	PPC_STORE_U8(ctx.r25.u32 + 12, ctx.r11.u8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r10,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FC49E4;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC49EC;
	__imp__KfLowerIrql(ctx, base);
loc_82FC49EC:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc4a30
	if (ctx.cr6.eq) goto loc_82FC4A30;
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc4a30
	if (!ctx.cr6.eq) goto loc_82FC4A30;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r11.u32);
	// bne 0x82fc4a30
	if (!ctx.cr0.eq) goto loc_82FC4A30;
	// lbz r29,12(r24)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r24.u32 + 12);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stb r23,12(r24)
	PPC_STORE_U8(ctx.r24.u32 + 12, ctx.r23.u8);
	// stw r23,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r23.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FC4A28;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC4A30;
	__imp__KfLowerIrql(ctx, base);
loc_82FC4A30:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC4A4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x833b8a44
	ctx.lr = 0x82FC4A50;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fc4a70
	if (ctx.cr6.eq) goto loc_82FC4A70;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fc4a80
	if (ctx.cr6.eq) goto loc_82FC4A80;
loc_82FC4A70:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC4A78;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r30,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r30.u32);
	// stb r29,12(r24)
	PPC_STORE_U8(ctx.r24.u32 + 12, ctx.r29.u8);
loc_82FC4A80:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r11.u32);
	// bl 0x833b8a44
	ctx.lr = 0x82FC4A90;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc4ab0
	if (ctx.cr6.eq) goto loc_82FC4AB0;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc4ac4
	if (ctx.cr6.eq) goto loc_82FC4AC4;
loc_82FC4AB0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC4AB8;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stw r30,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r30.u32);
	// stb r29,12(r25)
	PPC_STORE_U8(ctx.r25.u32 + 12, ctx.r29.u8);
loc_82FC4AC4:
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r7.u32);
loc_82FC4ACC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82fc4960
	if (!ctx.cr6.eq) goto loc_82FC4960;
loc_82FC4AD4:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82fc4b1c
	if (ctx.cr6.eq) goto loc_82FC4B1C;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82fc4b1c
	if (!ctx.cr6.eq) goto loc_82FC4B1C;
	// addic. r11,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r11.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// bne 0x82fc4b1c
	if (!ctx.cr0.eq) goto loc_82FC4B1C;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// lbz r30,12(r25)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r25.u32 + 12);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stb r11,12(r25)
	PPC_STORE_U8(ctx.r25.u32 + 12, ctx.r11.u8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r10,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FC4B14;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC4B1C;
	__imp__KfLowerIrql(ctx, base);
loc_82FC4B1C:
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc4ba0
	if (ctx.cr6.eq) goto loc_82FC4BA0;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x82fb9a28
	ctx.lr = 0x82FC4B30;
	sub_82FB9A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82fc4ba0
	if (ctx.cr6.eq) goto loc_82FC4BA0;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x82fba960
	ctx.lr = 0x82FC4B40;
	sub_82FBA960(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82fc4ba0
	if (!ctx.cr6.lt) goto loc_82FC4BA0;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc4b90
	if (ctx.cr6.eq) goto loc_82FC4B90;
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc4b90
	if (!ctx.cr6.eq) goto loc_82FC4B90;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r11.u32);
	// bne 0x82fc4b90
	if (!ctx.cr0.eq) goto loc_82FC4B90;
	// lbz r30,12(r24)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r24.u32 + 12);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r23,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r23.u32);
	// stb r23,12(r24)
	PPC_STORE_U8(ctx.r24.u32 + 12, ctx.r23.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC4B88;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC4B90;
	__imp__KfLowerIrql(ctx, base);
loc_82FC4B90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82FC4BA0:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc4be4
	if (ctx.cr6.eq) goto loc_82FC4BE4;
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc4be4
	if (!ctx.cr6.eq) goto loc_82FC4BE4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r11.u32);
	// bne 0x82fc4be4
	if (!ctx.cr0.eq) goto loc_82FC4BE4;
	// lbz r31,12(r24)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r24.u32 + 12);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r23,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r23.u32);
	// stb r23,12(r24)
	PPC_STORE_U8(ctx.r24.u32 + 12, ctx.r23.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC4BDC;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC4BE4;
	__imp__KfLowerIrql(ctx, base);
loc_82FC4BE4:
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
}

__attribute__((alias("__imp__sub_82FC4BF4"))) PPC_WEAK_FUNC(sub_82FC4BF4);
PPC_FUNC_IMPL(__imp__sub_82FC4BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC4BF8"))) PPC_WEAK_FUNC(sub_82FC4BF8);
PPC_FUNC_IMPL(__imp__sub_82FC4BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82FC4C00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r4,312
	ctx.r4.s64 = 312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC4C28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fc4c48
	if (ctx.cr6.eq) goto loc_82FC4C48;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82fc3fc8
	ctx.lr = 0x82FC4C3C;
	sub_82FC3FC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82fc4c58
	if (!ctx.cr6.eq) goto loc_82FC4C58;
loc_82FC4C48:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82FC4C58:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC4C6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82fc4c84
	if (ctx.cr6.lt) goto loc_82FC4C84;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82FC4C84:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC4C98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC4CA4"))) PPC_WEAK_FUNC(sub_82FC4CA4);
PPC_FUNC_IMPL(__imp__sub_82FC4CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC4CA8"))) PPC_WEAK_FUNC(sub_82FC4CA8);
PPC_FUNC_IMPL(__imp__sub_82FC4CA8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r7,r10,16072
	ctx.r7.s64 = ctx.r10.s64 + 16072;
	// addi r6,r9,16032
	ctx.r6.s64 = ctx.r9.s64 + 16032;
	// addi r5,r8,15936
	ctx.r5.s64 = ctx.r8.s64 + 15936;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// b 0x82fb8788
	sub_82FB8788(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC4CD8"))) PPC_WEAK_FUNC(sub_82FC4CD8);
PPC_FUNC_IMPL(__imp__sub_82FC4CD8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82fc50c8
	sub_82FC50C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC4CE0"))) PPC_WEAK_FUNC(sub_82FC4CE0);
PPC_FUNC_IMPL(__imp__sub_82FC4CE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc50c8
	sub_82FC50C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC4CE8"))) PPC_WEAK_FUNC(sub_82FC4CE8);
PPC_FUNC_IMPL(__imp__sub_82FC4CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,16192
	ctx.r9.s64 = ctx.r11.s64 + 16192;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC4CFC"))) PPC_WEAK_FUNC(sub_82FC4CFC);
PPC_FUNC_IMPL(__imp__sub_82FC4CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC4D00"))) PPC_WEAK_FUNC(sub_82FC4D00);
PPC_FUNC_IMPL(__imp__sub_82FC4D00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,16192
	ctx.r9.s64 = ctx.r11.s64 + 16192;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mullw r3,r8,r4
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC4D18"))) PPC_WEAK_FUNC(sub_82FC4D18);
PPC_FUNC_IMPL(__imp__sub_82FC4D18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC4D28"))) PPC_WEAK_FUNC(sub_82FC4D28);
PPC_FUNC_IMPL(__imp__sub_82FC4D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r3,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FC;
	// addi r9,r11,16192
	ctx.r9.s64 = ctx.r11.s64 + 16192;
	// clrlwi r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mullw r3,r7,r8
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC4D44"))) PPC_WEAK_FUNC(sub_82FC4D44);
PPC_FUNC_IMPL(__imp__sub_82FC4D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC4D48"))) PPC_WEAK_FUNC(sub_82FC4D48);
PPC_FUNC_IMPL(__imp__sub_82FC4D48) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC4D50"))) PPC_WEAK_FUNC(sub_82FC4D50);
PPC_FUNC_IMPL(__imp__sub_82FC4D50) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lbz r9,13(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// addi r8,r10,16192
	ctx.r8.s64 = ctx.r10.s64 + 16192;
	// rotlwi r7,r11,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// mullw r3,r6,r9
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC4D70"))) PPC_WEAK_FUNC(sub_82FC4D70);
PPC_FUNC_IMPL(__imp__sub_82FC4D70) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC4D78"))) PPC_WEAK_FUNC(sub_82FC4D78);
PPC_FUNC_IMPL(__imp__sub_82FC4D78) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82FC4D94"))) PPC_WEAK_FUNC(sub_82FC4D94);
PPC_FUNC_IMPL(__imp__sub_82FC4D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC4D98"))) PPC_WEAK_FUNC(sub_82FC4D98);
PPC_FUNC_IMPL(__imp__sub_82FC4D98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC4D9C"))) PPC_WEAK_FUNC(sub_82FC4D9C);
PPC_FUNC_IMPL(__imp__sub_82FC4D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC4DA0"))) PPC_WEAK_FUNC(sub_82FC4DA0);
PPC_FUNC_IMPL(__imp__sub_82FC4DA0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 68);
	// mulli r3,r11,120
	ctx.r3.s64 = ctx.r11.s64 * 120;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC4DAC"))) PPC_WEAK_FUNC(sub_82FC4DAC);
PPC_FUNC_IMPL(__imp__sub_82FC4DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC4DB0"))) PPC_WEAK_FUNC(sub_82FC4DB0);
PPC_FUNC_IMPL(__imp__sub_82FC4DB0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC4DC8"))) PPC_WEAK_FUNC(sub_82FC4DC8);
PPC_FUNC_IMPL(__imp__sub_82FC4DC8) {
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
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// addic. r3,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r3.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// bne 0x82fc4e00
	if (!ctx.cr0.eq) goto loc_82FC4E00;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82FC4DFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FC4E00:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC4E10"))) PPC_WEAK_FUNC(sub_82FC4E10);
PPC_FUNC_IMPL(__imp__sub_82FC4E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// lhz r11,15564(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 15564);
	// sth r11,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC4E2C"))) PPC_WEAK_FUNC(sub_82FC4E2C);
PPC_FUNC_IMPL(__imp__sub_82FC4E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC4E30"))) PPC_WEAK_FUNC(sub_82FC4E30);
PPC_FUNC_IMPL(__imp__sub_82FC4E30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC4E40"))) PPC_WEAK_FUNC(sub_82FC4E40);
PPC_FUNC_IMPL(__imp__sub_82FC4E40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82fc0a60
	sub_82FC0A60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC4E48"))) PPC_WEAK_FUNC(sub_82FC4E48);
PPC_FUNC_IMPL(__imp__sub_82FC4E48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82fc0d18
	sub_82FC0D18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC4E50"))) PPC_WEAK_FUNC(sub_82FC4E50);
PPC_FUNC_IMPL(__imp__sub_82FC4E50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82fc02c0
	sub_82FC02C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC4E58"))) PPC_WEAK_FUNC(sub_82FC4E58);
PPC_FUNC_IMPL(__imp__sub_82FC4E58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82fc02c0
	sub_82FC02C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC4E60"))) PPC_WEAK_FUNC(sub_82FC4E60);
PPC_FUNC_IMPL(__imp__sub_82FC4E60) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 172);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC4E70"))) PPC_WEAK_FUNC(sub_82FC4E70);
PPC_FUNC_IMPL(__imp__sub_82FC4E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC4E80"))) PPC_WEAK_FUNC(sub_82FC4E80);
PPC_FUNC_IMPL(__imp__sub_82FC4E80) {
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
	// lfs f1,116(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82cb4db8
	ctx.lr = 0x82FC4E9C;
	sub_82CB4DB8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,20848(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20848);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
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

__attribute__((alias("__imp__sub_82FC4EC8"))) PPC_WEAK_FUNC(sub_82FC4EC8);
PPC_FUNC_IMPL(__imp__sub_82FC4EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,116(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC4ED8"))) PPC_WEAK_FUNC(sub_82FC4ED8);
PPC_FUNC_IMPL(__imp__sub_82FC4ED8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 108);
	// lwz r9,120(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC4EF4"))) PPC_WEAK_FUNC(sub_82FC4EF4);
PPC_FUNC_IMPL(__imp__sub_82FC4EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC4EF8"))) PPC_WEAK_FUNC(sub_82FC4EF8);
PPC_FUNC_IMPL(__imp__sub_82FC4EF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC4F08"))) PPC_WEAK_FUNC(sub_82FC4F08);
PPC_FUNC_IMPL(__imp__sub_82FC4F08) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC4F34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fc4f48
	if (ctx.cr6.lt) goto loc_82FC4F48;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82FC4F48:
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

__attribute__((alias("__imp__sub_82FC4F5C"))) PPC_WEAK_FUNC(sub_82FC4F5C);
PPC_FUNC_IMPL(__imp__sub_82FC4F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC4F60"))) PPC_WEAK_FUNC(sub_82FC4F60);
PPC_FUNC_IMPL(__imp__sub_82FC4F60) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC4F8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fc4f9c
	if (ctx.cr6.lt) goto loc_82FC4F9C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
loc_82FC4F9C:
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

__attribute__((alias("__imp__sub_82FC4FB0"))) PPC_WEAK_FUNC(sub_82FC4FB0);
PPC_FUNC_IMPL(__imp__sub_82FC4FB0) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC4FDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fc4ff0
	if (ctx.cr6.lt) goto loc_82FC4FF0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82FC4FF0:
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

__attribute__((alias("__imp__sub_82FC5004"))) PPC_WEAK_FUNC(sub_82FC5004);
PPC_FUNC_IMPL(__imp__sub_82FC5004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC5008"))) PPC_WEAK_FUNC(sub_82FC5008);
PPC_FUNC_IMPL(__imp__sub_82FC5008) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc5040
	if (ctx.cr6.eq) goto loc_82FC5040;
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82FC5040;
	sub_82CB1160(ctx, base);
loc_82FC5040:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82fc5054
	if (ctx.cr6.eq) goto loc_82FC5054;
	// lbz r11,157(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 157);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_82FC5054:
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

__attribute__((alias("__imp__sub_82FC506C"))) PPC_WEAK_FUNC(sub_82FC506C);
PPC_FUNC_IMPL(__imp__sub_82FC506C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC5070"))) PPC_WEAK_FUNC(sub_82FC5070);
PPC_FUNC_IMPL(__imp__sub_82FC5070) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC507C"))) PPC_WEAK_FUNC(sub_82FC507C);
PPC_FUNC_IMPL(__imp__sub_82FC507C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC5080"))) PPC_WEAK_FUNC(sub_82FC5080);
PPC_FUNC_IMPL(__imp__sub_82FC5080) {
	PPC_FUNC_PROLOGUE();
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC5088"))) PPC_WEAK_FUNC(sub_82FC5088);
PPC_FUNC_IMPL(__imp__sub_82FC5088) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82fb8188
	sub_82FB8188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC5090"))) PPC_WEAK_FUNC(sub_82FC5090);
PPC_FUNC_IMPL(__imp__sub_82FC5090) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82fb8280
	sub_82FB8280(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC5098"))) PPC_WEAK_FUNC(sub_82FC5098);
PPC_FUNC_IMPL(__imp__sub_82FC5098) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 196);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lbz r9,197(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 197);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r10,16192
	ctx.r7.s64 = ctx.r10.s64 + 16192;
	// rotlwi r6,r11,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// sth r8,110(r3)
	PPC_STORE_U16(ctx.r3.u32 + 110, ctx.r8.u16);
	// mullw r4,r5,r9
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// sth r4,108(r3)
	PPC_STORE_U16(ctx.r3.u32 + 108, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC50C4"))) PPC_WEAK_FUNC(sub_82FC50C4);
PPC_FUNC_IMPL(__imp__sub_82FC50C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC50C8"))) PPC_WEAK_FUNC(sub_82FC50C8);
PPC_FUNC_IMPL(__imp__sub_82FC50C8) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,16072
	ctx.r8.s64 = ctx.r11.s64 + 16072;
	// addi r7,r10,16032
	ctx.r7.s64 = ctx.r10.s64 + 16032;
	// addi r6,r9,15936
	ctx.r6.s64 = ctx.r9.s64 + 15936;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// bl 0x82fb8788
	ctx.lr = 0x82FC5108;
	sub_82FB8788(ctx, base);
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

__attribute__((alias("__imp__sub_82FC5120"))) PPC_WEAK_FUNC(sub_82FC5120);
PPC_FUNC_IMPL(__imp__sub_82FC5120) {
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
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82fc08b8
	ctx.lr = 0x82FC513C;
	sub_82FC08B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fc516c
	if (ctx.cr6.lt) goto loc_82FC516C;
	// lbz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 196);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lbz r9,197(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 197);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r10,16192
	ctx.r7.s64 = ctx.r10.s64 + 16192;
	// rotlwi r6,r11,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// sth r8,110(r31)
	PPC_STORE_U16(ctx.r31.u32 + 110, ctx.r8.u16);
	// mullw r4,r5,r9
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// sth r4,108(r31)
	PPC_STORE_U16(ctx.r31.u32 + 108, ctx.r4.u16);
loc_82FC516C:
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

__attribute__((alias("__imp__sub_82FC5180"))) PPC_WEAK_FUNC(sub_82FC5180);
PPC_FUNC_IMPL(__imp__sub_82FC5180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FC5188;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x833b8a44
	ctx.lr = 0x82FC519C;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc51c4
	if (ctx.cr6.eq) goto loc_82FC51C4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc51d8
	if (ctx.cr6.eq) goto loc_82FC51D8;
loc_82FC51C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC51CC;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82FC51D8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stfs f31,112(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 112, temp.u32);
	// stfs f31,224(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 224, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc5234
	if (ctx.cr6.eq) goto loc_82FC5234;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc5234
	if (!ctx.cr6.eq) goto loc_82FC5234;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc5234
	if (!ctx.cr0.eq) goto loc_82FC5234;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC522C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC5234;
	__imp__KfLowerIrql(ctx, base);
loc_82FC5234:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC5244"))) PPC_WEAK_FUNC(sub_82FC5244);
PPC_FUNC_IMPL(__imp__sub_82FC5244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC5248"))) PPC_WEAK_FUNC(sub_82FC5248);
PPC_FUNC_IMPL(__imp__sub_82FC5248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FC5250;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x833b8a44
	ctx.lr = 0x82FC5264;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc528c
	if (ctx.cr6.eq) goto loc_82FC528C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc52a0
	if (ctx.cr6.eq) goto loc_82FC52A0;
loc_82FC528C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC5294;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82FC52A0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lfd f1,-18376(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18376);
	// bl 0x82cb59b0
	ctx.lr = 0x82FC52B8;
	sub_82CB59B0(ctx, base);
	// lwz r7,60(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lbz r8,56(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 56);
	// lbz r6,52(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 52);
	// stfs f0,116(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 116, temp.u32);
	// stb r8,197(r30)
	PPC_STORE_U8(ctx.r30.u32 + 197, ctx.r8.u8);
	// addi r11,r30,184
	ctx.r11.s64 = ctx.r30.s64 + 184;
	// stb r6,196(r30)
	PPC_STORE_U8(ctx.r30.u32 + 196, ctx.r6.u8);
	// li r5,16
	ctx.r5.s64 = 16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r4,264(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// ori r3,r4,1
	ctx.r3.u64 = ctx.r4.u64 | 1;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// stw r3,264(r30)
	PPC_STORE_U32(ctx.r30.u32 + 264, ctx.r3.u32);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfiwx f9,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.f9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc5350
	if (ctx.cr6.eq) goto loc_82FC5350;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc5350
	if (!ctx.cr6.eq) goto loc_82FC5350;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc5350
	if (!ctx.cr0.eq) goto loc_82FC5350;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC5348;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC5350;
	__imp__KfLowerIrql(ctx, base);
loc_82FC5350:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC5360"))) PPC_WEAK_FUNC(sub_82FC5360);
PPC_FUNC_IMPL(__imp__sub_82FC5360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FC5368;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x833b8a44
	ctx.lr = 0x82FC537C;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc53a4
	if (ctx.cr6.eq) goto loc_82FC53A4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc53b8
	if (ctx.cr6.eq) goto loc_82FC53B8;
loc_82FC53A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC53AC;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82FC53B8:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r30,184
	ctx.r11.s64 = ctx.r30.s64 + 184;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stfs f31,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 116, temp.u32);
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// li r6,16
	ctx.r6.s64 = 16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lbz r8,56(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 56);
	// lbz r7,52(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 52);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stb r7,196(r30)
	PPC_STORE_U8(ctx.r30.u32 + 196, ctx.r7.u8);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stb r8,197(r30)
	PPC_STORE_U8(ctx.r30.u32 + 197, ctx.r8.u8);
	// lwz r5,264(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// ori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 | 1;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stw r4,264(r30)
	PPC_STORE_U32(ctx.r30.u32 + 264, ctx.r4.u32);
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfiwx f10,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.f10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc5454
	if (ctx.cr6.eq) goto loc_82FC5454;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc5454
	if (!ctx.cr6.eq) goto loc_82FC5454;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc5454
	if (!ctx.cr0.eq) goto loc_82FC5454;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC544C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC5454;
	__imp__KfLowerIrql(ctx, base);
loc_82FC5454:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC5464"))) PPC_WEAK_FUNC(sub_82FC5464);
PPC_FUNC_IMPL(__imp__sub_82FC5464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC5468"))) PPC_WEAK_FUNC(sub_82FC5468);
PPC_FUNC_IMPL(__imp__sub_82FC5468) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82fc4dc8
	sub_82FC4DC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC5470"))) PPC_WEAK_FUNC(sub_82FC5470);
PPC_FUNC_IMPL(__imp__sub_82FC5470) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc5248
	sub_82FC5248(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC5478"))) PPC_WEAK_FUNC(sub_82FC5478);
PPC_FUNC_IMPL(__imp__sub_82FC5478) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc4e70
	sub_82FC4E70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC5480"))) PPC_WEAK_FUNC(sub_82FC5480);
PPC_FUNC_IMPL(__imp__sub_82FC5480) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82fc5088
	sub_82FC5088(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC5488"))) PPC_WEAK_FUNC(sub_82FC5488);
PPC_FUNC_IMPL(__imp__sub_82FC5488) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc4e48
	sub_82FC4E48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC5490"))) PPC_WEAK_FUNC(sub_82FC5490);
PPC_FUNC_IMPL(__imp__sub_82FC5490) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc5360
	sub_82FC5360(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC5498"))) PPC_WEAK_FUNC(sub_82FC5498);
PPC_FUNC_IMPL(__imp__sub_82FC5498) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc4f08
	sub_82FC4F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC54A0"))) PPC_WEAK_FUNC(sub_82FC54A0);
PPC_FUNC_IMPL(__imp__sub_82FC54A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82fc4db0
	sub_82FC4DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC54A8"))) PPC_WEAK_FUNC(sub_82FC54A8);
PPC_FUNC_IMPL(__imp__sub_82FC54A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc4e80
	sub_82FC4E80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC54B0"))) PPC_WEAK_FUNC(sub_82FC54B0);
PPC_FUNC_IMPL(__imp__sub_82FC54B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82fc4e30
	sub_82FC4E30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC54B8"))) PPC_WEAK_FUNC(sub_82FC54B8);
PPC_FUNC_IMPL(__imp__sub_82FC54B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc4e58
	sub_82FC4E58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC54C0"))) PPC_WEAK_FUNC(sub_82FC54C0);
PPC_FUNC_IMPL(__imp__sub_82FC54C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc5120
	sub_82FC5120(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC54C8"))) PPC_WEAK_FUNC(sub_82FC54C8);
PPC_FUNC_IMPL(__imp__sub_82FC54C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc4fb0
	sub_82FC4FB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC54D0"))) PPC_WEAK_FUNC(sub_82FC54D0);
PPC_FUNC_IMPL(__imp__sub_82FC54D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82fc4e10
	sub_82FC4E10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC54D8"))) PPC_WEAK_FUNC(sub_82FC54D8);
PPC_FUNC_IMPL(__imp__sub_82FC54D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc4e40
	sub_82FC4E40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC54E0"))) PPC_WEAK_FUNC(sub_82FC54E0);
PPC_FUNC_IMPL(__imp__sub_82FC54E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc4ec8
	sub_82FC4EC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC54E8"))) PPC_WEAK_FUNC(sub_82FC54E8);
PPC_FUNC_IMPL(__imp__sub_82FC54E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc4e60
	sub_82FC4E60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC54F0"))) PPC_WEAK_FUNC(sub_82FC54F0);
PPC_FUNC_IMPL(__imp__sub_82FC54F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc5180
	sub_82FC5180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC54F8"))) PPC_WEAK_FUNC(sub_82FC54F8);
PPC_FUNC_IMPL(__imp__sub_82FC54F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82fc5090
	sub_82FC5090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC5500"))) PPC_WEAK_FUNC(sub_82FC5500);
PPC_FUNC_IMPL(__imp__sub_82FC5500) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc4e50
	sub_82FC4E50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC5508"))) PPC_WEAK_FUNC(sub_82FC5508);
PPC_FUNC_IMPL(__imp__sub_82FC5508) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc5008
	sub_82FC5008(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC5510"))) PPC_WEAK_FUNC(sub_82FC5510);
PPC_FUNC_IMPL(__imp__sub_82FC5510) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc4f60
	sub_82FC4F60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC5518"))) PPC_WEAK_FUNC(sub_82FC5518);
PPC_FUNC_IMPL(__imp__sub_82FC5518) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 68);
	// mulli r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 * 120;
	// addi r3,r11,276
	ctx.r3.s64 = ctx.r11.s64 + 276;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC5528"))) PPC_WEAK_FUNC(sub_82FC5528);
PPC_FUNC_IMPL(__imp__sub_82FC5528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FC5530;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x833b8a44
	ctx.lr = 0x82FC5540;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc5568
	if (ctx.cr6.eq) goto loc_82FC5568;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc557c
	if (ctx.cr6.eq) goto loc_82FC557C;
loc_82FC5568:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC5570;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82FC557C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lhz r7,108(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 108);
	// divwu r6,r8,r7
	ctx.r6.u32 = ctx.r8.u32 / ctx.r7.u32;
	// stw r9,272(r30)
	PPC_STORE_U32(ctx.r30.u32 + 272, ctx.r9.u32);
	// twllei r7,0
	// stw r6,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r6.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc55ec
	if (ctx.cr6.eq) goto loc_82FC55EC;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc55ec
	if (!ctx.cr6.eq) goto loc_82FC55EC;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc55ec
	if (!ctx.cr0.eq) goto loc_82FC55EC;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC55E4;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC55EC;
	__imp__KfLowerIrql(ctx, base);
loc_82FC55EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC55F8"))) PPC_WEAK_FUNC(sub_82FC55F8);
PPC_FUNC_IMPL(__imp__sub_82FC55F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FC5600;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// bl 0x833b8a44
	ctx.lr = 0x82FC560C;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc5634
	if (ctx.cr6.eq) goto loc_82FC5634;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc5648
	if (ctx.cr6.eq) goto loc_82FC5648;
loc_82FC5634:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC563C;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82FC5648:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r10,156(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82fc566c
	if (!ctx.cr6.eq) goto loc_82FC566C;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82fc5680
	goto loc_82FC5680;
loc_82FC566C:
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fc5698
	if (ctx.cr6.eq) goto loc_82FC5698;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
loc_82FC5680:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC5694;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82FC5698:
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc56e0
	if (ctx.cr6.eq) goto loc_82FC56E0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc56e0
	if (!ctx.cr6.eq) goto loc_82FC56E0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc56e0
	if (!ctx.cr0.eq) goto loc_82FC56E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FC56D8;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC56E0;
	__imp__KfLowerIrql(ctx, base);
loc_82FC56E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC56EC"))) PPC_WEAK_FUNC(sub_82FC56EC);
PPC_FUNC_IMPL(__imp__sub_82FC56EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC56F0"))) PPC_WEAK_FUNC(sub_82FC56F0);
PPC_FUNC_IMPL(__imp__sub_82FC56F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FC56F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// bl 0x833b8a44
	ctx.lr = 0x82FC5708;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc5730
	if (ctx.cr6.eq) goto loc_82FC5730;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc5744
	if (ctx.cr6.eq) goto loc_82FC5744;
loc_82FC5730:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC5738;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82FC5744:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r10,156(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82fc57d0
	if (ctx.cr6.eq) goto loc_82FC57D0;
	// clrlwi r9,r27,31
	ctx.r9.u64 = ctx.r27.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82fc57b0
	if (!ctx.cr6.eq) goto loc_82FC57B0;
	// rlwinm r9,r10,0,27,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1E;
	// rlwinm r9,r9,0,30,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82fc57b0
	if (!ctx.cr6.eq) goto loc_82FC57B0;
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fc57d0
	if (!ctx.cr6.eq) goto loc_82FC57D0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC57A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lhz r11,15564(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 15564);
	// sth r11,158(r30)
	PPC_STORE_U16(ctx.r30.u32 + 158, ctx.r11.u16);
	// b 0x82fc57cc
	goto loc_82FC57CC;
loc_82FC57B0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,87
	ctx.r4.s64 = 87;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC57CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FC57CC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82FC57D0:
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc5818
	if (ctx.cr6.eq) goto loc_82FC5818;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc5818
	if (!ctx.cr6.eq) goto loc_82FC5818;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc5818
	if (!ctx.cr0.eq) goto loc_82FC5818;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FC5810;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC5818;
	__imp__KfLowerIrql(ctx, base);
loc_82FC5818:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC5824"))) PPC_WEAK_FUNC(sub_82FC5824);
PPC_FUNC_IMPL(__imp__sub_82FC5824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC5828"))) PPC_WEAK_FUNC(sub_82FC5828);
PPC_FUNC_IMPL(__imp__sub_82FC5828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FC5830;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// bl 0x833b8a44
	ctx.lr = 0x82FC583C;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc5864
	if (ctx.cr6.eq) goto loc_82FC5864;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82fc587c
	if (ctx.cr6.eq) goto loc_82FC587C;
loc_82FC5864:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC586C;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_82FC587C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82fc58c8
	if (ctx.cr6.eq) goto loc_82FC58C8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82fc58c8
	if (ctx.cr6.eq) goto loc_82FC58C8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC58C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82FC58C8:
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc590c
	if (ctx.cr6.eq) goto loc_82FC590C;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82fc590c
	if (!ctx.cr6.eq) goto loc_82FC590C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc590c
	if (!ctx.cr0.eq) goto loc_82FC590C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FC5904;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC590C;
	__imp__KfLowerIrql(ctx, base);
loc_82FC590C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC5918"))) PPC_WEAK_FUNC(sub_82FC5918);
PPC_FUNC_IMPL(__imp__sub_82FC5918) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 68);
	// li r3,0
	ctx.r3.s64 = 0;
	// mulli r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 * 120;
	// addi r10,r11,276
	ctx.r10.s64 = ctx.r11.s64 + 276;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC5930"))) PPC_WEAK_FUNC(sub_82FC5930);
PPC_FUNC_IMPL(__imp__sub_82FC5930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FC5938;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r27,r4,-8
	ctx.r27.s64 = ctx.r4.s64 + -8;
	// bne cr6,0x82fc5954
	if (!ctx.cr6.eq) goto loc_82FC5954;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82FC5954:
	// bl 0x833b8a44
	ctx.lr = 0x82FC5958;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc5980
	if (ctx.cr6.eq) goto loc_82FC5980;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc5994
	if (ctx.cr6.eq) goto loc_82FC5994;
loc_82FC5980:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC5988;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82FC5994:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82fb8ed0
	ctx.lr = 0x82FC59A8;
	sub_82FB8ED0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82fc59d8
	if (ctx.cr6.lt) goto loc_82FC59D8;
	// lbz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// bl 0x82fb93d8
	ctx.lr = 0x82FC59CC;
	sub_82FB93D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82fc5a34
	if (!ctx.cr6.lt) goto loc_82FC5A34;
loc_82FC59D8:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fc5a24
	if (ctx.cr6.eq) goto loc_82FC5A24;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fc5a24
	if (!ctx.cr6.eq) goto loc_82FC5A24;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc5a24
	if (!ctx.cr0.eq) goto loc_82FC5A24;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC5A1C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC5A24;
	__imp__KfLowerIrql(ctx, base);
loc_82FC5A24:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82FC5A34:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,256
	ctx.r10.s64 = 256;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,208(r29)
	PPC_STORE_U32(ctx.r29.u32 + 208, ctx.r10.u32);
	// addi r30,r29,184
	ctx.r30.s64 = ctx.r29.s64 + 184;
	// stw r9,212(r29)
	PPC_STORE_U32(ctx.r29.u32 + 212, ctx.r9.u32);
	// stw r11,204(r29)
	PPC_STORE_U32(ctx.r29.u32 + 204, ctx.r11.u32);
	// lbz r11,172(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 172);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82fc5b74
	if (ctx.cr6.eq) goto loc_82FC5B74;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fc5b74
	if (!ctx.cr6.eq) goto loc_82FC5B74;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f31,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82fc5acc
	if (ctx.cr6.eq) goto loc_82FC5ACC;
	// lfs f0,112(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// stfs f0,224(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 224, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f13,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stfs f13,36(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82FC5AA0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82fc5aa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82FC5AA0;
	// stfs f31,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC5ACC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FC5ACC:
	// lbz r11,172(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 172);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fc5b18
	if (ctx.cr6.eq) goto loc_82FC5B18;
	// lhz r10,174(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 174);
	// lfs f13,224(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r29,16
	ctx.r11.s64 = ctx.r29.s64 + 16;
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r8,174(r29)
	PPC_STORE_U16(ctx.r29.u32 + 174, ctx.r8.u16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82fc5b10
	if (ctx.cr6.eq) goto loc_82FC5B10;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,15568(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15568);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82fc5b14
	goto loc_82FC5B14;
loc_82FC5B10:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_82FC5B14:
	// stfs f0,224(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 224, temp.u32);
loc_82FC5B18:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fc5b64
	if (ctx.cr6.eq) goto loc_82FC5B64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fc5b64
	if (!ctx.cr6.eq) goto loc_82FC5B64;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc5b64
	if (!ctx.cr0.eq) goto loc_82FC5B64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC5B5C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC5B64;
	__imp__KfLowerIrql(ctx, base);
loc_82FC5B64:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82FC5B74:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lbz r29,13(r30)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + 13);
	// subf. r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fc5bb8
	if (ctx.cr0.eq) goto loc_82FC5BB8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82fc5bb8
	if (ctx.cr6.eq) goto loc_82FC5BB8;
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82FC5B98:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82FC5BAC;
	sub_82CB16F0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,1024
	ctx.r28.s64 = ctx.r28.s64 + 1024;
	// bne 0x82fc5b98
	if (!ctx.cr0.eq) goto loc_82FC5B98;
loc_82FC5BB8:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fc5c04
	if (ctx.cr6.eq) goto loc_82FC5C04;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fc5c04
	if (!ctx.cr6.eq) goto loc_82FC5C04;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc5c04
	if (!ctx.cr0.eq) goto loc_82FC5C04;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC5BFC;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC5C04;
	__imp__KfLowerIrql(ctx, base);
loc_82FC5C04:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC5C14"))) PPC_WEAK_FUNC(sub_82FC5C14);
PPC_FUNC_IMPL(__imp__sub_82FC5C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC5C18"))) PPC_WEAK_FUNC(sub_82FC5C18);
PPC_FUNC_IMPL(__imp__sub_82FC5C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82FC5C20;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x833b8a44
	ctx.lr = 0x82FC5C2C;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,20216
	ctx.r30.s64 = ctx.r11.s64 + 20216;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc5c54
	if (ctx.cr6.eq) goto loc_82FC5C54;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc5c68
	if (ctx.cr6.eq) goto loc_82FC5C68;
loc_82FC5C54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC5C5C;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stb r28,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r28.u8);
loc_82FC5C68:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r27,r31,184
	ctx.r27.s64 = ctx.r31.s64 + 184;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lfs f0,224(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,220(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r10,208(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// subf. r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r29,197(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 197);
	// beq 0x82fc5d28
	if (ctx.cr0.eq) goto loc_82FC5D28;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82fc5cc0
	if (ctx.cr6.eq) goto loc_82FC5CC0;
	// rlwinm r26,r10,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82FC5CA0:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82FC5CB4;
	sub_82CB16F0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,1024
	ctx.r28.s64 = ctx.r28.s64 + 1024;
	// bne 0x82fc5ca0
	if (!ctx.cr0.eq) goto loc_82FC5CA0;
loc_82FC5CC0:
	// lbz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 172);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fc5d10
	if (!ctx.cr6.eq) goto loc_82FC5D10;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc5cf0
	if (ctx.cr6.eq) goto loc_82FC5CF0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fc5d28
	if (!ctx.cr6.eq) goto loc_82FC5D28;
loc_82FC5CF0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC5D0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82fc5d28
	goto loc_82FC5D28;
loc_82FC5D10:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC5D28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FC5D28:
	// lbz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 172);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fc5d68
	if (ctx.cr6.eq) goto loc_82FC5D68;
	// lhz r10,174(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 174);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fc5d50
	if (ctx.cr6.eq) goto loc_82FC5D50;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc5d68
	if (ctx.cr6.eq) goto loc_82FC5D68;
loc_82FC5D50:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC5D68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FC5D68:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fc5db4
	if (ctx.cr6.eq) goto loc_82FC5DB4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fc5db4
	if (!ctx.cr6.eq) goto loc_82FC5DB4;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bne 0x82fc5db4
	if (!ctx.cr0.eq) goto loc_82FC5DB4;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC5DAC;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC5DB4;
	__imp__KfLowerIrql(ctx, base);
loc_82FC5DB4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC5DBC"))) PPC_WEAK_FUNC(sub_82FC5DBC);
PPC_FUNC_IMPL(__imp__sub_82FC5DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC5DC0"))) PPC_WEAK_FUNC(sub_82FC5DC0);
PPC_FUNC_IMPL(__imp__sub_82FC5DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FC5DC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fc5e64
	if (ctx.cr6.eq) goto loc_82FC5E64;
	// lwz r11,188(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 188);
	// lwz r10,192(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 192);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82fc5e64
	if (!ctx.cr0.eq) goto loc_82FC5E64;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc5e44
	if (ctx.cr6.eq) goto loc_82FC5E44;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82fc5e0c
	if (ctx.cr6.eq) goto loc_82FC5E0C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_82FC5E0C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,120(r29)
	PPC_STORE_U32(ctx.r29.u32 + 120, ctx.r11.u32);
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc5e64
	if (ctx.cr6.eq) goto loc_82FC5E64;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC5E40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82fc5e64
	goto loc_82FC5E64;
loc_82FC5E44:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC5E60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82FC5E64:
	// lwz r11,208(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 208);
	// lwz r10,212(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 212);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82fc5e80
	if (!ctx.cr0.eq) goto loc_82FC5E80;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82FC5E80:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82fc5f7c
	if (!ctx.cr6.eq) goto loc_82FC5F7C;
	// bl 0x833b8a44
	ctx.lr = 0x82FC5E8C;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc5eb4
	if (ctx.cr6.eq) goto loc_82FC5EB4;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82fc5ecc
	if (ctx.cr6.eq) goto loc_82FC5ECC;
loc_82FC5EB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC5EBC;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_82FC5ECC:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r11,r29,20
	ctx.r11.s64 = ctx.r29.s64 + 20;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc5ef0
	if (ctx.cr6.eq) goto loc_82FC5EF0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x82fc5ef4
	goto loc_82FC5EF4;
loc_82FC5EF0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82FC5EF4:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc5f38
	if (ctx.cr6.eq) goto loc_82FC5F38;
	// lbz r10,117(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 117);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fc5f38
	if (!ctx.cr6.eq) goto loc_82FC5F38;
	// lwz r10,272(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 272);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82fc5f20
	if (ctx.cr6.eq) goto loc_82FC5F20;
	// stw r27,272(r29)
	PPC_STORE_U32(ctx.r29.u32 + 272, ctx.r27.u32);
	// b 0x82fc5f28
	goto loc_82FC5F28;
loc_82FC5F20:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,120(r29)
	PPC_STORE_U32(ctx.r29.u32 + 120, ctx.r10.u32);
loc_82FC5F28:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,117(r11)
	PPC_STORE_U8(ctx.r11.u32 + 117, ctx.r10.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82FC5F38:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fc5f7c
	if (ctx.cr6.eq) goto loc_82FC5F7C;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82fc5f7c
	if (!ctx.cr6.eq) goto loc_82FC5F7C;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc5f7c
	if (!ctx.cr0.eq) goto loc_82FC5F7C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lbz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FC5F74;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC5F7C;
	__imp__KfLowerIrql(ctx, base);
loc_82FC5F7C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC5F88"))) PPC_WEAK_FUNC(sub_82FC5F88);
PPC_FUNC_IMPL(__imp__sub_82FC5F88) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc56f0
	sub_82FC56F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC5F90"))) PPC_WEAK_FUNC(sub_82FC5F90);
PPC_FUNC_IMPL(__imp__sub_82FC5F90) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc55f8
	sub_82FC55F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC5F98"))) PPC_WEAK_FUNC(sub_82FC5F98);
PPC_FUNC_IMPL(__imp__sub_82FC5F98) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc5828
	sub_82FC5828(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC5FA0"))) PPC_WEAK_FUNC(sub_82FC5FA0);
PPC_FUNC_IMPL(__imp__sub_82FC5FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FC5FA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fb8448
	ctx.lr = 0x82FC5FC4;
	sub_82FB8448(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r30,r31,184
	ctx.r30.s64 = ctx.r31.s64 + 184;
	// addi r8,r11,16072
	ctx.r8.s64 = ctx.r11.s64 + 16072;
	// addi r7,r10,16032
	ctx.r7.s64 = ctx.r10.s64 + 16032;
	// addi r6,r9,15936
	ctx.r6.s64 = ctx.r9.s64 + 15936;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r5,76
	ctx.r5.s64 = 76;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82FC5FFC;
	sub_82CB16F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fb8158
	ctx.lr = 0x82FC6018;
	sub_82FB8158(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lbz r8,69(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 69);
	// ori r11,r4,48000
	ctx.r11.u64 = ctx.r4.u64 | 48000;
	// lbz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r10,r3,16192
	ctx.r10.s64 = ctx.r3.s64 + 16192;
	// stw r8,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r8.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r8,264(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// ori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 | 1;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lbz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stb r6,197(r31)
	PPC_STORE_U8(ctx.r31.u32 + 197, ctx.r6.u8);
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stb r3,196(r31)
	PPC_STORE_U8(ctx.r31.u32 + 196, ctx.r3.u8);
	// stw r7,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r7.u32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfiwx f9,r30,r5
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.f9.u32);
	// ori r5,r6,2
	ctx.r5.u64 = ctx.r6.u64 | 2;
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r5,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r5.u32);
	// lbz r4,197(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 197);
	// lbz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 196);
	// rotlwi r11,r3,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mullw r8,r10,r4
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// sth r9,110(r31)
	PPC_STORE_U16(ctx.r31.u32 + 110, ctx.r9.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r8,108(r31)
	PPC_STORE_U16(ctx.r31.u32 + 108, ctx.r8.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC60B0"))) PPC_WEAK_FUNC(sub_82FC60B0);
PPC_FUNC_IMPL(__imp__sub_82FC60B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82FC60B8;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// addi r28,r5,-8
	ctx.r28.s64 = ctx.r5.s64 + -8;
	// bne cr6,0x82fc60dc
	if (!ctx.cr6.eq) goto loc_82FC60DC;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_82FC60DC:
	// bl 0x833b8a44
	ctx.lr = 0x82FC60E0;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc6108
	if (ctx.cr6.eq) goto loc_82FC6108;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc611c
	if (ctx.cr6.eq) goto loc_82FC611C;
loc_82FC6108:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC6110;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_82FC611C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fb8ed0
	ctx.lr = 0x82FC6130;
	sub_82FB8ED0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82fc6160
	if (ctx.cr6.lt) goto loc_82FC6160;
	// lbz r11,56(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 56);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// bl 0x82fb93d8
	ctx.lr = 0x82FC6154;
	sub_82FB93D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82fc6238
	if (!ctx.cr6.lt) goto loc_82FC6238;
loc_82FC6160:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fc61ac
	if (ctx.cr6.eq) goto loc_82FC61AC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fc61ac
	if (!ctx.cr6.eq) goto loc_82FC61AC;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc61ac
	if (!ctx.cr0.eq) goto loc_82FC61AC;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lbz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC61A4;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC61AC;
	__imp__KfLowerIrql(ctx, base);
loc_82FC61AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82fc67b4
	if (!ctx.cr6.eq) goto loc_82FC67B4;
loc_82FC61B8:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82fc00b8
	ctx.lr = 0x82FC61C4;
	sub_82FC00B8(ctx, base);
	// li r24,1
	ctx.r24.s64 = 1;
loc_82FC61C8:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82fc6428
	if (ctx.cr6.eq) goto loc_82FC6428;
	// lwz r11,188(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 188);
	// lwz r10,192(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 192);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82fc6428
	if (!ctx.cr0.eq) goto loc_82FC6428;
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc6408
	if (ctx.cr6.eq) goto loc_82FC6408;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82fc6200
	if (ctx.cr6.eq) goto loc_82FC6200;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r11.u32);
loc_82FC6200:
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// stw r11,120(r26)
	PPC_STORE_U32(ctx.r26.u32 + 120, ctx.r11.u32);
	// lwz r11,180(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc6428
	if (ctx.cr6.eq) goto loc_82FC6428;
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,36(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC6234;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82fc6428
	goto loc_82FC6428;
loc_82FC6238:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,256
	ctx.r10.s64 = 256;
	// stw r23,212(r26)
	PPC_STORE_U32(ctx.r26.u32 + 212, ctx.r23.u32);
	// addi r30,r26,184
	ctx.r30.s64 = ctx.r26.s64 + 184;
	// stw r10,208(r26)
	PPC_STORE_U32(ctx.r26.u32 + 208, ctx.r10.u32);
	// stw r11,204(r26)
	PPC_STORE_U32(ctx.r26.u32 + 204, ctx.r11.u32);
	// lbz r11,172(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 172);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82fc6368
	if (ctx.cr6.eq) goto loc_82FC6368;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fc6368
	if (!ctx.cr6.eq) goto loc_82FC6368;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f31,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82fc62cc
	if (ctx.cr6.eq) goto loc_82FC62CC;
	// lfs f0,112(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// stfs f0,224(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 224, temp.u32);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// lfs f13,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stfs f13,36(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82FC62A0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82fc62a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82FC62A0;
	// stfs f31,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// addi r3,r26,16
	ctx.r3.s64 = ctx.r26.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC62CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FC62CC:
	// lbz r11,172(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 172);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fc6318
	if (ctx.cr6.eq) goto loc_82FC6318;
	// lhz r10,174(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 174);
	// lfs f13,224(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r26,16
	ctx.r11.s64 = ctx.r26.s64 + 16;
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r8,174(r26)
	PPC_STORE_U16(ctx.r26.u32 + 174, ctx.r8.u16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82fc6310
	if (ctx.cr6.eq) goto loc_82FC6310;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,15568(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15568);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82fc6314
	goto loc_82FC6314;
loc_82FC6310:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_82FC6314:
	// stfs f0,224(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 224, temp.u32);
loc_82FC6318:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fc61b8
	if (ctx.cr6.eq) goto loc_82FC61B8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fc61b8
	if (!ctx.cr6.eq) goto loc_82FC61B8;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc61b8
	if (!ctx.cr0.eq) goto loc_82FC61B8;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC635C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC6364;
	__imp__KfLowerIrql(ctx, base);
	// b 0x82fc61b8
	goto loc_82FC61B8;
loc_82FC6368:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lbz r29,13(r30)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + 13);
	// subf. r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fc63ac
	if (ctx.cr0.eq) goto loc_82FC63AC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82fc63ac
	if (ctx.cr6.eq) goto loc_82FC63AC;
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82FC638C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82FC63A0;
	sub_82CB16F0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,1024
	ctx.r28.s64 = ctx.r28.s64 + 1024;
	// bne 0x82fc638c
	if (!ctx.cr0.eq) goto loc_82FC638C;
loc_82FC63AC:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fc63f8
	if (ctx.cr6.eq) goto loc_82FC63F8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fc63f8
	if (!ctx.cr6.eq) goto loc_82FC63F8;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc63f8
	if (!ctx.cr0.eq) goto loc_82FC63F8;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC63F0;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC63F8;
	__imp__KfLowerIrql(ctx, base);
loc_82FC63F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82FC6408:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// addi r3,r26,16
	ctx.r3.s64 = ctx.r26.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC6424;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82FC6428:
	// lwz r11,208(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 208);
	// addi r28,r26,184
	ctx.r28.s64 = ctx.r26.s64 + 184;
	// lwz r10,212(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 212);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82fc662c
	if (ctx.cr0.eq) goto loc_82FC662C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82fc652c
	if (!ctx.cr6.eq) goto loc_82FC652C;
	// bl 0x833b8a44
	ctx.lr = 0x82FC6448;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc6468
	if (ctx.cr6.eq) goto loc_82FC6468;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82fc6480
	if (ctx.cr6.eq) goto loc_82FC6480;
loc_82FC6468:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC6470;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_82FC6480:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r11,r26,20
	ctx.r11.s64 = ctx.r26.s64 + 20;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r10,20(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc64a4
	if (ctx.cr6.eq) goto loc_82FC64A4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x82fc64a8
	goto loc_82FC64A8;
loc_82FC64A4:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82FC64A8:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc64e8
	if (ctx.cr6.eq) goto loc_82FC64E8;
	// lbz r10,117(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 117);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fc64e8
	if (!ctx.cr6.eq) goto loc_82FC64E8;
	// lwz r10,272(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 272);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82fc64d4
	if (ctx.cr6.eq) goto loc_82FC64D4;
	// stw r23,272(r26)
	PPC_STORE_U32(ctx.r26.u32 + 272, ctx.r23.u32);
	// b 0x82fc64dc
	goto loc_82FC64DC;
loc_82FC64D4:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,120(r26)
	PPC_STORE_U32(ctx.r26.u32 + 120, ctx.r10.u32);
loc_82FC64DC:
	// stb r24,117(r11)
	PPC_STORE_U8(ctx.r11.u32 + 117, ctx.r24.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82FC64E8:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fc652c
	if (ctx.cr6.eq) goto loc_82FC652C;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82fc652c
	if (!ctx.cr6.eq) goto loc_82FC652C;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc652c
	if (!ctx.cr0.eq) goto loc_82FC652C;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// lbz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FC6524;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC652C;
	__imp__KfLowerIrql(ctx, base);
loc_82FC652C:
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fc662c
	if (ctx.cr6.eq) goto loc_82FC662C;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc654c
	if (ctx.cr6.eq) goto loc_82FC654C;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// b 0x82fc6550
	goto loc_82FC6550;
loc_82FC654C:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
loc_82FC6550:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r27,120(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 120);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// bge cr6,0x82fc656c
	if (!ctx.cr6.lt) goto loc_82FC656C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82FC656C:
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fd3098
	ctx.lr = 0x82FC6578;
	sub_82FD3098(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x833b8a44
	ctx.lr = 0x82FC6580;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc65a0
	if (ctx.cr6.eq) goto loc_82FC65A0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc65b4
	if (ctx.cr6.eq) goto loc_82FC65B4;
loc_82FC65A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC65A8;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_82FC65B4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,120(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 120);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fc65d0
	if (!ctx.cr6.eq) goto loc_82FC65D0;
	// add r11,r28,r27
	ctx.r11.u64 = ctx.r28.u64 + ctx.r27.u64;
	// stw r11,120(r26)
	PPC_STORE_U32(ctx.r26.u32 + 120, ctx.r11.u32);
loc_82FC65D0:
	// lwz r11,168(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 168);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r11,168(r26)
	PPC_STORE_U32(ctx.r26.u32 + 168, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc61c8
	if (ctx.cr6.eq) goto loc_82FC61C8;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc61c8
	if (!ctx.cr6.eq) goto loc_82FC61C8;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc61c8
	if (!ctx.cr0.eq) goto loc_82FC61C8;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC6620;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC6628;
	__imp__KfLowerIrql(ctx, base);
	// b 0x82fc61c8
	goto loc_82FC61C8;
loc_82FC662C:
	// bl 0x833b8a44
	ctx.lr = 0x82FC6630;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc6650
	if (ctx.cr6.eq) goto loc_82FC6650;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc6664
	if (ctx.cr6.eq) goto loc_82FC6664;
loc_82FC6650:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC6658;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_82FC6664:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r26,184
	ctx.r30.s64 = ctx.r26.s64 + 184;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lfs f0,224(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,220(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 220, temp.u32);
	// lbz r29,197(r26)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r26.u32 + 197);
	// lwz r11,212(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 212);
	// lwz r10,208(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 208);
	// subf. r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fc6724
	if (ctx.cr0.eq) goto loc_82FC6724;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82fc66bc
	if (ctx.cr6.eq) goto loc_82FC66BC;
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82FC669C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82FC66B0;
	sub_82CB16F0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,1024
	ctx.r28.s64 = ctx.r28.s64 + 1024;
	// bne 0x82fc669c
	if (!ctx.cr0.eq) goto loc_82FC669C;
loc_82FC66BC:
	// lbz r11,172(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 172);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fc670c
	if (!ctx.cr6.eq) goto loc_82FC670C;
	// lwz r10,20(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// addi r11,r26,20
	ctx.r11.s64 = ctx.r26.s64 + 20;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc66ec
	if (ctx.cr6.eq) goto loc_82FC66EC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fc6724
	if (!ctx.cr6.eq) goto loc_82FC6724;
loc_82FC66EC:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// addi r3,r26,16
	ctx.r3.s64 = ctx.r26.s64 + 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC6708;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82fc6724
	goto loc_82FC6724;
loc_82FC670C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC6724;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FC6724:
	// lbz r11,172(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 172);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fc6764
	if (ctx.cr6.eq) goto loc_82FC6764;
	// lhz r10,174(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 174);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fc674c
	if (ctx.cr6.eq) goto loc_82FC674C;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc6764
	if (ctx.cr6.eq) goto loc_82FC6764;
loc_82FC674C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC6764;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FC6764:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fc67b0
	if (ctx.cr6.eq) goto loc_82FC67B0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fc67b0
	if (!ctx.cr6.eq) goto loc_82FC67B0;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc67b0
	if (!ctx.cr0.eq) goto loc_82FC67B0;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC67A8;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC67B0;
	__imp__KfLowerIrql(ctx, base);
loc_82FC67B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FC67B4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC67C0"))) PPC_WEAK_FUNC(sub_82FC67C0);
PPC_FUNC_IMPL(__imp__sub_82FC67C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82FC67C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r4,276
	ctx.r4.s64 = 276;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC67F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fc6820
	if (ctx.cr6.eq) goto loc_82FC6820;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82fc5fa0
	ctx.lr = 0x82FC6804;
	sub_82FC5FA0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc6820
	if (ctx.cr6.eq) goto loc_82FC6820;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82FC6820:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC6830"))) PPC_WEAK_FUNC(sub_82FC6830);
PPC_FUNC_IMPL(__imp__sub_82FC6830) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6838"))) PPC_WEAK_FUNC(sub_82FC6838);
PPC_FUNC_IMPL(__imp__sub_82FC6838) {
	PPC_FUNC_PROLOGUE();
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,3750
	ctx.r10.s64 = 3750;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r10,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6850"))) PPC_WEAK_FUNC(sub_82FC6850);
PPC_FUNC_IMPL(__imp__sub_82FC6850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,92(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6864"))) PPC_WEAK_FUNC(sub_82FC6864);
PPC_FUNC_IMPL(__imp__sub_82FC6864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6868"))) PPC_WEAK_FUNC(sub_82FC6868);
PPC_FUNC_IMPL(__imp__sub_82FC6868) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v1,r3,r4
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6870"))) PPC_WEAK_FUNC(sub_82FC6870);
PPC_FUNC_IMPL(__imp__sub_82FC6870) {
	PPC_FUNC_PROLOGUE();
	// stvx128 v1,r3,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6878"))) PPC_WEAK_FUNC(sub_82FC6878);
PPC_FUNC_IMPL(__imp__sub_82FC6878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6880"))) PPC_WEAK_FUNC(sub_82FC6880);
PPC_FUNC_IMPL(__imp__sub_82FC6880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6888"))) PPC_WEAK_FUNC(sub_82FC6888);
PPC_FUNC_IMPL(__imp__sub_82FC6888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6890"))) PPC_WEAK_FUNC(sub_82FC6890);
PPC_FUNC_IMPL(__imp__sub_82FC6890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6898"))) PPC_WEAK_FUNC(sub_82FC6898);
PPC_FUNC_IMPL(__imp__sub_82FC6898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC68A0"))) PPC_WEAK_FUNC(sub_82FC68A0);
PPC_FUNC_IMPL(__imp__sub_82FC68A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC68A8"))) PPC_WEAK_FUNC(sub_82FC68A8);
PPC_FUNC_IMPL(__imp__sub_82FC68A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC68B0"))) PPC_WEAK_FUNC(sub_82FC68B0);
PPC_FUNC_IMPL(__imp__sub_82FC68B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC68B8"))) PPC_WEAK_FUNC(sub_82FC68B8);
PPC_FUNC_IMPL(__imp__sub_82FC68B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC68C0"))) PPC_WEAK_FUNC(sub_82FC68C0);
PPC_FUNC_IMPL(__imp__sub_82FC68C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC68C8"))) PPC_WEAK_FUNC(sub_82FC68C8);
PPC_FUNC_IMPL(__imp__sub_82FC68C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC68D0"))) PPC_WEAK_FUNC(sub_82FC68D0);
PPC_FUNC_IMPL(__imp__sub_82FC68D0) {
	PPC_FUNC_PROLOGUE();
	// subf r11,r5,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r5.s64;
	// clrlwi r3,r11,18
	ctx.r3.u64 = ctx.r11.u32 & 0x3FFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC68DC"))) PPC_WEAK_FUNC(sub_82FC68DC);
PPC_FUNC_IMPL(__imp__sub_82FC68DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC68E0"))) PPC_WEAK_FUNC(sub_82FC68E0);
PPC_FUNC_IMPL(__imp__sub_82FC68E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC68E8"))) PPC_WEAK_FUNC(sub_82FC68E8);
PPC_FUNC_IMPL(__imp__sub_82FC68E8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC68F0"))) PPC_WEAK_FUNC(sub_82FC68F0);
PPC_FUNC_IMPL(__imp__sub_82FC68F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC68F8"))) PPC_WEAK_FUNC(sub_82FC68F8);
PPC_FUNC_IMPL(__imp__sub_82FC68F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r9,23
	ctx.r8.u64 = ctx.r9.u32 & 0x1FF;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC691C"))) PPC_WEAK_FUNC(sub_82FC691C);
PPC_FUNC_IMPL(__imp__sub_82FC691C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6920"))) PPC_WEAK_FUNC(sub_82FC6920);
PPC_FUNC_IMPL(__imp__sub_82FC6920) {
	PPC_FUNC_PROLOGUE();
	// subf r11,r5,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r5.s64;
	// clrlwi r3,r11,23
	ctx.r3.u64 = ctx.r11.u32 & 0x1FF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC692C"))) PPC_WEAK_FUNC(sub_82FC692C);
PPC_FUNC_IMPL(__imp__sub_82FC692C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6930"))) PPC_WEAK_FUNC(sub_82FC6930);
PPC_FUNC_IMPL(__imp__sub_82FC6930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// clrlwi r11,r10,23
	ctx.r11.u64 = ctx.r10.u32 & 0x1FF;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r8,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC694C"))) PPC_WEAK_FUNC(sub_82FC694C);
PPC_FUNC_IMPL(__imp__sub_82FC694C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6950"))) PPC_WEAK_FUNC(sub_82FC6950);
PPC_FUNC_IMPL(__imp__sub_82FC6950) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6958"))) PPC_WEAK_FUNC(sub_82FC6958);
PPC_FUNC_IMPL(__imp__sub_82FC6958) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6960"))) PPC_WEAK_FUNC(sub_82FC6960);
PPC_FUNC_IMPL(__imp__sub_82FC6960) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6968"))) PPC_WEAK_FUNC(sub_82FC6968);
PPC_FUNC_IMPL(__imp__sub_82FC6968) {
	PPC_FUNC_PROLOGUE();
	// subf r11,r5,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r5.s64;
	// clrlwi r3,r11,25
	ctx.r3.u64 = ctx.r11.u32 & 0x7F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6974"))) PPC_WEAK_FUNC(sub_82FC6974);
PPC_FUNC_IMPL(__imp__sub_82FC6974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6978"))) PPC_WEAK_FUNC(sub_82FC6978);
PPC_FUNC_IMPL(__imp__sub_82FC6978) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6980"))) PPC_WEAK_FUNC(sub_82FC6980);
PPC_FUNC_IMPL(__imp__sub_82FC6980) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6988"))) PPC_WEAK_FUNC(sub_82FC6988);
PPC_FUNC_IMPL(__imp__sub_82FC6988) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6990"))) PPC_WEAK_FUNC(sub_82FC6990);
PPC_FUNC_IMPL(__imp__sub_82FC6990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r9,21
	ctx.r8.u64 = ctx.r9.u32 & 0x7FF;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC69B4"))) PPC_WEAK_FUNC(sub_82FC69B4);
PPC_FUNC_IMPL(__imp__sub_82FC69B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC69B8"))) PPC_WEAK_FUNC(sub_82FC69B8);
PPC_FUNC_IMPL(__imp__sub_82FC69B8) {
	PPC_FUNC_PROLOGUE();
	// subf r11,r5,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r5.s64;
	// clrlwi r3,r11,21
	ctx.r3.u64 = ctx.r11.u32 & 0x7FF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC69C4"))) PPC_WEAK_FUNC(sub_82FC69C4);
PPC_FUNC_IMPL(__imp__sub_82FC69C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC69C8"))) PPC_WEAK_FUNC(sub_82FC69C8);
PPC_FUNC_IMPL(__imp__sub_82FC69C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// clrlwi r11,r10,21
	ctx.r11.u64 = ctx.r10.u32 & 0x7FF;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r8,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC69E4"))) PPC_WEAK_FUNC(sub_82FC69E4);
PPC_FUNC_IMPL(__imp__sub_82FC69E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC69E8"))) PPC_WEAK_FUNC(sub_82FC69E8);
PPC_FUNC_IMPL(__imp__sub_82FC69E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC69F0"))) PPC_WEAK_FUNC(sub_82FC69F0);
PPC_FUNC_IMPL(__imp__sub_82FC69F0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC69F8"))) PPC_WEAK_FUNC(sub_82FC69F8);
PPC_FUNC_IMPL(__imp__sub_82FC69F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6A00"))) PPC_WEAK_FUNC(sub_82FC6A00);
PPC_FUNC_IMPL(__imp__sub_82FC6A00) {
	PPC_FUNC_PROLOGUE();
	// subf r11,r5,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r5.s64;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6A0C"))) PPC_WEAK_FUNC(sub_82FC6A0C);
PPC_FUNC_IMPL(__imp__sub_82FC6A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6A10"))) PPC_WEAK_FUNC(sub_82FC6A10);
PPC_FUNC_IMPL(__imp__sub_82FC6A10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6A18"))) PPC_WEAK_FUNC(sub_82FC6A18);
PPC_FUNC_IMPL(__imp__sub_82FC6A18) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6A20"))) PPC_WEAK_FUNC(sub_82FC6A20);
PPC_FUNC_IMPL(__imp__sub_82FC6A20) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6A28"))) PPC_WEAK_FUNC(sub_82FC6A28);
PPC_FUNC_IMPL(__imp__sub_82FC6A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r9,22
	ctx.r8.u64 = ctx.r9.u32 & 0x3FF;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6A4C"))) PPC_WEAK_FUNC(sub_82FC6A4C);
PPC_FUNC_IMPL(__imp__sub_82FC6A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6A50"))) PPC_WEAK_FUNC(sub_82FC6A50);
PPC_FUNC_IMPL(__imp__sub_82FC6A50) {
	PPC_FUNC_PROLOGUE();
	// subf r11,r5,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r5.s64;
	// clrlwi r3,r11,22
	ctx.r3.u64 = ctx.r11.u32 & 0x3FF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6A5C"))) PPC_WEAK_FUNC(sub_82FC6A5C);
PPC_FUNC_IMPL(__imp__sub_82FC6A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6A60"))) PPC_WEAK_FUNC(sub_82FC6A60);
PPC_FUNC_IMPL(__imp__sub_82FC6A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// clrlwi r11,r10,22
	ctx.r11.u64 = ctx.r10.u32 & 0x3FF;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r8,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6A7C"))) PPC_WEAK_FUNC(sub_82FC6A7C);
PPC_FUNC_IMPL(__imp__sub_82FC6A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6A80"))) PPC_WEAK_FUNC(sub_82FC6A80);
PPC_FUNC_IMPL(__imp__sub_82FC6A80) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6A88"))) PPC_WEAK_FUNC(sub_82FC6A88);
PPC_FUNC_IMPL(__imp__sub_82FC6A88) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6A90"))) PPC_WEAK_FUNC(sub_82FC6A90);
PPC_FUNC_IMPL(__imp__sub_82FC6A90) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6A98"))) PPC_WEAK_FUNC(sub_82FC6A98);
PPC_FUNC_IMPL(__imp__sub_82FC6A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r9,20
	ctx.r8.u64 = ctx.r9.u32 & 0xFFF;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6ABC"))) PPC_WEAK_FUNC(sub_82FC6ABC);
PPC_FUNC_IMPL(__imp__sub_82FC6ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6AC0"))) PPC_WEAK_FUNC(sub_82FC6AC0);
PPC_FUNC_IMPL(__imp__sub_82FC6AC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// clrlwi r11,r10,20
	ctx.r11.u64 = ctx.r10.u32 & 0xFFF;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r8,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6ADC"))) PPC_WEAK_FUNC(sub_82FC6ADC);
PPC_FUNC_IMPL(__imp__sub_82FC6ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6AE0"))) PPC_WEAK_FUNC(sub_82FC6AE0);
PPC_FUNC_IMPL(__imp__sub_82FC6AE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6AE4"))) PPC_WEAK_FUNC(sub_82FC6AE4);
PPC_FUNC_IMPL(__imp__sub_82FC6AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6AE8"))) PPC_WEAK_FUNC(sub_82FC6AE8);
PPC_FUNC_IMPL(__imp__sub_82FC6AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// addi r3,r11,20328
	ctx.r3.s64 = ctx.r11.s64 + 20328;
	// b 0x82fbf870
	sub_82FBF870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC6AFC"))) PPC_WEAK_FUNC(sub_82FC6AFC);
PPC_FUNC_IMPL(__imp__sub_82FC6AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6B00"))) PPC_WEAK_FUNC(sub_82FC6B00);
PPC_FUNC_IMPL(__imp__sub_82FC6B00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6B04"))) PPC_WEAK_FUNC(sub_82FC6B04);
PPC_FUNC_IMPL(__imp__sub_82FC6B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6B08"))) PPC_WEAK_FUNC(sub_82FC6B08);
PPC_FUNC_IMPL(__imp__sub_82FC6B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f1,4(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6B18"))) PPC_WEAK_FUNC(sub_82FC6B18);
PPC_FUNC_IMPL(__imp__sub_82FC6B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6B2C"))) PPC_WEAK_FUNC(sub_82FC6B2C);
PPC_FUNC_IMPL(__imp__sub_82FC6B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6B30"))) PPC_WEAK_FUNC(sub_82FC6B30);
PPC_FUNC_IMPL(__imp__sub_82FC6B30) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82FC6B4C"))) PPC_WEAK_FUNC(sub_82FC6B4C);
PPC_FUNC_IMPL(__imp__sub_82FC6B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6B50"))) PPC_WEAK_FUNC(sub_82FC6B50);
PPC_FUNC_IMPL(__imp__sub_82FC6B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FC6B58;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x833b8a44
	ctx.lr = 0x82FC6B6C;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc6b94
	if (ctx.cr6.eq) goto loc_82FC6B94;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc6ba8
	if (ctx.cr6.eq) goto loc_82FC6BA8;
loc_82FC6B94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC6B9C;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82FC6BA8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stfs f31,184(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 184, temp.u32);
	// stb r10,188(r29)
	PPC_STORE_U8(ctx.r29.u32 + 188, ctx.r10.u8);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc6c08
	if (ctx.cr6.eq) goto loc_82FC6C08;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc6c08
	if (!ctx.cr6.eq) goto loc_82FC6C08;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc6c08
	if (!ctx.cr0.eq) goto loc_82FC6C08;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC6C00;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC6C08;
	__imp__KfLowerIrql(ctx, base);
loc_82FC6C08:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC6C14"))) PPC_WEAK_FUNC(sub_82FC6C14);
PPC_FUNC_IMPL(__imp__sub_82FC6C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6C18"))) PPC_WEAK_FUNC(sub_82FC6C18);
PPC_FUNC_IMPL(__imp__sub_82FC6C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FC6C20;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x833b8a44
	ctx.lr = 0x82FC6C30;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc6c58
	if (ctx.cr6.eq) goto loc_82FC6C58;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc6c6c
	if (ctx.cr6.eq) goto loc_82FC6C6C;
loc_82FC6C58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC6C60;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82FC6C6C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82FC6C84;
	sub_82CB1160(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stb r11,189(r30)
	PPC_STORE_U8(ctx.r30.u32 + 189, ctx.r11.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc6cd8
	if (ctx.cr6.eq) goto loc_82FC6CD8;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc6cd8
	if (!ctx.cr6.eq) goto loc_82FC6CD8;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc6cd8
	if (!ctx.cr0.eq) goto loc_82FC6CD8;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC6CD0;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC6CD8;
	__imp__KfLowerIrql(ctx, base);
loc_82FC6CD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC6CE0"))) PPC_WEAK_FUNC(sub_82FC6CE0);
PPC_FUNC_IMPL(__imp__sub_82FC6CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FC6CE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x833b8a44
	ctx.lr = 0x82FC6CF8;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc6d20
	if (ctx.cr6.eq) goto loc_82FC6D20;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc6d34
	if (ctx.cr6.eq) goto loc_82FC6D34;
loc_82FC6D20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC6D28;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82FC6D34:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r30,136
	ctx.r3.s64 = ctx.r30.s64 + 136;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82FC6D4C;
	sub_82CB1160(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stb r11,190(r30)
	PPC_STORE_U8(ctx.r30.u32 + 190, ctx.r11.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc6da0
	if (ctx.cr6.eq) goto loc_82FC6DA0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc6da0
	if (!ctx.cr6.eq) goto loc_82FC6DA0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc6da0
	if (!ctx.cr0.eq) goto loc_82FC6DA0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC6D98;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC6DA0;
	__imp__KfLowerIrql(ctx, base);
loc_82FC6DA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC6DA8"))) PPC_WEAK_FUNC(sub_82FC6DA8);
PPC_FUNC_IMPL(__imp__sub_82FC6DA8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6DB0"))) PPC_WEAK_FUNC(sub_82FC6DB0);
PPC_FUNC_IMPL(__imp__sub_82FC6DB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -52);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r10,16208
	ctx.r9.s64 = ctx.r10.s64 + 16208;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r9,-52(r8)
	PPC_STORE_U32(ctx.r8.u32 + -52, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6DCC"))) PPC_WEAK_FUNC(sub_82FC6DCC);
PPC_FUNC_IMPL(__imp__sub_82FC6DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6DD0"))) PPC_WEAK_FUNC(sub_82FC6DD0);
PPC_FUNC_IMPL(__imp__sub_82FC6DD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6DD4"))) PPC_WEAK_FUNC(sub_82FC6DD4);
PPC_FUNC_IMPL(__imp__sub_82FC6DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6DD8"))) PPC_WEAK_FUNC(sub_82FC6DD8);
PPC_FUNC_IMPL(__imp__sub_82FC6DD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6DDC"))) PPC_WEAK_FUNC(sub_82FC6DDC);
PPC_FUNC_IMPL(__imp__sub_82FC6DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6DE0"))) PPC_WEAK_FUNC(sub_82FC6DE0);
PPC_FUNC_IMPL(__imp__sub_82FC6DE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6DE4"))) PPC_WEAK_FUNC(sub_82FC6DE4);
PPC_FUNC_IMPL(__imp__sub_82FC6DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6DE8"))) PPC_WEAK_FUNC(sub_82FC6DE8);
PPC_FUNC_IMPL(__imp__sub_82FC6DE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6DEC"))) PPC_WEAK_FUNC(sub_82FC6DEC);
PPC_FUNC_IMPL(__imp__sub_82FC6DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6DF0"))) PPC_WEAK_FUNC(sub_82FC6DF0);
PPC_FUNC_IMPL(__imp__sub_82FC6DF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6DF4"))) PPC_WEAK_FUNC(sub_82FC6DF4);
PPC_FUNC_IMPL(__imp__sub_82FC6DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6DF8"))) PPC_WEAK_FUNC(sub_82FC6DF8);
PPC_FUNC_IMPL(__imp__sub_82FC6DF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6DFC"))) PPC_WEAK_FUNC(sub_82FC6DFC);
PPC_FUNC_IMPL(__imp__sub_82FC6DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6E00"))) PPC_WEAK_FUNC(sub_82FC6E00);
PPC_FUNC_IMPL(__imp__sub_82FC6E00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6E04"))) PPC_WEAK_FUNC(sub_82FC6E04);
PPC_FUNC_IMPL(__imp__sub_82FC6E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6E08"))) PPC_WEAK_FUNC(sub_82FC6E08);
PPC_FUNC_IMPL(__imp__sub_82FC6E08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6E0C"))) PPC_WEAK_FUNC(sub_82FC6E0C);
PPC_FUNC_IMPL(__imp__sub_82FC6E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6E10"))) PPC_WEAK_FUNC(sub_82FC6E10);
PPC_FUNC_IMPL(__imp__sub_82FC6E10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6E14"))) PPC_WEAK_FUNC(sub_82FC6E14);
PPC_FUNC_IMPL(__imp__sub_82FC6E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6E18"))) PPC_WEAK_FUNC(sub_82FC6E18);
PPC_FUNC_IMPL(__imp__sub_82FC6E18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6E1C"))) PPC_WEAK_FUNC(sub_82FC6E1C);
PPC_FUNC_IMPL(__imp__sub_82FC6E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6E20"))) PPC_WEAK_FUNC(sub_82FC6E20);
PPC_FUNC_IMPL(__imp__sub_82FC6E20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6E24"))) PPC_WEAK_FUNC(sub_82FC6E24);
PPC_FUNC_IMPL(__imp__sub_82FC6E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6E28"))) PPC_WEAK_FUNC(sub_82FC6E28);
PPC_FUNC_IMPL(__imp__sub_82FC6E28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6E2C"))) PPC_WEAK_FUNC(sub_82FC6E2C);
PPC_FUNC_IMPL(__imp__sub_82FC6E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6E30"))) PPC_WEAK_FUNC(sub_82FC6E30);
PPC_FUNC_IMPL(__imp__sub_82FC6E30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6E34"))) PPC_WEAK_FUNC(sub_82FC6E34);
PPC_FUNC_IMPL(__imp__sub_82FC6E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6E38"))) PPC_WEAK_FUNC(sub_82FC6E38);
PPC_FUNC_IMPL(__imp__sub_82FC6E38) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,-192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -192);
	// addi r11,r3,-140
	ctx.r11.s64 = ctx.r3.s64 + -140;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r9,16208
	ctx.r8.s64 = ctx.r9.s64 + 16208;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,-52(r7)
	PPC_STORE_U32(ctx.r7.u32 + -52, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6E58"))) PPC_WEAK_FUNC(sub_82FC6E58);
PPC_FUNC_IMPL(__imp__sub_82FC6E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82FC6E60;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82fc6f94
	if (ctx.cr6.eq) goto loc_82FC6F94;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82fc6e9c
	if (ctx.cr6.eq) goto loc_82FC6E9C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82FC6E9C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e649f8
	ctx.lr = 0x82FC6EA4;
	sub_82E649F8(ctx, base);
	// bl 0x833b8a44
	ctx.lr = 0x82FC6EA8;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc6ed0
	if (ctx.cr6.eq) goto loc_82FC6ED0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc6ee4
	if (ctx.cr6.eq) goto loc_82FC6EE4;
loc_82FC6ED0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC6ED8;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_82FC6EE4:
	// addis r8,r28,5
	ctx.r8.s64 = ctx.r28.s64 + 327680;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r8,r8,-17760
	ctx.r8.s64 = ctx.r8.s64 + -17760;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addis r9,r28,5
	ctx.r9.s64 = ctx.r28.s64 + 327680;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r9,r9,-17752
	ctx.r9.s64 = ctx.r9.s64 + -17752;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// lfd f11,0(r8)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// lfd f0,16216(r7)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r7.u32 + 16216);
	// lfd f12,0(r9)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fmul f7,f9,f0
	ctx.f7.f64 = ctx.f9.f64 * ctx.f0.f64;
	// fdiv f8,f10,f13
	ctx.f8.f64 = ctx.f10.f64 / ctx.f13.f64;
	// fdiv f6,f8,f7
	ctx.f6.f64 = ctx.f8.f64 / ctx.f7.f64;
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// stfs f5,0(r27)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// std r26,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r26.u64);
	// std r26,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r26.u64);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc7058
	if (ctx.cr6.eq) goto loc_82FC7058;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc7058
	if (!ctx.cr6.eq) goto loc_82FC7058;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc7058
	if (!ctx.cr0.eq) goto loc_82FC7058;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC6F7C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC6F84;
	__imp__KfLowerIrql(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82FC6F94:
	// bl 0x833b8a44
	ctx.lr = 0x82FC6F98;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc6fc0
	if (ctx.cr6.eq) goto loc_82FC6FC0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc6fe0
	if (ctx.cr6.eq) goto loc_82FC6FE0;
loc_82FC6FC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC6FC8;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stb r7,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r7.u8);
	// b 0x82fc6fe4
	goto loc_82FC6FE4;
loc_82FC6FE0:
	// lbz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
loc_82FC6FE4:
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r8,r13
	ctx.r8.u64 = ctx.r13.u64;
	// lwz r6,16(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lfs f0,6148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6148);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r5,r9,r28
	ctx.r5.u64 = ctx.r9.u64 + ctx.r28.u64;
	// lfs f13,108(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// beq 0x82fc7048
	if (ctx.cr0.eq) goto loc_82FC7048;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82fc7048
	if (!ctx.cr6.eq) goto loc_82FC7048;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc7048
	if (!ctx.cr0.eq) goto loc_82FC7048;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x833b8384
	ctx.lr = 0x82FC7040;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC7048;
	__imp__KfLowerIrql(ctx, base);
loc_82FC7048:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,7712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7712);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
loc_82FC7058:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC7068"))) PPC_WEAK_FUNC(sub_82FC7068);
PPC_FUNC_IMPL(__imp__sub_82FC7068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82FC7070;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82fc7204
	if (ctx.cr6.lt) goto loc_82FC7204;
	// beq cr6,0x82fc7158
	if (ctx.cr6.eq) goto loc_82FC7158;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82fc70b0
	if (ctx.cr6.lt) goto loc_82FC70B0;
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// ori r26,r26,87
	ctx.r26.u64 = ctx.r26.u64 | 87;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82FC70B0:
	// lfs f31,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x833b8a44
	ctx.lr = 0x82FC70B8;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc70e0
	if (ctx.cr6.eq) goto loc_82FC70E0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc70f4
	if (ctx.cr6.eq) goto loc_82FC70F4;
loc_82FC70E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC70E8;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_82FC70F4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x833b8a44
	ctx.lr = 0x82FC7100;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc7120
	if (ctx.cr6.eq) goto loc_82FC7120;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc7134
	if (ctx.cr6.eq) goto loc_82FC7134;
loc_82FC7120:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC7128;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_82FC7134:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stb r8,204(r28)
	PPC_STORE_U8(ctx.r28.u32 + 204, ctx.r8.u8);
	// lfs f0,6148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// stfs f0,200(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 200, temp.u32);
	// b 0x82fc7374
	goto loc_82FC7374;
loc_82FC7158:
	// lwz r27,0(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x833b8a44
	ctx.lr = 0x82FC7160;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc7188
	if (ctx.cr6.eq) goto loc_82FC7188;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc719c
	if (ctx.cr6.eq) goto loc_82FC719C;
loc_82FC7188:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC7190;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_82FC719C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r28,16
	ctx.r30.s64 = ctx.r28.s64 + 16;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x833b8a44
	ctx.lr = 0x82FC71AC;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc71cc
	if (ctx.cr6.eq) goto loc_82FC71CC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc71e0
	if (ctx.cr6.eq) goto loc_82FC71E0;
loc_82FC71CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC71D4;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82FC71E0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r30,136
	ctx.r3.s64 = ctx.r30.s64 + 136;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82FC71F8;
	sub_82CB1160(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,190(r30)
	PPC_STORE_U8(ctx.r30.u32 + 190, ctx.r11.u8);
	// b 0x82fc7374
	goto loc_82FC7374;
loc_82FC7204:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82fe59e8
	ctx.lr = 0x82FC7210;
	sub_82FE59E8(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lbz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lfs f0,6148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6148);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lfs f13,16224(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16224);
	ctx.f13.f64 = double(temp.f32);
	// lbz r7,6(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lbz r6,7(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lbz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// lbz r4,9(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lbz r3,10(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// lbz r11,11(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lbz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lbz r9,13(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// lbz r8,14(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// lbz r7,15(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15);
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// lbz r6,5(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,140(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f9,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,144(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f8,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,148(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f7,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,152(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f6,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f5,156(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lfs f4,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// stfs f3,160(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// bl 0x833b8a44
	ctx.lr = 0x82FC72D4;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc72fc
	if (ctx.cr6.eq) goto loc_82FC72FC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc7310
	if (ctx.cr6.eq) goto loc_82FC7310;
loc_82FC72FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC7304;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_82FC7310:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r29,r28,16
	ctx.r29.s64 = ctx.r28.s64 + 16;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x833b8a44
	ctx.lr = 0x82FC7320;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc7340
	if (ctx.cr6.eq) goto loc_82FC7340;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc7354
	if (ctx.cr6.eq) goto loc_82FC7354;
loc_82FC7340:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC7348;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82FC7354:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r29,52
	ctx.r3.s64 = ctx.r29.s64 + 52;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r5,84
	ctx.r5.s64 = 84;
	// bl 0x82cb1160
	ctx.lr = 0x82FC736C;
	sub_82CB1160(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,189(r29)
	PPC_STORE_U8(ctx.r29.u32 + 189, ctx.r11.u8);
loc_82FC7374:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc73c4
	if (ctx.cr6.eq) goto loc_82FC73C4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc73c4
	if (!ctx.cr6.eq) goto loc_82FC73C4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc73c4
	if (!ctx.cr0.eq) goto loc_82FC73C4;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC73B8;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC73C0;
	__imp__KfLowerIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82FC73C4:
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc740c
	if (ctx.cr6.eq) goto loc_82FC740C;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc740c
	if (!ctx.cr6.eq) goto loc_82FC740C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc740c
	if (!ctx.cr0.eq) goto loc_82FC740C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FC7404;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC740C;
	__imp__KfLowerIrql(ctx, base);
loc_82FC740C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC741C"))) PPC_WEAK_FUNC(sub_82FC741C);
PPC_FUNC_IMPL(__imp__sub_82FC741C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC7420"))) PPC_WEAK_FUNC(sub_82FC7420);
PPC_FUNC_IMPL(__imp__sub_82FC7420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b8
	ctx.lr = 0x82FC7428;
	__savegprlr_16(ctx, base);
	// stfd f30,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f30.u64);
	// stfd f31,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f31.u64);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r21,r3,20
	ctx.r21.s64 = ctx.r3.s64 + 20;
	// subf r25,r8,r9
	ctx.r25.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// bgt cr6,0x82fc7460
	if (ctx.cr6.gt) goto loc_82FC7460;
	// subf r11,r9,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x82fc7464
	if (!ctx.cr6.gt) goto loc_82FC7464;
loc_82FC7460:
	// li r6,1
	ctx.r6.s64 = 1;
loc_82FC7464:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r23,r3,4
	ctx.r23.s64 = ctx.r3.s64 + 4;
	// addi r22,r3,24
	ctx.r22.s64 = ctx.r3.s64 + 24;
	// lfs f0,14068(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14068);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f13.u64);
	// lwz r7,-156(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -156);
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r7,256
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 256, ctx.xer);
	// bge cr6,0x82fc787c
	if (!ctx.cr6.lt) goto loc_82FC787C;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r31,-32251
	ctx.r31.s64 = -2113601536;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// lfs f11,6140(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6140);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,16232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16232);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// blt cr6,0x82fc75dc
	if (ctx.cr6.lt) goto loc_82FC75DC;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// subf r29,r9,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// rlwinm r27,r7,0,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r9,2
	ctx.r6.s64 = ctx.r9.s64 + 2;
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// addi r31,r29,2
	ctx.r31.s64 = ctx.r29.s64 + 2;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r30,r4,8
	ctx.r30.s64 = ctx.r4.s64 + 8;
	// addi r9,r5,12
	ctx.r9.s64 = ctx.r5.s64 + 12;
	// subf r26,r5,r4
	ctx.r26.s64 = ctx.r4.s64 - ctx.r5.s64;
	// rlwinm r28,r7,30,2,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_82FC74F4:
	// fsubs f10,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// add r24,r29,r25
	ctx.r24.u64 = ctx.r29.u64 + ctx.r25.u64;
	// fadds f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// addi r20,r6,-1
	ctx.r20.s64 = ctx.r6.s64 + -1;
	// rlwinm r18,r29,2,16,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFC;
	// lfs f8,-8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r24,r24,2,16,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFC;
	// lfs f7,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r20,r20,2,16,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFC;
	// lfs f6,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r19,r31,-1
	ctx.r19.s64 = ctx.r31.s64 + -1;
	// lfsx f5,r26,r9
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r9.u32);
	ctx.f5.f64 = double(temp.f32);
	// addi r17,r6,1
	ctx.r17.s64 = ctx.r6.s64 + 1;
	// lfsx f4,r18,r11
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r19,r19,2,16,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFC;
	// lfsx f3,r24,r11
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// rlwinm r16,r6,2,16,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFC;
	// stfs f8,-8(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + -8, temp.u32);
	// rlwinm r18,r31,2,16,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFC;
	// fsubs f2,f10,f0
	ctx.f2.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfsx f8,r20,r11
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// rlwinm r24,r17,2,16,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFC;
	// fsubs f8,f2,f0
	ctx.f8.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// addi r20,r31,1
	ctx.r20.s64 = ctx.r31.s64 + 1;
	// fadds f1,f9,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfsx f13,r19,r11
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f7,-4(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lfsx f7,r16,r11
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f2,f7,f2
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// lfsx f30,r18,r11
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r11.u32);
	ctx.f30.f64 = double(temp.f32);
	// fadds f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f6,0(r8)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmadds f4,f3,f12,f4
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f4.f64));
	// lfsx f7,r24,r11
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// rlwinm r24,r20,2,16,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFC;
	// fmadds f2,f30,f1,f2
	ctx.f2.f64 = double(float(ctx.f30.f64 * ctx.f1.f64 + ctx.f2.f64));
	// fmadds f3,f13,f9,f10
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f10.f64));
	// stfs f4,-8(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + -8, temp.u32);
	// stfs f3,-4(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stfs f2,0(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// fsubs f12,f8,f0
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfsx f1,r24,r11
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f13,f1,f31,f6
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f31.f64 + ctx.f6.f64));
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fadds f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// stfs f5,4(r8)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bne 0x82fc74f4
	if (!ctx.cr0.eq) goto loc_82FC74F4;
	// stfs f12,0(r23)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
loc_82FC75DC:
	// cmplw cr6,r27,r7
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x82fc7668
	if (ctx.cr6.gt) goto loc_82FC7668;
	// rlwinm r6,r27,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r9,r27,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r27.s64;
	// lwz r27,12(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r29,r6,r4
	ctx.r29.u64 = ctx.r6.u64 + ctx.r4.u64;
	// lfs f12,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r30,r6,r5
	ctx.r30.u64 = ctx.r6.u64 + ctx.r5.u64;
	// subf r8,r28,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r28.s64;
	// addi r6,r29,-4
	ctx.r6.s64 = ctx.r29.s64 + -4;
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// subf r29,r27,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r27.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82FC761C:
	// rlwinm r28,r8,2,16,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFC;
	// lfs f10,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// add r27,r29,r8
	ctx.r27.u64 = ctx.r29.u64 + ctx.r8.u64;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r27,r27,2,16,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lfsx f9,r28,r11
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfsx f7,r27,r11
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// fmadds f6,f7,f12,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f8.f64));
	// stfs f6,0(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82fc761c
	if (!ctx.cr0.eq) goto loc_82FC761C;
	// stfs f12,0(r23)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
loc_82FC7668:
	// lwz r26,16(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82fc7680
	if (ctx.cr6.eq) goto loc_82FC7680;
	// fmr f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f11.f64;
	// b 0x82fc7688
	goto loc_82FC7688;
loc_82FC7680:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f12,6048(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6048);
	ctx.f12.f64 = double(temp.f32);
loc_82FC7688:
	// subfic r8,r7,256
	ctx.xer.ca = ctx.r7.u32 <= 256;
	ctx.r8.s64 = 256 - ctx.r7.s64;
	// stfs f12,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// fsubs f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r26,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r26.u32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x82fc77e8
	if (ctx.cr6.lt) goto loc_82FC77E8;
	// subfic r9,r7,252
	ctx.xer.ca = ctx.r7.u32 <= 252;
	ctx.r9.s64 = 252 - ctx.r7.s64;
	// lwz r20,12(r3)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r8,r7,3
	ctx.r8.s64 = ctx.r7.s64 + 3;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// addi r29,r9,1
	ctx.r29.s64 = ctx.r9.s64 + 1;
	// addi r31,r7,2
	ctx.r31.s64 = ctx.r7.s64 + 2;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r20,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r20.s64;
	// rlwinm r25,r6,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r29,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r28,r26,r10
	ctx.r28.s64 = ctx.r10.s64 - ctx.r26.s64;
	// rlwinm r24,r31,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r8,r4
	ctx.r30.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r6,r9,2
	ctx.r6.s64 = ctx.r9.s64 + 2;
	// add r8,r25,r11
	ctx.r8.u64 = ctx.r25.u64 + ctx.r11.u64;
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// addi r31,r28,2
	ctx.r31.s64 = ctx.r28.s64 + 2;
	// add r9,r24,r5
	ctx.r9.u64 = ctx.r24.u64 + ctx.r5.u64;
	// subf r25,r5,r4
	ctx.r25.s64 = ctx.r4.s64 - ctx.r5.s64;
	// subf r26,r20,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r20.s64;
	// add r27,r27,r7
	ctx.r27.u64 = ctx.r27.u64 + ctx.r7.u64;
loc_82FC7700:
	// add r7,r26,r28
	ctx.r7.u64 = ctx.r26.u64 + ctx.r28.u64;
	// lfs f10,-12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	ctx.f10.f64 = double(temp.f32);
	// addi r24,r31,-1
	ctx.r24.s64 = ctx.r31.s64 + -1;
	// lfs f9,-8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// addi r20,r6,-1
	ctx.r20.s64 = ctx.r6.s64 + -1;
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// rlwinm r7,r7,2,16,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFC;
	// fsubs f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// rlwinm r19,r28,2,16,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFC;
	// lfsx f7,r9,r25
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r25.u32);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r20,r20,2,16,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFC;
	// lfs f6,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// rlwinm r24,r24,2,16,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFC;
	// addi r18,r31,1
	ctx.r18.s64 = ctx.r31.s64 + 1;
	// lfsx f4,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r7,r6,2,16,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFC;
	// lfsx f5,r19,r11
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r19,r31,2,16,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFC;
	// stfs f10,-8(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + -8, temp.u32);
	// fmuls f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfsx f2,r20,r11
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r20,r18,2,16,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFC;
	// lfsx f1,r24,r11
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// fadds f3,f11,f0
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f9,-4(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// fsubs f10,f8,f0
	ctx.f10.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfsx f31,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f31.f64 = double(temp.f32);
	// fadds f9,f3,f0
	ctx.f9.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// lfsx f5,r19,r11
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f1,f1,f11
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// stfs f7,0(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmuls f7,f5,f3
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// lfsx f11,r20,r11
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f30,f10,f0
	ctx.f30.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fmuls f5,f11,f9
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// addi r7,r6,1
	ctx.r7.s64 = ctx.r6.s64 + 1;
	// rlwinm r7,r7,2,16,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFC;
	// fmadds f3,f2,f8,f1
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f8.f64 + ctx.f1.f64));
	// fmadds f4,f4,f12,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f4,-4(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// fmadds f2,f31,f10,f7
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f10.f64 + ctx.f7.f64));
	// stfs f3,0(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f2,4(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fsubs f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// lfsx f1,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f13,f1,f30,f5
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f30.f64 + ctx.f5.f64));
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stfs f6,4(r8)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// fadds f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bne 0x82fc7700
	if (!ctx.cr0.eq) goto loc_82FC7700;
	// stfs f12,0(r23)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
loc_82FC77E8:
	// cmplwi cr6,r27,256
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 256, ctx.xer);
	// bge cr6,0x82fc7870
	if (!ctx.cr6.lt) goto loc_82FC7870;
	// rlwinm r7,r27,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lfs f12,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// subfic r9,r27,256
	ctx.xer.ca = ctx.r27.u32 <= 256;
	ctx.r9.s64 = 256 - ctx.r27.s64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// subf r8,r31,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r31.s64;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// subf r3,r30,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r30.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82FC7824:
	// rlwinm r31,r8,2,16,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFC;
	// lfs f11,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// add r30,r3,r8
	ctx.r30.u64 = ctx.r3.u64 + ctx.r8.u64;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r30,r30,2,16,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lfsx f10,r31,r11
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfsx f8,r30,r11
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fmadds f7,f8,f12,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f7,0(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x82fc7824
	if (!ctx.cr0.eq) goto loc_82FC7824;
	// stfs f12,0(r23)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
loc_82FC7870:
	// clrlwi r11,r10,18
	ctx.r11.u64 = ctx.r10.u32 & 0x3FFF;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// b 0x82fc7a50
	goto loc_82FC7A50;
loc_82FC787C:
	// addi r31,r10,256
	ctx.r31.s64 = ctx.r10.s64 + 256;
	// cmplwi cr6,r31,16384
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16384, ctx.xer);
	// bge cr6,0x82fc79d0
	if (!ctx.cr6.lt) goto loc_82FC79D0;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addi r11,r7,256
	ctx.r11.s64 = ctx.r7.s64 + 256;
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// bge cr6,0x82fc79d0
	if (!ctx.cr6.lt) goto loc_82FC79D0;
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r30,r11,256
	ctx.r30.s64 = ctx.r11.s64 + 256;
	// cmplwi cr6,r30,16384
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16384, ctx.xer);
	// bge cr6,0x82fc79d0
	if (!ctx.cr6.lt) goto loc_82FC79D0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt cr6,0x82fc79d0
	if (ctx.cr6.lt) goto loc_82FC79D0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82fc79d0
	if (ctx.cr6.lt) goto loc_82FC79D0;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bne cr6,0x82fc7948
	if (!ctx.cr6.eq) goto loc_82FC7948;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r5,4
	ctx.r9.s64 = ctx.r5.s64 + 4;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r7,65
	ctx.r7.s64 = 65;
	// li r8,16
	ctx.r8.s64 = 16;
loc_82FC78E0:
	// lvlx128 v63,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvrx128 v62,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v60,v63,v62
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// lvrx128 v59,r8,r10
	temp.u32 = ctx.r8.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vor128 v58,v61,v59
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v59.u8)));
	// stvlx128 v60,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvrx128 v60,r11,r8
	ea = ctx.r11.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v60.u8[i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvlx128 v58,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// stvrx128 v58,r9,r8
	ea = ctx.r9.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v58.u8[i]);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bne 0x82fc78e0
	if (!ctx.cr0.eq) goto loc_82FC78E0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r31.u32);
	// lfs f0,16228(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16228);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,0(r23)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// lfs f0,1024(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 1024);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r21)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r21.u32 + 0, temp.u32);
	// lfd f30,-152(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
loc_82FC7948:
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r6,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r6.s64;
	// addi r8,r5,4
	ctx.r8.s64 = ctx.r5.s64 + 4;
	// lfs f13,6140(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// subf r7,r3,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r3.s64;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// li r9,256
	ctx.r9.s64 = 256;
	// lfs f12,16232(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16232);
	ctx.f12.f64 = double(temp.f32);
loc_82FC7978:
	// lfs f11,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfsx f9,r7,r10
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// fmadds f7,f9,f0,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f7,0(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x82fc7978
	if (!ctx.cr0.eq) goto loc_82FC7978;
	// stfs f0,0(r23)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// stw r31,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r31.u32);
	// lfs f0,1024(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 1024);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r21)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r21.u32 + 0, temp.u32);
	// lfd f30,-152(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
loc_82FC79D0:
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
	// addi r6,r3,32
	ctx.r6.s64 = ctx.r3.s64 + 32;
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lfs f13,6140(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// addi r7,r5,4
	ctx.r7.s64 = ctx.r5.s64 + 4;
	// lfs f12,16232(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16232);
	ctx.f12.f64 = double(temp.f32);
	// li r9,256
	ctx.r9.s64 = 256;
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
loc_82FC7A04:
	// rlwinm r3,r11,2,16,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// lfs f11,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// add r31,r11,r25
	ctx.r31.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r31,r31,2,16,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfsx f10,r3,r6
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfsx f8,r31,r6
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// fmadds f7,f8,f0,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f7,0(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x82fc7a04
	if (!ctx.cr0.eq) goto loc_82FC7A04;
	// stfs f0,0(r23)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
loc_82FC7A50:
	// clrlwi r11,r10,18
	ctx.r11.u64 = ctx.r10.u32 & 0x3FFF;
	// lfs f0,1024(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 1024);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r21)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r21.u32 + 0, temp.u32);
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// lfd f30,-152(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC7A6C"))) PPC_WEAK_FUNC(sub_82FC7A6C);
PPC_FUNC_IMPL(__imp__sub_82FC7A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC7A70"))) PPC_WEAK_FUNC(sub_82FC7A70);
PPC_FUNC_IMPL(__imp__sub_82FC7A70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f9,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f9,0(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// lfs f8,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f8.f64 = double(temp.f32);
	// blt cr6,0x82fc7b2c
	if (ctx.cr6.lt) goto loc_82FC7B2C;
	// lfs f0,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r6,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFC;
	// fsubs f11,f8,f0
	ctx.f11.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f10,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r10,r6,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// fmuls f13,f10,f11
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
loc_82FC7AB0:
	// lfs f7,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f5,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f10
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// lfs f3,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f2,f3,f10
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fmuls f7,f1,f10
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// fmadds f5,f13,f12,f9
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f5,0(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmadds f12,f0,f12,f6
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmuls f3,f0,f5
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmuls f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmadds f9,f13,f12,f3
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f3.f64));
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmadds f12,f4,f11,f1
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f1.f64));
	// fmuls f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f5,f0,f12
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmadds f4,f13,f12,f6
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f6.f64));
	// stfs f4,8(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmadds f12,f2,f11,f5
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fmuls f3,f0,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f2,f0,f12
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmadds f9,f13,f12,f3
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f3.f64));
	// stfs f9,12(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmadds f12,f7,f11,f2
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f2.f64));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x82fc7ab0
	if (!ctx.cr0.eq) goto loc_82FC7AB0;
loc_82FC7B2C:
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x82fc7b74
	if (ctx.cr6.gt) goto loc_82FC7B74;
	// lfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// subf r10,r9,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r9.s64;
	// fsubs f13,f8,f0
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f11,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
loc_82FC7B4C:
	// fmuls f11,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// fmadds f9,f13,f12,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmadds f12,f13,f8,f10
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f10.f64));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82fc7b4c
	if (!ctx.cr0.eq) goto loc_82FC7B4C;
loc_82FC7B74:
	// stfs f9,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC7B80"))) PPC_WEAK_FUNC(sub_82FC7B80);
PPC_FUNC_IMPL(__imp__sub_82FC7B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FC7B88;
	__savegprlr_27(ctx, base);
	// lwz r7,36(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 + 44;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f11,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,24(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lfs f10,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// subf r11,r30,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r30.s64;
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// subf r31,r31,r30
	ctx.r31.s64 = ctx.r30.s64 - ctx.r31.s64;
	// lfs f12,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// subf r30,r29,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r29.s64;
	// stfs f10,0(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// li r9,256
	ctx.r9.s64 = 256;
	// addi r7,r7,256
	ctx.r7.s64 = ctx.r7.s64 + 256;
loc_82FC7BD4:
	// rlwinm r29,r11,2,21,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7FC;
	// lfs f11,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// add r28,r31,r11
	ctx.r28.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r27,r30,r11
	ctx.r27.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r28,r28,2,21,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x7FC;
	// rlwinm r27,r27,2,21,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x7FC;
	// lfsx f10,r29,r10
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfsx f8,r28,r10
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// lfsx f7,r27,r10
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmuls f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// stfs f6,0(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// fmadds f5,f8,f0,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f5,0(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// bne 0x82fc7bd4
	if (!ctx.cr0.eq) goto loc_82FC7BD4;
	// clrlwi r11,r7,23
	ctx.r11.u64 = ctx.r7.u32 & 0x1FF;
	// fmr f0,f5
	ctx.f0.f64 = ctx.f5.f64;
	// fmr f13,f6
	ctx.f13.f64 = ctx.f6.f64;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC7C48"))) PPC_WEAK_FUNC(sub_82FC7C48);
PPC_FUNC_IMPL(__imp__sub_82FC7C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82FC7C50;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82cb6ae4
	ctx.lr = 0x82FC7C58;
	__savefpr_27(ctx, base);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82FC7C88:
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// lfs f11,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r7,r7,2,23,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x1FC;
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r5,r5,2,23,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x1FC;
	// lfs f8,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r31,r10,2,23,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1FC;
	// lfs f7,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// lfs f6,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// addi r29,r10,2
	ctx.r29.s64 = ctx.r10.s64 + 2;
	// lfs f5,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r7,r30,2,23,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x1FC;
	// fmadds f3,f0,f4,f11
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f4.f64 + ctx.f11.f64));
	// stfs f3,-8(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + -8, temp.u32);
	// lfsx f2,r5,r11
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f0,f2,f10
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f2.f64 + ctx.f10.f64));
	// stfs f1,-4(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// addi r5,r10,3
	ctx.r5.s64 = ctx.r10.s64 + 3;
	// lfsx f11,r31,r11
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r31,r29,2,23,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x1FC;
	// fmadds f10,f0,f11,f9
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f9.f64));
	// stfs f10,0(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfsx f9,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r5,r5,2,23,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x1FC;
	// fmadds f8,f0,f9,f8
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 + ctx.f8.f64));
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// stfs f8,4(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// addi r30,r10,5
	ctx.r30.s64 = ctx.r10.s64 + 5;
	// lfsx f31,r31,r11
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f31.f64 = double(temp.f32);
	// rlwinm r7,r7,2,23,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x1FC;
	// fmadds f7,f0,f31,f7
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f7.f64));
	// stfs f7,8(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfsx f30,r5,r11
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	ctx.f30.f64 = double(temp.f32);
	// rlwinm r5,r30,2,23,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x1FC;
	// fmadds f6,f0,f30,f6
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f6.f64));
	// stfs f6,12(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lfsx f29,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f5,f0,f29,f5
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 + ctx.f5.f64));
	// lfs f28,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f28.f64 = double(temp.f32);
	// addi r7,r4,28
	ctx.r7.s64 = ctx.r4.s64 + 28;
	// stfs f5,16(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// fmadds f4,f13,f3,f4
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f4.f64));
	// lfsx f27,r5,r11
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f28,f0,f27,f28
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f27.f64 + ctx.f28.f64));
	// fmadds f3,f13,f1,f2
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f2.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmadds f2,f13,f10,f11
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f11.f64));
	// stfs f28,20(r9)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// fmadds f1,f13,f8,f9
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f9.f64));
	// stfs f4,4(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmadds f11,f13,f7,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f31.f64));
	// stfs f3,8(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmadds f10,f13,f6,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f30.f64));
	// stfs f2,12(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// stfs f1,16(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// fmadds f9,f13,f5,f29
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f29.f64));
	// stfs f11,20(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stfs f10,24(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// fmadds f12,f13,f28,f27
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f28.f64 + ctx.f27.f64));
	// stfs f9,0(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// bne 0x82fc7c88
	if (!ctx.cr0.eq) goto loc_82FC7C88;
	// neg r7,r6
	ctx.r7.s64 = -ctx.r6.s64;
	// subfic r9,r6,2
	ctx.xer.ca = ctx.r6.u32 <= 2;
	ctx.r9.s64 = 2 - ctx.r6.s64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// li r8,16
	ctx.r8.s64 = 16;
loc_82FC7DAC:
	// rlwinm r6,r7,2,23,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x1FC;
	// lfs f11,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// rlwinm r27,r9,2,23,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x1FC;
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r26,r5,2,23,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x1FC;
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// lfs f8,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f6,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// addi r6,r9,2
	ctx.r6.s64 = ctx.r9.s64 + 2;
	// fmadds f5,f0,f6,f11
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f11.f64));
	// stfs f5,-8(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// rlwinm r25,r5,2,23,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x1FC;
	// lfs f7,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r24,r6,2,23,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x1FC;
	// lfs f4,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// lfs f3,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r9,3
	ctx.r5.s64 = ctx.r9.s64 + 3;
	// rlwinm r22,r6,2,23,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x1FC;
	// addi r6,r4,8
	ctx.r6.s64 = ctx.r4.s64 + 8;
	// rlwinm r23,r5,2,23,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x1FC;
	// addi r5,r9,5
	ctx.r5.s64 = ctx.r9.s64 + 5;
	// addi r28,r4,28
	ctx.r28.s64 = ctx.r4.s64 + 28;
	// fmadds f2,f13,f5,f6
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f6.f64));
	// stfs f2,4(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// rlwinm r21,r5,2,23,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x1FC;
	// addi r5,r4,12
	ctx.r5.s64 = ctx.r4.s64 + 12;
	// addi r31,r4,16
	ctx.r31.s64 = ctx.r4.s64 + 16;
	// lfs f1,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r30,r4,20
	ctx.r30.s64 = ctx.r4.s64 + 20;
	// addi r29,r4,24
	ctx.r29.s64 = ctx.r4.s64 + 24;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lfsx f12,r26,r11
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f12,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f10.f64));
	// stfs f11,-4(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lfsx f6,r27,r11
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f0,f6,f9
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f9.f64));
	// stfs f5,0(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmadds f10,f13,f11,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f10,0(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmadds f11,f13,f5,f6
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f6.f64));
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfsx f2,r25,r11
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f12,f0,f2,f8
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f2.f64 + ctx.f8.f64));
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmadds f8,f13,f12,f2
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f2.f64));
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfsx f10,r24,r11
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f0,f10,f7
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f7.f64));
	// stfs f9,8(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfsx f6,r23,r11
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f0,f6,f4
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f4.f64));
	// stfs f5,12(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmadds f7,f13,f9,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f10.f64));
	// lfsx f4,r22,r11
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f0,f4,f3
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f4.f64 + ctx.f3.f64));
	// stfs f3,16(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// fmadds f2,f13,f5,f6
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f6.f64));
	// lfsx f12,r21,r11
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f12,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f1.f64));
	// stfs f11,20(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// fmadds f10,f13,f3,f4
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f4.f64));
	// stfs f7,0(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmadds f12,f13,f11,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f2,0(r29)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stfs f10,0(r28)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// bne 0x82fc7dac
	if (!ctx.cr0.eq) goto loc_82FC7DAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82cb6b30
	ctx.lr = 0x82FC7EEC;
	__restfpr_27(ctx, base);
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC7EF0"))) PPC_WEAK_FUNC(sub_82FC7EF0);
PPC_FUNC_IMPL(__imp__sub_82FC7EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FC7EF8;
	__savegprlr_27(ctx, base);
	// lwz r7,36(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 + 44;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f11,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,24(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lfs f10,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// subf r11,r30,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r30.s64;
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// subf r31,r31,r30
	ctx.r31.s64 = ctx.r30.s64 - ctx.r31.s64;
	// lfs f12,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// subf r30,r29,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r29.s64;
	// stfs f10,0(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// li r9,256
	ctx.r9.s64 = 256;
	// addi r7,r7,256
	ctx.r7.s64 = ctx.r7.s64 + 256;
loc_82FC7F44:
	// rlwinm r29,r11,2,19,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1FFC;
	// lfs f11,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// add r28,r31,r11
	ctx.r28.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r27,r30,r11
	ctx.r27.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r28,r28,2,19,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x1FFC;
	// rlwinm r27,r27,2,19,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x1FFC;
	// lfsx f10,r29,r10
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfsx f8,r28,r10
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// lfsx f7,r27,r10
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmuls f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// stfs f6,0(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// fmadds f5,f8,f0,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f5,0(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// bne 0x82fc7f44
	if (!ctx.cr0.eq) goto loc_82FC7F44;
	// clrlwi r11,r7,21
	ctx.r11.u64 = ctx.r7.u32 & 0x7FF;
	// fmr f0,f5
	ctx.f0.f64 = ctx.f5.f64;
	// fmr f13,f6
	ctx.f13.f64 = ctx.f6.f64;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC7FB8"))) PPC_WEAK_FUNC(sub_82FC7FB8);
PPC_FUNC_IMPL(__imp__sub_82FC7FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82FC7FC0;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6ae4
	ctx.lr = 0x82FC7FC8;
	__savefpr_27(ctx, base);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r3,24
	ctx.r9.s64 = ctx.r3.s64 + 24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r7,2
	ctx.r10.s64 = ctx.r7.s64 + 2;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// li r8,32
	ctx.r8.s64 = 32;
	// add r11,r6,r9
	ctx.r11.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r7,r7,256
	ctx.r7.s64 = ctx.r7.s64 + 256;
loc_82FC7FFC:
	// addi r6,r10,-2
	ctx.r6.s64 = ctx.r10.s64 + -2;
	// lfs f11,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r6,r6,2,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FC;
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r5,r5,2,22,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3FC;
	// lfs f8,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r31,r10,2,22,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// lfs f7,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// lfs f6,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// addi r29,r10,2
	ctx.r29.s64 = ctx.r10.s64 + 2;
	// lfs f5,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r6,r30,2,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FC;
	// fmadds f3,f0,f4,f11
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f4.f64 + ctx.f11.f64));
	// stfs f3,-8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfsx f2,r5,r9
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f0,f2,f10
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f2.f64 + ctx.f10.f64));
	// stfs f1,-4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addi r5,r10,3
	ctx.r5.s64 = ctx.r10.s64 + 3;
	// lfsx f10,r31,r9
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r31,r29,2,22,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3FC;
	// fmadds f9,f0,f10,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f9.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsx f31,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f31.f64 = double(temp.f32);
	// rlwinm r5,r5,2,22,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3FC;
	// fmadds f8,f0,f31,f8
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f8.f64));
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r30,r10,5
	ctx.r30.s64 = ctx.r10.s64 + 5;
	// lfsx f30,r31,r9
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f7,f0,f30,f7
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f7.f64));
	// rlwinm r6,r6,2,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FC;
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfsx f29,r5,r9
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	ctx.f29.f64 = double(temp.f32);
	// rlwinm r5,r30,2,22,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FC;
	// fmadds f6,f0,f29,f6
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 + ctx.f6.f64));
	// stfs f6,12(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfsx f28,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f5,f0,f28,f5
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 + ctx.f5.f64));
	// lfs f11,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f4,f13,f3,f4
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f4.f64));
	// stfs f5,16(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fmadds f2,f13,f1,f2
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f2.f64));
	// lfsx f3,r5,r9
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f27,f0,f3,f11
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f11.f64));
	// fmadds f11,f13,f27,f3
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f27.f64 + ctx.f3.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmadds f1,f13,f9,f10
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f10.f64));
	// stfs f4,4(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmadds f12,f13,f8,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f31.f64));
	// stfs f12,16(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// fmadds f10,f13,f7,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f30.f64));
	// stfs f2,8(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmadds f9,f13,f6,f29
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f29.f64));
	// stfs f1,12(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// fmadds f8,f13,f5,f28
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f28.f64));
	// stfs f10,20(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f9,24(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stfs f8,28(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// stfs f27,20(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// bne 0x82fc7ffc
	if (!ctx.cr0.eq) goto loc_82FC7FFC;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6b30
	ctx.lr = 0x82FC8128;
	__restfpr_27(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC812C"))) PPC_WEAK_FUNC(sub_82FC812C);
PPC_FUNC_IMPL(__imp__sub_82FC812C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC8130"))) PPC_WEAK_FUNC(sub_82FC8130);
PPC_FUNC_IMPL(__imp__sub_82FC8130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// clrlwi r10,r7,23
	ctx.r10.u64 = ctx.r7.u32 & 0x1FF;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f12,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f1.f64));
	// stfsx f11,r5,r11
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r9,23
	ctx.r8.u64 = ctx.r9.u32 & 0x1FF;
	// fmadds f1,f13,f11,f12
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// stfs f1,12(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC8188"))) PPC_WEAK_FUNC(sub_82FC8188);
PPC_FUNC_IMPL(__imp__sub_82FC8188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82FC8190;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6ae4
	ctx.lr = 0x82FC8198;
	__savefpr_27(ctx, base);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r3,24
	ctx.r9.s64 = ctx.r3.s64 + 24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r7,2
	ctx.r10.s64 = ctx.r7.s64 + 2;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// li r8,32
	ctx.r8.s64 = 32;
	// add r11,r6,r9
	ctx.r11.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r7,r7,256
	ctx.r7.s64 = ctx.r7.s64 + 256;
loc_82FC81CC:
	// addi r6,r10,-2
	ctx.r6.s64 = ctx.r10.s64 + -2;
	// lfs f11,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r6,r6,2,21,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x7FC;
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r5,r5,2,21,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x7FC;
	// lfs f8,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r31,r10,2,21,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x7FC;
	// lfs f7,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// lfs f6,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// addi r29,r10,2
	ctx.r29.s64 = ctx.r10.s64 + 2;
	// lfs f5,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r6,r30,2,21,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x7FC;
	// fmadds f3,f0,f4,f11
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f4.f64 + ctx.f11.f64));
	// stfs f3,-8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfsx f2,r5,r9
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f0,f2,f10
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f2.f64 + ctx.f10.f64));
	// stfs f1,-4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addi r5,r10,3
	ctx.r5.s64 = ctx.r10.s64 + 3;
	// lfsx f10,r31,r9
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r31,r29,2,21,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x7FC;
	// fmadds f9,f0,f10,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f9.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsx f31,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f31.f64 = double(temp.f32);
	// rlwinm r5,r5,2,21,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x7FC;
	// fmadds f8,f0,f31,f8
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f8.f64));
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r30,r10,5
	ctx.r30.s64 = ctx.r10.s64 + 5;
	// lfsx f30,r31,r9
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f7,f0,f30,f7
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f7.f64));
	// rlwinm r6,r6,2,21,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x7FC;
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfsx f29,r5,r9
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	ctx.f29.f64 = double(temp.f32);
	// rlwinm r5,r30,2,21,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x7FC;
	// fmadds f6,f0,f29,f6
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 + ctx.f6.f64));
	// stfs f6,12(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfsx f28,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f5,f0,f28,f5
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 + ctx.f5.f64));
	// lfs f11,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f4,f13,f3,f4
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f4.f64));
	// stfs f5,16(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fmadds f2,f13,f1,f2
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f2.f64));
	// lfsx f3,r5,r9
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f27,f0,f3,f11
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f11.f64));
	// fmadds f11,f13,f27,f3
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f27.f64 + ctx.f3.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmadds f1,f13,f9,f10
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f10.f64));
	// stfs f4,4(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmadds f12,f13,f8,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f31.f64));
	// stfs f12,16(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// fmadds f10,f13,f7,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f30.f64));
	// stfs f2,8(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmadds f9,f13,f6,f29
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f29.f64));
	// stfs f1,12(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// fmadds f8,f13,f5,f28
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f28.f64));
	// stfs f10,20(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f9,24(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stfs f8,28(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// stfs f27,20(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// bne 0x82fc81cc
	if (!ctx.cr0.eq) goto loc_82FC81CC;
	// clrlwi r11,r7,23
	ctx.r11.u64 = ctx.r7.u32 & 0x1FF;
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6b30
	ctx.lr = 0x82FC82F8;
	__restfpr_27(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC82FC"))) PPC_WEAK_FUNC(sub_82FC82FC);
PPC_FUNC_IMPL(__imp__sub_82FC82FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC8300"))) PPC_WEAK_FUNC(sub_82FC8300);
PPC_FUNC_IMPL(__imp__sub_82FC8300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FC8308;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6ae4
	ctx.lr = 0x82FC8310;
	__savefpr_27(ctx, base);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r3,24
	ctx.r9.s64 = ctx.r3.s64 + 24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r7,2
	ctx.r10.s64 = ctx.r7.s64 + 2;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,32
	ctx.r8.s64 = 32;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r7,r7,256
	ctx.r7.s64 = ctx.r7.s64 + 256;
loc_82FC8344:
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// lfs f11,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r6,r6,2,21,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x7FC;
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r31,r31,2,21,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x7FC;
	// lfs f8,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r30,r11,2,21,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7FC;
	// lfs f7,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// lfs f6,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// addi r28,r11,2
	ctx.r28.s64 = ctx.r11.s64 + 2;
	// lfs f5,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r6,r29,2,21,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x7FC;
	// fmadds f3,f0,f4,f11
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f4.f64 + ctx.f11.f64));
	// stfs f3,-8(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// lfsx f2,r31,r9
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f0,f2,f10
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f2.f64 + ctx.f10.f64));
	// stfs f1,-4(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// addi r31,r11,3
	ctx.r31.s64 = ctx.r11.s64 + 3;
	// lfsx f10,r30,r9
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r30,r28,2,21,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x7FC;
	// fmadds f9,f0,f10,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f9.f64));
	// stfs f9,0(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsx f31,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f31.f64 = double(temp.f32);
	// rlwinm r31,r31,2,21,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x7FC;
	// fmadds f8,f0,f31,f8
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f8.f64));
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// stfs f8,4(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r29,r11,5
	ctx.r29.s64 = ctx.r11.s64 + 5;
	// lfsx f30,r30,r9
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f7,f0,f30,f7
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f7.f64));
	// rlwinm r6,r6,2,21,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x7FC;
	// stfs f7,8(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfsx f29,r31,r9
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f29.f64 = double(temp.f32);
	// rlwinm r31,r29,2,21,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x7FC;
	// fmadds f6,f0,f29,f6
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 + ctx.f6.f64));
	// stfs f6,12(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfsx f28,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f5,f0,f28,f5
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 + ctx.f5.f64));
	// lfs f11,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f4,f13,f3,f4
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f4.f64));
	// stfs f5,16(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// fmadds f2,f13,f1,f2
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f2.f64));
	// lfsx f3,r31,r9
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f27,f0,f3,f11
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f11.f64));
	// fmadds f11,f13,f27,f3
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f27.f64 + ctx.f3.f64));
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmadds f1,f13,f9,f10
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f10.f64));
	// stfs f4,4(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fmadds f12,f13,f8,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f31.f64));
	// stfs f12,16(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// fmadds f10,f13,f7,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f30.f64));
	// stfs f2,8(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// fmadds f9,f13,f6,f29
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f29.f64));
	// stfs f1,12(r5)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// fmadds f8,f13,f5,f28
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f28.f64));
	// stfs f10,20(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// stfs f9,24(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stfs f8,28(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// stfs f27,20(r10)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r5,r5,32
	ctx.r5.s64 = ctx.r5.s64 + 32;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// bne 0x82fc8344
	if (!ctx.cr0.eq) goto loc_82FC8344;
	// clrlwi r11,r7,23
	ctx.r11.u64 = ctx.r7.u32 & 0x1FF;
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6b30
	ctx.lr = 0x82FC8474;
	__restfpr_27(ctx, base);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC8478"))) PPC_WEAK_FUNC(sub_82FC8478);
PPC_FUNC_IMPL(__imp__sub_82FC8478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82FC8480;
	__savegprlr_29(ctx, base);
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// subf r9,r11,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// li r11,256
	ctx.r11.s64 = 256;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r7,r7,256
	ctx.r7.s64 = ctx.r7.s64 + 256;
loc_82FC84C0:
	// rlwinm r30,r10,2,20,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFC;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r29,r9,2,20,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFC;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfsx f10,r30,r31
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// lfsx f9,r29,r31
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f13,0(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmuls f13,f9,f11
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x82fc84c0
	if (!ctx.cr0.eq) goto loc_82FC84C0;
	// clrlwi r11,r7,22
	ctx.r11.u64 = ctx.r7.u32 & 0x3FF;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC851C"))) PPC_WEAK_FUNC(sub_82FC851C);
PPC_FUNC_IMPL(__imp__sub_82FC851C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC8520"))) PPC_WEAK_FUNC(sub_82FC8520);
PPC_FUNC_IMPL(__imp__sub_82FC8520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r8,r3
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f1.f64));
	// stfs f1,16(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC8558"))) PPC_WEAK_FUNC(sub_82FC8558);
PPC_FUNC_IMPL(__imp__sub_82FC8558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 + 6;
	// lfs f11,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f10,r8,r3
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f0,f10,f1
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f1.f64));
	// stfs f11,28(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fmuls f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f9,24(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fmadds f1,f12,f9,f8
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f8.f64));
	// stfs f1,16(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC859C"))) PPC_WEAK_FUNC(sub_82FC859C);
PPC_FUNC_IMPL(__imp__sub_82FC859C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC85A0"))) PPC_WEAK_FUNC(sub_82FC85A0);
PPC_FUNC_IMPL(__imp__sub_82FC85A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r8,r3
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f1.f64));
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f11,20(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f1,f10,f11
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f1,4(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC85DC"))) PPC_WEAK_FUNC(sub_82FC85DC);
PPC_FUNC_IMPL(__imp__sub_82FC85DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC85E0"))) PPC_WEAK_FUNC(sub_82FC85E0);
PPC_FUNC_IMPL(__imp__sub_82FC85E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// subf r6,r8,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r8.s64;
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// subf r5,r7,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r7.s64;
	// clrlwi r10,r6,20
	ctx.r10.u64 = ctx.r6.u32 & 0xFFF;
	// clrlwi r9,r5,20
	ctx.r9.u64 = ctx.r5.u32 & 0xFFF;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// addi r10,r9,2
	ctx.r10.s64 = ctx.r9.s64 + 2;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f9,8(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f10,20(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r6,r11
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrlwi r4,r5,20
	ctx.r4.u64 = ctx.r5.u32 & 0xFFF;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// lfs f1,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC865C"))) PPC_WEAK_FUNC(sub_82FC865C);
PPC_FUNC_IMPL(__imp__sub_82FC865C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC8660"))) PPC_WEAK_FUNC(sub_82FC8660);
PPC_FUNC_IMPL(__imp__sub_82FC8660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r8,r3
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,20(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f1,16(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f1,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC8698"))) PPC_WEAK_FUNC(sub_82FC8698);
PPC_FUNC_IMPL(__imp__sub_82FC8698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// clrlwi r10,r7,21
	ctx.r10.u64 = ctx.r7.u32 & 0x7FF;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f12,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f1.f64));
	// stfsx f11,r5,r11
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r9,21
	ctx.r8.u64 = ctx.r9.u32 & 0x7FF;
	// fmadds f1,f13,f11,f12
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// stfs f1,12(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC86F0"))) PPC_WEAK_FUNC(sub_82FC86F0);
PPC_FUNC_IMPL(__imp__sub_82FC86F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// clrlwi r10,r7,21
	ctx.r10.u64 = ctx.r7.u32 & 0x7FF;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmadds f9,f13,f11,f1
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f1.f64));
	// stfsx f9,r5,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r9,21
	ctx.r8.u64 = ctx.r9.u32 & 0x7FF;
	// fmadds f1,f12,f1,f10
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f10.f64));
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stfs f1,16(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC8750"))) PPC_WEAK_FUNC(sub_82FC8750);
PPC_FUNC_IMPL(__imp__sub_82FC8750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// clrlwi r10,r7,22
	ctx.r10.u64 = ctx.r7.u32 & 0x3FF;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f12,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f1.f64));
	// stfsx f11,r5,r11
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r9,22
	ctx.r8.u64 = ctx.r9.u32 & 0x3FF;
	// fmadds f1,f13,f11,f12
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// stfs f1,12(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC87A8"))) PPC_WEAK_FUNC(sub_82FC87A8);
PPC_FUNC_IMPL(__imp__sub_82FC87A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lfs f11,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f10,r9,r3
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f10,f12,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f1,20(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f11,24(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmr f1,f9
	ctx.f1.f64 = ctx.f9.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC87E8"))) PPC_WEAK_FUNC(sub_82FC87E8);
PPC_FUNC_IMPL(__imp__sub_82FC87E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x82FC87F0;
	__savegprlr_19(ctx, base);
	// stfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,14068(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14068);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctidz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f11,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f11.u64);
	// lwz r9,-140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	// rlwinm r7,r9,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r7,256
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 256, ctx.xer);
	// bge cr6,0x82fc8c1c
	if (!ctx.cr6.lt) goto loc_82FC8C1C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// lfs f11,6140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,16232(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16232);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// blt cr6,0x82fc897c
	if (ctx.cr6.lt) goto loc_82FC897C;
	// lwz r25,12(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r27,r7,0,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r9,r25,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r25.s64;
	// subf r29,r28,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r28.s64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r9,2
	ctx.r6.s64 = ctx.r9.s64 + 2;
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// subf r25,r25,r28
	ctx.r25.s64 = ctx.r28.s64 - ctx.r25.s64;
	// addi r31,r29,2
	ctx.r31.s64 = ctx.r29.s64 + 2;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r30,r4,8
	ctx.r30.s64 = ctx.r4.s64 + 8;
	// addi r9,r5,12
	ctx.r9.s64 = ctx.r5.s64 + 12;
	// subf r26,r5,r4
	ctx.r26.s64 = ctx.r4.s64 - ctx.r5.s64;
	// rlwinm r28,r7,30,2,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_82FC8894:
	// fsubs f10,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// add r24,r29,r25
	ctx.r24.u64 = ctx.r29.u64 + ctx.r25.u64;
	// fadds f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// addi r23,r6,-1
	ctx.r23.s64 = ctx.r6.s64 + -1;
	// rlwinm r21,r29,2,22,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3FC;
	// lfs f8,-8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r24,r24,2,22,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3FC;
	// lfs f7,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r23,r23,2,22,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3FC;
	// lfs f6,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r22,r31,-1
	ctx.r22.s64 = ctx.r31.s64 + -1;
	// lfsx f5,r26,r9
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r9.u32);
	ctx.f5.f64 = double(temp.f32);
	// addi r20,r6,1
	ctx.r20.s64 = ctx.r6.s64 + 1;
	// lfsx f4,r21,r11
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r22,r22,2,22,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3FC;
	// lfsx f3,r24,r11
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// rlwinm r19,r6,2,22,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FC;
	// stfs f8,-8(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + -8, temp.u32);
	// rlwinm r21,r31,2,22,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3FC;
	// fsubs f2,f10,f0
	ctx.f2.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfsx f8,r23,r11
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// rlwinm r24,r20,2,22,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0x3FC;
	// fsubs f8,f2,f0
	ctx.f8.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// addi r23,r31,1
	ctx.r23.s64 = ctx.r31.s64 + 1;
	// fadds f1,f9,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfsx f13,r22,r11
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f7,-4(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lfsx f7,r19,r11
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f2,f7,f2
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// lfsx f30,r21,r11
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	ctx.f30.f64 = double(temp.f32);
	// fadds f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f6,0(r8)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmadds f4,f3,f12,f4
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f4.f64));
	// lfsx f7,r24,r11
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// rlwinm r24,r23,2,22,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3FC;
	// fmadds f2,f30,f1,f2
	ctx.f2.f64 = double(float(ctx.f30.f64 * ctx.f1.f64 + ctx.f2.f64));
	// fmadds f3,f13,f9,f10
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f10.f64));
	// stfs f4,-8(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + -8, temp.u32);
	// stfs f3,-4(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stfs f2,0(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// fsubs f12,f8,f0
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfsx f1,r24,r11
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f13,f1,f31,f6
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f31.f64 + ctx.f6.f64));
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fadds f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// stfs f5,4(r8)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bne 0x82fc8894
	if (!ctx.cr0.eq) goto loc_82FC8894;
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
loc_82FC897C:
	// cmplw cr6,r27,r7
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x82fc8a08
	if (ctx.cr6.gt) goto loc_82FC8A08;
	// rlwinm r6,r27,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r9,r27,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r27.s64;
	// lwz r27,12(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r29,r6,r4
	ctx.r29.u64 = ctx.r6.u64 + ctx.r4.u64;
	// lfs f12,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r30,r6,r5
	ctx.r30.u64 = ctx.r6.u64 + ctx.r5.u64;
	// subf r8,r28,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r28.s64;
	// addi r6,r29,-4
	ctx.r6.s64 = ctx.r29.s64 + -4;
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// subf r29,r27,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r27.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82FC89BC:
	// rlwinm r28,r8,2,22,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3FC;
	// lfs f10,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// add r27,r29,r8
	ctx.r27.u64 = ctx.r29.u64 + ctx.r8.u64;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r27,r27,2,22,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3FC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lfsx f9,r28,r11
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfsx f7,r27,r11
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// fmadds f6,f7,f12,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f8.f64));
	// stfs f6,0(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82fc89bc
	if (!ctx.cr0.eq) goto loc_82FC89BC;
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
loc_82FC8A08:
	// lwz r26,16(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82fc8a20
	if (ctx.cr6.eq) goto loc_82FC8A20;
	// fmr f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f11.f64;
	// b 0x82fc8a28
	goto loc_82FC8A28;
loc_82FC8A20:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f12,6048(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6048);
	ctx.f12.f64 = double(temp.f32);
loc_82FC8A28:
	// subfic r8,r7,256
	ctx.xer.ca = ctx.r7.u32 <= 256;
	ctx.r8.s64 = 256 - ctx.r7.s64;
	// stfs f12,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fsubs f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stw r26,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r26.u32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x82fc8b88
	if (ctx.cr6.lt) goto loc_82FC8B88;
	// subfic r9,r7,252
	ctx.xer.ca = ctx.r7.u32 <= 252;
	ctx.r9.s64 = 252 - ctx.r7.s64;
	// lwz r23,12(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r8,r7,3
	ctx.r8.s64 = ctx.r7.s64 + 3;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// addi r29,r9,1
	ctx.r29.s64 = ctx.r9.s64 + 1;
	// addi r31,r7,2
	ctx.r31.s64 = ctx.r7.s64 + 2;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r23,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r23.s64;
	// rlwinm r25,r6,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r29,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r28,r26,r10
	ctx.r28.s64 = ctx.r10.s64 - ctx.r26.s64;
	// rlwinm r24,r31,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r8,r4
	ctx.r30.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r6,r9,2
	ctx.r6.s64 = ctx.r9.s64 + 2;
	// add r8,r25,r11
	ctx.r8.u64 = ctx.r25.u64 + ctx.r11.u64;
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// addi r31,r28,2
	ctx.r31.s64 = ctx.r28.s64 + 2;
	// add r9,r24,r5
	ctx.r9.u64 = ctx.r24.u64 + ctx.r5.u64;
	// subf r25,r5,r4
	ctx.r25.s64 = ctx.r4.s64 - ctx.r5.s64;
	// subf r26,r23,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r23.s64;
	// add r27,r27,r7
	ctx.r27.u64 = ctx.r27.u64 + ctx.r7.u64;
loc_82FC8AA0:
	// add r7,r26,r28
	ctx.r7.u64 = ctx.r26.u64 + ctx.r28.u64;
	// lfs f10,-12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	ctx.f10.f64 = double(temp.f32);
	// addi r24,r31,-1
	ctx.r24.s64 = ctx.r31.s64 + -1;
	// lfs f9,-8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// addi r23,r6,-1
	ctx.r23.s64 = ctx.r6.s64 + -1;
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// rlwinm r7,r7,2,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FC;
	// fsubs f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// rlwinm r22,r28,2,22,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3FC;
	// lfsx f7,r25,r9
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r9.u32);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r23,r23,2,22,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3FC;
	// lfs f6,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// rlwinm r24,r24,2,22,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3FC;
	// addi r21,r31,1
	ctx.r21.s64 = ctx.r31.s64 + 1;
	// lfsx f4,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r7,r6,2,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FC;
	// lfsx f5,r22,r11
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r22,r31,2,22,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3FC;
	// stfs f10,-8(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + -8, temp.u32);
	// fmuls f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfsx f2,r23,r11
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r23,r21,2,22,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3FC;
	// lfsx f1,r24,r11
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// fadds f3,f11,f0
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f9,-4(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// fsubs f10,f8,f0
	ctx.f10.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfsx f31,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f31.f64 = double(temp.f32);
	// fadds f9,f3,f0
	ctx.f9.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// lfsx f5,r22,r11
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f1,f1,f11
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// stfs f7,0(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmuls f7,f5,f3
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// lfsx f11,r23,r11
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f30,f10,f0
	ctx.f30.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fmuls f5,f11,f9
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// addi r7,r6,1
	ctx.r7.s64 = ctx.r6.s64 + 1;
	// rlwinm r7,r7,2,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FC;
	// fmadds f3,f2,f8,f1
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f8.f64 + ctx.f1.f64));
	// fmadds f4,f4,f12,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f4,-4(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// fmadds f2,f31,f10,f7
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f10.f64 + ctx.f7.f64));
	// stfs f3,0(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f2,4(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fsubs f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// lfsx f1,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f13,f1,f30,f5
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f30.f64 + ctx.f5.f64));
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stfs f6,4(r8)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// fadds f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bne 0x82fc8aa0
	if (!ctx.cr0.eq) goto loc_82FC8AA0;
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
loc_82FC8B88:
	// cmplwi cr6,r27,256
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 256, ctx.xer);
	// bge cr6,0x82fc8c10
	if (!ctx.cr6.lt) goto loc_82FC8C10;
	// rlwinm r7,r27,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r29,12(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r7,r5
	ctx.r31.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lfs f12,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// subfic r9,r27,256
	ctx.xer.ca = ctx.r27.u32 <= 256;
	ctx.r9.s64 = 256 - ctx.r27.s64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// subf r8,r30,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r30.s64;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// subf r31,r29,r30
	ctx.r31.s64 = ctx.r30.s64 - ctx.r29.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82FC8BC4:
	// rlwinm r30,r8,2,22,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3FC;
	// lfs f11,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// add r29,r31,r8
	ctx.r29.u64 = ctx.r31.u64 + ctx.r8.u64;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r29,r29,2,22,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3FC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lfsx f10,r30,r11
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfsx f8,r29,r11
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fmadds f7,f8,f12,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f7,0(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x82fc8bc4
	if (!ctx.cr0.eq) goto loc_82FC8BC4;
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
loc_82FC8C10:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// b 0x82fc8cb4
	goto loc_82FC8CB4;
loc_82FC8C1C:
	// subf r11,r10,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r10.s64;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
	// subf r11,r31,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r31.s64;
	// subf r31,r30,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r30.s64;
	// lis r30,-32251
	ctx.r30.s64 = -2113601536;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,6140(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r3,32
	ctx.r6.s64 = ctx.r3.s64 + 32;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lfs f12,16232(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16232);
	ctx.f12.f64 = double(temp.f32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// li r9,256
	ctx.r9.s64 = 256;
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
loc_82FC8C68:
	// rlwinm r30,r11,2,22,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// lfs f11,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// add r29,r31,r11
	ctx.r29.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r29,r29,2,22,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfsx f10,r30,r6
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfsx f8,r29,r6
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r6.u32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// fmadds f7,f8,f0,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f7,0(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x82fc8c68
	if (!ctx.cr0.eq) goto loc_82FC8C68;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
loc_82FC8CB4:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// lfs f0,1024(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 1024);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lfd f30,-128(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC8CD0"))) PPC_WEAK_FUNC(sub_82FC8CD0);
PPC_FUNC_IMPL(__imp__sub_82FC8CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,4
	ctx.r3.s64 = 262144;
	// ori r3,r3,47792
	ctx.r3.u64 = ctx.r3.u64 | 47792;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC8CDC"))) PPC_WEAK_FUNC(sub_82FC8CDC);
PPC_FUNC_IMPL(__imp__sub_82FC8CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC8CE0"))) PPC_WEAK_FUNC(sub_82FC8CE0);
PPC_FUNC_IMPL(__imp__sub_82FC8CE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC8CE4"))) PPC_WEAK_FUNC(sub_82FC8CE4);
PPC_FUNC_IMPL(__imp__sub_82FC8CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC8CE8"))) PPC_WEAK_FUNC(sub_82FC8CE8);
PPC_FUNC_IMPL(__imp__sub_82FC8CE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC8CEC"))) PPC_WEAK_FUNC(sub_82FC8CEC);
PPC_FUNC_IMPL(__imp__sub_82FC8CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC8CF0"))) PPC_WEAK_FUNC(sub_82FC8CF0);
PPC_FUNC_IMPL(__imp__sub_82FC8CF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC8CF4"))) PPC_WEAK_FUNC(sub_82FC8CF4);
PPC_FUNC_IMPL(__imp__sub_82FC8CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC8CF8"))) PPC_WEAK_FUNC(sub_82FC8CF8);
PPC_FUNC_IMPL(__imp__sub_82FC8CF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC8CFC"))) PPC_WEAK_FUNC(sub_82FC8CFC);
PPC_FUNC_IMPL(__imp__sub_82FC8CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC8D00"))) PPC_WEAK_FUNC(sub_82FC8D00);
PPC_FUNC_IMPL(__imp__sub_82FC8D00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC8D04"))) PPC_WEAK_FUNC(sub_82FC8D04);
PPC_FUNC_IMPL(__imp__sub_82FC8D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC8D08"))) PPC_WEAK_FUNC(sub_82FC8D08);
PPC_FUNC_IMPL(__imp__sub_82FC8D08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC8D0C"))) PPC_WEAK_FUNC(sub_82FC8D0C);
PPC_FUNC_IMPL(__imp__sub_82FC8D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC8D10"))) PPC_WEAK_FUNC(sub_82FC8D10);
PPC_FUNC_IMPL(__imp__sub_82FC8D10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC8D14"))) PPC_WEAK_FUNC(sub_82FC8D14);
PPC_FUNC_IMPL(__imp__sub_82FC8D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC8D18"))) PPC_WEAK_FUNC(sub_82FC8D18);
PPC_FUNC_IMPL(__imp__sub_82FC8D18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

