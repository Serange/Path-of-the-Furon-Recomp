#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_826B12B0"))) PPC_WEAK_FUNC(sub_826B12B0);
PPC_FUNC_IMPL(__imp__sub_826B12B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x826B12B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x826b12d4
	if (!ctx.cr6.eq) goto loc_826B12D4;
	// li r9,1
	ctx.r9.s64 = 1;
loc_826B12D4:
	// lwz r11,704(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 704);
	// mulli r10,r30,68
	ctx.r10.s64 = ctx.r30.s64 * 68;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,56(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x826b12f4
	if (!ctx.cr6.eq) goto loc_826B12F4;
	// li r9,1
	ctx.r9.s64 = 1;
loc_826B12F4:
	// mulli r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 * 68;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r29,56(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bne cr6,0x826b1338
	if (!ctx.cr6.eq) goto loc_826B1338;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82294ac0
	ctx.lr = 0x826B1320;
	sub_82294AC0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r30,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r30.u32);
loc_826B1338:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B1340"))) PPC_WEAK_FUNC(sub_826B1340);
PPC_FUNC_IMPL(__imp__sub_826B1340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x826B1348;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82cb6abc
	ctx.lr = 0x826B1350;
	__savefpr_17(ctx, base);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82294ac0
	ctx.lr = 0x826B137C;
	sub_82294AC0(ctx, base);
	// lwz r6,704(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// lwz r9,752(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 752);
	// mulli r29,r22,68
	ctx.r29.s64 = ctx.r22.s64 * 68;
	// addi r8,r11,-17840
	ctx.r8.s64 = ctx.r11.s64 + -17840;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r11,124(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 124);
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r24,56(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// mulli r27,r24,68
	ctx.r27.s64 = ctx.r24.s64 * 68;
	// add r4,r27,r11
	ctx.r4.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwz r3,56(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// rlwinm r23,r3,6,0,25
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r23,r9
	ctx.r11.u64 = ctx.r23.u64 + ctx.r9.u64;
	// lfs f22,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f22.f64 = double(temp.f32);
	// lfs f21,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f21.f64 = double(temp.f32);
	// lfs f20,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f20.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826B13C8:
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// std r11,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// bdnz 0x826b13c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B13C8;
	// lwz r11,196(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	// li r19,32
	ctx.r19.s64 = 32;
	// li r20,48
	ctx.r20.s64 = 48;
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// li r21,16
	ctx.r21.s64 = 16;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826b1508
	if (ctx.cr6.eq) goto loc_826B1508;
	// lwz r11,752(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 752);
	// rlwinm r10,r24,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r9,r22,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// add r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bl 0x823829d8
	ctx.lr = 0x826B1414;
	sub_823829D8(ctx, base);
	// lvx128 v59,r0,r3
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v58,r3,r19
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r19.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lvx128 v57,r3,r20
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r20.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v56,v59,v58
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// lvx128 v55,r3,r21
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r21.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v54,v59,v58
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmrghw128 v53,v55,v57
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// lvx128 v63,r0,r31
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v52,v55,v57
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// lvx128 v62,r31,r21
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r21.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r31,r19
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r19.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// lvx128 v60,r31,r20
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r20.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// vmrghw128 v51,v56,v53
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// vmrghw128 v50,v54,v52
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v54.u32)));
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// vmrglw128 v49,v56,v53
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// vmrglw128 v48,v54,v52
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v54.u32)));
	// li r11,8
	ctx.r11.s64 = 8;
	// vmsum4fp128 v43,v62,v51
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v42,v62,v50
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v45,v63,v49
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v44,v63,v48
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v41,v62,v49
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v40,v62,v48
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v39,v61,v51
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v38,v61,v50
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v37,v61,v49
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v36,v61,v48
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v35,v60,v51
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v34,v60,v50
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v33,v60,v49
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v32,v60,v48
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v47,v63,v51
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v46,v63,v50
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmrghw128 v61,v43,v42
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// vmrghw128 v62,v45,v44
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v45.u32)));
	// vmrghw128 v60,v41,v40
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmrghw128 v58,v39,v38
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmrghw128 v57,v37,v36
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// vmrghw128 v56,v61,v60
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// vmrghw128 v55,v35,v34
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// vmrghw128 v54,v33,v32
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v32.u32), _mm_load_si128((__m128i*)ctx.v33.u32)));
	// vmrghw128 v53,v58,v57
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmrghw128 v63,v47,v46
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmrghw128 v52,v55,v54
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// stvx128 v56,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v59,v63,v62
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// stvx128 v53,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v52,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v59,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_826B14F4:
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x826b14f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B14F4;
loc_826B1508:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// ld r7,168(r28)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r28.u32 + 168);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r6,164(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 164);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825e8e78
	ctx.lr = 0x826B1520;
	sub_825E8E78(ctx, base);
	// lfs f0,156(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,160(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f9,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f6,152(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f3,f6,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// lfs f4,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// lfs f25,32428(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32428);
	ctx.f25.f64 = double(temp.f32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// fmuls f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f17,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f17.f64 = double(temp.f32);
	// fmuls f10,f7,f12
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// addi r25,r11,31796
	ctx.r25.s64 = ctx.r11.s64 + 31796;
	// fmuls f7,f1,f12
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// lfs f23,1296(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 1296);
	ctx.f23.f64 = double(temp.f32);
	// lfs f0,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f5,f4,f8,f13
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f8.f64 + ctx.f13.f64));
	// lfs f9,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f4,f2,f8,f10
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f8.f64 + ctx.f10.f64));
	// lfs f6,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f2,f9,f8,f7
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fmadds f0,f0,f3,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f5.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f13,f11,f3,f4
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f3.f64 + ctx.f4.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f12,f6,f3,f2
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f3.f64 + ctx.f2.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsubs f0,f0,f21
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f21.f64));
	// fsubs f13,f13,f20
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f20.f64));
	// fsubs f12,f12,f22
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f22.f64));
	// fmuls f1,f0,f0
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f11,f13,f13,f1
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fmadds f10,f12,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fsqrts f24,f10
	ctx.f24.f64 = double(float(sqrt(ctx.f10.f64)));
	// fcmpu cr6,f24,f25
	ctx.cr6.compare(ctx.f24.f64, ctx.f25.f64);
	// bge cr6,0x826b15fc
	if (!ctx.cr6.lt) goto loc_826B15FC;
	// stfs f23,128(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stfs f17,136(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfs f17,132(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmr f24,f25
	ctx.f24.f64 = ctx.f25.f64;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// b 0x826b1628
	goto loc_826B1628;
loc_826B15FC:
	// fdivs f11,f23,f24
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f23.f64 / ctx.f24.f64));
	// fmuls f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f10,136(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// fmuls f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f8,132(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
loc_826B1628:
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r7,188(r28)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r28.u32 + 188);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lbz r6,165(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 165);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x825e8e78
	ctx.lr = 0x826B1648;
	sub_825E8E78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826B1658:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x826b1658
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B1658;
	// lfs f0,180(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,184(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f6,176(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f3,f6,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// lfs f4,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f11,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f7,f12
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f9,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f1,f12
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// lfs f6,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f6.f64 = double(temp.f32);
	// lfs f28,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f26.f64 = double(temp.f32);
	// lfs f18,-18108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18108);
	ctx.f18.f64 = double(temp.f32);
	// fmadds f5,f4,f8,f13
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f8.f64 + ctx.f13.f64));
	// fmadds f4,f2,f8,f10
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f8.f64 + ctx.f10.f64));
	// fmadds f2,f9,f8,f7
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fmadds f1,f0,f3,f5
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f5.f64));
	// fmadds f0,f3,f11,f4
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f4.f64));
	// fmadds f13,f6,f3,f2
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f3.f64 + ctx.f2.f64));
	// fsubs f31,f1,f21
	ctx.f31.f64 = double(float(ctx.f1.f64 - ctx.f21.f64));
	// fsubs f30,f0,f20
	ctx.f30.f64 = double(float(ctx.f0.f64 - ctx.f20.f64));
	// fsubs f29,f13,f22
	ctx.f29.f64 = double(float(ctx.f13.f64 - ctx.f22.f64));
	// fmuls f12,f31,f31
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fmadds f11,f30,f30,f12
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f12.f64));
	// fmadds f10,f29,f29,f11
	ctx.f10.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f11.f64));
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// fcmpu cr6,f9,f25
	ctx.cr6.compare(ctx.f9.f64, ctx.f25.f64);
	// bge cr6,0x826b175c
	if (!ctx.cr6.lt) goto loc_826B175C;
	// stfs f23,132(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stfs f17,128(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stfs f17,96(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f17,100(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f23,104(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f17,136(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r6,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// b 0x826b1824
	goto loc_826B1824;
loc_826B175C:
	// fmuls f0,f29,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f26.f64));
	// fmuls f13,f28,f31
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// fmuls f12,f27,f30
	ctx.f12.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// fmsubs f11,f28,f30,f0
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f30.f64 - ctx.f0.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmsubs f0,f27,f29,f13
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f29.f64 - ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmsubs f10,f31,f26,f12
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f26.f64 - ctx.f12.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// fmuls f9,f11,f11
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// fmadds f8,f0,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmadds f7,f10,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fcmpu cr6,f6,f25
	ctx.cr6.compare(ctx.f6.f64, ctx.f25.f64);
	// bge cr6,0x826b17c4
	if (!ctx.cr6.lt) goto loc_826B17C4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823d29c0
	ctx.lr = 0x826B17C0;
	sub_823D29C0(ctx, base);
	// b 0x826b1824
	goto loc_826B1824;
loc_826B17C4:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f1,f18
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f18.f64;
	// bl 0x82382590
	ctx.lr = 0x826B17D0;
	sub_82382590(ctx, base);
	// fmuls f0,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f29.f64));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f18
	ctx.f1.f64 = ctx.f18.f64;
	// fmadds f13,f27,f31,f0
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f31.f64 + ctx.f0.f64));
	// fmadds f12,f30,f26,f13
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f26.f64 + ctx.f13.f64));
	// fmuls f10,f12,f26
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f26.f64));
	// fmuls f9,f27,f12
	ctx.f9.f64 = double(float(ctx.f27.f64 * ctx.f12.f64));
	// fmuls f11,f28,f12
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f12.f64));
	// fsubs f7,f30,f10
	ctx.f7.f64 = double(float(ctx.f30.f64 - ctx.f10.f64));
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f6,f31,f9
	ctx.f6.f64 = double(float(ctx.f31.f64 - ctx.f9.f64));
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fsubs f8,f29,f11
	ctx.f8.f64 = double(float(ctx.f29.f64 - ctx.f11.f64));
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x82382590
	ctx.lr = 0x826B1824;
	sub_82382590(ctx, base);
loc_826B1824:
	// lwz r11,704(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// lfs f25,-18324(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18324);
	ctx.f25.f64 = double(temp.f32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// add r11,r10,r29
	ctx.r11.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// addi r9,r10,28
	ctx.r9.s64 = ctx.r10.s64 + 28;
	// lfs f0,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f10,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f10,f10,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f5,f9,f9,f11
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f4,f8,f8,f6
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fmadds f3,f7,f7,f5
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fsqrts f0,f4
	ctx.f0.f64 = double(float(sqrt(ctx.f4.f64)));
	// fsqrts f31,f3
	ctx.f31.f64 = double(float(sqrt(ctx.f3.f64)));
	// fadds f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// fcmpu cr6,f24,f13
	ctx.cr6.compare(ctx.f24.f64, ctx.f13.f64);
	// ble cr6,0x826b1918
	if (!ctx.cr6.gt) goto loc_826B1918;
	// fmuls f10,f27,f31
	ctx.f10.f64 = double(float(ctx.f27.f64 * ctx.f31.f64));
	// fmuls f9,f26,f31
	ctx.f9.f64 = double(float(ctx.f26.f64 * ctx.f31.f64));
	// fmuls f11,f28,f13
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f13.f64));
	// fmuls f8,f26,f13
	ctx.f8.f64 = double(float(ctx.f26.f64 * ctx.f13.f64));
	// fmuls f0,f27,f13
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f13.f64));
	// fmuls f12,f28,f31
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// fadds f4,f10,f21
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f21.f64));
	// stfs f4,116(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f3,f9,f20
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f20.f64));
	// stfs f3,112(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// fadds f5,f11,f22
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f22.f64));
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// fadds f2,f8,f20
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f20.f64));
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f7,f0,f21
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f21.f64));
	// stfs f2,80(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f6,f12,f22
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f22.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// b 0x826b1ad8
	goto loc_826B1AD8;
loc_826B1918:
	// fmuls f30,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// fmuls f12,f31,f24
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f24.f64));
	// li r31,1
	ctx.r31.s64 = 1;
	// lfs f13,21152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21152);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f24,f24,f30
	ctx.f11.f64 = double(float(ctx.f24.f64 * ctx.f24.f64 + ctx.f30.f64));
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fnmsubs f9,f0,f0,f11
	ctx.f9.f64 = double(float(-(ctx.f0.f64 * ctx.f0.f64 - ctx.f11.f64)));
	// fdivs f1,f9,f10
	ctx.f1.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// fcmpu cr6,f1,f17
	ctx.cr6.compare(ctx.f1.f64, ctx.f17.f64);
	// blt cr6,0x826b1948
	if (ctx.cr6.lt) goto loc_826B1948;
	// li r31,0
	ctx.r31.s64 = 0;
loc_826B1948:
	// fcmpu cr6,f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f23.f64);
	// bgt cr6,0x826b19e0
	if (ctx.cr6.gt) goto loc_826B19E0;
	// fcmpu cr6,f1,f25
	ctx.cr6.compare(ctx.f1.f64, ctx.f25.f64);
	// blt cr6,0x826b19e0
	if (ctx.cr6.lt) goto loc_826B19E0;
	// bl 0x82382618
	ctx.lr = 0x826B195C;
	sub_82382618(ctx, base);
	// bl 0x82cb4860
	ctx.lr = 0x826B1960;
	sub_82CB4860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fnmsubs f13,f0,f0,f30
	ctx.f13.f64 = double(float(-(ctx.f0.f64 * ctx.f0.f64 - ctx.f30.f64)));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// beq cr6,0x826b197c
	if (ctx.cr6.eq) goto loc_826B197C;
	// fmuls f13,f13,f25
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f25.f64));
loc_826B197C:
	// fmuls f12,f26,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f26.f64 * ctx.f13.f64));
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f28,f13
	ctx.f10.f64 = double(float(ctx.f28.f64 * ctx.f13.f64));
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f5,f27,f13
	ctx.f5.f64 = double(float(ctx.f27.f64 * ctx.f13.f64));
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fadds f3,f12,f20
	ctx.f3.f64 = double(float(ctx.f12.f64 + ctx.f20.f64));
	// fadds f2,f10,f22
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f22.f64));
	// fadds f1,f5,f21
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f21.f64));
	// fadds f0,f3,f6
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f13,f8,f2
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fadds f12,f4,f1
	ctx.f12.f64 = double(float(ctx.f4.f64 + ctx.f1.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// b 0x826b1adc
	goto loc_826B1ADC;
loc_826B19E0:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x826b1a64
	if (!ctx.cr6.gt) goto loc_826B1A64;
	// fmuls f12,f28,f31
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// fmuls f8,f27,f31
	ctx.f8.f64 = double(float(ctx.f27.f64 * ctx.f31.f64));
	// fmuls f11,f27,f0
	ctx.f11.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// fmuls f9,f28,f0
	ctx.f9.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// fmuls f13,f26,f31
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f31.f64));
	// fmuls f10,f26,f0
	ctx.f10.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// fadds f7,f12,f22
	ctx.f7.f64 = double(float(ctx.f12.f64 + ctx.f22.f64));
	// stfs f7,120(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f6,f8,f21
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f21.f64));
	// stfs f6,116(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// fadds f0,f13,f20
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f20.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// fsubs f4,f7,f9
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f3,f6,f11
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fsubs f5,f0,f10
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// b 0x826b1adc
	goto loc_826B1ADC;
loc_826B1A64:
	// fmuls f9,f26,f31
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f26.f64 * ctx.f31.f64));
	// fmuls f11,f28,f31
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// fmuls f12,f27,f0
	ctx.f12.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// fmuls f10,f28,f0
	ctx.f10.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// fmuls f8,f26,f0
	ctx.f8.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// fmuls f13,f27,f31
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f31.f64));
	// fsubs f0,f20,f9
	ctx.f0.f64 = double(float(ctx.f20.f64 - ctx.f9.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fsubs f6,f22,f11
	ctx.f6.f64 = double(float(ctx.f22.f64 - ctx.f11.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// fsubs f7,f21,f13
	ctx.f7.f64 = double(float(ctx.f21.f64 - ctx.f13.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f4,f10,f6
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// stfs f4,152(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f3,f8,f0
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfs f3,144(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// fadds f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// stfs f5,148(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,152(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
loc_826B1AD8:
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_826B1ADC:
	// lwz r11,196(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// rlwinm r8,r11,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// beq cr6,0x826b1b2c
	if (ctx.cr6.eq) goto loc_826B1B2C;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f26,f0,f25
	ctx.f26.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f27,f13,f25
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f25.f64));
	// fmuls f28,f12,f25
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f25.f64));
	// stfs f28,80(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f26,84(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f27,88(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x826b1b38
	goto loc_826B1B38;
loc_826B1B2C:
	// lfs f27,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f26.f64 = double(temp.f32);
	// lfs f28,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f28.f64 = double(temp.f32);
loc_826B1B38:
	// lis r29,-31882
	ctx.r29.s64 = -2089418752;
	// lfs f24,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f24.f64 = double(temp.f32);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lfs f23,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f23.f64 = double(temp.f32);
	// lfs f19,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f19.f64 = double(temp.f32);
	// fsubs f0,f24,f22
	ctx.f0.f64 = double(float(ctx.f24.f64 - ctx.f22.f64));
	// addi r8,r11,17956
	ctx.r8.s64 = ctx.r11.s64 + 17956;
	// fsubs f13,f23,f21
	ctx.f13.f64 = double(float(ctx.f23.f64 - ctx.f21.f64));
	// fsubs f12,f19,f20
	ctx.f12.f64 = double(float(ctx.f19.f64 - ctx.f20.f64));
	// lwz r31,17920(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17920);
	// clrlwi r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b1b80
	if (!ctx.cr6.eq) goto loc_826B1B80;
	// ori r31,r31,1
	ctx.r31.u64 = ctx.r31.u64 | 1;
	// stfs f17,0(r8)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f17,4(r8)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f17,8(r8)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stw r31,17920(r29)
	PPC_STORE_U32(ctx.r29.u32 + 17920, ctx.r31.u32);
loc_826B1B80:
	// fmuls f11,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f2,-18352(r11)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18352);
	// fmadds f10,f12,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f9,f0,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fsqrt f8,f9
	ctx.f8.f64 = sqrt(ctx.f9.f64);
	// fdiv f7,f2,f8
	ctx.f7.f64 = ctx.f2.f64 / ctx.f8.f64;
	// fcmpu cr6,f9,f18
	ctx.cr6.compare(ctx.f9.f64, ctx.f18.f64);
	// frsp f11,f7
	ctx.f11.f64 = double(float(ctx.f7.f64));
	// ble cr6,0x826b1bc8
	if (!ctx.cr6.gt) goto loc_826B1BC8;
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// b 0x826b1bcc
	goto loc_826B1BCC;
loc_826B1BC8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_826B1BCC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,196(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r6,r10,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x826b1c1c
	if (ctx.cr6.eq) goto loc_826B1C1C;
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f13,f25
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f25.f64));
	// fmuls f13,f11,f25
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f25.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// b 0x826b1c24
	goto loc_826B1C24;
loc_826B1C1C:
	// lfs f13,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
loc_826B1C24:
	// lfs f29,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bne cr6,0x826b1c40
	if (!ctx.cr6.eq) goto loc_826B1C40;
	// fcmpu cr6,f12,f26
	ctx.cr6.compare(ctx.f12.f64, ctx.f26.f64);
	// bne cr6,0x826b1c40
	if (!ctx.cr6.eq) goto loc_826B1C40;
	// fcmpu cr6,f13,f27
	ctx.cr6.compare(ctx.f13.f64, ctx.f27.f64);
	// beq cr6,0x826b1ca0
	if (ctx.cr6.eq) goto loc_826B1CA0;
loc_826B1C40:
	// fmuls f13,f13,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fmadds f11,f0,f28,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 + ctx.f13.f64));
	// fmadds f10,f12,f26,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f26.f64 + ctx.f11.f64));
	// fcmpu cr6,f10,f29
	ctx.cr6.compare(ctx.f10.f64, ctx.f29.f64);
	// bge cr6,0x826b1ca0
	if (!ctx.cr6.lt) goto loc_826B1CA0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lbz r6,167(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 167);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lbz r4,166(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 166);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826adb48
	ctx.lr = 0x826B1C6C;
	sub_826ADB48(ctx, base);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stfs f20,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stfs f21,212(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stfs f22,216(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826B1C88:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x826b1c88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B1C88;
	// b 0x826b1cc8
	goto loc_826B1CC8;
loc_826B1CA0:
	// lwz r11,752(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 752);
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826B1CB4:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x826b1cb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B1CB4;
loc_826B1CC8:
	// clrlwi r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	// lfs f1,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f0,f1,f24
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f24.f64));
	// lfs f30,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f13,f31,f23
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f23.f64));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fsubs f12,f30,f19
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f19.f64));
	// bne cr6,0x826b1d00
	if (!ctx.cr6.eq) goto loc_826B1D00;
	// ori r11,r31,1
	ctx.r11.u64 = ctx.r31.u64 | 1;
	// stfs f17,0(r8)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f17,4(r8)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f17,8(r8)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stw r11,17920(r29)
	PPC_STORE_U32(ctx.r29.u32 + 17920, ctx.r11.u32);
loc_826B1D00:
	// fmuls f11,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f10,f12,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f9,f0,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fsqrt f8,f9
	ctx.f8.f64 = sqrt(ctx.f9.f64);
	// fdiv f7,f2,f8
	ctx.f7.f64 = ctx.f2.f64 / ctx.f8.f64;
	// fcmpu cr6,f9,f18
	ctx.cr6.compare(ctx.f9.f64, ctx.f18.f64);
	// frsp f11,f7
	ctx.f11.f64 = double(float(ctx.f7.f64));
	// ble cr6,0x826b1d40
	if (!ctx.cr6.gt) goto loc_826B1D40;
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// b 0x826b1d44
	goto loc_826B1D44;
loc_826B1D40:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_826B1D44:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,196(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r7,r10,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x826b1d94
	if (ctx.cr6.eq) goto loc_826B1D94;
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f25
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f25.f64));
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f0,f25
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// fmuls f0,f11,f25
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f25.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// b 0x826b1d9c
	goto loc_826B1D9C;
loc_826B1D94:
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
loc_826B1D9C:
	// fcmpu cr6,f12,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f28.f64);
	// bne cr6,0x826b1db4
	if (!ctx.cr6.eq) goto loc_826B1DB4;
	// fcmpu cr6,f13,f26
	ctx.cr6.compare(ctx.f13.f64, ctx.f26.f64);
	// bne cr6,0x826b1db4
	if (!ctx.cr6.eq) goto loc_826B1DB4;
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// beq cr6,0x826b1e18
	if (ctx.cr6.eq) goto loc_826B1E18;
loc_826B1DB4:
	// fmuls f0,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fmadds f12,f12,f28,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f28.f64 + ctx.f0.f64));
	// fmadds f11,f13,f26,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f26.f64 + ctx.f12.f64));
	// fcmpu cr6,f11,f29
	ctx.cr6.compare(ctx.f11.f64, ctx.f29.f64);
	// bge cr6,0x826b1e18
	if (!ctx.cr6.lt) goto loc_826B1E18;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lbz r6,167(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 167);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r4,166(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 166);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826adb48
	ctx.lr = 0x826B1DE0;
	sub_826ADB48(ctx, base);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stfs f19,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stfs f23,212(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// stfs f24,216(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826B1E00:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x826b1e00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B1E00;
	// b 0x826b1e48
	goto loc_826B1E48;
loc_826B1E18:
	// lwz r11,752(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 752);
	// rlwinm r10,r24,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r8,64
	ctx.r10.s64 = ctx.r8.s64 + 64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826B1E34:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x826b1e34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B1E34;
loc_826B1E48:
	// lwz r11,196(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826b1f68
	if (ctx.cr6.eq) goto loc_826B1F68;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// addi r11,r10,64
	ctx.r11.s64 = ctx.r10.s64 + 64;
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// lvx128 v63,r0,r9
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// lvx128 v62,r0,r8
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lvx128 v51,r11,r19
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r19.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lvx128 v50,r0,r11
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// lvx128 v49,r11,r20
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v48,v50,v51
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// lvx128 v47,r11,r21
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v46,v50,v51
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// vmrghw128 v45,v47,v49
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// lvx128 v61,r0,r7
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v44,v47,v49
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// lvx128 v60,r0,r6
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// vmrghw128 v43,v48,v45
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// li r9,8
	ctx.r9.s64 = 8;
	// vmrghw128 v42,v46,v44
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// vmrglw128 v41,v48,v45
	_mm_store_si128((__m128i*)ctx.v41.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// vmrglw128 v40,v46,v44
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// vmsum4fp128 v39,v63,v43
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v43.f32), 0xFF));
	// vmsum4fp128 v38,v63,v42
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v42.f32), 0xFF));
	// vmsum4fp128 v35,v62,v43
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v43.f32), 0xFF));
	// vmsum4fp128 v34,v62,v42
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v42.f32), 0xFF));
	// vmsum4fp128 v37,v63,v41
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v41.f32), 0xFF));
	// vmsum4fp128 v36,v63,v40
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// vmsum4fp128 v33,v62,v41
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v41.f32), 0xFF));
	// vmsum4fp128 v32,v62,v40
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// vmsum4fp128 v63,v61,v43
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v43.f32), 0xFF));
	// vmsum4fp128 v62,v61,v42
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v42.f32), 0xFF));
	// vmsum4fp128 v57,v60,v43
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v43.f32), 0xFF));
	// vmsum4fp128 v56,v60,v42
	_mm_store_ps(ctx.v56.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v42.f32), 0xFF));
	// vmsum4fp128 v59,v61,v41
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v41.f32), 0xFF));
	// vmsum4fp128 v58,v61,v40
	_mm_store_ps(ctx.v58.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// vmsum4fp128 v55,v60,v41
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v41.f32), 0xFF));
	// vmsum4fp128 v54,v60,v40
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// vmrghw128 v53,v39,v38
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmrghw128 v51,v35,v34
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// vmrghw128 v52,v37,v36
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// vmrghw128 v50,v33,v32
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v32.u32), _mm_load_si128((__m128i*)ctx.v33.u32)));
	// vmrghw128 v48,v63,v62
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// vmrghw128 v49,v53,v52
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// vmrghw128 v45,v57,v56
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmrghw128 v46,v51,v50
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// vmrghw128 v47,v59,v58
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmrghw128 v44,v55,v54
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// vmrghw128 v43,v48,v47
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// stvx128 v49,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v42,v45,v44
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v45.u32)));
	// stvx128 v46,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v43,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v42,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826B1F50:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x826b1f50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B1F50;
	// b 0x826b1f98
	goto loc_826B1F98;
loc_826B1F68:
	// lwz r11,752(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 752);
	// rlwinm r10,r22,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r8,128
	ctx.r10.s64 = ctx.r8.s64 + 128;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826B1F84:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x826b1f84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B1F84;
loc_826B1F98:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stfs f30,176(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// stfs f31,180(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 180, temp.u32);
	// stfs f1,184(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 184, temp.u32);
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82cb6b08
	ctx.lr = 0x826B1FB4;
	__restfpr_17(ctx, base);
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B1FB8"))) PPC_WEAK_FUNC(sub_826B1FB8);
PPC_FUNC_IMPL(__imp__sub_826B1FB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B1FC0"))) PPC_WEAK_FUNC(sub_826B1FC0);
PPC_FUNC_IMPL(__imp__sub_826B1FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x826B1FC8;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6ae4
	ctx.lr = 0x826B1FD0;
	__savefpr_27(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bne cr6,0x826b2118
	if (!ctx.cr6.eq) goto loc_826B2118;
	// ld r7,168(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 168);
	// lbz r6,164(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 164);
	// bl 0x825e8e78
	ctx.lr = 0x826B2000;
	sub_825E8E78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826B2010:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x826b2010
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B2010;
	// lfs f0,156(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f7,152(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f6.f64 = double(temp.f32);
	// lfs f2,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f4,f7,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f5,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f2,f12
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// lfs f6,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f10,f5,f12
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lfs f5,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f11,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f2,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// lfs f27,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f3,f3,f8,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 + ctx.f13.f64));
	// lfs f28,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f9,f9,f8,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// lfs f7,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f10,f1,f8,f10
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f8.f64 + ctx.f10.f64));
	// lfs f1,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f8,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f3,f0,f4,f3
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f4.f64 + ctx.f3.f64));
	// fmadds f12,f12,f4,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 + ctx.f9.f64));
	// fmadds f0,f6,f4,f10
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f4.f64 + ctx.f10.f64));
	// fmuls f9,f1,f3
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f3.f64));
	// fmuls f11,f11,f3
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// fmuls f10,f5,f3
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fmadds f4,f8,f0,f9
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmadds f6,f2,f0,f11
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f5,f31,f0,f10
	ctx.f5.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f1,f7,f12,f4
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmadds f3,f30,f12,f6
	ctx.f3.f64 = double(float(ctx.f30.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmadds f2,f29,f12,f5
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fadds f12,f1,f27
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f27.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fadds f0,f3,f28
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f28.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f13.f64));
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// b 0x826b2238
	goto loc_826B2238;
loc_826B2118:
	// ld r7,188(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 188);
	// lbz r6,165(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 165);
	// bl 0x825e8e78
	ctx.lr = 0x826B2124;
	sub_825E8E78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826B2134:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x826b2134
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B2134;
	// lfs f0,180(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,184(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f7,176(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f2,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f1.f64 = double(temp.f32);
	// lfs f6,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f5,f12
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// lfs f5,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f7,f2,f12
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// lfs f31,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f31.f64 = double(temp.f32);
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f28,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f28.f64 = double(temp.f32);
	// lfs f2,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// lfs f12,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f29,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f3,f3,f8,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 + ctx.f13.f64));
	// lfs f27,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f10,f1,f8,f10
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f8.f64 + ctx.f10.f64));
	// lfs f1,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f8,f6,f8,f7
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f8.f64 + ctx.f7.f64));
	// lfs f7,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f13,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f3,f0,f4,f3
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f4.f64 + ctx.f3.f64));
	// fmadds f0,f5,f4,f10
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f10.f64));
	// fmadds f10,f4,f31,f8
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f8.f64));
	// fmuls f8,f11,f3
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// fmuls f5,f9,f3
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmuls f4,f28,f3
	ctx.f4.f64 = double(float(ctx.f28.f64 * ctx.f3.f64));
	// fmadds f3,f2,f0,f8
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f2,f12,f0,f5
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fmadds f0,f7,f0,f4
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fmadds f12,f30,f10,f3
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f10.f64 + ctx.f3.f64));
	// fmadds f11,f29,f10,f2
	ctx.f11.f64 = double(float(ctx.f29.f64 * ctx.f10.f64 + ctx.f2.f64));
	// fmadds f10,f6,f10,f0
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fadds f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f8,f11,f1
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// fadds f7,f10,f27
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f27.f64));
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
loc_826B2238:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823829d8
	ctx.lr = 0x826B2248;
	sub_823829D8(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v63,r0,r31
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,48
	ctx.r9.s64 = 48;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lvx128 v62,r31,r10
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r31,r11
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v60,v63,v62
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// lvx128 v59,r31,r9
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v58,v63,v62
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// vmrghw128 v57,v61,v59
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// lvx128 v56,r8,r9
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v55,v61,v59
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// lvx128 v54,r0,r8
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v53,r8,r11
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r29,48
	ctx.r9.s64 = ctx.r29.s64 + 48;
	// lvx128 v52,r8,r10
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v51,v60,v57
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrghw128 v50,v58,v55
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmrglw128 v49,v60,v57
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrglw128 v48,v58,v55
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmsum4fp128 v47,v56,v51
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v46,v56,v50
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v45,v56,v49
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v44,v56,v48
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v43,v54,v51
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v42,v54,v50
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v41,v54,v49
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v40,v54,v48
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v39,v53,v51
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v38,v53,v50
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v37,v53,v49
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v36,v53,v48
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v35,v52,v51
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v34,v52,v50
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v33,v52,v49
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v32,v52,v48
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmrghw128 v63,v47,v46
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmrghw128 v62,v45,v44
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v45.u32)));
	// vmrghw128 v61,v43,v42
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// vmrghw128 v60,v41,v40
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmrghw128 v59,v63,v62
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// vmrghw128 v58,v39,v38
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmrghw128 v57,v37,v36
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// vmrghw128 v56,v61,v60
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// vmrghw128 v55,v35,v34
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// vmrghw128 v54,v33,v32
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v32.u32), _mm_load_si128((__m128i*)ctx.v33.u32)));
	// stvx128 v59,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v53,v58,v57
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// stfs f0,48(r29)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 48, temp.u32);
	// stfs f13,52(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 52, temp.u32);
	// stfs f12,56(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 56, temp.u32);
	// vmrghw128 v52,v55,v54
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// stvx128 v56,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v53,r29,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v52,r29,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6b30
	ctx.lr = 0x826B2344;
	__restfpr_27(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B2348"))) PPC_WEAK_FUNC(sub_826B2348);
PPC_FUNC_IMPL(__imp__sub_826B2348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x826b2388
	if (!ctx.cr6.eq) goto loc_826B2388;
	// lfs f13,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,152
	ctx.r11.s64 = ctx.r3.s64 + 152;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,152(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f8,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,156(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,160(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// blr 
	return;
loc_826B2388:
	// lfs f13,176(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,176
	ctx.r11.s64 = ctx.r3.s64 + 176;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,176(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// lfs f11,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,184(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f9,180(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,184(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B23BC"))) PPC_WEAK_FUNC(sub_826B23BC);
PPC_FUNC_IMPL(__imp__sub_826B23BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B23C0"))) PPC_WEAK_FUNC(sub_826B23C0);
PPC_FUNC_IMPL(__imp__sub_826B23C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x826B23C8;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82cb6ad8
	ctx.lr = 0x826B23D0;
	__savefpr_24(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r7,168(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 168);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lbz r6,164(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 164);
	// bl 0x825e8e78
	ctx.lr = 0x826B23FC;
	sub_825E8E78(ctx, base);
	// lfs f0,156(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lfs f9,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f5,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f5.f64 = double(temp.f32);
	// addi r31,r29,112
	ctx.r31.s64 = ctx.r29.s64 + 112;
	// lfs f7,152(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	ctx.f7.f64 = double(temp.f32);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lfs f6,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f3,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f4,f7,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f2,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f30,-32444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f10,f5,f12
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f7,f2,f8
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f8.f64));
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f0,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f13,f3,f8,f13
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 + ctx.f13.f64));
	// lfs f6,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f1,f1,f8,f10
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f8.f64 + ctx.f10.f64));
	// lfs f11,128(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f9,f9,f12,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f7.f64));
	// lfs f28,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f28.f64 = double(temp.f32);
	// lfs f2,136(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	ctx.f2.f64 = double(temp.f32);
	// lfs f5,132(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	ctx.f5.f64 = double(temp.f32);
	// lfs f29,144(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	ctx.f29.f64 = double(temp.f32);
	// lfs f27,148(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,152(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,112(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	ctx.f25.f64 = double(temp.f32);
	// lfs f3,116(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f0,f0,f4,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f4.f64 + ctx.f13.f64));
	// lfs f10,120(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f13,f6,f4,f1
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f4.f64 + ctx.f1.f64));
	// lfs f8,160(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f9,f28,f4,f9
	ctx.f9.f64 = double(float(ctx.f28.f64 * ctx.f4.f64 + ctx.f9.f64));
	// lfs f7,164(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,168(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmuls f6,f11,f0
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f4,f2,f0
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmadds f2,f29,f13,f6
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmadds f1,f27,f13,f5
	ctx.f1.f64 = double(float(ctx.f27.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f0,f26,f13,f4
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fmadds f13,f25,f9,f2
	ctx.f13.f64 = double(float(ctx.f25.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fmadds f11,f3,f9,f1
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fmadds f10,f10,f9,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fadds f9,f13,f8
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// stfs f9,144(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f8,f11,f7
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfs f8,148(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fadds f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f7,152(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826B252C:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x826b252c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B252C;
	// li r26,255
	ctx.r26.s64 = 255;
	// li r27,128
	ctx.r27.s64 = 128;
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stb r27,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r27.u8);
	// li r7,2
	ctx.r7.s64 = 2;
	// stb r27,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r27.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r26,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r26.u8);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfs f29,-10804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f29.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x8281fa48
	ctx.lr = 0x826B2578;
	sub_8281FA48(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r7,188(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 188);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbz r6,165(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 165);
	// bl 0x825e8e78
	ctx.lr = 0x826B2590;
	sub_825E8E78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826B25A0:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x826b25a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B25A0;
	// lfs f0,180(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lfs f13,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,184(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f10.f64 = double(temp.f32);
	// li r9,8
	ctx.r9.s64 = 8;
	// lfs f9,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f7,176(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f3,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f5,f12
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// lfs f5,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f7,f8,f2
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// lfs f2,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f2.f64 = double(temp.f32);
	// lfs f25,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f25.f64 = double(temp.f32);
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f27,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f27.f64 = double(temp.f32);
	// lfs f28,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f28.f64 = double(temp.f32);
	// lfs f26,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f26.f64 = double(temp.f32);
	// lfs f24,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f24.f64 = double(temp.f32);
	// fmadds f13,f3,f8,f13
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 + ctx.f13.f64));
	// lfs f3,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f1,f1,f8,f10
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f8.f64 + ctx.f10.f64));
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f8,f5,f12,f7
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f7.f64));
	// lfs f7,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// lfs f12,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f0,f0,f4,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f4.f64 + ctx.f13.f64));
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f13,f2,f4,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f4.f64 + ctx.f1.f64));
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmadds f8,f4,f25,f8
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f25.f64 + ctx.f8.f64));
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmuls f2,f9,f0
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f1,f6,f0
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f4,f11,f0
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f11,f27,f13,f2
	ctx.f11.f64 = double(float(ctx.f27.f64 * ctx.f13.f64 + ctx.f2.f64));
	// fmadds f9,f26,f13,f1
	ctx.f9.f64 = double(float(ctx.f26.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fmadds f0,f28,f13,f4
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fmadds f4,f3,f8,f11
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 + ctx.f11.f64));
	// fmadds f3,f10,f8,f9
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fmadds f6,f24,f8,f0
	ctx.f6.f64 = double(float(ctx.f24.f64 * ctx.f8.f64 + ctx.f0.f64));
	// fadds f1,f4,f5
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f1,148(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fadds f0,f3,f12
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f2,f6,f7
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// stfs f2,144(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826B26D0:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x826b26d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B26D0;
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// li r7,2
	ctx.r7.s64 = 2;
	// stb r26,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r26.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r27,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r27.u8);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stb r27,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r27.u8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x8281fa48
	ctx.lr = 0x826B270C;
	sub_8281FA48(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82cb6b24
	ctx.lr = 0x826B2718;
	__restfpr_24(ctx, base);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B271C"))) PPC_WEAK_FUNC(sub_826B271C);
PPC_FUNC_IMPL(__imp__sub_826B271C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B2720"))) PPC_WEAK_FUNC(sub_826B2720);
PPC_FUNC_IMPL(__imp__sub_826B2720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x826B2728;
	__savegprlr_20(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82cb6ac4
	ctx.lr = 0x826B2730;
	__savefpr_19(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mulli r11,r28,68
	ctx.r11.s64 = ctx.r28.s64 * 68;
	// lwz r10,704(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 704);
	// lfs f0,144(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,752(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 752);
	// lfs f13,132(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,136(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// lfs f11,128(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// fmr f31,f12
	ctx.f31.f64 = ctx.f12.f64;
	// lfs f10,116(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// lwz r10,124(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// lfs f9,120(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// fmr f30,f11
	ctx.f30.f64 = ctx.f11.f64;
	// lfs f8,112(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmr f29,f10
	ctx.f29.f64 = ctx.f10.f64;
	// fmr f28,f9
	ctx.f28.f64 = ctx.f9.f64;
	// lfs f7,148(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,152(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	ctx.f6.f64 = double(temp.f32);
	// fmr f27,f8
	ctx.f27.f64 = ctx.f8.f64;
	// fmr f26,f7
	ctx.f26.f64 = ctx.f7.f64;
	// rlwinm r11,r28,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 6) & 0xFFFFFFC0;
	// fmr f25,f6
	ctx.f25.f64 = ctx.f6.f64;
	// lfs f5,160(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	ctx.f5.f64 = double(temp.f32);
	// lwz r7,56(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f4,164(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	ctx.f4.f64 = double(temp.f32);
	// fmr f24,f5
	ctx.f24.f64 = ctx.f5.f64;
	// mulli r7,r7,68
	ctx.r7.s64 = ctx.r7.s64 * 68;
	// lfs f3,168(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	ctx.f3.f64 = double(temp.f32);
	// fmr f23,f4
	ctx.f23.f64 = ctx.f4.f64;
	// fmr f22,f3
	ctx.f22.f64 = ctx.f3.f64;
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lis r23,-31882
	ctx.r23.s64 = -2089418752;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// addi r31,r29,112
	ctx.r31.s64 = ctx.r29.s64 + 112;
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// lwz r3,56(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// lwz r8,17920(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 17920);
	// rlwinm r10,r3,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// clrlwi r4,r8,31
	ctx.r4.u64 = ctx.r8.u32 & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lfs f21,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f21.f64 = double(temp.f32);
	// lfs f20,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f20.f64 = double(temp.f32);
	// fmuls f0,f0,f21
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f21.f64));
	// fmuls f13,f13,f20
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f20.f64));
	// lfs f19,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f19.f64 = double(temp.f32);
	// fmuls f12,f12,f20
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f20.f64));
	// fmadds f11,f11,f20,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f20.f64 + ctx.f0.f64));
	// fmadds f10,f10,f19,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f19.f64 + ctx.f13.f64));
	// fmadds f9,f9,f19,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f19.f64 + ctx.f12.f64));
	// fmadds f8,f8,f19,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f19.f64 + ctx.f11.f64));
	// fmadds f7,f7,f21,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f21.f64 + ctx.f10.f64));
	// fmadds f6,f6,f21,f9
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f21.f64 + ctx.f9.f64));
	// fadds f5,f8,f5
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// stfs f5,152(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f4,f7,f4
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// stfs f4,156(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fadds f3,f6,f3
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f3.f64));
	// stfs f3,160(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f1,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmuls f10,f2,f0
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// fmuls f9,f31,f12
	ctx.f9.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// fmadds f8,f29,f13,f11
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f7,f30,f12,f10
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f6,f28,f13,f9
	ctx.f6.f64 = double(float(ctx.f28.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f2,f26,f0,f8
	ctx.f2.f64 = double(float(ctx.f26.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f1,f27,f13,f7
	ctx.f1.f64 = double(float(ctx.f27.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f0,f25,f0,f6
	ctx.f0.f64 = double(float(ctx.f25.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fadds f30,f2,f23
	ctx.f30.f64 = double(float(ctx.f2.f64 + ctx.f23.f64));
	// fadds f31,f1,f24
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f24.f64));
	// fadds f29,f0,f22
	ctx.f29.f64 = double(float(ctx.f0.f64 + ctx.f22.f64));
	// lfs f25,-15120(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -15120);
	ctx.f25.f64 = double(temp.f32);
	// fsubs f13,f30,f4
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f4.f64));
	// fsubs f0,f31,f5
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f5.f64));
	// addi r22,r11,17956
	ctx.r22.s64 = ctx.r11.s64 + 17956;
	// fsubs f12,f29,f3
	ctx.f12.f64 = double(float(ctx.f29.f64 - ctx.f3.f64));
	// bne cr6,0x826b28a4
	if (!ctx.cr6.eq) goto loc_826B28A4;
	// ori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 | 1;
	// stfs f25,0(r22)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r22.u32 + 0, temp.u32);
	// stfs f25,4(r22)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r22.u32 + 4, temp.u32);
	// stfs f25,8(r22)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r22.u32 + 8, temp.u32);
	// stw r11,17920(r23)
	PPC_STORE_U32(ctx.r23.u32 + 17920, ctx.r11.u32);
loc_826B28A4:
	// fmuls f11,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfd f23,-18352(r11)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18352);
	// lfs f24,-18108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18108);
	ctx.f24.f64 = double(temp.f32);
	// fmadds f10,f0,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f9,f12,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fsqrt f8,f9
	ctx.f8.f64 = sqrt(ctx.f9.f64);
	// fdiv f7,f23,f8
	ctx.f7.f64 = ctx.f23.f64 / ctx.f8.f64;
	// fcmpu cr6,f9,f24
	ctx.cr6.compare(ctx.f9.f64, ctx.f24.f64);
	// frsp f11,f7
	ctx.f11.f64 = double(float(ctx.f7.f64));
	// ble cr6,0x826b28f4
	if (!ctx.cr6.gt) goto loc_826B28F4;
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// b 0x826b28f8
	goto loc_826B28F8;
loc_826B28F4:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_826B28F8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,228(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f13,200(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r20,r11,-32444
	ctx.r20.s64 = ctx.r11.s64 + -32444;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lfs f26,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f26.f64 = double(temp.f32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lfs f27,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f27.f64 = double(temp.f32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lfs f28,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f28.f64 = double(temp.f32);
	// lwz r11,540(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 540);
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// lfs f0,-544(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + -544);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,168
	ctx.r6.s64 = ctx.r1.s64 + 168;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmuls f9,f28,f11
	ctx.f9.f64 = double(float(ctx.f28.f64 * ctx.f11.f64));
	// fmuls f10,f27,f11
	ctx.f10.f64 = double(float(ctx.f27.f64 * ctx.f11.f64));
	// fmuls f8,f26,f11
	ctx.f8.f64 = double(float(ctx.f26.f64 * ctx.f11.f64));
	// fadds f6,f29,f9
	ctx.f6.f64 = double(float(ctx.f29.f64 + ctx.f9.f64));
	// stfs f6,128(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f7,f30,f10
	ctx.f7.f64 = double(float(ctx.f30.f64 + ctx.f10.f64));
	// stfs f7,124(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fadds f5,f8,f31
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f31.f64));
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B2980;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x826b29c8
	if (ctx.cr6.eq) goto loc_826B29C8;
	// lfs f0,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// lfs f10,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f29
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f29.f64));
	// lfs f12,228(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,200(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// fadds f8,f0,f12
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fmuls f7,f27,f13
	ctx.f7.f64 = double(float(ctx.f27.f64 * ctx.f13.f64));
	// fmadds f6,f11,f26,f7
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f26.f64 + ctx.f7.f64));
	// fmadds f13,f28,f9,f6
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fcmpu cr6,f13,f8
	ctx.cr6.compare(ctx.f13.f64, ctx.f8.f64);
	// ble cr6,0x826b2cc0
	if (!ctx.cr6.gt) goto loc_826B2CC0;
	// li r21,0
	ctx.r21.s64 = 0;
loc_826B29C8:
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b2f94
	if (!ctx.cr6.eq) goto loc_826B2F94;
	// lfs f0,228(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f28,f0
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// fmuls f12,f26,f0
	ctx.f12.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// fmuls f11,f27,f0
	ctx.f11.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// fadds f10,f29,f13
	ctx.f10.f64 = double(float(ctx.f29.f64 + ctx.f13.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f9,f12,f31
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f8,f30,f11
	ctx.f8.f64 = double(float(ctx.f30.f64 + ctx.f11.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_826B2A0C:
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r9.u32);
	// stw r10,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r10.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stb r8,164(r30)
	PPC_STORE_U8(ctx.r30.u32 + 164, ctx.r8.u8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x826b1340
	ctx.lr = 0x826B2A40;
	sub_826B1340(ctx, base);
	// li r28,48
	ctx.r28.s64 = 48;
	// li r25,32
	ctx.r25.s64 = 32;
	// lvx128 v62,r0,r31
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r26,16
	ctx.r26.s64 = 16;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r7,r1,320
	ctx.r7.s64 = ctx.r1.s64 + 320;
	// addi r29,r11,128
	ctx.r29.s64 = ctx.r11.s64 + 128;
	// lvx128 v61,r31,r28
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v63,r31,r25
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r25.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v59,r31,r26
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v60,v62,v63
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// vmrglw128 v58,v62,v63
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// vmrghw128 v57,v59,v61
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// lvx128 v56,r29,r28
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32 + ctx.r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v55,v59,v61
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmrghw128 v54,v60,v57
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrghw128 v53,v58,v55
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmrglw128 v52,v60,v57
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrglw128 v51,v58,v55
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmsum4fp128 v50,v56,v54
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// vmsum4fp128 v49,v56,v53
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// vmsum4fp128 v48,v56,v52
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v47,v56,v51
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// lwz r27,220(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// rlwinm r6,r27,0,1,1
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// vmrghw128 v46,v50,v49
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// vmrghw128 v45,v48,v47
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// vmrghw128 v44,v46,v45
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// stvx128 v44,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x826b2f94
	if (ctx.cr6.eq) goto loc_826B2F94;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x826b2f94
	if (ctx.cr6.eq) goto loc_826B2F94;
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,324(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,320(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f0,0(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bge cr6,0x826b2f94
	if (!ctx.cr6.lt) goto loc_826B2F94;
	// addi r4,r30,208
	ctx.r4.s64 = ctx.r30.s64 + 208;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x823d7698
	ctx.lr = 0x826B2B10;
	sub_823D7698(ctx, base);
	// lvx128 v43,r0,r29
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v42,r29,r25
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32 + ctx.r25.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lvx128 v41,r29,r28
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32 + ctx.r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v40,v43,v42
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// lvx128 v39,r29,r26
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32 + ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v38,v43,v42
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// vmrghw128 v37,v39,v41
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v41.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// lvx128 v35,r0,r3
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v36,v39,v41
	_mm_store_si128((__m128i*)ctx.v36.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v41.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// lvx128 v34,r3,r26
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v32,r3,r25
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r25.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lvx128 v62,r3,r28
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// vmrghw128 v33,v40,v37
	_mm_store_si128((__m128i*)ctx.v33.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v37.u32), _mm_load_si128((__m128i*)ctx.v40.u32)));
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// vmrghw128 v63,v38,v36
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v38.u32)));
	// rlwinm r5,r27,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x1;
	// vmrglw128 v61,v40,v37
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v37.u32), _mm_load_si128((__m128i*)ctx.v40.u32)));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// vmrglw128 v60,v38,v36
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v38.u32)));
	// lbz r4,204(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 204);
	// vmsum4fp128 v59,v35,v33
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v33.f32), 0xFF));
	// vmsum4fp128 v55,v34,v33
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v33.f32), 0xFF));
	// vmsum4fp128 v51,v32,v33
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v33.f32), 0xFF));
	// vmsum4fp128 v58,v35,v63
	_mm_store_ps(ctx.v58.f32, _mm_dp_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vmsum4fp128 v57,v35,v61
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// vmsum4fp128 v56,v35,v60
	_mm_store_ps(ctx.v56.f32, _mm_dp_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v60.f32), 0xFF));
	// vmsum4fp128 v54,v34,v63
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vmsum4fp128 v53,v34,v61
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// vmsum4fp128 v52,v34,v60
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v60.f32), 0xFF));
	// vmsum4fp128 v50,v32,v63
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vmsum4fp128 v49,v32,v61
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// vmsum4fp128 v48,v32,v60
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v60.f32), 0xFF));
	// vmsum4fp128 v47,v62,v33
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v33.f32), 0xFF));
	// vmsum4fp128 v46,v62,v63
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vmsum4fp128 v45,v62,v61
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// vmsum4fp128 v44,v62,v60
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v60.f32), 0xFF));
	// vmrghw128 v43,v59,v58
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmrghw128 v42,v57,v56
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmrghw128 v41,v55,v54
	_mm_store_si128((__m128i*)ctx.v41.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// vmrghw128 v40,v53,v52
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// vmrghw128 v38,v51,v50
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// vmrghw128 v39,v43,v42
	_mm_store_si128((__m128i*)ctx.v39.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// vmrghw128 v37,v49,v48
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), _mm_load_si128((__m128i*)ctx.v49.u32)));
	// vmrghw128 v36,v41,v40
	_mm_store_si128((__m128i*)ctx.v36.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmrghw128 v35,v47,v46
	_mm_store_si128((__m128i*)ctx.v35.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmrghw128 v34,v45,v44
	_mm_store_si128((__m128i*)ctx.v34.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v45.u32)));
	// vmrghw128 v33,v38,v37
	_mm_store_si128((__m128i*)ctx.v33.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v37.u32), _mm_load_si128((__m128i*)ctx.v38.u32)));
	// stvx128 v39,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v32,v35,v34
	_mm_store_si128((__m128i*)ctx.v32.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// stvx128 v36,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v33,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v32,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x826ada90
	ctx.lr = 0x826B2BF0;
	sub_826ADA90(ctx, base);
	// lfs f0,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,17920(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 17920);
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f0,f8
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// lfs f12,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f11,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f4,f12,f9
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f5,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lfs f10,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f10.f64 = double(temp.f32);
	// lfs f3,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f3.f64 = double(temp.f32);
	// lfs f13,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f1,f11,f9,f6
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmadds f2,f10,f5,f7
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f5.f64 + ctx.f7.f64));
	// lfs f10,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f3,f5,f4
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fmadds f11,f13,f5,f1
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f1.f64));
	// fmadds f9,f12,f8,f2
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f2.f64));
	// lfs f7,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f8,f10,f8,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 + ctx.f0.f64));
	// lfs f6,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f0,f7,f25,f11
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f25.f64 + ctx.f11.f64));
	// fmadds f13,f6,f25,f9
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f25.f64 + ctx.f9.f64));
	// fmadds f12,f5,f25,f8
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f25.f64 + ctx.f8.f64));
	// bne cr6,0x826b2c80
	if (!ctx.cr6.eq) goto loc_826B2C80;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stfs f25,0(r22)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r22.u32 + 0, temp.u32);
	// stfs f25,4(r22)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r22.u32 + 4, temp.u32);
	// stfs f25,8(r22)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r22.u32 + 8, temp.u32);
	// stw r11,17920(r23)
	PPC_STORE_U32(ctx.r23.u32 + 17920, ctx.r11.u32);
loc_826B2C80:
	// fmuls f11,f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f10,f0,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f9,f13,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fsqrt f8,f9
	ctx.f8.f64 = sqrt(ctx.f9.f64);
	// fdiv f7,f23,f8
	ctx.f7.f64 = ctx.f23.f64 / ctx.f8.f64;
	// fcmpu cr6,f9,f24
	ctx.cr6.compare(ctx.f9.f64, ctx.f24.f64);
	// frsp f11,f7
	ctx.f11.f64 = double(float(ctx.f7.f64));
	// ble cr6,0x826b2d34
	if (!ctx.cr6.gt) goto loc_826B2D34;
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// b 0x826b2d38
	goto loc_826B2D38;
loc_826B2CC0:
	// lfs f11,224(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fneg f13,f11
	ctx.f13.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x826b2cdc
	if (!ctx.cr6.lt) goto loc_826B2CDC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x826b2ce8
	goto loc_826B2CE8;
loc_826B2CDC:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x826b2ce8
	if (ctx.cr6.lt) goto loc_826B2CE8;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_826B2CE8:
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826b2d00
	if (ctx.cr6.eq) goto loc_826B2D00;
	// fcmpu cr6,f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bge cr6,0x826b2f94
	if (!ctx.cr6.lt) goto loc_826B2F94;
loc_826B2D00:
	// fmuls f13,f27,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// fmuls f12,f26,f0
	ctx.f12.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// fmuls f11,f28,f0
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// fadds f10,f30,f13
	ctx.f10.f64 = double(float(ctx.f30.f64 + ctx.f13.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f9,f12,f31
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f8,f29,f11
	ctx.f8.f64 = double(float(ctx.f29.f64 + ctx.f11.f64));
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x826b2a0c
	goto loc_826B2A0C;
loc_826B2D34:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_826B2D38:
	// lfs f0,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f5,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f4,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lfs f3,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f2,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// fmadds f11,f6,f12,f10
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f10,f5,f12,f8
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmadds f9,f4,f0,f7
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmadds f8,f3,f13,f11
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f7,f2,f13,f10
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f6,f1,f12,f9
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x823d4580
	ctx.lr = 0x826B2DC0;
	sub_823D4580(ctx, base);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// lfs f5,232(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f5.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lfs f0,-17488(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -17488);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f5,f0
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// bl 0x8258c288
	ctx.lr = 0x826B2DE0;
	sub_8258C288(ctx, base);
	// fneg f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// lfs f1,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x826b2df8
	if (!ctx.cr6.lt) goto loc_826B2DF8;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// b 0x826b2e04
	goto loc_826B2E04;
loc_826B2DF8:
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x826b2e04
	if (ctx.cr6.lt) goto loc_826B2E04;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
loc_826B2E04:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x826b4048
	ctx.lr = 0x826B2E18;
	sub_826B4048(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// stfs f25,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f25,84(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f25,88(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// bl 0x823d7798
	ctx.lr = 0x826B2E5C;
	sub_823D7798(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// lvx128 v63,r0,r10
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// lfs f0,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// lfs f12,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// stfs f25,48(r11)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f25,52(r11)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f25,56(r11)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// lvx128 v62,r0,r9
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v59,r11,r25
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r25.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v58,v63,v62
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// lvx128 v56,r11,r28
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v57,v63,v62
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// lvx128 v52,r11,r26
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r8
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r0,r7
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v55,v61,v60
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// lvx128 v53,r0,r11
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v54,v61,v60
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// vmrghw128 v51,v58,v55
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmrglw128 v50,v58,v55
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmrghw128 v49,v57,v54
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmrglw128 v48,v57,v54
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmsum4fp128 v47,v53,v51
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v46,v53,v50
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v45,v53,v49
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v44,v53,v48
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v42,v59,v51
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v40,v59,v49
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v43,v52,v51
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v38,v59,v50
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v37,v59,v48
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v36,v52,v49
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v35,v52,v50
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v33,v52,v48
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v32,v56,v51
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v63,v56,v49
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v62,v56,v50
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v61,v56,v48
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmrghw128 v41,v47,v45
	_mm_store_si128((__m128i*)ctx.v41.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmrghw128 v39,v46,v44
	_mm_store_si128((__m128i*)ctx.v39.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// vmrghw128 v60,v42,v40
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v42.u32)));
	// vmrghw128 v34,v41,v39
	_mm_store_si128((__m128i*)ctx.v34.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v39.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmrghw128 v59,v38,v37
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v37.u32), _mm_load_si128((__m128i*)ctx.v38.u32)));
	// vmrghw128 v58,v43,v36
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// vmrghw128 v57,v35,v33
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// vmrghw128 v56,v32,v63
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), _mm_load_si128((__m128i*)ctx.v32.u32)));
	// stvx128 v34,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v55,v62,v61
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// vmrghw128 v54,v58,v57
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// li r9,8
	ctx.r9.s64 = 8;
	// vmrghw128 v53,v60,v59
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrghw128 v52,v56,v55
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// stvx128 v54,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v53,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v52,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826B2F70:
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x826b2f70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B2F70;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stfs f12,176(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// stfs f13,180(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 180, temp.u32);
	// stfs f0,184(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 184, temp.u32);
loc_826B2F94:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82cb6b10
	ctx.lr = 0x826B2FA0;
	__restfpr_19(ctx, base);
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B2FA4"))) PPC_WEAK_FUNC(sub_826B2FA4);
PPC_FUNC_IMPL(__imp__sub_826B2FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B2FA8"))) PPC_WEAK_FUNC(sub_826B2FA8);
PPC_FUNC_IMPL(__imp__sub_826B2FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,200(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// stfs f2,208(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// stfs f3,216(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B2FB8"))) PPC_WEAK_FUNC(sub_826B2FB8);
PPC_FUNC_IMPL(__imp__sub_826B2FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x826B2FC0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lfs f0,620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,616(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 616);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826b3004
	if (ctx.cr6.eq) goto loc_826B3004;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f13,344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
loc_826B3004:
	// lfs f13,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f11,204(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lwz r6,220(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r4,212(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 212);
	// addi r10,r10,-18304
	ctx.r10.s64 = ctx.r10.s64 + -18304;
	// lfs f0,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
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
	// or r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 | ctx.r7.u64;
	// lfsx f9,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsel f8,f9,f11,f12
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f11.f64 : ctx.f12.f64;
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// stw r8,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r8.u32);
	// bl 0x826ada90
	ctx.lr = 0x826B307C;
	sub_826ADA90(ctx, base);
	// rlwinm r5,r6,2,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x1;
	// lbz r4,213(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 213);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ada90
	ctx.lr = 0x826B308C;
	sub_826ADA90(ctx, base);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f6,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f6.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r5,r6,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lfs f31,-17488(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -17488);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f1,f6,f31
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// bl 0x826b4048
	ctx.lr = 0x826B30B0;
	sub_826B4048(ctx, base);
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lfs f5,216(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f5.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rldicr r5,r5,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fmuls f1,f5,f31
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// bl 0x826b4048
	ctx.lr = 0x826B30D0;
	sub_826B4048(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f4,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f3,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f2,12(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f1,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f4,f0
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f11,f13,f3
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f0,f3
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f13,f4
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fmadds f6,f13,f2,f12
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f2.f64 + ctx.f12.f64));
	// fmsubs f5,f1,f0,f11
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 - ctx.f11.f64));
	// fmadds f13,f1,f13,f9
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmsubs f12,f2,f0,f7
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 - ctx.f7.f64));
	// fmadds f11,f10,f3,f6
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f3.f64 + ctx.f6.f64));
	// fmadds f9,f8,f4,f5
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 + ctx.f5.f64));
	// fnmsubs f7,f4,f10,f13
	ctx.f7.f64 = double(float(-(ctx.f4.f64 * ctx.f10.f64 - ctx.f13.f64)));
	// fnmsubs f6,f1,f10,f12
	ctx.f6.f64 = double(float(-(ctx.f1.f64 * ctx.f10.f64 - ctx.f12.f64)));
	// fnmsubs f5,f8,f1,f11
	ctx.f5.f64 = double(float(-(ctx.f8.f64 * ctx.f1.f64 - ctx.f11.f64)));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f4,f2,f10,f9
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f10.f64 + ctx.f9.f64));
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f2,f8,f2,f7
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f2.f64 + ctx.f7.f64));
	// fnmsubs f1,f8,f3,f6
	ctx.f1.f64 = double(float(-(ctx.f8.f64 * ctx.f3.f64 - ctx.f6.f64)));
	// stfs f2,104(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f1,108(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r6,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r6.u32);
	// bl 0x823d3d28
	ctx.lr = 0x826B3178;
	sub_823D3D28(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// stw r10,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r10.u32);
	// stw r9,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r9.u32);
	// bl 0x826ae270
	ctx.lr = 0x826B31A4;
	sub_826AE270(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B31B0"))) PPC_WEAK_FUNC(sub_826B31B0);
PPC_FUNC_IMPL(__imp__sub_826B31B0) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x826ade98
	ctx.lr = 0x826B31D0;
	sub_826ADE98(ctx, base);
	// stfs f31,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B31EC"))) PPC_WEAK_FUNC(sub_826B31EC);
PPC_FUNC_IMPL(__imp__sub_826B31EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B31F0"))) PPC_WEAK_FUNC(sub_826B31F0);
PPC_FUNC_IMPL(__imp__sub_826B31F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x826B31F8;
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
	// lwz r4,152(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// blt cr6,0x826b32c0
	if (ctx.cr6.lt) goto loc_826B32C0;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294ac0
	ctx.lr = 0x826B322C;
	sub_82294AC0(ctx, base);
	// lwz r10,152(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r31,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r31.u32);
	// lwz r10,152(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x826b32c0
	if (!ctx.cr6.gt) goto loc_826B32C0;
loc_826B3250:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x826b3298
	if (ctx.cr6.eq) goto loc_826B3298;
	// lwz r9,704(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 704);
	// mulli r8,r31,68
	ctx.r8.s64 = ctx.r31.s64 * 68;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,124(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 124);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,56(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	// stwx r31,r4,r7
	PPC_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r31.u32);
	// lwz r10,152(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826b3250
	if (ctx.cr6.lt) goto loc_826B3250;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_826B3298:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826b32c0
	if (ctx.cr6.eq) goto loc_826B32C0;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294520
	ctx.lr = 0x826B32C0;
	sub_82294520(ctx, base);
loc_826B32C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B32C8"))) PPC_WEAK_FUNC(sub_826B32C8);
PPC_FUNC_IMPL(__imp__sub_826B32C8) {
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
	// lfs f11,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f10,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f9,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,24(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f8,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,32(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f7,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,36(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f6,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,40(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B3314"))) PPC_WEAK_FUNC(sub_826B3314);
PPC_FUNC_IMPL(__imp__sub_826B3314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B3318"))) PPC_WEAK_FUNC(sub_826B3318);
PPC_FUNC_IMPL(__imp__sub_826B3318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x826B3320;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6ae4
	ctx.lr = 0x826B3328;
	__savefpr_27(ctx, base);
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// blt cr6,0x826b3dbc
	if (ctx.cr6.lt) goto loc_826B3DBC;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82294ac0
	ctx.lr = 0x826B335C;
	sub_82294AC0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294ac0
	ctx.lr = 0x826B3384;
	sub_82294AC0(ctx, base);
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r24,96(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r9,r10,r24
	ctx.r9.u64 = ctx.r10.u64 + ctx.r24.u64;
	// stw r31,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r31.u32);
	// lwz r8,152(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x826b33e0
	if (!ctx.cr6.gt) goto loc_826B33E0;
loc_826B33A8:
	// lwz r9,704(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 704);
	// mulli r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 * 68;
	// lwz r8,152(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lwz r9,124(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 124);
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,56(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// stwx r31,r6,r24
	PPC_STORE_U32(ctx.r6.u32 + ctx.r24.u32, ctx.r31.u32);
	// lwz r5,152(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x826b33a8
	if (ctx.cr6.lt) goto loc_826B33A8;
loc_826B33E0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,72(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// li r28,1
	ctx.r28.s64 = 1;
	// lfs f31,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x826b33fc
	if (ctx.cr6.gt) goto loc_826B33FC;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_826B33FC:
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// li r23,48
	ctx.r23.s64 = 48;
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lwz r26,100(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x826b342c
	if (!ctx.cr6.eq) goto loc_826B342C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x826b3540
	if (ctx.cr6.eq) goto loc_826B3540;
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b3540
	if (!ctx.cr6.eq) goto loc_826B3540;
loc_826B342C:
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// addi r31,r30,176
	ctx.r31.s64 = ctx.r30.s64 + 176;
	// stw r29,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826b3454
	if (ctx.cr6.eq) goto loc_826B3454;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x826B3454;
	sub_82294520(ctx, base);
loc_826B3454:
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x826B346C;
	sub_82294AC0(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x826b3540
	if (!ctx.cr6.gt) goto loc_826B3540;
	// addi r8,r25,112
	ctx.r8.s64 = ctx.r25.s64 + 112;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r5,r8,32
	ctx.r5.s64 = ctx.r8.s64 + 32;
	// addi r4,r8,48
	ctx.r4.s64 = ctx.r8.s64 + 48;
	// addi r3,r8,16
	ctx.r3.s64 = ctx.r8.s64 + 16;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_826B3490:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lvx128 v63,r0,r5
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r8
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r7,752(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 752);
	// lvx128 v61,r0,r4
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r6,r6,6,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// lvx128 v60,r0,r3
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v59,v62,v63
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// vmrglw128 v58,v62,v63
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// vmrghw128 v57,v60,v61
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// addi r29,r1,288
	ctx.r29.s64 = ctx.r1.s64 + 288;
	// vmrglw128 v56,v60,v61
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// vmrghw128 v55,v59,v57
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// lvx128 v54,r7,r23
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v53,v58,v56
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// vmrglw128 v52,v59,v57
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// vmrglw128 v51,v58,v56
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmsum4fp128 v50,v54,v55
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v55.f32), 0xFF));
	// vmsum4fp128 v49,v54,v53
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// vmsum4fp128 v48,v54,v52
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v47,v54,v51
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmrghw128 v46,v50,v49
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// vmrghw128 v45,v48,v47
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// vmrghw128 v44,v46,v45
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// stvx128 v44,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,292(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,288(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r29,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r29.u32);
	// stw r7,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r7.u32);
	// stw r27,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r27.u32);
	// bne 0x826b3490
	if (!ctx.cr0.eq) goto loc_826B3490;
loc_826B3540:
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// li r9,8
	ctx.r9.s64 = 8;
	// rlwimi r11,r28,29,2,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 29) & 0x20000000) | (ctx.r11.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r11,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r11.u32);
	// lwz r11,752(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 752);
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r8,r8,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826B3568:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x826b3568
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B3568;
	// addi r29,r25,112
	ctx.r29.s64 = ctx.r25.s64 + 112;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r15,32
	ctx.r15.s64 = 32;
	// lwz r10,176(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// li r16,16
	ctx.r16.s64 = 16;
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// lvx128 v43,r0,r29
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v42,r29,r15
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32 + ctx.r15.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v41,r29,r23
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32 + ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v40,v43,v42
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// lvx128 v39,r29,r16
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32 + ctx.r16.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v38,v43,v42
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// vmrghw128 v37,v39,v41
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v41.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// lvx128 v36,r11,r23
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v35,v39,v41
	_mm_store_si128((__m128i*)ctx.v35.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v41.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmrghw128 v34,v40,v37
	_mm_store_si128((__m128i*)ctx.v34.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v37.u32), _mm_load_si128((__m128i*)ctx.v40.u32)));
	// vmrghw128 v33,v38,v35
	_mm_store_si128((__m128i*)ctx.v33.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v35.u32), _mm_load_si128((__m128i*)ctx.v38.u32)));
	// vmrglw128 v32,v40,v37
	_mm_store_si128((__m128i*)ctx.v32.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v37.u32), _mm_load_si128((__m128i*)ctx.v40.u32)));
	// vmrglw128 v63,v38,v35
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v35.u32), _mm_load_si128((__m128i*)ctx.v38.u32)));
	// vmsum4fp128 v62,v36,v34
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v34.f32), 0xFF));
	// vmsum4fp128 v61,v36,v33
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v33.f32), 0xFF));
	// vmsum4fp128 v60,v36,v32
	_mm_store_ps(ctx.v60.f32, _mm_dp_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v32.f32), 0xFF));
	// vmsum4fp128 v59,v36,v63
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vmrghw128 v58,v62,v61
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// vmrghw128 v57,v60,v59
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrghw128 v56,v58,v57
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// stvx128 v56,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,296(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,288(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// ble cr6,0x826b3d28
	if (!ctx.cr6.gt) goto loc_826B3D28;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r6,r10,-17840
	ctx.r6.s64 = ctx.r10.s64 + -17840;
	// lfs f28,-32444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f28.f64 = double(temp.f32);
	// addi r17,r26,-1
	ctx.r17.s64 = ctx.r26.s64 + -1;
	// lfs f29,-18108(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18108);
	ctx.f29.f64 = double(temp.f32);
	// lfd f30,-18352(r7)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r7.u32 + -18352);
	// addi r31,r25,304
	ctx.r31.s64 = ctx.r25.s64 + 304;
	// addi r21,r29,32
	ctx.r21.s64 = ctx.r29.s64 + 32;
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// addi r20,r29,48
	ctx.r20.s64 = ctx.r29.s64 + 48;
	// addi r19,r29,16
	ctx.r19.s64 = ctx.r29.s64 + 16;
	// li r28,64
	ctx.r28.s64 = 64;
	// li r27,12
	ctx.r27.s64 = 12;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// lis r26,-31882
	ctx.r26.s64 = -2089418752;
	// addi r18,r11,17956
	ctx.r18.s64 = ctx.r11.s64 + 17956;
loc_826B367C:
	// lvx128 v55,r0,r29
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,-4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + -4);
	// vor128 v53,v55,v55
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_load_si128((__m128i*)ctx.v55.u8));
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lvx128 v54,r0,r21
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r21.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,752(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 752);
	// lvx128 v52,r0,r20
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r20.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r9,r10,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// lvx128 v51,r0,r19
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r19.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r10,r8,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// lvx128 v50,r29,r15
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32 + ctx.r15.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v49,v53,v54
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// lvx128 v48,r29,r23
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32 + ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v47,v53,v54
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// lvx128 v46,r29,r16
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32 + ctx.r16.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v45,v51,v52
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// vmrghw128 v44,v55,v50
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// vmrglw128 v43,v55,v50
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// vmrglw128 v40,v51,v52
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// addi r7,r1,512
	ctx.r7.s64 = ctx.r1.s64 + 512;
	// vmrghw128 v42,v46,v48
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// addi r6,r1,576
	ctx.r6.s64 = ctx.r1.s64 + 576;
	// vmrglw128 v41,v46,v48
	_mm_store_si128((__m128i*)ctx.v41.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// lfs f13,172(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// vmrghw128 v39,v49,v45
	_mm_store_si128((__m128i*)ctx.v39.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v49.u32)));
	// lvx128 v38,r9,r23
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v37,v49,v45
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v49.u32)));
	// lvx128 v36,r11,r23
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v35,v44,v42
	_mm_store_si128((__m128i*)ctx.v35.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v44.u32)));
	// lwz r9,176(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// vmrghw128 v34,v43,v41
	_mm_store_si128((__m128i*)ctx.v34.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v41.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// lfs f0,164(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// vmrglw128 v33,v44,v42
	_mm_store_si128((__m128i*)ctx.v33.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v44.u32)));
	// vmsum4fp128 v32,v36,v39
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v39.f32), 0xFF));
	// vmrglw128 v63,v43,v41
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v41.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// vmsum4fp128 v62,v36,v37
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v37.f32), 0xFF));
	// vmrghw128 v61,v47,v40
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmsum4fp128 v60,v38,v35
	_mm_store_ps(ctx.v60.f32, _mm_dp_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v35.f32), 0xFF));
	// vmrglw128 v59,v47,v40
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmsum4fp128 v58,v38,v34
	_mm_store_ps(ctx.v58.f32, _mm_dp_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v34.f32), 0xFF));
	// vmsum4fp128 v57,v38,v33
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v33.f32), 0xFF));
	// add r11,r27,r9
	ctx.r11.u64 = ctx.r27.u64 + ctx.r9.u64;
	// vmsum4fp128 v56,v38,v63
	_mm_store_ps(ctx.v56.f32, _mm_dp_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// fmuls f0,f0,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// vmsum4fp128 v55,v36,v61
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// lwzx r5,r27,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r9.u32);
	// vmsum4fp128 v54,v36,v59
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v59.f32), 0xFF));
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,-12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r14,-4(r11)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lfs f6,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// vmrghw128 v53,v60,v58
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// stw r14,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r14.u32);
	// vmrghw128 v52,v57,v56
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmrghw128 v51,v32,v55
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v32.u32)));
	// vmrghw128 v50,v62,v54
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// vmrghw128 v49,v53,v52
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// vmrghw128 v48,v51,v50
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// stvx128 v49,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f7,516(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	ctx.f7.f64 = double(temp.f32);
	// stvx128 v48,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f5,580(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,520(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 520);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,584(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 584);
	ctx.f3.f64 = double(temp.f32);
	// lfs f12,512(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,576(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 576);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f10,f3,f4
	ctx.f10.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// fsubs f13,f5,f7
	ctx.f13.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// lfs f1,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// lfs f7,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// fadds f5,f13,f1
	ctx.f5.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// lfs f2,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f2.f64 = double(temp.f32);
	// fadds f4,f12,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// fadds f9,f10,f2
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// fsubs f7,f5,f8
	ctx.f7.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// fsubs f5,f4,f6
	ctx.f5.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// fsubs f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// bge cr6,0x826b37f0
	if (!ctx.cr6.lt) goto loc_826B37F0;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x826b37fc
	goto loc_826B37FC;
loc_826B37F0:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// blt cr6,0x826b37fc
	if (ctx.cr6.lt) goto loc_826B37FC;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
loc_826B37FC:
	// fmuls f5,f5,f0
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fadds f2,f5,f6
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// stfs f2,128(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// fadds f3,f9,f11
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f3,136(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// fadds f1,f4,f8
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// stfs f1,132(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r6,160(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// rlwinm r5,r6,0,1,1
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826b3904
	if (ctx.cr6.eq) goto loc_826B3904;
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r9,r11,-12
	ctx.r9.s64 = ctx.r11.s64 + -12;
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f0,f9,f8
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f12,f12,f13
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsubs f13,f7,f6
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f12,f4,f3
	ctx.f12.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fmuls f2,f0,f0
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f1,f10,f10,f5
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fmadds f9,f13,f13,f2
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f2.f64));
	// fsqrts f10,f1
	ctx.f10.f64 = double(float(sqrt(ctx.f1.f64)));
	// fmadds f8,f12,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fsqrts f9,f8
	ctx.f9.f64 = double(float(sqrt(ctx.f8.f64)));
	// fsubs f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fcmpu cr6,f7,f11
	ctx.cr6.compare(ctx.f7.f64, ctx.f11.f64);
	// ble cr6,0x826b3904
	if (!ctx.cr6.gt) goto loc_826B3904;
	// fdivs f9,f28,f9
	ctx.f9.f64 = double(float(ctx.f28.f64 / ctx.f9.f64));
	// lfs f6,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fadds f7,f11,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f5,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f8,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f3,f9,f12
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f2,f9,f0
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f4,f9,f13
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f0,f3,f7
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// fmuls f13,f2,f7
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// fmuls f1,f4,f7
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// fadds f11,f6,f0
	ctx.f11.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// stfs f11,152(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f10,f5,f13
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// stfs f10,148(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// fadds f12,f1,f8
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f8.f64));
	// lwz r7,148(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
loc_826B3904:
	// lwz r11,752(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 752);
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r8,0(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r28
	ctx.r10.u64 = ctx.r8.u64 + ctx.r28.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826B391C:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x826b391c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B391C;
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lfs f11,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lfs f9,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// lfs f8,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f12
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmuls f2,f4,f11
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lfs f1,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// lfs f27,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f6,f5,f13,f6
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmadds f3,f4,f9,f3
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fmadds f2,f7,f8,f2
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f2.f64));
	// fmadds f13,f4,f10,f6
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fmadds f10,f7,f0,f3
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f3.f64));
	// fmadds f9,f5,f11,f2
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fadds f8,f13,f1
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// stfs f8,56(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// fadds f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f7,52(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 52, temp.u32);
	// fadds f6,f9,f27
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f27.f64));
	// stfs f6,48(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// lwz r10,160(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// lbz r4,156(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r5,r10,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r11,r6,-64
	ctx.r11.s64 = ctx.r6.s64 + -64;
	// bl 0x826ada90
	ctx.lr = 0x826B39D8;
	sub_826ADA90(ctx, base);
	// lfs f5,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,-32(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -32);
	ctx.f3.f64 = double(temp.f32);
	// lwz r10,17920(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17920);
	// lfs f4,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f1,f3,f5
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// lfs f2,-44(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -44);
	ctx.f2.f64 = double(temp.f32);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// lfs f0,-40(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -40);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f2,f4
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// fmuls f12,f0,f4
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// lfs f10,-48(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f9,-60(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -60);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-56(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -56);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-16(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-28(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -28);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,-24(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -24);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f1,f10,f4,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f4.f64 + ctx.f1.f64));
	// lfs f2,-64(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -64);
	ctx.f2.f64 = double(temp.f32);
	// lfs f10,-12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -12);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f13.f64));
	// lfs f4,-8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -8);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f0,f8,f11,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f13,f7,f31,f1
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f1.f64));
	// fmadds f12,f6,f5,f9
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 + ctx.f9.f64));
	// fmadds f9,f3,f5,f0
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f5.f64 + ctx.f0.f64));
	// fmadds f0,f11,f2,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f2.f64 + ctx.f13.f64));
	// fmadds f13,f10,f31,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f12.f64));
	// fmadds f12,f4,f31,f9
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f9.f64));
	// bne cr6,0x826b3a68
	if (!ctx.cr6.eq) goto loc_826B3A68;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stfs f31,0(r18)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r18.u32 + 0, temp.u32);
	// stfs f31,4(r18)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r18.u32 + 4, temp.u32);
	// stfs f31,8(r18)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r18.u32 + 8, temp.u32);
	// stw r10,17920(r26)
	PPC_STORE_U32(ctx.r26.u32 + 17920, ctx.r10.u32);
loc_826B3A68:
	// fmuls f11,f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f10,f0,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f9,f13,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fsqrt f8,f9
	ctx.f8.f64 = sqrt(ctx.f9.f64);
	// fdiv f7,f30,f8
	ctx.f7.f64 = ctx.f30.f64 / ctx.f8.f64;
	// fcmpu cr6,f9,f29
	ctx.cr6.compare(ctx.f9.f64, ctx.f29.f64);
	// frsp f11,f7
	ctx.f11.f64 = double(float(ctx.f7.f64));
	// ble cr6,0x826b3aa8
	if (!ctx.cr6.gt) goto loc_826B3AA8;
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f12,232(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,228(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f9,224(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// b 0x826b3aac
	goto loc_826B3AAC;
loc_826B3AA8:
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
loc_826B3AAC:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r7,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// lfs f13,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stw r6,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r6.u32);
	// lfs f0,-16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stw r5,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r5.u32);
	// lfs f12,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f9,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f8,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f12,f8,f10
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// bne cr6,0x826b3b10
	if (!ctx.cr6.eq) goto loc_826B3B10;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// stfs f31,0(r18)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r18.u32 + 0, temp.u32);
	// stfs f31,4(r18)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r18.u32 + 4, temp.u32);
	// stfs f31,8(r18)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r18.u32 + 8, temp.u32);
	// stw r11,17920(r26)
	PPC_STORE_U32(ctx.r26.u32 + 17920, ctx.r11.u32);
loc_826B3B10:
	// fmuls f0,f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f10,f11,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f9,f13,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fsqrt f8,f9
	ctx.f8.f64 = sqrt(ctx.f9.f64);
	// fdiv f7,f30,f8
	ctx.f7.f64 = ctx.f30.f64 / ctx.f8.f64;
	// fcmpu cr6,f9,f29
	ctx.cr6.compare(ctx.f9.f64, ctx.f29.f64);
	// frsp f0,f7
	ctx.f0.f64 = double(float(ctx.f7.f64));
	// ble cr6,0x826b3b50
	if (!ctx.cr6.gt) goto loc_826B3B50;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,216(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f12,212(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f11,208(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// b 0x826b3b54
	goto loc_826B3B54;
loc_826B3B50:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_826B3B54:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// stw r8,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
	// bl 0x823d4580
	ctx.lr = 0x826B3B7C;
	sub_823D4580(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x823d7798
	ctx.lr = 0x826B3B8C;
	sub_823D7798(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826B3B9C:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x826b3b9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B3B9C;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// lvx128 v63,r0,r10
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// lfs f10,-32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// lfs f6,-24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	ctx.f6.f64 = double(temp.f32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stfs f10,336(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// addi r14,r1,400
	ctx.r14.s64 = ctx.r1.s64 + 400;
	// stfs f6,344(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// addic. r17,r17,-1
	ctx.xer.ca = ctx.r17.u32 > 0;
	ctx.r17.s64 = ctx.r17.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// lvx128 v62,r0,r9
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,384
	ctx.r9.s64 = ctx.r1.s64 + 384;
	// lfs f0,-64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	ctx.f0.f64 = double(temp.f32);
	// vmrghw128 v47,v63,v62
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// lfs f13,-60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -60);
	ctx.f13.f64 = double(temp.f32);
	// vmrglw128 v46,v63,v62
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// lfs f12,-56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -56);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,-64
	ctx.r10.s64 = ctx.r11.s64 + -64;
	// lfs f11,-44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -44);
	ctx.f11.f64 = double(temp.f32);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// lfs f9,-48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -48);
	ctx.f9.f64 = double(temp.f32);
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// lfs f8,-40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -40);
	ctx.f8.f64 = double(temp.f32);
	// addi r28,r28,64
	ctx.r28.s64 = ctx.r28.s64 + 64;
	// lfs f7,-28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f0,304(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// stfs f13,308(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// stfs f12,312(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// stfs f11,324(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stfs f9,320(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// stfs f8,328(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stfs f7,340(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// lvx128 v61,r0,r8
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r0,r7
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v45,v61,v60
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// lvx128 v63,r0,r6
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v44,v61,v60
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// lvx128 v62,r0,r5
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v43,v47,v45
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmrglw128 v42,v47,v45
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmrghw128 v41,v46,v44
	_mm_store_si128((__m128i*)ctx.v41.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// vmrglw128 v40,v46,v44
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// vmsum4fp128 v38,v63,v43
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v43.f32), 0xFF));
	// vmsum4fp128 v37,v63,v42
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v42.f32), 0xFF));
	// vmsum4fp128 v36,v63,v41
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v41.f32), 0xFF));
	// vmsum4fp128 v35,v63,v40
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// lvx128 v63,r0,r4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v39,v62,v43
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v43.f32), 0xFF));
	// vmsum4fp128 v34,v62,v41
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v41.f32), 0xFF));
	// vmsum4fp128 v33,v62,v42
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v42.f32), 0xFF));
	// vmsum4fp128 v32,v62,v40
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// vmsum4fp128 v62,v63,v43
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v43.f32), 0xFF));
	// vmsum4fp128 v61,v63,v41
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v41.f32), 0xFF));
	// vmrghw128 v60,v38,v36
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v38.u32)));
	// vmsum4fp128 v59,v63,v42
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v42.f32), 0xFF));
	// vmrghw128 v58,v37,v35
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v35.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// vmsum4fp128 v57,v63,v40
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// vmrghw128 v56,v39,v34
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmrghw128 v55,v33,v32
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v32.u32), _mm_load_si128((__m128i*)ctx.v33.u32)));
	// vmrghw128 v54,v60,v58
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrghw128 v53,v56,v55
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// stvx128 v54,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v53,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v52,v62,v61
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// vmrghw128 v51,v59,v57
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmrghw128 v50,v52,v51
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), _mm_load_si128((__m128i*)ctx.v52.u32)));
	// stvx128 v50,r0,r14
	_mm_store_si128((__m128i*)(base + ((ctx.r14.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f5,372(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,376(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,384(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,388(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,368(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,392(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,400(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,404(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,408(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	ctx.f11.f64 = double(temp.f32);
	// stfs f1,-64(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -64, temp.u32);
	// stfs f5,-60(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + -60, temp.u32);
	// stfs f4,-56(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + -56, temp.u32);
	// stfs f3,-48(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + -48, temp.u32);
	// stfs f2,-44(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + -44, temp.u32);
	// stfs f0,-40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -40, temp.u32);
	// stfs f13,-32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -32, temp.u32);
	// stfs f12,-28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -28, temp.u32);
	// stfs f11,-24(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + -24, temp.u32);
	// bne 0x826b367c
	if (!ctx.cr0.eq) goto loc_826B367C;
	// lwz r24,96(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_826B3D28:
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r11,-64
	ctx.r9.s64 = ctx.r11.s64 + -64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-64(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -64, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-60(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -60, temp.u32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-56(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -56, temp.u32);
	// lfs f11,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,-48(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + -48, temp.u32);
	// lfs f10,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,-44(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + -44, temp.u32);
	// lfs f9,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,-40(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + -40, temp.u32);
	// lfs f8,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,-32(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + -32, temp.u32);
	// lfs f7,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,-28(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + -28, temp.u32);
	// lfs f6,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,-24(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + -24, temp.u32);
	// bne cr6,0x826b3da8
	if (!ctx.cr6.eq) goto loc_826B3DA8;
	// bl 0x822900a0
	ctx.lr = 0x826B3DA4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_826B3DA8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B3DBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B3DBC:
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6b30
	ctx.lr = 0x826B3DC8;
	__restfpr_27(ctx, base);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B3DCC"))) PPC_WEAK_FUNC(sub_826B3DCC);
PPC_FUNC_IMPL(__imp__sub_826B3DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B3DD0"))) PPC_WEAK_FUNC(sub_826B3DD0);
PPC_FUNC_IMPL(__imp__sub_826B3DD0) {
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
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82294ac0
	ctx.lr = 0x826B3E00;
	sub_82294AC0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r3,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// add. r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826b3e30
	if (ctx.cr0.eq) goto loc_826B3E30;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826B3E1C:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x826b3e1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B3E1C;
loc_826B3E30:
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

__attribute__((alias("__imp__sub_826B3E50"))) PPC_WEAK_FUNC(sub_826B3E50);
PPC_FUNC_IMPL(__imp__sub_826B3E50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B3E54"))) PPC_WEAK_FUNC(sub_826B3E54);
PPC_FUNC_IMPL(__imp__sub_826B3E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B3E58"))) PPC_WEAK_FUNC(sub_826B3E58);
PPC_FUNC_IMPL(__imp__sub_826B3E58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B3E5C"))) PPC_WEAK_FUNC(sub_826B3E5C);
PPC_FUNC_IMPL(__imp__sub_826B3E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B3E60"))) PPC_WEAK_FUNC(sub_826B3E60);
PPC_FUNC_IMPL(__imp__sub_826B3E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// bl 0x82cb6ad0
	ctx.lr = 0x826B3E78;
	__savefpr_22(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lfs f10,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lfs f7,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lis r31,-32222
	ctx.r31.s64 = -2111700992;
	// lfs f6,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lis r30,-32233
	ctx.r30.s64 = -2112421888;
	// lfs f8,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,-10804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lfs f13,-18132(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18132);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f10,f0
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f12,32540(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32540);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f9,f13
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f11,-17120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -17120);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f3,f10,f12
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f2,f9,f11
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f1,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f30,f7,f0
	ctx.f30.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f10,21152(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 21152);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f31,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f9,f8,f0
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f29,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f28,f6,f0
	ctx.f28.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f27,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// lfs f25,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f26,f1,f13
	ctx.f26.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// lfs f22,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f8,f8,f10
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// lfs f23,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f23.f64 = double(temp.f32);
	// fadds f5,f4,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// lfs f4,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f24,f31,f13
	ctx.f24.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// fsubs f6,f2,f3
	ctx.f6.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// fmuls f3,f1,f11
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// stw r11,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r11.u32);
	// fmuls f2,f31,f11
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f11.f64));
	// lfs f1,-128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f11,f29,f13
	ctx.f11.f64 = double(float(ctx.f29.f64 * ctx.f13.f64));
	// fmuls f31,f27,f0
	ctx.f31.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// stw r10,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r10.u32);
	// fmuls f29,f27,f10
	ctx.f29.f64 = double(float(ctx.f27.f64 * ctx.f10.f64));
	// stw r9,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r9.u32);
	// fmuls f0,f25,f0
	ctx.f0.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// fmuls f10,f25,f10
	ctx.f10.f64 = double(float(ctx.f25.f64 * ctx.f10.f64));
	// fadds f9,f5,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// fadds f5,f26,f30
	ctx.f5.f64 = double(float(ctx.f26.f64 + ctx.f30.f64));
	// fsubs f8,f6,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// fsubs f3,f3,f7
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f7.f64));
	// fsubs f2,f2,f12
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f12.f64));
	// fadds f6,f24,f28
	ctx.f6.f64 = double(float(ctx.f24.f64 + ctx.f28.f64));
	// fmuls f7,f22,f13
	ctx.f7.f64 = double(float(ctx.f22.f64 * ctx.f13.f64));
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f12,f23,f23
	ctx.f12.f64 = double(float(ctx.f23.f64 * ctx.f23.f64));
	// fsubs f13,f9,f11
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fadds f9,f5,f31
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f31.f64));
	// fadds f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// fsubs f5,f3,f29
	ctx.f5.f64 = double(float(ctx.f3.f64 - ctx.f29.f64));
	// fsubs f3,f2,f10
	ctx.f3.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// fadds f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// fmuls f2,f13,f12
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fsubs f0,f9,f7
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// fmuls f13,f8,f23
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f23.f64));
	// fadds f10,f5,f7
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// fadds f9,f3,f4
	ctx.f9.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// fsubs f11,f6,f4
	ctx.f11.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// fmuls f8,f0,f12
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fadds f7,f2,f13
	ctx.f7.f64 = double(float(ctx.f2.f64 + ctx.f13.f64));
	// fmuls f5,f10,f23
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f23.f64));
	// fmuls f4,f9,f23
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f23.f64));
	// fmuls f6,f11,f12
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fadds f3,f7,f1
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// stfs f3,0(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f2,f8,f5
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// fadds f1,f6,f4
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// lfs f0,-124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -120);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f2
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// fadds f11,f13,f1
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82cb6b1c
	ctx.lr = 0x826B3FDC;
	__restfpr_22(ctx, base);
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

__attribute__((alias("__imp__sub_826B3FF0"))) PPC_WEAK_FUNC(sub_826B3FF0);
PPC_FUNC_IMPL(__imp__sub_826B3FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x826B3FF8;
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
	// ld r4,-20560(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -20560);
	// bl 0x8229e490
	ctx.lr = 0x826B401C;
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
	ctx.lr = 0x826B4038;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B4040"))) PPC_WEAK_FUNC(sub_826B4040);
PPC_FUNC_IMPL(__imp__sub_826B4040) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B4044"))) PPC_WEAK_FUNC(sub_826B4044);
PPC_FUNC_IMPL(__imp__sub_826B4044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B4048"))) PPC_WEAK_FUNC(sub_826B4048);
PPC_FUNC_IMPL(__imp__sub_826B4048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// lfs f0,-28844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cb4860
	ctx.lr = 0x826B4080;
	sub_82CB4860(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cb4940
	ctx.lr = 0x826B408C;
	sub_82CB4940(ctx, base);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f12,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f30
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f10,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f30
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fmuls f8,f10,f30
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f8,8(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B40D8"))) PPC_WEAK_FUNC(sub_826B40D8);
PPC_FUNC_IMPL(__imp__sub_826B40D8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B40E0"))) PPC_WEAK_FUNC(sub_826B40E0);
PPC_FUNC_IMPL(__imp__sub_826B40E0) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r10,r11,-21936
	ctx.r10.s64 = ctx.r11.s64 + -21936;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x826B4104;
	sub_8229C068(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-3136
	ctx.r8.s64 = ctx.r9.s64 + -3136;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x826B4118;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82383c00
	ctx.lr = 0x826B4120;
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

__attribute__((alias("__imp__sub_826B4134"))) PPC_WEAK_FUNC(sub_826B4134);
PPC_FUNC_IMPL(__imp__sub_826B4134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B4138"))) PPC_WEAK_FUNC(sub_826B4138);
PPC_FUNC_IMPL(__imp__sub_826B4138) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-21936
	ctx.r7.s64 = ctx.r9.s64 + -21936;
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

__attribute__((alias("__imp__sub_826B4168"))) PPC_WEAK_FUNC(sub_826B4168);
PPC_FUNC_IMPL(__imp__sub_826B4168) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-21936
	ctx.r7.s64 = ctx.r9.s64 + -21936;
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

__attribute__((alias("__imp__sub_826B4190"))) PPC_WEAK_FUNC(sub_826B4190);
PPC_FUNC_IMPL(__imp__sub_826B4190) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-21936
	ctx.r10.s64 = ctx.r11.s64 + -21936;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x826B41BC;
	sub_8229C068(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-3136
	ctx.r8.s64 = ctx.r9.s64 + -3136;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x826B41D0;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82383c00
	ctx.lr = 0x826B41D8;
	sub_82383C00(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x826b420c
	if (ctx.cr6.eq) goto loc_826B420C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826b4204
	if (ctx.cr6.lt) goto loc_826B4204;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x826b420c
	if (!ctx.cr6.gt) goto loc_826B420C;
loc_826B4204:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x826B420C;
	sub_82294A58(ctx, base);
loc_826B420C:
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

__attribute__((alias("__imp__sub_826B4228"))) PPC_WEAK_FUNC(sub_826B4228);
PPC_FUNC_IMPL(__imp__sub_826B4228) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B4230"))) PPC_WEAK_FUNC(sub_826B4230);
PPC_FUNC_IMPL(__imp__sub_826B4230) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r10,r11,-20936
	ctx.r10.s64 = ctx.r11.s64 + -20936;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x826B4254;
	sub_8229C068(ctx, base);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-21936
	ctx.r8.s64 = ctx.r9.s64 + -21936;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x826B4268;
	sub_8229C068(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,-3136
	ctx.r6.s64 = ctx.r7.s64 + -3136;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// bl 0x8229c068
	ctx.lr = 0x826B427C;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82383c00
	ctx.lr = 0x826B4284;
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

__attribute__((alias("__imp__sub_826B4298"))) PPC_WEAK_FUNC(sub_826B4298);
PPC_FUNC_IMPL(__imp__sub_826B4298) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-20936
	ctx.r7.s64 = ctx.r9.s64 + -20936;
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

__attribute__((alias("__imp__sub_826B42C8"))) PPC_WEAK_FUNC(sub_826B42C8);
PPC_FUNC_IMPL(__imp__sub_826B42C8) {
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
	// bl 0x826b4230
	ctx.lr = 0x826B42E8;
	sub_826B4230(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b431c
	if (ctx.cr6.eq) goto loc_826B431C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826b4314
	if (ctx.cr6.lt) goto loc_826B4314;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x826b431c
	if (!ctx.cr6.gt) goto loc_826B431C;
loc_826B4314:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x826B431C;
	sub_82294A58(ctx, base);
loc_826B431C:
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

__attribute__((alias("__imp__sub_826B4338"))) PPC_WEAK_FUNC(sub_826B4338);
PPC_FUNC_IMPL(__imp__sub_826B4338) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-20936
	ctx.r7.s64 = ctx.r9.s64 + -20936;
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

__attribute__((alias("__imp__sub_826B4360"))) PPC_WEAK_FUNC(sub_826B4360);
PPC_FUNC_IMPL(__imp__sub_826B4360) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B4368"))) PPC_WEAK_FUNC(sub_826B4368);
PPC_FUNC_IMPL(__imp__sub_826B4368) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r10,r11,-19936
	ctx.r10.s64 = ctx.r11.s64 + -19936;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x826B438C;
	sub_8229C068(ctx, base);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-21936
	ctx.r8.s64 = ctx.r9.s64 + -21936;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x826B43A0;
	sub_8229C068(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,-3136
	ctx.r6.s64 = ctx.r7.s64 + -3136;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// bl 0x8229c068
	ctx.lr = 0x826B43B4;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82383c00
	ctx.lr = 0x826B43BC;
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

__attribute__((alias("__imp__sub_826B43D0"))) PPC_WEAK_FUNC(sub_826B43D0);
PPC_FUNC_IMPL(__imp__sub_826B43D0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-19936
	ctx.r7.s64 = ctx.r9.s64 + -19936;
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

__attribute__((alias("__imp__sub_826B4400"))) PPC_WEAK_FUNC(sub_826B4400);
PPC_FUNC_IMPL(__imp__sub_826B4400) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-19936
	ctx.r7.s64 = ctx.r9.s64 + -19936;
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

__attribute__((alias("__imp__sub_826B4428"))) PPC_WEAK_FUNC(sub_826B4428);
PPC_FUNC_IMPL(__imp__sub_826B4428) {
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
	// bl 0x826b4368
	ctx.lr = 0x826B4448;
	sub_826B4368(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b447c
	if (ctx.cr6.eq) goto loc_826B447C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826b4474
	if (ctx.cr6.lt) goto loc_826B4474;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x826b447c
	if (!ctx.cr6.gt) goto loc_826B447C;
loc_826B4474:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x826B447C;
	sub_82294A58(ctx, base);
loc_826B447C:
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

__attribute__((alias("__imp__sub_826B4498"))) PPC_WEAK_FUNC(sub_826B4498);
PPC_FUNC_IMPL(__imp__sub_826B4498) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B44A0"))) PPC_WEAK_FUNC(sub_826B44A0);
PPC_FUNC_IMPL(__imp__sub_826B44A0) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r10,r11,-18936
	ctx.r10.s64 = ctx.r11.s64 + -18936;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x826B44C4;
	sub_8229C068(ctx, base);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-21936
	ctx.r8.s64 = ctx.r9.s64 + -21936;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x826B44D8;
	sub_8229C068(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,-3136
	ctx.r6.s64 = ctx.r7.s64 + -3136;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// bl 0x8229c068
	ctx.lr = 0x826B44EC;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82383c00
	ctx.lr = 0x826B44F4;
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

__attribute__((alias("__imp__sub_826B4508"))) PPC_WEAK_FUNC(sub_826B4508);
PPC_FUNC_IMPL(__imp__sub_826B4508) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-18936
	ctx.r7.s64 = ctx.r9.s64 + -18936;
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

__attribute__((alias("__imp__sub_826B4538"))) PPC_WEAK_FUNC(sub_826B4538);
PPC_FUNC_IMPL(__imp__sub_826B4538) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-18936
	ctx.r7.s64 = ctx.r9.s64 + -18936;
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

__attribute__((alias("__imp__sub_826B4560"))) PPC_WEAK_FUNC(sub_826B4560);
PPC_FUNC_IMPL(__imp__sub_826B4560) {
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
	// bl 0x826b44a0
	ctx.lr = 0x826B4580;
	sub_826B44A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b45b4
	if (ctx.cr6.eq) goto loc_826B45B4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826b45ac
	if (ctx.cr6.lt) goto loc_826B45AC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x826b45b4
	if (!ctx.cr6.gt) goto loc_826B45B4;
loc_826B45AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x826B45B4;
	sub_82294A58(ctx, base);
loc_826B45B4:
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

__attribute__((alias("__imp__sub_826B45D0"))) PPC_WEAK_FUNC(sub_826B45D0);
PPC_FUNC_IMPL(__imp__sub_826B45D0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B45D8"))) PPC_WEAK_FUNC(sub_826B45D8);
PPC_FUNC_IMPL(__imp__sub_826B45D8) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r10,r11,-17936
	ctx.r10.s64 = ctx.r11.s64 + -17936;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x826B45FC;
	sub_8229C068(ctx, base);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-21936
	ctx.r8.s64 = ctx.r9.s64 + -21936;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x826B4610;
	sub_8229C068(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,-3136
	ctx.r6.s64 = ctx.r7.s64 + -3136;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// bl 0x8229c068
	ctx.lr = 0x826B4624;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82383c00
	ctx.lr = 0x826B462C;
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

__attribute__((alias("__imp__sub_826B4640"))) PPC_WEAK_FUNC(sub_826B4640);
PPC_FUNC_IMPL(__imp__sub_826B4640) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-17936
	ctx.r7.s64 = ctx.r9.s64 + -17936;
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

__attribute__((alias("__imp__sub_826B4670"))) PPC_WEAK_FUNC(sub_826B4670);
PPC_FUNC_IMPL(__imp__sub_826B4670) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-17936
	ctx.r7.s64 = ctx.r9.s64 + -17936;
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

__attribute__((alias("__imp__sub_826B4698"))) PPC_WEAK_FUNC(sub_826B4698);
PPC_FUNC_IMPL(__imp__sub_826B4698) {
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
	// bl 0x826b45d8
	ctx.lr = 0x826B46B8;
	sub_826B45D8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b46ec
	if (ctx.cr6.eq) goto loc_826B46EC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826b46e4
	if (ctx.cr6.lt) goto loc_826B46E4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x826b46ec
	if (!ctx.cr6.gt) goto loc_826B46EC;
loc_826B46E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x826B46EC;
	sub_82294A58(ctx, base);
loc_826B46EC:
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

__attribute__((alias("__imp__sub_826B4708"))) PPC_WEAK_FUNC(sub_826B4708);
PPC_FUNC_IMPL(__imp__sub_826B4708) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B4710"))) PPC_WEAK_FUNC(sub_826B4710);
PPC_FUNC_IMPL(__imp__sub_826B4710) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r10,r11,-16936
	ctx.r10.s64 = ctx.r11.s64 + -16936;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x826B4734;
	sub_8229C068(ctx, base);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-21936
	ctx.r8.s64 = ctx.r9.s64 + -21936;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x826B4748;
	sub_8229C068(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,-3136
	ctx.r6.s64 = ctx.r7.s64 + -3136;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// bl 0x8229c068
	ctx.lr = 0x826B475C;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82383c00
	ctx.lr = 0x826B4764;
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

__attribute__((alias("__imp__sub_826B4778"))) PPC_WEAK_FUNC(sub_826B4778);
PPC_FUNC_IMPL(__imp__sub_826B4778) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-16936
	ctx.r7.s64 = ctx.r9.s64 + -16936;
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

__attribute__((alias("__imp__sub_826B47A8"))) PPC_WEAK_FUNC(sub_826B47A8);
PPC_FUNC_IMPL(__imp__sub_826B47A8) {
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
	// bl 0x826b4710
	ctx.lr = 0x826B47C8;
	sub_826B4710(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b47fc
	if (ctx.cr6.eq) goto loc_826B47FC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826b47f4
	if (ctx.cr6.lt) goto loc_826B47F4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x826b47fc
	if (!ctx.cr6.gt) goto loc_826B47FC;
loc_826B47F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x826B47FC;
	sub_82294A58(ctx, base);
loc_826B47FC:
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

__attribute__((alias("__imp__sub_826B4818"))) PPC_WEAK_FUNC(sub_826B4818);
PPC_FUNC_IMPL(__imp__sub_826B4818) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-16936
	ctx.r7.s64 = ctx.r9.s64 + -16936;
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

__attribute__((alias("__imp__sub_826B4840"))) PPC_WEAK_FUNC(sub_826B4840);
PPC_FUNC_IMPL(__imp__sub_826B4840) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B4848"))) PPC_WEAK_FUNC(sub_826B4848);
PPC_FUNC_IMPL(__imp__sub_826B4848) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r10,r11,-23904
	ctx.r10.s64 = ctx.r11.s64 + -23904;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x826B486C;
	sub_8229C068(ctx, base);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x823832f8
	ctx.lr = 0x826B4874;
	sub_823832F8(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,14264
	ctx.r8.s64 = ctx.r9.s64 + 14264;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x826B4888;
	sub_8229C068(ctx, base);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,-4512
	ctx.r6.s64 = ctx.r7.s64 + -4512;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// bl 0x8229c068
	ctx.lr = 0x826B489C;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229c628
	ctx.lr = 0x826B48A4;
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

__attribute__((alias("__imp__sub_826B48B8"))) PPC_WEAK_FUNC(sub_826B48B8);
PPC_FUNC_IMPL(__imp__sub_826B48B8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r8,r9,-23904
	ctx.r8.s64 = ctx.r9.s64 + -23904;
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

__attribute__((alias("__imp__sub_826B48E0"))) PPC_WEAK_FUNC(sub_826B48E0);
PPC_FUNC_IMPL(__imp__sub_826B48E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B48E8"))) PPC_WEAK_FUNC(sub_826B48E8);
PPC_FUNC_IMPL(__imp__sub_826B48E8) {
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
	// bl 0x826b4848
	ctx.lr = 0x826B4908;
	sub_826B4848(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b493c
	if (ctx.cr6.eq) goto loc_826B493C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826b4934
	if (ctx.cr6.lt) goto loc_826B4934;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x826b493c
	if (!ctx.cr6.gt) goto loc_826B493C;
loc_826B4934:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x826B493C;
	sub_82294A58(ctx, base);
loc_826B493C:
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

__attribute__((alias("__imp__sub_826B4958"))) PPC_WEAK_FUNC(sub_826B4958);
PPC_FUNC_IMPL(__imp__sub_826B4958) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r8,r9,-23904
	ctx.r8.s64 = ctx.r9.s64 + -23904;
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

__attribute__((alias("__imp__sub_826B4978"))) PPC_WEAK_FUNC(sub_826B4978);
PPC_FUNC_IMPL(__imp__sub_826B4978) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B4980"))) PPC_WEAK_FUNC(sub_826B4980);
PPC_FUNC_IMPL(__imp__sub_826B4980) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r10,r11,-22264
	ctx.r10.s64 = ctx.r11.s64 + -22264;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x826B49A4;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b4848
	ctx.lr = 0x826B49AC;
	sub_826B4848(ctx, base);
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

__attribute__((alias("__imp__sub_826B49C0"))) PPC_WEAK_FUNC(sub_826B49C0);
PPC_FUNC_IMPL(__imp__sub_826B49C0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r8,r9,-22264
	ctx.r8.s64 = ctx.r9.s64 + -22264;
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

__attribute__((alias("__imp__sub_826B49E8"))) PPC_WEAK_FUNC(sub_826B49E8);
PPC_FUNC_IMPL(__imp__sub_826B49E8) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-22264
	ctx.r10.s64 = ctx.r11.s64 + -22264;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x826B4A14;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b4848
	ctx.lr = 0x826B4A1C;
	sub_826B4848(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826b4a50
	if (ctx.cr6.eq) goto loc_826B4A50;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826b4a48
	if (ctx.cr6.lt) goto loc_826B4A48;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x826b4a50
	if (!ctx.cr6.gt) goto loc_826B4A50;
loc_826B4A48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x826B4A50;
	sub_82294A58(ctx, base);
loc_826B4A50:
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

__attribute__((alias("__imp__sub_826B4A6C"))) PPC_WEAK_FUNC(sub_826B4A6C);
PPC_FUNC_IMPL(__imp__sub_826B4A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B4A70"))) PPC_WEAK_FUNC(sub_826B4A70);
PPC_FUNC_IMPL(__imp__sub_826B4A70) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r8,r9,-22264
	ctx.r8.s64 = ctx.r9.s64 + -22264;
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

__attribute__((alias("__imp__sub_826B4A90"))) PPC_WEAK_FUNC(sub_826B4A90);
PPC_FUNC_IMPL(__imp__sub_826B4A90) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B4A98"))) PPC_WEAK_FUNC(sub_826B4A98);
PPC_FUNC_IMPL(__imp__sub_826B4A98) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r10,r11,-23576
	ctx.r10.s64 = ctx.r11.s64 + -23576;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x826B4ABC;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b4848
	ctx.lr = 0x826B4AC4;
	sub_826B4848(ctx, base);
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

__attribute__((alias("__imp__sub_826B4AD8"))) PPC_WEAK_FUNC(sub_826B4AD8);
PPC_FUNC_IMPL(__imp__sub_826B4AD8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r8,r9,-23576
	ctx.r8.s64 = ctx.r9.s64 + -23576;
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

__attribute__((alias("__imp__sub_826B4B00"))) PPC_WEAK_FUNC(sub_826B4B00);
PPC_FUNC_IMPL(__imp__sub_826B4B00) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-23576
	ctx.r10.s64 = ctx.r11.s64 + -23576;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x826B4B2C;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b4848
	ctx.lr = 0x826B4B34;
	sub_826B4848(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826b4b68
	if (ctx.cr6.eq) goto loc_826B4B68;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826b4b60
	if (ctx.cr6.lt) goto loc_826B4B60;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x826b4b68
	if (!ctx.cr6.gt) goto loc_826B4B68;
loc_826B4B60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x826B4B68;
	sub_82294A58(ctx, base);
loc_826B4B68:
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

__attribute__((alias("__imp__sub_826B4B84"))) PPC_WEAK_FUNC(sub_826B4B84);
PPC_FUNC_IMPL(__imp__sub_826B4B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B4B88"))) PPC_WEAK_FUNC(sub_826B4B88);
PPC_FUNC_IMPL(__imp__sub_826B4B88) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r8,r9,-23576
	ctx.r8.s64 = ctx.r9.s64 + -23576;
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

__attribute__((alias("__imp__sub_826B4BA8"))) PPC_WEAK_FUNC(sub_826B4BA8);
PPC_FUNC_IMPL(__imp__sub_826B4BA8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B4BB0"))) PPC_WEAK_FUNC(sub_826B4BB0);
PPC_FUNC_IMPL(__imp__sub_826B4BB0) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r10,r11,-23248
	ctx.r10.s64 = ctx.r11.s64 + -23248;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x826B4BD4;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b4848
	ctx.lr = 0x826B4BDC;
	sub_826B4848(ctx, base);
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

__attribute__((alias("__imp__sub_826B4BF0"))) PPC_WEAK_FUNC(sub_826B4BF0);
PPC_FUNC_IMPL(__imp__sub_826B4BF0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r8,r9,-23248
	ctx.r8.s64 = ctx.r9.s64 + -23248;
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

__attribute__((alias("__imp__sub_826B4C18"))) PPC_WEAK_FUNC(sub_826B4C18);
PPC_FUNC_IMPL(__imp__sub_826B4C18) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-23248
	ctx.r10.s64 = ctx.r11.s64 + -23248;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x826B4C44;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b4848
	ctx.lr = 0x826B4C4C;
	sub_826B4848(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826b4c80
	if (ctx.cr6.eq) goto loc_826B4C80;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826b4c78
	if (ctx.cr6.lt) goto loc_826B4C78;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x826b4c80
	if (!ctx.cr6.gt) goto loc_826B4C80;
loc_826B4C78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x826B4C80;
	sub_82294A58(ctx, base);
loc_826B4C80:
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

__attribute__((alias("__imp__sub_826B4C9C"))) PPC_WEAK_FUNC(sub_826B4C9C);
PPC_FUNC_IMPL(__imp__sub_826B4C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B4CA0"))) PPC_WEAK_FUNC(sub_826B4CA0);
PPC_FUNC_IMPL(__imp__sub_826B4CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r8,r9,-23248
	ctx.r8.s64 = ctx.r9.s64 + -23248;
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

__attribute__((alias("__imp__sub_826B4CC0"))) PPC_WEAK_FUNC(sub_826B4CC0);
PPC_FUNC_IMPL(__imp__sub_826B4CC0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B4CC8"))) PPC_WEAK_FUNC(sub_826B4CC8);
PPC_FUNC_IMPL(__imp__sub_826B4CC8) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r10,r11,-22920
	ctx.r10.s64 = ctx.r11.s64 + -22920;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x826B4CEC;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b4848
	ctx.lr = 0x826B4CF4;
	sub_826B4848(ctx, base);
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

__attribute__((alias("__imp__sub_826B4D08"))) PPC_WEAK_FUNC(sub_826B4D08);
PPC_FUNC_IMPL(__imp__sub_826B4D08) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r8,r9,-22920
	ctx.r8.s64 = ctx.r9.s64 + -22920;
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

__attribute__((alias("__imp__sub_826B4D30"))) PPC_WEAK_FUNC(sub_826B4D30);
PPC_FUNC_IMPL(__imp__sub_826B4D30) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-22920
	ctx.r10.s64 = ctx.r11.s64 + -22920;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x826B4D5C;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b4848
	ctx.lr = 0x826B4D64;
	sub_826B4848(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826b4d98
	if (ctx.cr6.eq) goto loc_826B4D98;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826b4d90
	if (ctx.cr6.lt) goto loc_826B4D90;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x826b4d98
	if (!ctx.cr6.gt) goto loc_826B4D98;
loc_826B4D90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x826B4D98;
	sub_82294A58(ctx, base);
loc_826B4D98:
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

__attribute__((alias("__imp__sub_826B4DB4"))) PPC_WEAK_FUNC(sub_826B4DB4);
PPC_FUNC_IMPL(__imp__sub_826B4DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B4DB8"))) PPC_WEAK_FUNC(sub_826B4DB8);
PPC_FUNC_IMPL(__imp__sub_826B4DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r8,r9,-22920
	ctx.r8.s64 = ctx.r9.s64 + -22920;
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

__attribute__((alias("__imp__sub_826B4DD8"))) PPC_WEAK_FUNC(sub_826B4DD8);
PPC_FUNC_IMPL(__imp__sub_826B4DD8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B4DE0"))) PPC_WEAK_FUNC(sub_826B4DE0);
PPC_FUNC_IMPL(__imp__sub_826B4DE0) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r10,r11,-22592
	ctx.r10.s64 = ctx.r11.s64 + -22592;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x826B4E04;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b4848
	ctx.lr = 0x826B4E0C;
	sub_826B4848(ctx, base);
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

__attribute__((alias("__imp__sub_826B4E20"))) PPC_WEAK_FUNC(sub_826B4E20);
PPC_FUNC_IMPL(__imp__sub_826B4E20) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r8,r9,-22592
	ctx.r8.s64 = ctx.r9.s64 + -22592;
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

__attribute__((alias("__imp__sub_826B4E48"))) PPC_WEAK_FUNC(sub_826B4E48);
PPC_FUNC_IMPL(__imp__sub_826B4E48) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-22592
	ctx.r10.s64 = ctx.r11.s64 + -22592;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x826B4E74;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b4848
	ctx.lr = 0x826B4E7C;
	sub_826B4848(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826b4eb0
	if (ctx.cr6.eq) goto loc_826B4EB0;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826b4ea8
	if (ctx.cr6.lt) goto loc_826B4EA8;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x826b4eb0
	if (!ctx.cr6.gt) goto loc_826B4EB0;
loc_826B4EA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x826B4EB0;
	sub_82294A58(ctx, base);
loc_826B4EB0:
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

__attribute__((alias("__imp__sub_826B4ECC"))) PPC_WEAK_FUNC(sub_826B4ECC);
PPC_FUNC_IMPL(__imp__sub_826B4ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B4ED0"))) PPC_WEAK_FUNC(sub_826B4ED0);
PPC_FUNC_IMPL(__imp__sub_826B4ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r8,r9,-22592
	ctx.r8.s64 = ctx.r9.s64 + -22592;
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

__attribute__((alias("__imp__sub_826B4EF0"))) PPC_WEAK_FUNC(sub_826B4EF0);
PPC_FUNC_IMPL(__imp__sub_826B4EF0) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x826B4F0C;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b4f94
	if (ctx.cr6.eq) goto loc_826B4F94;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32149
	ctx.r31.s64 = -2106916864;
	// addi r11,r7,-24968
	ctx.r11.s64 = ctx.r7.s64 + -24968;
	// addi r8,r5,-20912
	ctx.r8.s64 = ctx.r5.s64 + -20912;
	// addi r7,r4,-20920
	ctx.r7.s64 = ctx.r4.s64 + -20920;
	// addi r6,r10,14488
	ctx.r6.s64 = ctx.r10.s64 + 14488;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r5,r31,16696
	ctx.r5.s64 = ctx.r31.s64 + 16696;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,500
	ctx.r5.s64 = 500;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x826B4F80;
	sub_82398460(ctx, base);
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
loc_826B4F94:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_826B4FAC"))) PPC_WEAK_FUNC(sub_826B4FAC);
PPC_FUNC_IMPL(__imp__sub_826B4FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B4FB0"))) PPC_WEAK_FUNC(sub_826B4FB0);
PPC_FUNC_IMPL(__imp__sub_826B4FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x826B4FB8;
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
	// bne cr6,0x826b4fe4
	if (!ctx.cr6.eq) goto loc_826B4FE4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82604fa0
	ctx.lr = 0x826B4FD8;
	sub_82604FA0(ctx, base);
	// stw r3,-28640(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28640, ctx.r3.u32);
	// bl 0x82605060
	ctx.lr = 0x826B4FE0;
	sub_82605060(ctx, base);
	// lwz r10,-28640(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28640);
loc_826B4FE4:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-27856(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27856);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826b5004
	if (ctx.cr6.eq) goto loc_826B5004;
	// bl 0x82313628
	ctx.lr = 0x826B4FF8;
	sub_82313628(ctx, base);
	// lwz r11,-27856(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27856);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x826b500c
	goto loc_826B500C;
loc_826B5004:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_826B500C:
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
	// bne cr6,0x826b503c
	if (!ctx.cr6.eq) goto loc_826B503C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x826B502C;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x826B5034;
	sub_822AADA8(ctx, base);
	// lwz r11,-27856(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27856);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_826B503C:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b5068
	if (!ctx.cr6.eq) goto loc_826B5068;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x826B5058;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x826B5060;
	sub_82398640(ctx, base);
	// lwz r11,-27856(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27856);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_826B5068:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826b50a0
	if (ctx.cr6.eq) goto loc_826B50A0;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x826B5084;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x826b50a0
	if (!ctx.cr6.eq) goto loc_826B50A0;
	// lwz r3,-27856(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27856);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B50A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B50A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B50A8"))) PPC_WEAK_FUNC(sub_826B50A8);
PPC_FUNC_IMPL(__imp__sub_826B50A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B50B0"))) PPC_WEAK_FUNC(sub_826B50B0);
PPC_FUNC_IMPL(__imp__sub_826B50B0) {
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
	// bne cr6,0x826b50f4
	if (!ctx.cr6.eq) goto loc_826B50F4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82604fa0
	ctx.lr = 0x826B50E8;
	sub_82604FA0(ctx, base);
	// stw r3,-28640(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28640, ctx.r3.u32);
	// bl 0x82605060
	ctx.lr = 0x826B50F0;
	sub_82605060(ctx, base);
	// lwz r11,-28640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28640);
loc_826B50F4:
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

__attribute__((alias("__imp__sub_826B511C"))) PPC_WEAK_FUNC(sub_826B511C);
PPC_FUNC_IMPL(__imp__sub_826B511C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B5120"))) PPC_WEAK_FUNC(sub_826B5120);
PPC_FUNC_IMPL(__imp__sub_826B5120) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x826B513C;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b51c4
	if (ctx.cr6.eq) goto loc_826B51C4;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32149
	ctx.r31.s64 = -2106916864;
	// addi r11,r7,-24924
	ctx.r11.s64 = ctx.r7.s64 + -24924;
	// addi r8,r5,-20912
	ctx.r8.s64 = ctx.r5.s64 + -20912;
	// addi r7,r4,-20920
	ctx.r7.s64 = ctx.r4.s64 + -20920;
	// addi r6,r10,14488
	ctx.r6.s64 = ctx.r10.s64 + 14488;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r5,r31,18616
	ctx.r5.s64 = ctx.r31.s64 + 18616;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x826B51B0;
	sub_82398460(ctx, base);
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
loc_826B51C4:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_826B51DC"))) PPC_WEAK_FUNC(sub_826B51DC);
PPC_FUNC_IMPL(__imp__sub_826B51DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B51E0"))) PPC_WEAK_FUNC(sub_826B51E0);
PPC_FUNC_IMPL(__imp__sub_826B51E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x826B51E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-28180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28180);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b5214
	if (!ctx.cr6.eq) goto loc_826B5214;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82659258
	ctx.lr = 0x826B5208;
	sub_82659258(ctx, base);
	// stw r3,-28180(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28180, ctx.r3.u32);
	// bl 0x82659318
	ctx.lr = 0x826B5210;
	sub_82659318(ctx, base);
	// lwz r10,-28180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28180);
loc_826B5214:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-27852(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27852);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826b5234
	if (ctx.cr6.eq) goto loc_826B5234;
	// bl 0x82316008
	ctx.lr = 0x826B5228;
	sub_82316008(ctx, base);
	// lwz r11,-27852(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27852);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x826b523c
	goto loc_826B523C;
loc_826B5234:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_826B523C:
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
	// bne cr6,0x826b526c
	if (!ctx.cr6.eq) goto loc_826B526C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x826B525C;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x826B5264;
	sub_822AADA8(ctx, base);
	// lwz r11,-27852(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27852);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_826B526C:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b5298
	if (!ctx.cr6.eq) goto loc_826B5298;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x826B5288;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x826B5290;
	sub_82398640(ctx, base);
	// lwz r11,-27852(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27852);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_826B5298:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826b52d0
	if (ctx.cr6.eq) goto loc_826B52D0;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x826B52B4;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x826b52d0
	if (!ctx.cr6.eq) goto loc_826B52D0;
	// lwz r3,-27852(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27852);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B52D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B52D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B52D8"))) PPC_WEAK_FUNC(sub_826B52D8);
PPC_FUNC_IMPL(__imp__sub_826B52D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B52E0"))) PPC_WEAK_FUNC(sub_826B52E0);
PPC_FUNC_IMPL(__imp__sub_826B52E0) {
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
	// lwz r11,-28180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28180);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b5324
	if (!ctx.cr6.eq) goto loc_826B5324;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82659258
	ctx.lr = 0x826B5318;
	sub_82659258(ctx, base);
	// stw r3,-28180(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28180, ctx.r3.u32);
	// bl 0x82659318
	ctx.lr = 0x826B5320;
	sub_82659318(ctx, base);
	// lwz r11,-28180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28180);
loc_826B5324:
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

__attribute__((alias("__imp__sub_826B534C"))) PPC_WEAK_FUNC(sub_826B534C);
PPC_FUNC_IMPL(__imp__sub_826B534C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B5350"))) PPC_WEAK_FUNC(sub_826B5350);
PPC_FUNC_IMPL(__imp__sub_826B5350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x826B5358;
	__savegprlr_21(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826b5514
	if (!ctx.cr6.gt) goto loc_826B5514;
	// lis r27,-31883
	ctx.r27.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r23,r11,14488
	ctx.r23.s64 = ctx.r11.s64 + 14488;
	// lwz r9,-28232(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + -28232);
loc_826B5388:
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwzx r26,r22,r11
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x826b5500
	if (ctx.cr6.eq) goto loc_826B5500;
	// lwz r11,64(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826b5500
	if (!ctx.cr6.gt) goto loc_826B5500;
	// li r28,0
	ctx.r28.s64 = 0;
loc_826B53AC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826b53c8
	if (!ctx.cr6.eq) goto loc_826B53C8;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8264c5d0
	ctx.lr = 0x826B53BC;
	sub_8264C5D0(ctx, base);
	// stw r3,-28232(r27)
	PPC_STORE_U32(ctx.r27.u32 + -28232, ctx.r3.u32);
	// bl 0x8264c690
	ctx.lr = 0x826B53C4;
	sub_8264C690(ctx, base);
	// lwz r9,-28232(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + -28232);
loc_826B53C8:
	// lwz r10,60(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// lwzx r11,r28,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b53f0
	if (ctx.cr6.eq) goto loc_826B53F0;
loc_826B53DC:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x826b5400
	if (ctx.cr6.eq) goto loc_826B5400;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b53dc
	if (!ctx.cr6.eq) goto loc_826B53DC;
loc_826B53F0:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x826b54ec
	if (ctx.cr6.eq) goto loc_826B54EC;
loc_826B5400:
	// lwzx r3,r28,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// bl 0x82472cc0
	ctx.lr = 0x826B5408;
	sub_82472CC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,72(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r31,396
	ctx.r11.s64 = ctx.r31.s64 + 396;
	// stb r25,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r25.u8);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lfs f11,412(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	ctx.f11.f64 = double(temp.f32);
	// lwz r29,0(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lfs f10,416(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	ctx.f10.f64 = double(temp.f32);
	// fmr f6,f11
	ctx.f6.f64 = ctx.f11.f64;
	// fmr f4,f10
	ctx.f4.f64 = ctx.f10.f64;
	// lfs f0,396(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,400(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,324(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 324);
	// lfs f12,404(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	ctx.f12.f64 = double(temp.f32);
	// fadds f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// lfs f8,408(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// fsubs f5,f0,f8
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// fmr f1,f8
	ctx.f1.f64 = ctx.f8.f64;
	// fsubs f3,f13,f6
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f2,f12,f4
	ctx.f2.f64 = double(float(ctx.f12.f64 - ctx.f4.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// ld r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B54CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r6,40(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826B54E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,-28232(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + -28232);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
loc_826B54EC:
	// lwz r11,64(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826b53ac
	if (ctx.cr6.lt) goto loc_826B53AC;
loc_826B5500:
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826b5388
	if (ctx.cr6.lt) goto loc_826B5388;
loc_826B5514:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B551C"))) PPC_WEAK_FUNC(sub_826B551C);
PPC_FUNC_IMPL(__imp__sub_826B551C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B5520"))) PPC_WEAK_FUNC(sub_826B5520);
PPC_FUNC_IMPL(__imp__sub_826B5520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x826B5528;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// lwz r11,112(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826b5628
	if (!ctx.cr6.gt) goto loc_826B5628;
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// addi r25,r11,14488
	ctx.r25.s64 = ctx.r11.s64 + 14488;
	// lwz r9,-28232(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28232);
loc_826B5558:
	// lwz r11,108(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 108);
	// lwzx r29,r24,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826b5614
	if (ctx.cr6.eq) goto loc_826B5614;
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826b5614
	if (!ctx.cr6.gt) goto loc_826B5614;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_826B557C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826b5598
	if (!ctx.cr6.eq) goto loc_826B5598;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8264c5d0
	ctx.lr = 0x826B558C;
	sub_8264C5D0(ctx, base);
	// stw r3,-28232(r30)
	PPC_STORE_U32(ctx.r30.u32 + -28232, ctx.r3.u32);
	// bl 0x8264c690
	ctx.lr = 0x826B5594;
	sub_8264C690(ctx, base);
	// lwz r9,-28232(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28232);
loc_826B5598:
	// lwz r10,60(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b55c0
	if (ctx.cr6.eq) goto loc_826B55C0;
loc_826B55AC:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x826b55d0
	if (ctx.cr6.eq) goto loc_826B55D0;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b55ac
	if (!ctx.cr6.eq) goto loc_826B55AC;
loc_826B55C0:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x826b5600
	if (ctx.cr6.eq) goto loc_826B5600;
loc_826B55D0:
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x82472cc0
	ctx.lr = 0x826B55D8;
	sub_82472CC0(ctx, base);
	// lwz r11,72(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826B55F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,-28232(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28232);
	// stw r26,392(r22)
	PPC_STORE_U32(ctx.r22.u32 + 392, ctx.r26.u32);
loc_826B5600:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826b557c
	if (ctx.cr6.lt) goto loc_826B557C;
loc_826B5614:
	// lwz r11,112(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 112);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826b5558
	if (ctx.cr6.lt) goto loc_826B5558;
loc_826B5628:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B5630"))) PPC_WEAK_FUNC(sub_826B5630);
PPC_FUNC_IMPL(__imp__sub_826B5630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x826B5638;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r11,112(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826b5774
	if (!ctx.cr6.gt) goto loc_826B5774;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r21,1
	ctx.r21.s64 = 1;
	// lis r23,-31884
	ctx.r23.s64 = -2089549824;
loc_826B565C:
	// lwz r11,108(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 108);
	// lwzx r29,r25,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826b5760
	if (ctx.cr6.eq) goto loc_826B5760;
	// lwz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r10,104(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// lwz r9,64(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// rlwinm r8,r11,0,2,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// ori r7,r10,32768
	ctx.r7.u64 = ctx.r10.u64 | 32768;
	// stb r21,376(r29)
	PPC_STORE_U8(ctx.r29.u32 + 376, ctx.r21.u8);
	// stw r8,132(r29)
	PPC_STORE_U32(ctx.r29.u32 + 132, ctx.r8.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r7,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r7.u32);
	// ble cr6,0x826b5760
	if (!ctx.cr6.gt) goto loc_826B5760;
	// li r27,0
	ctx.r27.s64 = 0;
loc_826B569C:
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// lwzx r3,r11,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x82426598
	ctx.lr = 0x826B56A8;
	sub_82426598(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826b574c
	if (ctx.cr6.eq) goto loc_826B574C;
	// lwz r11,25344(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 25344);
	// lwz r28,344(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x826b572c
	if (ctx.cr6.eq) goto loc_826B572C;
	// lwz r11,660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826b56e8
	if (!ctx.cr6.gt) goto loc_826B56E8;
	// lwz r10,656(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x826b572c
	if (ctx.cr6.eq) goto loc_826B572C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x826b571c
	if (ctx.cr6.gt) goto loc_826B571C;
loc_826B56E8:
	// subfic r30,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r30.s64 = 1 - ctx.r11.s64;
	// addi r3,r31,656
	ctx.r3.s64 = ctx.r31.s64 + 656;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82294ac0
	ctx.lr = 0x826B5704;
	sub_82294AC0(ctx, base);
	// lwz r10,656(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82e640b8
	ctx.lr = 0x826B571C;
	sub_82E640B8(ctx, base);
loc_826B571C:
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// bl 0x8265b7a0
	ctx.lr = 0x826B572C;
	sub_8265B7A0(ctx, base);
loc_826B572C:
	// lis r12,-616
	ctx.r12.s64 = -40370176;
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// lwz r10,448(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// ori r12,r12,40959
	ctx.r12.u64 = ctx.r12.u64 | 40959;
	// clrlwi r9,r11,1
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// and r8,r10,r12
	ctx.r8.u64 = ctx.r10.u64 & ctx.r12.u64;
	// stw r9,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r9.u32);
	// stw r8,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r8.u32);
loc_826B574C:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826b569c
	if (ctx.cr6.lt) goto loc_826B569C;
loc_826B5760:
	// lwz r11,112(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 112);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826b565c
	if (ctx.cr6.lt) goto loc_826B565C;
loc_826B5774:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B577C"))) PPC_WEAK_FUNC(sub_826B577C);
PPC_FUNC_IMPL(__imp__sub_826B577C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B5780"))) PPC_WEAK_FUNC(sub_826B5780);
PPC_FUNC_IMPL(__imp__sub_826B5780) {
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
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// beq cr6,0x826b57bc
	if (ctx.cr6.eq) goto loc_826B57BC;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// bl 0x82401f60
	ctx.lr = 0x826B57BC;
	sub_82401F60(ctx, base);
loc_826B57BC:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826b57d4
	if (ctx.cr6.eq) goto loc_826B57D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b5350
	ctx.lr = 0x826B57D4;
	sub_826B5350(ctx, base);
loc_826B57D4:
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

__attribute__((alias("__imp__sub_826B57E8"))) PPC_WEAK_FUNC(sub_826B57E8);
PPC_FUNC_IMPL(__imp__sub_826B57E8) {
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
	// bl 0x826b5520
	ctx.lr = 0x826B5800;
	sub_826B5520(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826b5818
	if (ctx.cr6.eq) goto loc_826B5818;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b5350
	ctx.lr = 0x826B5818;
	sub_826B5350(ctx, base);
loc_826B5818:
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

__attribute__((alias("__imp__sub_826B582C"))) PPC_WEAK_FUNC(sub_826B582C);
PPC_FUNC_IMPL(__imp__sub_826B582C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B5830"))) PPC_WEAK_FUNC(sub_826B5830);
PPC_FUNC_IMPL(__imp__sub_826B5830) {
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
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// clrlwi r9,r10,1
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// beq cr6,0x826b586c
	if (ctx.cr6.eq) goto loc_826B586C;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// bl 0x8246b6c0
	ctx.lr = 0x826B586C;
	sub_8246B6C0(ctx, base);
loc_826B586C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b5520
	ctx.lr = 0x826B5874;
	sub_826B5520(ctx, base);
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

__attribute__((alias("__imp__sub_826B5888"))) PPC_WEAK_FUNC(sub_826B5888);
PPC_FUNC_IMPL(__imp__sub_826B5888) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwimi r11,r4,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// b 0x8265b7a0
	sub_8265B7A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B58A4"))) PPC_WEAK_FUNC(sub_826B58A4);
PPC_FUNC_IMPL(__imp__sub_826B58A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B58A8"))) PPC_WEAK_FUNC(sub_826B58A8);
PPC_FUNC_IMPL(__imp__sub_826B58A8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826b5960
	if (!ctx.cr6.gt) goto loc_826B5960;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b5960
	if (ctx.cr6.eq) goto loc_826B5960;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x826b58f4
	if (ctx.cr6.eq) goto loc_826B58F4;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// b 0x826b5914
	goto loc_826B5914;
loc_826B58F4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-19580
	ctx.r4.s64 = ctx.r11.s64 + -19580;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x826B5910;
	sub_8233E028(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_826B5914:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r10,-24868
	ctx.r4.s64 = ctx.r10.s64 + -24868;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x8233e028
	ctx.lr = 0x826B5938;
	sub_8233E028(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x826b5960
	if (!ctx.cr6.eq) goto loc_826B5960;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x826b5960
	if (!ctx.cr6.eq) goto loc_826B5960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826b5630
	ctx.lr = 0x826B5960;
	sub_826B5630(ctx, base);
loc_826B5960:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229b3f0
	ctx.lr = 0x826B596C;
	sub_8229B3F0(ctx, base);
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

__attribute__((alias("__imp__sub_826B5984"))) PPC_WEAK_FUNC(sub_826B5984);
PPC_FUNC_IMPL(__imp__sub_826B5984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B5988"))) PPC_WEAK_FUNC(sub_826B5988);
PPC_FUNC_IMPL(__imp__sub_826B5988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x826B5990;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x8265acd8
	ctx.lr = 0x826B599C;
	sub_8265ACD8(ctx, base);
	// lwz r11,112(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 112);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826b5b0c
	if (!ctx.cr6.gt) goto loc_826B5B0C;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r27,-31885
	ctx.r27.s64 = -2089615360;
	// addi r24,r9,11272
	ctx.r24.s64 = ctx.r9.s64 + 11272;
	// addi r22,r10,-24760
	ctx.r22.s64 = ctx.r10.s64 + -24760;
	// addi r28,r11,-24832
	ctx.r28.s64 = ctx.r11.s64 + -24832;
loc_826B59CC:
	// lwz r11,108(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 108);
	// lwzx r31,r26,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826b5af8
	if (ctx.cr6.eq) goto loc_826B5AF8;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826b5af8
	if (!ctx.cr6.gt) goto loc_826B5AF8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_826B59F0:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82426598
	ctx.lr = 0x826B59FC;
	sub_82426598(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b5ae4
	if (ctx.cr6.eq) goto loc_826B5AE4;
	// lwz r11,660(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 660);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826b5ae4
	if (!ctx.cr6.gt) goto loc_826B5AE4;
	// lwz r11,656(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 656);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826b5ae4
	if (ctx.cr6.eq) goto loc_826B5AE4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B5A34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b5ae4
	if (ctx.cr6.eq) goto loc_826B5AE4;
	// lwz r11,532(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826b5a98
	if (ctx.cr6.eq) goto loc_826B5A98;
	// lbz r11,385(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 385);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x826b5a98
	if (!ctx.cr6.eq) goto loc_826B5A98;
	// lbz r11,384(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 384);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x826b5a7c
	if (ctx.cr6.eq) goto loc_826B5A7C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x826b5a7c
	if (ctx.cr6.eq) goto loc_826B5A7C;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x826b5a7c
	if (ctx.cr6.eq) goto loc_826B5A7C;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x826b5a98
	if (!ctx.cr6.eq) goto loc_826B5A98;
loc_826B5A7C:
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b5ae4
	if (!ctx.cr6.eq) goto loc_826B5AE4;
	// lwz r11,232(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b5ae4
	if (!ctx.cr6.eq) goto loc_826B5AE4;
loc_826B5A98:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8232e868
	ctx.lr = 0x826B5AA4;
	sub_8232E868(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826b5ab8
	if (!ctx.cr6.eq) goto loc_826B5AB8;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
loc_826B5AB8:
	// lwz r3,28872(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28872);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B5ADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x826B5AE4;
	sub_82299080(ctx, base);
loc_826B5AE4:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826b59f0
	if (ctx.cr6.lt) goto loc_826B59F0;
loc_826B5AF8:
	// lwz r11,112(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 112);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826b59cc
	if (ctx.cr6.lt) goto loc_826B59CC;
loc_826B5B0C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B5B14"))) PPC_WEAK_FUNC(sub_826B5B14);
PPC_FUNC_IMPL(__imp__sub_826B5B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B5B18"))) PPC_WEAK_FUNC(sub_826B5B18);
PPC_FUNC_IMPL(__imp__sub_826B5B18) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x826B5B34;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b5bbc
	if (ctx.cr6.eq) goto loc_826B5BBC;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32149
	ctx.r31.s64 = -2106916864;
	// addi r11,r7,-24624
	ctx.r11.s64 = ctx.r7.s64 + -24624;
	// addi r8,r5,-20912
	ctx.r8.s64 = ctx.r5.s64 + -20912;
	// addi r7,r4,-20920
	ctx.r7.s64 = ctx.r4.s64 + -20920;
	// addi r6,r10,14488
	ctx.r6.s64 = ctx.r10.s64 + 14488;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r5,r31,17360
	ctx.r5.s64 = ctx.r31.s64 + 17360;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,500
	ctx.r5.s64 = 500;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x826B5BA8;
	sub_82398460(ctx, base);
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
loc_826B5BBC:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_826B5BD4"))) PPC_WEAK_FUNC(sub_826B5BD4);
PPC_FUNC_IMPL(__imp__sub_826B5BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B5BD8"))) PPC_WEAK_FUNC(sub_826B5BD8);
PPC_FUNC_IMPL(__imp__sub_826B5BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x826B5BE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27856(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27856);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b5c0c
	if (!ctx.cr6.eq) goto loc_826B5C0C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826b4ef0
	ctx.lr = 0x826B5C00;
	sub_826B4EF0(ctx, base);
	// stw r3,-27856(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27856, ctx.r3.u32);
	// bl 0x826b4fb0
	ctx.lr = 0x826B5C08;
	sub_826B4FB0(ctx, base);
	// lwz r10,-27856(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27856);
loc_826B5C0C:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-27848(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27848);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826b5c2c
	if (ctx.cr6.eq) goto loc_826B5C2C;
	// bl 0x822dc850
	ctx.lr = 0x826B5C20;
	sub_822DC850(ctx, base);
	// lwz r11,-27848(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27848);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x826b5c34
	goto loc_826B5C34;
loc_826B5C2C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_826B5C34:
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
	// bne cr6,0x826b5c64
	if (!ctx.cr6.eq) goto loc_826B5C64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x826B5C54;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x826B5C5C;
	sub_822AADA8(ctx, base);
	// lwz r11,-27848(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27848);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_826B5C64:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b5c90
	if (!ctx.cr6.eq) goto loc_826B5C90;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x826B5C80;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x826B5C88;
	sub_82398640(ctx, base);
	// lwz r11,-27848(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27848);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_826B5C90:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826b5cc8
	if (ctx.cr6.eq) goto loc_826B5CC8;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x826B5CAC;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x826b5cc8
	if (!ctx.cr6.eq) goto loc_826B5CC8;
	// lwz r3,-27848(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27848);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B5CC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B5CC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B5CD0"))) PPC_WEAK_FUNC(sub_826B5CD0);
PPC_FUNC_IMPL(__imp__sub_826B5CD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B5CD8"))) PPC_WEAK_FUNC(sub_826B5CD8);
PPC_FUNC_IMPL(__imp__sub_826B5CD8) {
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
	// lwz r11,-27856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27856);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b5d1c
	if (!ctx.cr6.eq) goto loc_826B5D1C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826b4ef0
	ctx.lr = 0x826B5D10;
	sub_826B4EF0(ctx, base);
	// stw r3,-27856(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27856, ctx.r3.u32);
	// bl 0x826b4fb0
	ctx.lr = 0x826B5D18;
	sub_826B4FB0(ctx, base);
	// lwz r11,-27856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27856);
loc_826B5D1C:
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

__attribute__((alias("__imp__sub_826B5D44"))) PPC_WEAK_FUNC(sub_826B5D44);
PPC_FUNC_IMPL(__imp__sub_826B5D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B5D48"))) PPC_WEAK_FUNC(sub_826B5D48);
PPC_FUNC_IMPL(__imp__sub_826B5D48) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x826B5D64;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b5dec
	if (ctx.cr6.eq) goto loc_826B5DEC;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32149
	ctx.r31.s64 = -2106916864;
	// addi r11,r7,-24560
	ctx.r11.s64 = ctx.r7.s64 + -24560;
	// addi r8,r5,-20912
	ctx.r8.s64 = ctx.r5.s64 + -20912;
	// addi r7,r4,-20920
	ctx.r7.s64 = ctx.r4.s64 + -20920;
	// addi r6,r10,14488
	ctx.r6.s64 = ctx.r10.s64 + 14488;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r5,r31,19160
	ctx.r5.s64 = ctx.r31.s64 + 19160;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,124
	ctx.r5.s64 = 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x826B5DD8;
	sub_82398460(ctx, base);
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
loc_826B5DEC:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_826B5E04"))) PPC_WEAK_FUNC(sub_826B5E04);
PPC_FUNC_IMPL(__imp__sub_826B5E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B5E08"))) PPC_WEAK_FUNC(sub_826B5E08);
PPC_FUNC_IMPL(__imp__sub_826B5E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x826B5E10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27852(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27852);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b5e3c
	if (!ctx.cr6.eq) goto loc_826B5E3C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826b5120
	ctx.lr = 0x826B5E30;
	sub_826B5120(ctx, base);
	// stw r3,-27852(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27852, ctx.r3.u32);
	// bl 0x826b51e0
	ctx.lr = 0x826B5E38;
	sub_826B51E0(ctx, base);
	// lwz r10,-27852(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27852);
loc_826B5E3C:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-27844(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27844);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826b5e5c
	if (ctx.cr6.eq) goto loc_826B5E5C;
	// bl 0x822dcaf8
	ctx.lr = 0x826B5E50;
	sub_822DCAF8(ctx, base);
	// lwz r11,-27844(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27844);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x826b5e64
	goto loc_826B5E64;
loc_826B5E5C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_826B5E64:
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
	// bne cr6,0x826b5e94
	if (!ctx.cr6.eq) goto loc_826B5E94;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x826B5E84;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x826B5E8C;
	sub_822AADA8(ctx, base);
	// lwz r11,-27844(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27844);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_826B5E94:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b5ec0
	if (!ctx.cr6.eq) goto loc_826B5EC0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x826B5EB0;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x826B5EB8;
	sub_82398640(ctx, base);
	// lwz r11,-27844(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27844);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_826B5EC0:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826b5ef8
	if (ctx.cr6.eq) goto loc_826B5EF8;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x826B5EDC;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x826b5ef8
	if (!ctx.cr6.eq) goto loc_826B5EF8;
	// lwz r3,-27844(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27844);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B5EF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B5EF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B5F00"))) PPC_WEAK_FUNC(sub_826B5F00);
PPC_FUNC_IMPL(__imp__sub_826B5F00) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B5F08"))) PPC_WEAK_FUNC(sub_826B5F08);
PPC_FUNC_IMPL(__imp__sub_826B5F08) {
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
	// lwz r11,-27852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27852);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b5f4c
	if (!ctx.cr6.eq) goto loc_826B5F4C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826b5120
	ctx.lr = 0x826B5F40;
	sub_826B5120(ctx, base);
	// stw r3,-27852(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27852, ctx.r3.u32);
	// bl 0x826b51e0
	ctx.lr = 0x826B5F48;
	sub_826B51E0(ctx, base);
	// lwz r11,-27852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27852);
loc_826B5F4C:
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

__attribute__((alias("__imp__sub_826B5F74"))) PPC_WEAK_FUNC(sub_826B5F74);
PPC_FUNC_IMPL(__imp__sub_826B5F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B5F78"))) PPC_WEAK_FUNC(sub_826B5F78);
PPC_FUNC_IMPL(__imp__sub_826B5F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x826B5F80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,56
	ctx.r3.s64 = 56;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x822959a8
	ctx.lr = 0x826B5FA4;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b5fd0
	if (ctx.cr6.eq) goto loc_826B5FD0;
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82930b28
	ctx.lr = 0x826B5FC8;
	sub_82930B28(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_826B5FD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B5FDC"))) PPC_WEAK_FUNC(sub_826B5FDC);
PPC_FUNC_IMPL(__imp__sub_826B5FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B5FE0"))) PPC_WEAK_FUNC(sub_826B5FE0);
PPC_FUNC_IMPL(__imp__sub_826B5FE0) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x826B5FFC;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b6084
	if (ctx.cr6.eq) goto loc_826B6084;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32149
	ctx.r31.s64 = -2106916864;
	// addi r11,r7,-24488
	ctx.r11.s64 = ctx.r7.s64 + -24488;
	// addi r8,r5,-20912
	ctx.r8.s64 = ctx.r5.s64 + -20912;
	// addi r7,r4,-20920
	ctx.r7.s64 = ctx.r4.s64 + -20920;
	// addi r6,r10,14488
	ctx.r6.s64 = ctx.r10.s64 + 14488;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r5,r31,17672
	ctx.r5.s64 = ctx.r31.s64 + 17672;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,500
	ctx.r5.s64 = 500;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x826B6070;
	sub_82398460(ctx, base);
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
loc_826B6084:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_826B609C"))) PPC_WEAK_FUNC(sub_826B609C);
PPC_FUNC_IMPL(__imp__sub_826B609C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B60A0"))) PPC_WEAK_FUNC(sub_826B60A0);
PPC_FUNC_IMPL(__imp__sub_826B60A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x826B60A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27856(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27856);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b60d4
	if (!ctx.cr6.eq) goto loc_826B60D4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826b4ef0
	ctx.lr = 0x826B60C8;
	sub_826B4EF0(ctx, base);
	// stw r3,-27856(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27856, ctx.r3.u32);
	// bl 0x826b4fb0
	ctx.lr = 0x826B60D0;
	sub_826B4FB0(ctx, base);
	// lwz r10,-27856(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27856);
loc_826B60D4:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-27840(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27840);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826b60f4
	if (ctx.cr6.eq) goto loc_826B60F4;
	// bl 0x822dc850
	ctx.lr = 0x826B60E8;
	sub_822DC850(ctx, base);
	// lwz r11,-27840(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27840);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x826b60fc
	goto loc_826B60FC;
loc_826B60F4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_826B60FC:
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
	// bne cr6,0x826b612c
	if (!ctx.cr6.eq) goto loc_826B612C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x826B611C;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x826B6124;
	sub_822AADA8(ctx, base);
	// lwz r11,-27840(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27840);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_826B612C:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b6158
	if (!ctx.cr6.eq) goto loc_826B6158;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x826B6148;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x826B6150;
	sub_82398640(ctx, base);
	// lwz r11,-27840(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27840);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_826B6158:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826b6190
	if (ctx.cr6.eq) goto loc_826B6190;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x826B6174;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x826b6190
	if (!ctx.cr6.eq) goto loc_826B6190;
	// lwz r3,-27840(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27840);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B6190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B6190:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B6198"))) PPC_WEAK_FUNC(sub_826B6198);
PPC_FUNC_IMPL(__imp__sub_826B6198) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B61A0"))) PPC_WEAK_FUNC(sub_826B61A0);
PPC_FUNC_IMPL(__imp__sub_826B61A0) {
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
	// lwz r11,-27856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27856);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b61e4
	if (!ctx.cr6.eq) goto loc_826B61E4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826b4ef0
	ctx.lr = 0x826B61D8;
	sub_826B4EF0(ctx, base);
	// stw r3,-27856(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27856, ctx.r3.u32);
	// bl 0x826b4fb0
	ctx.lr = 0x826B61E0;
	sub_826B4FB0(ctx, base);
	// lwz r11,-27856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27856);
loc_826B61E4:
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

__attribute__((alias("__imp__sub_826B620C"))) PPC_WEAK_FUNC(sub_826B620C);
PPC_FUNC_IMPL(__imp__sub_826B620C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B6210"))) PPC_WEAK_FUNC(sub_826B6210);
PPC_FUNC_IMPL(__imp__sub_826B6210) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x826B622C;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b62b4
	if (ctx.cr6.eq) goto loc_826B62B4;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32149
	ctx.r31.s64 = -2106916864;
	// addi r11,r7,-24416
	ctx.r11.s64 = ctx.r7.s64 + -24416;
	// addi r8,r5,-20912
	ctx.r8.s64 = ctx.r5.s64 + -20912;
	// addi r7,r4,-20920
	ctx.r7.s64 = ctx.r4.s64 + -20920;
	// addi r6,r10,14488
	ctx.r6.s64 = ctx.r10.s64 + 14488;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r5,r31,19440
	ctx.r5.s64 = ctx.r31.s64 + 19440;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x826B62A0;
	sub_82398460(ctx, base);
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
loc_826B62B4:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_826B62CC"))) PPC_WEAK_FUNC(sub_826B62CC);
PPC_FUNC_IMPL(__imp__sub_826B62CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B62D0"))) PPC_WEAK_FUNC(sub_826B62D0);
PPC_FUNC_IMPL(__imp__sub_826B62D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x826B62D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27852(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27852);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b6304
	if (!ctx.cr6.eq) goto loc_826B6304;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826b5120
	ctx.lr = 0x826B62F8;
	sub_826B5120(ctx, base);
	// stw r3,-27852(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27852, ctx.r3.u32);
	// bl 0x826b51e0
	ctx.lr = 0x826B6300;
	sub_826B51E0(ctx, base);
	// lwz r10,-27852(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27852);
loc_826B6304:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-27836(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27836);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826b6324
	if (ctx.cr6.eq) goto loc_826B6324;
	// bl 0x822dcaf8
	ctx.lr = 0x826B6318;
	sub_822DCAF8(ctx, base);
	// lwz r11,-27836(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27836);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x826b632c
	goto loc_826B632C;
loc_826B6324:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_826B632C:
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
	// bne cr6,0x826b635c
	if (!ctx.cr6.eq) goto loc_826B635C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x826B634C;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x826B6354;
	sub_822AADA8(ctx, base);
	// lwz r11,-27836(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27836);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_826B635C:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b6388
	if (!ctx.cr6.eq) goto loc_826B6388;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x826B6378;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x826B6380;
	sub_82398640(ctx, base);
	// lwz r11,-27836(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27836);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_826B6388:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826b63c0
	if (ctx.cr6.eq) goto loc_826B63C0;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x826B63A4;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x826b63c0
	if (!ctx.cr6.eq) goto loc_826B63C0;
	// lwz r3,-27836(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27836);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B63C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B63C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B63C8"))) PPC_WEAK_FUNC(sub_826B63C8);
PPC_FUNC_IMPL(__imp__sub_826B63C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B63D0"))) PPC_WEAK_FUNC(sub_826B63D0);
PPC_FUNC_IMPL(__imp__sub_826B63D0) {
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
	// lwz r11,-27852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27852);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b6414
	if (!ctx.cr6.eq) goto loc_826B6414;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826b5120
	ctx.lr = 0x826B6408;
	sub_826B5120(ctx, base);
	// stw r3,-27852(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27852, ctx.r3.u32);
	// bl 0x826b51e0
	ctx.lr = 0x826B6410;
	sub_826B51E0(ctx, base);
	// lwz r11,-27852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27852);
loc_826B6414:
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

__attribute__((alias("__imp__sub_826B643C"))) PPC_WEAK_FUNC(sub_826B643C);
PPC_FUNC_IMPL(__imp__sub_826B643C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B6440"))) PPC_WEAK_FUNC(sub_826B6440);
PPC_FUNC_IMPL(__imp__sub_826B6440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,56(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B644C"))) PPC_WEAK_FUNC(sub_826B644C);
PPC_FUNC_IMPL(__imp__sub_826B644C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B6450"))) PPC_WEAK_FUNC(sub_826B6450);
PPC_FUNC_IMPL(__imp__sub_826B6450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x826B6458;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,60
	ctx.r3.s64 = 60;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x822959a8
	ctx.lr = 0x826B647C;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b64a8
	if (ctx.cr6.eq) goto loc_826B64A8;
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82930be0
	ctx.lr = 0x826B64A0;
	sub_82930BE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_826B64A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B64B4"))) PPC_WEAK_FUNC(sub_826B64B4);
PPC_FUNC_IMPL(__imp__sub_826B64B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B64B8"))) PPC_WEAK_FUNC(sub_826B64B8);
PPC_FUNC_IMPL(__imp__sub_826B64B8) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x826B64D4;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b655c
	if (ctx.cr6.eq) goto loc_826B655C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32149
	ctx.r31.s64 = -2106916864;
	// addi r11,r7,-24328
	ctx.r11.s64 = ctx.r7.s64 + -24328;
	// addi r8,r5,-20912
	ctx.r8.s64 = ctx.r5.s64 + -20912;
	// addi r7,r4,-20920
	ctx.r7.s64 = ctx.r4.s64 + -20920;
	// addi r6,r10,14488
	ctx.r6.s64 = ctx.r10.s64 + 14488;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r5,r31,17984
	ctx.r5.s64 = ctx.r31.s64 + 17984;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,500
	ctx.r5.s64 = 500;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x826B6548;
	sub_82398460(ctx, base);
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
loc_826B655C:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_826B6574"))) PPC_WEAK_FUNC(sub_826B6574);
PPC_FUNC_IMPL(__imp__sub_826B6574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B6578"))) PPC_WEAK_FUNC(sub_826B6578);
PPC_FUNC_IMPL(__imp__sub_826B6578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x826B6580;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27856(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27856);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b65ac
	if (!ctx.cr6.eq) goto loc_826B65AC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826b4ef0
	ctx.lr = 0x826B65A0;
	sub_826B4EF0(ctx, base);
	// stw r3,-27856(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27856, ctx.r3.u32);
	// bl 0x826b4fb0
	ctx.lr = 0x826B65A8;
	sub_826B4FB0(ctx, base);
	// lwz r10,-27856(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27856);
loc_826B65AC:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-27832(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27832);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826b65cc
	if (ctx.cr6.eq) goto loc_826B65CC;
	// bl 0x822dc850
	ctx.lr = 0x826B65C0;
	sub_822DC850(ctx, base);
	// lwz r11,-27832(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27832);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x826b65d4
	goto loc_826B65D4;
loc_826B65CC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_826B65D4:
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
	// bne cr6,0x826b6604
	if (!ctx.cr6.eq) goto loc_826B6604;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x826B65F4;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x826B65FC;
	sub_822AADA8(ctx, base);
	// lwz r11,-27832(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27832);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_826B6604:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b6630
	if (!ctx.cr6.eq) goto loc_826B6630;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x826B6620;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x826B6628;
	sub_82398640(ctx, base);
	// lwz r11,-27832(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27832);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_826B6630:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826b6668
	if (ctx.cr6.eq) goto loc_826B6668;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x826B664C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x826b6668
	if (!ctx.cr6.eq) goto loc_826B6668;
	// lwz r3,-27832(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27832);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B6668;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B6668:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B6670"))) PPC_WEAK_FUNC(sub_826B6670);
PPC_FUNC_IMPL(__imp__sub_826B6670) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B6678"))) PPC_WEAK_FUNC(sub_826B6678);
PPC_FUNC_IMPL(__imp__sub_826B6678) {
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
	// lwz r11,-27856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27856);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b66bc
	if (!ctx.cr6.eq) goto loc_826B66BC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826b4ef0
	ctx.lr = 0x826B66B0;
	sub_826B4EF0(ctx, base);
	// stw r3,-27856(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27856, ctx.r3.u32);
	// bl 0x826b4fb0
	ctx.lr = 0x826B66B8;
	sub_826B4FB0(ctx, base);
	// lwz r11,-27856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27856);
loc_826B66BC:
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

__attribute__((alias("__imp__sub_826B66E4"))) PPC_WEAK_FUNC(sub_826B66E4);
PPC_FUNC_IMPL(__imp__sub_826B66E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B66E8"))) PPC_WEAK_FUNC(sub_826B66E8);
PPC_FUNC_IMPL(__imp__sub_826B66E8) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x826B6704;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b678c
	if (ctx.cr6.eq) goto loc_826B678C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32149
	ctx.r31.s64 = -2106916864;
	// addi r11,r7,-24248
	ctx.r11.s64 = ctx.r7.s64 + -24248;
	// addi r8,r5,-20912
	ctx.r8.s64 = ctx.r5.s64 + -20912;
	// addi r7,r4,-20920
	ctx.r7.s64 = ctx.r4.s64 + -20920;
	// addi r6,r10,14488
	ctx.r6.s64 = ctx.r10.s64 + 14488;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r5,r31,19720
	ctx.r5.s64 = ctx.r31.s64 + 19720;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,140
	ctx.r5.s64 = 140;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x826B6778;
	sub_82398460(ctx, base);
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
loc_826B678C:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_826B67A4"))) PPC_WEAK_FUNC(sub_826B67A4);
PPC_FUNC_IMPL(__imp__sub_826B67A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B67A8"))) PPC_WEAK_FUNC(sub_826B67A8);
PPC_FUNC_IMPL(__imp__sub_826B67A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x826B67B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27852(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27852);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b67dc
	if (!ctx.cr6.eq) goto loc_826B67DC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826b5120
	ctx.lr = 0x826B67D0;
	sub_826B5120(ctx, base);
	// stw r3,-27852(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27852, ctx.r3.u32);
	// bl 0x826b51e0
	ctx.lr = 0x826B67D8;
	sub_826B51E0(ctx, base);
	// lwz r10,-27852(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27852);
loc_826B67DC:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-27828(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27828);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826b67fc
	if (ctx.cr6.eq) goto loc_826B67FC;
	// bl 0x822dcaf8
	ctx.lr = 0x826B67F0;
	sub_822DCAF8(ctx, base);
	// lwz r11,-27828(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27828);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x826b6804
	goto loc_826B6804;
loc_826B67FC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_826B6804:
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
	// bne cr6,0x826b6834
	if (!ctx.cr6.eq) goto loc_826B6834;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x826B6824;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x826B682C;
	sub_822AADA8(ctx, base);
	// lwz r11,-27828(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27828);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_826B6834:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b6860
	if (!ctx.cr6.eq) goto loc_826B6860;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x826B6850;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x826B6858;
	sub_82398640(ctx, base);
	// lwz r11,-27828(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27828);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_826B6860:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826b6898
	if (ctx.cr6.eq) goto loc_826B6898;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x826B687C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x826b6898
	if (!ctx.cr6.eq) goto loc_826B6898;
	// lwz r3,-27828(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27828);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B6898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B6898:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B68A0"))) PPC_WEAK_FUNC(sub_826B68A0);
PPC_FUNC_IMPL(__imp__sub_826B68A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B68A8"))) PPC_WEAK_FUNC(sub_826B68A8);
PPC_FUNC_IMPL(__imp__sub_826B68A8) {
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
	// lwz r11,-27852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27852);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b68ec
	if (!ctx.cr6.eq) goto loc_826B68EC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826b5120
	ctx.lr = 0x826B68E0;
	sub_826B5120(ctx, base);
	// stw r3,-27852(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27852, ctx.r3.u32);
	// bl 0x826b51e0
	ctx.lr = 0x826B68E8;
	sub_826B51E0(ctx, base);
	// lwz r11,-27852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27852);
loc_826B68EC:
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

__attribute__((alias("__imp__sub_826B6914"))) PPC_WEAK_FUNC(sub_826B6914);
PPC_FUNC_IMPL(__imp__sub_826B6914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B6918"))) PPC_WEAK_FUNC(sub_826B6918);
PPC_FUNC_IMPL(__imp__sub_826B6918) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f12,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f9,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fadds f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// lfs f5,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f31,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f3,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// fadds f13,f11,f5
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// lfs f12,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f1,-18108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18108);
	ctx.f1.f64 = double(temp.f32);
	// fadds f11,f8,f4
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f4.f64));
	// fadds f10,f6,f31
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f31.f64));
	// fmadds f9,f13,f0,f3
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f3.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f8,f11,f0,f2
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f2.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f7,f10,f0,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82382590
	ctx.lr = 0x826B69A8;
	sub_82382590(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fneg f6,f31
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// stfs f6,108(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r8,r31,124
	ctx.r8.s64 = ctx.r31.s64 + 124;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r4,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r4.u32);
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B6A08"))) PPC_WEAK_FUNC(sub_826B6A08);
PPC_FUNC_IMPL(__imp__sub_826B6A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x826B6A10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,72
	ctx.r3.s64 = 72;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x822959a8
	ctx.lr = 0x826B6A34;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b6a60
	if (ctx.cr6.eq) goto loc_826B6A60;
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82930ca8
	ctx.lr = 0x826B6A58;
	sub_82930CA8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_826B6A60:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B6A6C"))) PPC_WEAK_FUNC(sub_826B6A6C);
PPC_FUNC_IMPL(__imp__sub_826B6A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B6A70"))) PPC_WEAK_FUNC(sub_826B6A70);
PPC_FUNC_IMPL(__imp__sub_826B6A70) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x826B6A8C;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b6b14
	if (ctx.cr6.eq) goto loc_826B6B14;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32149
	ctx.r31.s64 = -2106916864;
	// addi r11,r7,-24164
	ctx.r11.s64 = ctx.r7.s64 + -24164;
	// addi r8,r5,-20912
	ctx.r8.s64 = ctx.r5.s64 + -20912;
	// addi r7,r4,-20920
	ctx.r7.s64 = ctx.r4.s64 + -20920;
	// addi r6,r10,14488
	ctx.r6.s64 = ctx.r10.s64 + 14488;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r5,r31,18296
	ctx.r5.s64 = ctx.r31.s64 + 18296;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,500
	ctx.r5.s64 = 500;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x826B6B00;
	sub_82398460(ctx, base);
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
loc_826B6B14:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_826B6B2C"))) PPC_WEAK_FUNC(sub_826B6B2C);
PPC_FUNC_IMPL(__imp__sub_826B6B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B6B30"))) PPC_WEAK_FUNC(sub_826B6B30);
PPC_FUNC_IMPL(__imp__sub_826B6B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x826B6B38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27856(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27856);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b6b64
	if (!ctx.cr6.eq) goto loc_826B6B64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826b4ef0
	ctx.lr = 0x826B6B58;
	sub_826B4EF0(ctx, base);
	// stw r3,-27856(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27856, ctx.r3.u32);
	// bl 0x826b4fb0
	ctx.lr = 0x826B6B60;
	sub_826B4FB0(ctx, base);
	// lwz r10,-27856(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27856);
loc_826B6B64:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-27824(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27824);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826b6b84
	if (ctx.cr6.eq) goto loc_826B6B84;
	// bl 0x822dc850
	ctx.lr = 0x826B6B78;
	sub_822DC850(ctx, base);
	// lwz r11,-27824(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27824);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x826b6b8c
	goto loc_826B6B8C;
loc_826B6B84:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_826B6B8C:
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
	// bne cr6,0x826b6bbc
	if (!ctx.cr6.eq) goto loc_826B6BBC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x826B6BAC;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x826B6BB4;
	sub_822AADA8(ctx, base);
	// lwz r11,-27824(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27824);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_826B6BBC:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b6be8
	if (!ctx.cr6.eq) goto loc_826B6BE8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x826B6BD8;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x826B6BE0;
	sub_82398640(ctx, base);
	// lwz r11,-27824(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27824);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_826B6BE8:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826b6c20
	if (ctx.cr6.eq) goto loc_826B6C20;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x826B6C04;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x826b6c20
	if (!ctx.cr6.eq) goto loc_826B6C20;
	// lwz r3,-27824(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27824);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B6C20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B6C20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B6C28"))) PPC_WEAK_FUNC(sub_826B6C28);
PPC_FUNC_IMPL(__imp__sub_826B6C28) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B6C30"))) PPC_WEAK_FUNC(sub_826B6C30);
PPC_FUNC_IMPL(__imp__sub_826B6C30) {
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
	// lwz r11,-27856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27856);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b6c74
	if (!ctx.cr6.eq) goto loc_826B6C74;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826b4ef0
	ctx.lr = 0x826B6C68;
	sub_826B4EF0(ctx, base);
	// stw r3,-27856(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27856, ctx.r3.u32);
	// bl 0x826b4fb0
	ctx.lr = 0x826B6C70;
	sub_826B4FB0(ctx, base);
	// lwz r11,-27856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27856);
loc_826B6C74:
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

__attribute__((alias("__imp__sub_826B6C9C"))) PPC_WEAK_FUNC(sub_826B6C9C);
PPC_FUNC_IMPL(__imp__sub_826B6C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B6CA0"))) PPC_WEAK_FUNC(sub_826B6CA0);
PPC_FUNC_IMPL(__imp__sub_826B6CA0) {
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
	// lwz r3,492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// bl 0x826b7858
	ctx.lr = 0x826B6CC4;
	sub_826B7858(ctx, base);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f13,18676(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18676);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,-15120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x826b6d14
	if (ctx.cr6.gt) goto loc_826B6D14;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bgt cr6,0x826b6d14
	if (ctx.cr6.gt) goto loc_826B6D14;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x826b6d14
	if (ctx.cr6.gt) goto loc_826B6D14;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f10,-18324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18324);
	ctx.f10.f64 = double(temp.f32);
	// b 0x826b6d1c
	goto loc_826B6D1C;
loc_826B6D14:
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f10,-32444(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f10.f64 = double(temp.f32);
loc_826B6D1C:
	// fmuls f11,f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f9,136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f9.f64 = double(temp.f32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r8,r10,-18304
	ctx.r8.s64 = ctx.r10.s64 + -18304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,72(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// fmadds f8,f13,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f7,f12,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fmadds f5,f6,f10,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fneg f4,f5
	ctx.f4.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// mfcr r6
	ctx.r6.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r6.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r6.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r6.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r6.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r6.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r6.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r6.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r6.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r6.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r6.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r6.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r6.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r6.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r6.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r6.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r6.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r6.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r6.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r6.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r6.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r6.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r6.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r6.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r6.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r6.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r6.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r6.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r6.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r6.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r6.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r6.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r5,r6,27,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x4;
	// rlwinm r10,r6,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x4;
	// or r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 | ctx.r10.u64;
	// lfsx f3,r8,r9
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f3.f64 = double(temp.f32);
	// fsel f2,f3,f0,f5
	ctx.f2.f64 = ctx.f3.f64 >= 0.0 ? ctx.f0.f64 : ctx.f5.f64;
	// stfs f2,136(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 136, temp.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x826B6D78;
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

__attribute__((alias("__imp__sub_826B6D90"))) PPC_WEAK_FUNC(sub_826B6D90);
PPC_FUNC_IMPL(__imp__sub_826B6D90) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x826B6DAC;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b6e34
	if (ctx.cr6.eq) goto loc_826B6E34;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32149
	ctx.r31.s64 = -2106916864;
	// addi r11,r7,-24096
	ctx.r11.s64 = ctx.r7.s64 + -24096;
	// addi r8,r5,-20912
	ctx.r8.s64 = ctx.r5.s64 + -20912;
	// addi r7,r4,-20920
	ctx.r7.s64 = ctx.r4.s64 + -20920;
	// addi r6,r10,14488
	ctx.r6.s64 = ctx.r10.s64 + 14488;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r5,r31,20000
	ctx.r5.s64 = ctx.r31.s64 + 20000;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x826B6E20;
	sub_82398460(ctx, base);
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
loc_826B6E34:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_826B6E4C"))) PPC_WEAK_FUNC(sub_826B6E4C);
PPC_FUNC_IMPL(__imp__sub_826B6E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B6E50"))) PPC_WEAK_FUNC(sub_826B6E50);
PPC_FUNC_IMPL(__imp__sub_826B6E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x826B6E58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27852(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27852);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b6e84
	if (!ctx.cr6.eq) goto loc_826B6E84;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826b5120
	ctx.lr = 0x826B6E78;
	sub_826B5120(ctx, base);
	// stw r3,-27852(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27852, ctx.r3.u32);
	// bl 0x826b51e0
	ctx.lr = 0x826B6E80;
	sub_826B51E0(ctx, base);
	// lwz r10,-27852(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27852);
loc_826B6E84:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-27820(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27820);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826b6ea4
	if (ctx.cr6.eq) goto loc_826B6EA4;
	// bl 0x822dcaf8
	ctx.lr = 0x826B6E98;
	sub_822DCAF8(ctx, base);
	// lwz r11,-27820(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27820);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x826b6eac
	goto loc_826B6EAC;
loc_826B6EA4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_826B6EAC:
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
	// bne cr6,0x826b6edc
	if (!ctx.cr6.eq) goto loc_826B6EDC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x826B6ECC;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x826B6ED4;
	sub_822AADA8(ctx, base);
	// lwz r11,-27820(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27820);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_826B6EDC:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b6f08
	if (!ctx.cr6.eq) goto loc_826B6F08;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x826B6EF8;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x826B6F00;
	sub_82398640(ctx, base);
	// lwz r11,-27820(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27820);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_826B6F08:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826b6f40
	if (ctx.cr6.eq) goto loc_826B6F40;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x826B6F24;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x826b6f40
	if (!ctx.cr6.eq) goto loc_826B6F40;
	// lwz r3,-27820(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27820);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B6F40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B6F40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B6F48"))) PPC_WEAK_FUNC(sub_826B6F48);
PPC_FUNC_IMPL(__imp__sub_826B6F48) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B6F50"))) PPC_WEAK_FUNC(sub_826B6F50);
PPC_FUNC_IMPL(__imp__sub_826B6F50) {
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
	// lwz r11,-27852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27852);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b6f94
	if (!ctx.cr6.eq) goto loc_826B6F94;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826b5120
	ctx.lr = 0x826B6F88;
	sub_826B5120(ctx, base);
	// stw r3,-27852(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27852, ctx.r3.u32);
	// bl 0x826b51e0
	ctx.lr = 0x826B6F90;
	sub_826B51E0(ctx, base);
	// lwz r11,-27852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27852);
loc_826B6F94:
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

__attribute__((alias("__imp__sub_826B6FBC"))) PPC_WEAK_FUNC(sub_826B6FBC);
PPC_FUNC_IMPL(__imp__sub_826B6FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B6FC0"))) PPC_WEAK_FUNC(sub_826B6FC0);
PPC_FUNC_IMPL(__imp__sub_826B6FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,48(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f12,-12(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lfs f0,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r11,-8(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r9,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r9.u32);
	// stw r10,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B6FF4"))) PPC_WEAK_FUNC(sub_826B6FF4);
PPC_FUNC_IMPL(__imp__sub_826B6FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B6FF8"))) PPC_WEAK_FUNC(sub_826B6FF8);
PPC_FUNC_IMPL(__imp__sub_826B6FF8) {
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
	// bl 0x826b5780
	ctx.lr = 0x826B7010;
	sub_826B5780(ctx, base);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b7024
	if (ctx.cr6.eq) goto loc_826B7024;
	// lfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,664(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 664, temp.u32);
loc_826B7024:
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

__attribute__((alias("__imp__sub_826B7038"))) PPC_WEAK_FUNC(sub_826B7038);
PPC_FUNC_IMPL(__imp__sub_826B7038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x826B7040;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,72
	ctx.r3.s64 = 72;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x822959a8
	ctx.lr = 0x826B7064;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b7090
	if (ctx.cr6.eq) goto loc_826B7090;
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82930da8
	ctx.lr = 0x826B7088;
	sub_82930DA8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_826B7090:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B709C"))) PPC_WEAK_FUNC(sub_826B709C);
PPC_FUNC_IMPL(__imp__sub_826B709C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B70A0"))) PPC_WEAK_FUNC(sub_826B70A0);
PPC_FUNC_IMPL(__imp__sub_826B70A0) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x826B70BC;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b7144
	if (ctx.cr6.eq) goto loc_826B7144;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32149
	ctx.r31.s64 = -2106916864;
	// addi r11,r7,-24024
	ctx.r11.s64 = ctx.r7.s64 + -24024;
	// addi r8,r5,-20912
	ctx.r8.s64 = ctx.r5.s64 + -20912;
	// addi r7,r4,-20920
	ctx.r7.s64 = ctx.r4.s64 + -20920;
	// addi r6,r10,14488
	ctx.r6.s64 = ctx.r10.s64 + 14488;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r5,r31,17048
	ctx.r5.s64 = ctx.r31.s64 + 17048;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,500
	ctx.r5.s64 = 500;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x826B7130;
	sub_82398460(ctx, base);
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
loc_826B7144:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_826B715C"))) PPC_WEAK_FUNC(sub_826B715C);
PPC_FUNC_IMPL(__imp__sub_826B715C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B7160"))) PPC_WEAK_FUNC(sub_826B7160);
PPC_FUNC_IMPL(__imp__sub_826B7160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x826B7168;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27856(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27856);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b7194
	if (!ctx.cr6.eq) goto loc_826B7194;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826b4ef0
	ctx.lr = 0x826B7188;
	sub_826B4EF0(ctx, base);
	// stw r3,-27856(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27856, ctx.r3.u32);
	// bl 0x826b4fb0
	ctx.lr = 0x826B7190;
	sub_826B4FB0(ctx, base);
	// lwz r10,-27856(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27856);
loc_826B7194:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-27816(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27816);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826b71b4
	if (ctx.cr6.eq) goto loc_826B71B4;
	// bl 0x822dc850
	ctx.lr = 0x826B71A8;
	sub_822DC850(ctx, base);
	// lwz r11,-27816(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27816);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x826b71bc
	goto loc_826B71BC;
loc_826B71B4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_826B71BC:
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
	// bne cr6,0x826b71ec
	if (!ctx.cr6.eq) goto loc_826B71EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x826B71DC;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x826B71E4;
	sub_822AADA8(ctx, base);
	// lwz r11,-27816(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27816);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_826B71EC:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b7218
	if (!ctx.cr6.eq) goto loc_826B7218;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x826B7208;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x826B7210;
	sub_82398640(ctx, base);
	// lwz r11,-27816(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27816);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_826B7218:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826b7250
	if (ctx.cr6.eq) goto loc_826B7250;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x826B7234;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x826b7250
	if (!ctx.cr6.eq) goto loc_826B7250;
	// lwz r3,-27816(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27816);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B7250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B7250:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B7258"))) PPC_WEAK_FUNC(sub_826B7258);
PPC_FUNC_IMPL(__imp__sub_826B7258) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B7260"))) PPC_WEAK_FUNC(sub_826B7260);
PPC_FUNC_IMPL(__imp__sub_826B7260) {
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
	// lwz r11,-27856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27856);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b72a4
	if (!ctx.cr6.eq) goto loc_826B72A4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826b4ef0
	ctx.lr = 0x826B7298;
	sub_826B4EF0(ctx, base);
	// stw r3,-27856(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27856, ctx.r3.u32);
	// bl 0x826b4fb0
	ctx.lr = 0x826B72A0;
	sub_826B4FB0(ctx, base);
	// lwz r11,-27856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27856);
loc_826B72A4:
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

__attribute__((alias("__imp__sub_826B72CC"))) PPC_WEAK_FUNC(sub_826B72CC);
PPC_FUNC_IMPL(__imp__sub_826B72CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B72D0"))) PPC_WEAK_FUNC(sub_826B72D0);
PPC_FUNC_IMPL(__imp__sub_826B72D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x826B72D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// lwz r3,492(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	// bl 0x826b78d8
	ctx.lr = 0x826B72F4;
	sub_826B78D8(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x826b73a0
	if (!ctx.cr6.eq) goto loc_826B73A0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x826b73a0
	if (!ctx.cr6.eq) goto loc_826B73A0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,18676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18676);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x826b7350
	if (ctx.cr6.gt) goto loc_826B7350;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bgt cr6,0x826b7350
	if (ctx.cr6.gt) goto loc_826B7350;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x826b7350
	if (ctx.cr6.gt) goto loc_826B7350;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f10,-18324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f10.f64 = double(temp.f32);
	// b 0x826b7358
	goto loc_826B7358;
loc_826B7350:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f10,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f10.f64 = double(temp.f32);
loc_826B7358:
	// fmuls f11,f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f9,136(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r10,r11,-18304
	ctx.r10.s64 = ctx.r11.s64 + -18304;
	// fmadds f8,f13,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f7,f12,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fmadds f5,f6,f10,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fneg f4,f5
	ctx.f4.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
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
	// lfsx f3,r10,r6
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f3.f64 = double(temp.f32);
	// fsel f2,f3,f0,f5
	ctx.f2.f64 = ctx.f3.f64 >= 0.0 ? ctx.f0.f64 : ctx.f5.f64;
	// stfs f2,136(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// b 0x826b7468
	goto loc_826B7468;
loc_826B73A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x826b73f0
	if (ctx.cr6.gt) goto loc_826B73F0;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x826b73f0
	if (ctx.cr6.gt) goto loc_826B73F0;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bgt cr6,0x826b73f0
	if (ctx.cr6.gt) goto loc_826B73F0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f10,-18324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f10.f64 = double(temp.f32);
	// b 0x826b73f8
	goto loc_826B73F8;
loc_826B73F0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f10,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f10.f64 = double(temp.f32);
loc_826B73F8:
	// fmuls f9,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f8,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f8.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r9,r11,-18304
	ctx.r9.s64 = ctx.r11.s64 + -18304;
	// lfs f13,-17168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17168);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f7,f11,f11,f9
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fmadds f6,f12,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fsqrts f5,f6
	ctx.f5.f64 = double(float(sqrt(ctx.f6.f64)));
	// fmadds f4,f5,f10,f8
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f8.f64));
	// stfs f4,152(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// fneg f3,f4
	ctx.f3.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// mfcr r8
	ctx.r8.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r8.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r8.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r8.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r8.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r8.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r8.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r8.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r8.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r8.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r8.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r8.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r8.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r8.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r8.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r8.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r8.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r8.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r8.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r8.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r8.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r8.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r8.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r8.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r8.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r8.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r8.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r8.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r8.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r8.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r8.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r8.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r7,r8,27,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// rlwinm r6,r8,30,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// lfsx f2,r9,r5
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f2.f64 = double(temp.f32);
	// fsel f1,f2,f0,f4
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f0.f64 : ctx.f4.f64;
	// fsubs f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// mfcr r4
	ctx.r4.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r4.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r4.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r4.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r4.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r4.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r4.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r4.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r4.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r4.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r4.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r4.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r4.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r4.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r4.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r4.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r4.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r4.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r4.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r4.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r4.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r4.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r4.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r4.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r4.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r4.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r4.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r4.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r4.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r4.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r4.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r4.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r11,r4,27,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x4;
	// rlwinm r10,r4,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x4;
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lfsx f11,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f11,f1,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f1.f64 : ctx.f13.f64;
	// stfs f10,152(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
loc_826B7468:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B7480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B7488"))) PPC_WEAK_FUNC(sub_826B7488);
PPC_FUNC_IMPL(__imp__sub_826B7488) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x826B74A4;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b752c
	if (ctx.cr6.eq) goto loc_826B752C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32149
	ctx.r31.s64 = -2106916864;
	// addi r11,r7,-23972
	ctx.r11.s64 = ctx.r7.s64 + -23972;
	// addi r8,r5,-20912
	ctx.r8.s64 = ctx.r5.s64 + -20912;
	// addi r7,r4,-20920
	ctx.r7.s64 = ctx.r4.s64 + -20920;
	// addi r6,r10,14488
	ctx.r6.s64 = ctx.r10.s64 + 14488;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r5,r31,18880
	ctx.r5.s64 = ctx.r31.s64 + 18880;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x826B7518;
	sub_82398460(ctx, base);
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
loc_826B752C:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_826B7544"))) PPC_WEAK_FUNC(sub_826B7544);
PPC_FUNC_IMPL(__imp__sub_826B7544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B7548"))) PPC_WEAK_FUNC(sub_826B7548);
PPC_FUNC_IMPL(__imp__sub_826B7548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x826B7550;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27852(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27852);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b757c
	if (!ctx.cr6.eq) goto loc_826B757C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826b5120
	ctx.lr = 0x826B7570;
	sub_826B5120(ctx, base);
	// stw r3,-27852(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27852, ctx.r3.u32);
	// bl 0x826b51e0
	ctx.lr = 0x826B7578;
	sub_826B51E0(ctx, base);
	// lwz r10,-27852(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27852);
loc_826B757C:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-27812(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27812);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826b759c
	if (ctx.cr6.eq) goto loc_826B759C;
	// bl 0x822dcaf8
	ctx.lr = 0x826B7590;
	sub_822DCAF8(ctx, base);
	// lwz r11,-27812(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27812);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x826b75a4
	goto loc_826B75A4;
loc_826B759C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_826B75A4:
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
	// bne cr6,0x826b75d4
	if (!ctx.cr6.eq) goto loc_826B75D4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x826B75C4;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x826B75CC;
	sub_822AADA8(ctx, base);
	// lwz r11,-27812(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27812);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_826B75D4:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b7600
	if (!ctx.cr6.eq) goto loc_826B7600;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x826B75F0;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x826B75F8;
	sub_82398640(ctx, base);
	// lwz r11,-27812(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27812);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_826B7600:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826b7638
	if (ctx.cr6.eq) goto loc_826B7638;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x826B761C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x826b7638
	if (!ctx.cr6.eq) goto loc_826B7638;
	// lwz r3,-27812(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27812);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B7638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B7638:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B7640"))) PPC_WEAK_FUNC(sub_826B7640);
PPC_FUNC_IMPL(__imp__sub_826B7640) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B7648"))) PPC_WEAK_FUNC(sub_826B7648);
PPC_FUNC_IMPL(__imp__sub_826B7648) {
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
	// lwz r11,-27852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27852);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b768c
	if (!ctx.cr6.eq) goto loc_826B768C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826b5120
	ctx.lr = 0x826B7680;
	sub_826B5120(ctx, base);
	// stw r3,-27852(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27852, ctx.r3.u32);
	// bl 0x826b51e0
	ctx.lr = 0x826B7688;
	sub_826B51E0(ctx, base);
	// lwz r11,-27852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27852);
loc_826B768C:
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

__attribute__((alias("__imp__sub_826B76B4"))) PPC_WEAK_FUNC(sub_826B76B4);
PPC_FUNC_IMPL(__imp__sub_826B76B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B76B8"))) PPC_WEAK_FUNC(sub_826B76B8);
PPC_FUNC_IMPL(__imp__sub_826B76B8) {
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
	// lfs f0,52(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f13,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f12,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r5,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r5.u32);
	// lfs f0,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r8.u32);
	// lfs f13,-15120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
	// stw r7,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r7.u32);
	// lfs f7,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// lfs f5,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// addi r3,r11,140
	ctx.r3.s64 = ctx.r11.s64 + 140;
	// lfs f4,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// lfs f3,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fadds f12,f3,f2
	ctx.f12.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// fmuls f2,f7,f0
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f3,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// fadds f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// lfs f9,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// fadds f7,f5,f4
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// lfs f1,-18108(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -18108);
	ctx.f1.f64 = double(temp.f32);
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f10,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmsubs f5,f12,f13,f2
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - ctx.f2.f64));
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f4,f7,f3
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f3.f64));
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmuls f2,f10,f0
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stw r4,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r4.u32);
	// fadds f6,f11,f9
	ctx.f6.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fmsubs f0,f4,f13,f2
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 - ctx.f2.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmsubs f3,f6,f13,f8
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 - ctx.f8.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
	// stw r9,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r9.u32);
	// bl 0x82382590
	ctx.lr = 0x826B779C;
	sub_82382590(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B77AC"))) PPC_WEAK_FUNC(sub_826B77AC);
PPC_FUNC_IMPL(__imp__sub_826B77AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B77B0"))) PPC_WEAK_FUNC(sub_826B77B0);
PPC_FUNC_IMPL(__imp__sub_826B77B0) {
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
	// bl 0x826b5780
	ctx.lr = 0x826B77C8;
	sub_826B5780(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b77dc
	if (ctx.cr6.eq) goto loc_826B77DC;
	// lfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,660(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 660, temp.u32);
loc_826B77DC:
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

__attribute__((alias("__imp__sub_826B77F0"))) PPC_WEAK_FUNC(sub_826B77F0);
PPC_FUNC_IMPL(__imp__sub_826B77F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x826B77F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,88
	ctx.r3.s64 = 88;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x822959a8
	ctx.lr = 0x826B781C;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b7848
	if (ctx.cr6.eq) goto loc_826B7848;
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82930ea8
	ctx.lr = 0x826B7840;
	sub_82930EA8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_826B7848:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B7854"))) PPC_WEAK_FUNC(sub_826B7854);
PPC_FUNC_IMPL(__imp__sub_826B7854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B7858"))) PPC_WEAK_FUNC(sub_826B7858);
PPC_FUNC_IMPL(__imp__sub_826B7858) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826b78c0
	if (ctx.cr6.eq) goto loc_826B78C0;
	// bl 0x822dcc88
	ctx.lr = 0x826B7878;
	sub_822DCC88(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b7898
	if (ctx.cr6.eq) goto loc_826B7898;
loc_826B7884:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x826b78a8
	if (ctx.cr6.eq) goto loc_826B78A8;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b7884
	if (!ctx.cr6.eq) goto loc_826B7884;
loc_826B7898:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826b78c0
	if (ctx.cr6.eq) goto loc_826B78C0;
loc_826B78A8:
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
loc_826B78C0:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_826B78D8"))) PPC_WEAK_FUNC(sub_826B78D8);
PPC_FUNC_IMPL(__imp__sub_826B78D8) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826b7940
	if (ctx.cr6.eq) goto loc_826B7940;
	// bl 0x822dcb48
	ctx.lr = 0x826B78F8;
	sub_822DCB48(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b7918
	if (ctx.cr6.eq) goto loc_826B7918;
loc_826B7904:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x826b7928
	if (ctx.cr6.eq) goto loc_826B7928;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b7904
	if (!ctx.cr6.eq) goto loc_826B7904;
loc_826B7918:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826b7940
	if (ctx.cr6.eq) goto loc_826B7940;
loc_826B7928:
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
loc_826B7940:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_826B7958"))) PPC_WEAK_FUNC(sub_826B7958);
PPC_FUNC_IMPL(__imp__sub_826B7958) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-25512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25512);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826b7990
	if (!ctx.cr6.eq) goto loc_826B7990;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82a04770
	ctx.lr = 0x826B7984;
	sub_82A04770(ctx, base);
	// stw r3,-25512(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25512, ctx.r3.u32);
	// bl 0x82a04820
	ctx.lr = 0x826B798C;
	sub_82A04820(ctx, base);
	// lwz r3,-25512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25512);
loc_826B7990:
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

__attribute__((alias("__imp__sub_826B79A4"))) PPC_WEAK_FUNC(sub_826B79A4);
PPC_FUNC_IMPL(__imp__sub_826B79A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B79A8"))) PPC_WEAK_FUNC(sub_826B79A8);
PPC_FUNC_IMPL(__imp__sub_826B79A8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 | ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b79ec
	if (ctx.cr6.eq) goto loc_826B79EC;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r3,-31264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// b 0x82421710
	sub_82421710(ctx, base);
	return;
loc_826B79EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B79F4"))) PPC_WEAK_FUNC(sub_826B79F4);
PPC_FUNC_IMPL(__imp__sub_826B79F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B79F8"))) PPC_WEAK_FUNC(sub_826B79F8);
PPC_FUNC_IMPL(__imp__sub_826B79F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x826B7A00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x826b7a68
	if (ctx.cr6.eq) goto loc_826B7A68;
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r28,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826b7a68
	if (!ctx.cr6.gt) goto loc_826B7A68;
	// li r30,0
	ctx.r30.s64 = 0;
loc_826B7A30:
	// lwz r11,552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b7a54
	if (ctx.cr6.eq) goto loc_826B7A54;
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826b7a54
	if (ctx.cr6.eq) goto loc_826B7A54;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x826b79f8
	ctx.lr = 0x826B7A54;
	sub_826B79F8(ctx, base);
loc_826B7A54:
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826b7a30
	if (ctx.cr6.lt) goto loc_826B7A30;
loc_826B7A68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B7A70"))) PPC_WEAK_FUNC(sub_826B7A70);
PPC_FUNC_IMPL(__imp__sub_826B7A70) {
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
	// bl 0x8229c920
	ctx.lr = 0x826B7A90;
	sub_8229C920(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,264
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 264, ctx.xer);
	// bge cr6,0x826b7ac0
	if (!ctx.cr6.lt) goto loc_826B7AC0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82396ef8
	ctx.lr = 0x826B7AA8;
	sub_82396EF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,340(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// bl 0x8265a3b0
	ctx.lr = 0x826B7AC0;
	sub_8265A3B0(ctx, base);
loc_826B7AC0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,387
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 387, ctx.xer);
	// bge cr6,0x826b7af4
	if (!ctx.cr6.lt) goto loc_826B7AF4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82396ef8
	ctx.lr = 0x826B7AD8;
	sub_82396EF8(ctx, base);
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826b7af4
	if (ctx.cr6.eq) goto loc_826B7AF4;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// oris r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 2097152;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
loc_826B7AF4:
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

__attribute__((alias("__imp__sub_826B7B0C"))) PPC_WEAK_FUNC(sub_826B7B0C);
PPC_FUNC_IMPL(__imp__sub_826B7B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B7B10"))) PPC_WEAK_FUNC(sub_826B7B10);
PPC_FUNC_IMPL(__imp__sub_826B7B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x826B7B18;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828b3fa0
	ctx.lr = 0x826B7B28;
	sub_828B3FA0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x826b7e18
	if (ctx.cr6.eq) goto loc_826B7E18;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,1020(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B7B48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b7e18
	if (ctx.cr6.eq) goto loc_826B7E18;
	// lwz r11,664(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 664);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b7b68
	if (!ctx.cr6.eq) goto loc_826B7B68;
	// lwz r11,668(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 668);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b7e18
	if (ctx.cr6.eq) goto loc_826B7E18;
loc_826B7B68:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r10,244(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 244);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r8,248(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 248);
	// addi r26,r11,32540
	ctx.r26.s64 = ctx.r11.s64 + 32540;
	// lwz r7,252(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 252);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// addi r28,r11,-15940
	ctx.r28.s64 = ctx.r11.s64 + -15940;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,17912(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17912);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lfs f31,552(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 552);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r30,r29,244
	ctx.r30.s64 = ctx.r29.s64 + 244;
	// lfs f0,-15120(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// bne cr6,0x826b7c0c
	if (!ctx.cr6.eq) goto loc_826B7C0C;
	// bl 0x8233e3e0
	ctx.lr = 0x826B7C0C;
	sub_8233E3E0(ctx, base);
loc_826B7C0C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// bl 0x82343a80
	ctx.lr = 0x826B7C20;
	sub_82343A80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b7c34
	if (ctx.cr6.eq) goto loc_826B7C34;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r28,r1,224
	ctx.r28.s64 = ctx.r1.s64 + 224;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
loc_826B7C34:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b7c84
	if (ctx.cr6.eq) goto loc_826B7C84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x822946f0
	ctx.lr = 0x826B7C4C;
	sub_822946F0(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// rlwinm r10,r3,2,18,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FFC;
	// addi r9,r11,32016
	ctx.r9.s64 = ctx.r11.s64 + 32016;
	// lwzx r27,r10,r9
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x826b7c84
	if (ctx.cr6.eq) goto loc_826B7C84;
loc_826B7C64:
	// addi r4,r27,16
	ctx.r4.s64 = ctx.r27.s64 + 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0328
	ctx.lr = 0x826B7C70;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826b7e44
	if (ctx.cr6.eq) goto loc_826B7E44;
	// lwz r27,12(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x826b7c64
	if (!ctx.cr6.eq) goto loc_826B7C64;
loc_826B7C84:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_826B7C8C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r10,1220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1220);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B7CA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,636(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 636);
	// lfs f0,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f13,660(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x826b7cdc
	if (!ctx.cr6.lt) goto loc_826B7CDC;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f0,660(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 660);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f13,660(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 660);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
loc_826B7CDC:
	// lfs f13,656(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	ctx.f13.f64 = double(temp.f32);
	// lis r28,-31883
	ctx.r28.s64 = -2089484288;
	// lfs f0,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// li r8,8415
	ctx.r8.s64 = 8415;
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-31264(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31264);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r27,1
	ctx.r27.s64 = 1;
	// fsubs f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x827723e0
	ctx.lr = 0x826B7D30;
	sub_827723E0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b7dd8
	if (ctx.cr6.eq) goto loc_826B7DD8;
	// lwz r11,636(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 636);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lfs f13,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f11,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f10,656(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	ctx.f10.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f0,21152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21152);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,-31264(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31264);
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8276feb0
	ctx.lr = 0x826B7D88;
	sub_8276FEB0(ctx, base);
	// lfs f7,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fcmpu cr6,f6,f7
	ctx.cr6.compare(ctx.f6.f64, ctx.f7.f64);
	// bne cr6,0x826b7db8
	if (!ctx.cr6.eq) goto loc_826B7DB8;
	// lfs f0,248(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x826b7db8
	if (!ctx.cr6.eq) goto loc_826B7DB8;
	// lfs f0,252(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x826b7dbc
	if (!ctx.cr6.gt) goto loc_826B7DBC;
loc_826B7DB8:
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_826B7DBC:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,-31264(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31264);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8276feb0
	ctx.lr = 0x826B7DD8;
	sub_8276FEB0(ctx, base);
loc_826B7DD8:
	// lwz r11,664(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 664);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b7dfc
	if (ctx.cr6.eq) goto loc_826B7DFC;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cntlzw r10,r27
	ctx.r10.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r8,448(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// rlwimi r8,r9,28,3,3
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 28) & 0x10000000) | (ctx.r8.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r8,448(r11)
	PPC_STORE_U32(ctx.r11.u32 + 448, ctx.r8.u32);
loc_826B7DFC:
	// lwz r11,668(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 668);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b7e18
	if (ctx.cr6.eq) goto loc_826B7E18;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,448(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// rlwimi r10,r27,28,3,3
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r27.u32, 28) & 0x10000000) | (ctx.r10.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r10,448(r11)
	PPC_STORE_U32(ctx.r11.u32 + 448, ctx.r10.u32);
loc_826B7E18:
	// bl 0x828b3ef8
	ctx.lr = 0x826B7E1C;
	sub_828B3EF8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,956(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 956);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B7E38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_826B7E44:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x826b7c8c
	goto loc_826B7C8C;
}

__attribute__((alias("__imp__sub_826B7E50"))) PPC_WEAK_FUNC(sub_826B7E50);
PPC_FUNC_IMPL(__imp__sub_826B7E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x826B7E58;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b7f3c
	if (ctx.cr6.eq) goto loc_826B7F3C;
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b7f3c
	if (!ctx.cr6.eq) goto loc_826B7F3C;
	// addi r30,r31,496
	ctx.r30.s64 = ctx.r31.s64 + 496;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826ca128
	ctx.lr = 0x826B7E88;
	sub_826CA128(ctx, base);
	// lwz r10,636(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// lfs f0,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// stb r11,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r11.u8);
	// addi r11,r31,244
	ctx.r11.s64 = ctx.r31.s64 + 244;
	// lfs f11,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,660(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 660);
	ctx.f9.f64 = double(temp.f32);
	// fmr f6,f11
	ctx.f6.f64 = ctx.f11.f64;
	// fmr f8,f9
	ctx.f8.f64 = ctx.f9.f64;
	// lfs f7,656(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 656);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f2,f13,f9
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fadds f5,f11,f7
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfs f5,104(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fsubs f3,f0,f8
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// stfs f3,80(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f1,f12,f8
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fsubs f4,f6,f7
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// bl 0x828b49f8
	ctx.lr = 0x826B7F28;
	sub_828B49F8(ctx, base);
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,-31264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31264);
	// lwz r3,288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// bl 0x828b5740
	ctx.lr = 0x826B7F3C;
	sub_828B5740(ctx, base);
loc_826B7F3C:
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826b7f7c
	if (!ctx.cr6.gt) goto loc_826B7F7C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_826B7F50:
	// lwz r11,552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826b7f68
	if (ctx.cr6.eq) goto loc_826B7F68;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82918b68
	ctx.lr = 0x826B7F68;
	sub_82918B68(ctx, base);
loc_826B7F68:
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826b7f50
	if (ctx.cr6.lt) goto loc_826B7F50;
loc_826B7F7C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B7F84"))) PPC_WEAK_FUNC(sub_826B7F84);
PPC_FUNC_IMPL(__imp__sub_826B7F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B7F88"))) PPC_WEAK_FUNC(sub_826B7F88);
PPC_FUNC_IMPL(__imp__sub_826B7F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x826B7F90;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r31,r28,496
	ctx.r31.s64 = ctx.r28.s64 + 496;
	// lwz r11,536(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 536);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b7fc0
	if (ctx.cr6.eq) goto loc_826B7FC0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x828b6380
	ctx.lr = 0x826B7FBC;
	sub_828B6380(ctx, base);
	// stw r26,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r26.u32);
loc_826B7FC0:
	// lwz r11,556(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 556);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826b8030
	if (!ctx.cr6.gt) goto loc_826B8030;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_826B7FD4:
	// lwz r11,552(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 552);
	// lwzx r30,r11,r29
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826b801c
	if (ctx.cr6.eq) goto loc_826B801C;
	// lwz r31,60(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826b801c
	if (ctx.cr6.eq) goto loc_826B801C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b8010
	if (ctx.cr6.eq) goto loc_826B8010;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x828b6380
	ctx.lr = 0x826B800C;
	sub_828B6380(ctx, base);
	// stw r26,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r26.u32);
loc_826B8010:
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r10,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r10.u32);
loc_826B801C:
	// lwz r11,556(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 556);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826b7fd4
	if (ctx.cr6.lt) goto loc_826B7FD4;
loc_826B8030:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B8038"))) PPC_WEAK_FUNC(sub_826B8038);
PPC_FUNC_IMPL(__imp__sub_826B8038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x826B8040;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// lwz r11,548(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 548);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826b8270
	if (ctx.cr6.eq) goto loc_826B8270;
	// lwz r11,556(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 556);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826b80e8
	if (!ctx.cr6.gt) goto loc_826B80E8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_826B8074:
	// lwz r11,552(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 552);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826b80d4
	if (ctx.cr6.eq) goto loc_826B80D4;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x826b80bc
	if (ctx.cr6.eq) goto loc_826B80BC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826b80c4
	if (!ctx.cr6.eq) goto loc_826B80C4;
	// b 0x826b80d4
	goto loc_826B80D4;
loc_826B80BC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826b80d4
	if (!ctx.cr6.eq) goto loc_826B80D4;
loc_826B80C4:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826c8750
	ctx.lr = 0x826B80D4;
	sub_826C8750(ctx, base);
loc_826B80D4:
	// lwz r11,556(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 556);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826b8074
	if (ctx.cr6.lt) goto loc_826B8074;
loc_826B80E8:
	// lwz r11,580(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 580);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826b8188
	if (!ctx.cr6.gt) goto loc_826B8188;
	// li r28,0
	ctx.r28.s64 = 0;
loc_826B80FC:
	// lwz r11,576(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 576);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// add r29,r28,r11
	ctx.r29.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// beq cr6,0x826b811c
	if (ctx.cr6.eq) goto loc_826B811C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b8124
	if (!ctx.cr6.eq) goto loc_826B8124;
	// b 0x826b8174
	goto loc_826B8174;
loc_826B811C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b8174
	if (!ctx.cr6.eq) goto loc_826B8174;
loc_826B8124:
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
	// ble cr6,0x826b8160
	if (!ctx.cr6.gt) goto loc_826B8160;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// li r5,8
	ctx.r5.s64 = 8;
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// li r4,4
	ctx.r4.s64 = 4;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x82294520
	ctx.lr = 0x826B8160;
	sub_82294520(ctx, base);
loc_826B8160:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826b8174
	if (ctx.cr0.eq) goto loc_826B8174;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_826B8174:
	// lwz r11,580(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 580);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,20
	ctx.r28.s64 = ctx.r28.s64 + 20;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826b80fc
	if (ctx.cr6.lt) goto loc_826B80FC;
loc_826B8188:
	// lwz r11,568(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 568);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826b8270
	if (!ctx.cr6.gt) goto loc_826B8270;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r25,-31885
	ctx.r25.s64 = -2089615360;
loc_826B81A0:
	// lwz r11,564(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 564);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// add r27,r26,r11
	ctx.r27.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// beq cr6,0x826b81c0
	if (ctx.cr6.eq) goto loc_826B81C0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b81c8
	if (!ctx.cr6.eq) goto loc_826B81C8;
	// b 0x826b825c
	goto loc_826B825C;
loc_826B81C0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b825c
	if (!ctx.cr6.eq) goto loc_826B825C;
loc_826B81C8:
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// ble cr6,0x826b8248
	if (!ctx.cr6.gt) goto loc_826B8248;
	// addi r10,r28,32
	ctx.r10.s64 = ctx.r28.s64 + 32;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bne cr6,0x826b820c
	if (!ctx.cr6.eq) goto loc_826B820C;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826b8248
	if (ctx.cr6.eq) goto loc_826B8248;
loc_826B820C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826b8228
	if (!ctx.cr6.eq) goto loc_826B8228;
	// bl 0x822900a0
	ctx.lr = 0x826B8224;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_826B8228:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B8244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_826B8248:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826b825c
	if (ctx.cr0.eq) goto loc_826B825C;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_826B825C:
	// lwz r11,568(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 568);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,20
	ctx.r26.s64 = ctx.r26.s64 + 20;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826b81a0
	if (ctx.cr6.lt) goto loc_826B81A0;
loc_826B8270:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B8278"))) PPC_WEAK_FUNC(sub_826B8278);
PPC_FUNC_IMPL(__imp__sub_826B8278) {
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
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x826ec140
	ctx.lr = 0x826B8298;
	sub_826EC140(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b7f88
	ctx.lr = 0x826B82A0;
	sub_826B7F88(ctx, base);
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

__attribute__((alias("__imp__sub_826B82B4"))) PPC_WEAK_FUNC(sub_826B82B4);
PPC_FUNC_IMPL(__imp__sub_826B82B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B82B8"))) PPC_WEAK_FUNC(sub_826B82B8);
PPC_FUNC_IMPL(__imp__sub_826B82B8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b8314
	if (ctx.cr6.eq) goto loc_826B8314;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// rlwinm r9,r10,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826b82f8
	if (!ctx.cr6.eq) goto loc_826B82F8;
	// rlwinm r10,r10,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826b8314
	if (ctx.cr6.eq) goto loc_826B8314;
loc_826B82F8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826b830c
	if (ctx.cr6.eq) goto loc_826B830C;
	// lwz r10,368(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826b8314
	if (!ctx.cr6.eq) goto loc_826B8314;
loc_826B830C:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x826b8318
	goto loc_826B8318;
loc_826B8314:
	// li r30,0
	ctx.r30.s64 = 0;
loc_826B8318:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8265a620
	ctx.lr = 0x826B8320;
	sub_8265A620(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826b83c8
	if (ctx.cr6.eq) goto loc_826B83C8;
	// lwz r10,636(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// lfs f0,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// addi r11,r31,244
	ctx.r11.s64 = ctx.r31.s64 + 244;
	// lfs f11,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// fmr f6,f11
	ctx.f6.f64 = ctx.f11.f64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f9,660(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 660);
	ctx.f9.f64 = double(temp.f32);
	// stb r9,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r9.u8);
	// fmr f8,f9
	ctx.f8.f64 = ctx.f9.f64;
	// lfs f7,656(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 656);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f2,f13,f9
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fadds f5,f11,f7
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfs f5,104(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// fsubs f3,f0,f8
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// stfs f3,80(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f1,f8,f12
	ctx.f1.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fsubs f4,f6,f7
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// bl 0x828b49f8
	ctx.lr = 0x826B83C8;
	sub_828B49F8(ctx, base);
loc_826B83C8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_826B83E0"))) PPC_WEAK_FUNC(sub_826B83E0);
PPC_FUNC_IMPL(__imp__sub_826B83E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,1012(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1012);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826B83F0"))) PPC_WEAK_FUNC(sub_826B83F0);
PPC_FUNC_IMPL(__imp__sub_826B83F0) {
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
	// lwz r11,636(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 636);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b8434
	if (ctx.cr6.eq) goto loc_826B8434;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f0,660(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lwz r10,636(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 636);
	// lfs f13,656(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 656);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// b 0x826b8490
	goto loc_826B8490;
loc_826B8434:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8260ea08
	ctx.lr = 0x826B8444;
	sub_8260EA08(ctx, base);
	// lfs f13,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f7,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,-28844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fmuls f4,f11,f0
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f3,f8,f0
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f2,0(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmuls f1,f4,f4
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fmadds f0,f3,f3,f1
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_826B8490:
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

__attribute__((alias("__imp__sub_826B84A8"))) PPC_WEAK_FUNC(sub_826B84A8);
PPC_FUNC_IMPL(__imp__sub_826B84A8) {
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
	// bl 0x82773218
	ctx.lr = 0x826B84C0;
	sub_82773218(ctx, base);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b84f0
	if (ctx.cr6.eq) goto loc_826B84F0;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f13,572(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 572);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x826b84e8
	if (ctx.cr6.eq) goto loc_826B84E8;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x826b84f8
	goto loc_826B84F8;
loc_826B84E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x826b84f8
	goto loc_826B84F8;
loc_826B84F0:
	// lwz r11,548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// rlwinm r11,r11,17,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
loc_826B84F8:
	// lwz r10,548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// rlwimi r10,r11,15,16,16
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 15) & 0x8000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r10,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_826B8518"))) PPC_WEAK_FUNC(sub_826B8518);
PPC_FUNC_IMPL(__imp__sub_826B8518) {
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
	// bl 0x82773370
	ctx.lr = 0x826B8530;
	sub_82773370(ctx, base);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b8560
	if (ctx.cr6.eq) goto loc_826B8560;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f13,572(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 572);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x826b8558
	if (ctx.cr6.eq) goto loc_826B8558;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x826b8568
	goto loc_826B8568;
loc_826B8558:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x826b8568
	goto loc_826B8568;
loc_826B8560:
	// lwz r11,548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// rlwinm r11,r11,17,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
loc_826B8568:
	// lwz r10,548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// rlwimi r10,r11,15,16,16
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 15) & 0x8000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r10,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_826B8588"))) PPC_WEAK_FUNC(sub_826B8588);
PPC_FUNC_IMPL(__imp__sub_826B8588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x826B8590;
	__savegprlr_24(ctx, base);
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lfs f0,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x826b86f8
	if (ctx.cr6.lt) goto loc_826B86F8;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x826b85d4
	if (ctx.cr6.eq) goto loc_826B85D4;
	// lwz r11,492(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 492);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b85dc
	if (!ctx.cr6.eq) goto loc_826B85DC;
loc_826B85D4:
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x826b85fc
	if (!ctx.cr6.eq) goto loc_826B85FC;
loc_826B85DC:
	// lwz r11,492(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 492);
	// li r3,1
	ctx.r3.s64 = 1;
	// oris r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 268435456;
	// stw r10,492(r29)
	PPC_STORE_U32(ctx.r29.u32 + 492, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_826B85FC:
	// lwz r10,600(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 600);
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f31.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x826b86f8
	if (!ctx.cr6.lt) goto loc_826B86F8;
	// lwz r27,556(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 556);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,600(r29)
	PPC_STORE_U32(ctx.r29.u32 + 600, ctx.r11.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x826b86f8
	if (!ctx.cr6.gt) goto loc_826B86F8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r26,-31883
	ctx.r26.s64 = -2089484288;
	// lfd f30,-17672(r11)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + -17672);
loc_826B8638:
	// lwz r11,552(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 552);
	// lwzx r31,r11,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,280(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826B8654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826b86e8
	if (!ctx.cr6.eq) goto loc_826B86E8;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x826b8674
	if (!ctx.cr6.eq) goto loc_826B8674;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826b86e8
	if (!ctx.cr6.eq) goto loc_826B86E8;
loc_826B8674:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826b8690
	if (!ctx.cr6.eq) goto loc_826B8690;
	// addi r4,r31,76
	ctx.r4.s64 = ctx.r31.s64 + 76;
	// lwz r3,-31264(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -31264);
	// bl 0x82421710
	ctx.lr = 0x826B868C;
	sub_82421710(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
loc_826B8690:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// ble cr6,0x826b86e8
	if (!ctx.cr6.gt) goto loc_826B86E8;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826b86e8
	if (ctx.cr6.eq) goto loc_826B86E8;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fsubs f1,f31,f12
	ctx.f1.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// bl 0x826b8588
	ctx.lr = 0x826B86E0;
	sub_826B8588(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826b85dc
	if (!ctx.cr6.eq) goto loc_826B85DC;
loc_826B86E8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x826b8638
	if (ctx.cr6.lt) goto loc_826B8638;
loc_826B86F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B870C"))) PPC_WEAK_FUNC(sub_826B870C);
PPC_FUNC_IMPL(__imp__sub_826B870C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B8710"))) PPC_WEAK_FUNC(sub_826B8710);
PPC_FUNC_IMPL(__imp__sub_826B8710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x826B8718;
	__savegprlr_19(ctx, base);
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r21,-31885
	ctx.r21.s64 = -2089615360;
	// lwz r9,556(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 556);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// addi r20,r11,11272
	ctx.r20.s64 = ctx.r11.s64 + 11272;
	// addi r19,r10,-19580
	ctx.r19.s64 = ctx.r10.s64 + -19580;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x826b88b4
	if (!ctx.cr6.gt) goto loc_826B88B4;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// lfd f31,-17672(r8)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r8.u32 + -17672);
	// addi r27,r9,-27584
	ctx.r27.s64 = ctx.r9.s64 + -27584;
	// addi r28,r10,-15880
	ctx.r28.s64 = ctx.r10.s64 + -15880;
	// addi r30,r11,-15928
	ctx.r30.s64 = ctx.r11.s64 + -15928;
loc_826B8770:
	// lwz r11,552(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 552);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bgt cr6,0x826b88a0
	if (ctx.cr6.gt) goto loc_826B88A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B87A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826b88a0
	if (!ctx.cr6.eq) goto loc_826B88A0;
	// lwz r11,552(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 552);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b87d0
	if (!ctx.cr6.eq) goto loc_826B87D0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822960c0
	ctx.lr = 0x826B87CC;
	sub_822960C0(ctx, base);
	// b 0x826b87f0
	goto loc_826B87F0;
loc_826B87D0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x826b87e8
	if (!ctx.cr6.eq) goto loc_826B87E8;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822960c0
	ctx.lr = 0x826B87E4;
	sub_822960C0(ctx, base);
	// b 0x826b87f0
	goto loc_826B87F0;
loc_826B87E8:
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x826B87F0;
	sub_8233E1A0(ctx, base);
loc_826B87F0:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826b8804
	if (!ctx.cr6.eq) goto loc_826B8804;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
loc_826B8804:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8232e868
	ctx.lr = 0x826B8810;
	sub_8232E868(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r6,136(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826b8824
	if (!ctx.cr6.eq) goto loc_826B8824;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
loc_826B8824:
	// lwz r3,28872(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28872);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B8848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r22,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r22.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826b886c
	if (ctx.cr6.eq) goto loc_826B886C;
	// stw r22,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r22.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82294520
	ctx.lr = 0x826B886C;
	sub_82294520(ctx, base);
loc_826B886C:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82294cc8
	ctx.lr = 0x826B8874;
	sub_82294CC8(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r22,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826b8898
	if (ctx.cr6.eq) goto loc_826B8898;
	// stw r22,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r22.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294520
	ctx.lr = 0x826B8898;
	sub_82294520(ctx, base);
loc_826B8898:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294cc8
	ctx.lr = 0x826B88A0;
	sub_82294CC8(ctx, base);
loc_826B88A0:
	// lwz r11,556(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 556);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826b8770
	if (ctx.cr6.lt) goto loc_826B8770;
loc_826B88B4:
	// lwz r11,548(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 548);
	// rlwinm r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826b8b74
	if (ctx.cr6.eq) goto loc_826B8B74;
	// lis r23,-31883
	ctx.r23.s64 = -2089484288;
	// lwz r9,-31264(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + -31264);
	// lwz r11,80(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x826b88e4
	if (ctx.cr6.gt) goto loc_826B88E4;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x826b88ec
	goto loc_826B88EC;
loc_826B88E4:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826B88EC:
	// lwz r11,1004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b8914
	if (ctx.cr6.eq) goto loc_826B8914;
loc_826B88F8:
	// lwz r10,492(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// rlwinm r9,r10,0,4,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r9,492(r11)
	PPC_STORE_U32(ctx.r11.u32 + 492, ctx.r9.u32);
	// lwz r11,608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b88f8
	if (!ctx.cr6.eq) goto loc_826B88F8;
	// lwz r9,-31264(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + -31264);
loc_826B8914:
	// lwz r11,80(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x826b8930
	if (ctx.cr6.gt) goto loc_826B8930;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x826b8938
	goto loc_826B8938;
loc_826B8930:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826B8938:
	// lwz r28,1004(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x826b8b74
	if (ctx.cr6.eq) goto loc_826B8B74;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r29,-31885
	ctx.r29.s64 = -2089615360;
	// addi r26,r10,-15768
	ctx.r26.s64 = ctx.r10.s64 + -15768;
	// lfs f31,-16504(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -16504);
	ctx.f31.f64 = double(temp.f32);
	// addi r27,r11,-15812
	ctx.r27.s64 = ctx.r11.s64 + -15812;
loc_826B8960:
	// lwz r11,548(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 548);
	// rlwinm r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b8b68
	if (!ctx.cr6.eq) goto loc_826B8B68;
	// lwz r11,80(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x826b8988
	if (ctx.cr6.gt) goto loc_826B8988;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x826b8990
	goto loc_826B8990;
loc_826B8988:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826B8990:
	// lwz r11,1004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b89ac
	if (ctx.cr6.eq) goto loc_826B89AC;
loc_826B899C:
	// stw r22,600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 600, ctx.r22.u32);
	// lwz r11,608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b899c
	if (!ctx.cr6.eq) goto loc_826B899C;
loc_826B89AC:
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826b8588
	ctx.lr = 0x826B89C4;
	sub_826B8588(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826b8b64
	if (!ctx.cr6.eq) goto loc_826B8B64;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x826b89e8
	if (!ctx.cr6.eq) goto loc_826B89E8;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822960c0
	ctx.lr = 0x826B89E4;
	sub_822960C0(ctx, base);
	// b 0x826b89f0
	goto loc_826B89F0;
loc_826B89E8:
	// addi r4,r24,44
	ctx.r4.s64 = ctx.r24.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x826B89F0;
	sub_8233E1A0(ctx, base);
loc_826B89F0:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r30,136(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne cr6,0x826b8a08
	if (!ctx.cr6.eq) goto loc_826B8A08;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
loc_826B8A08:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8232e868
	ctx.lr = 0x826B8A14;
	sub_8232E868(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r31,120(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bne cr6,0x826b8a2c
	if (!ctx.cr6.eq) goto loc_826B8A2C;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
loc_826B8A2C:
	// lwz r3,28872(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28872);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B8A50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826b8a98
	if (ctx.cr6.eq) goto loc_826B8A98;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826b8ac8
	if (ctx.cr6.eq) goto loc_826B8AC8;
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826b8a78
	if (!ctx.cr6.eq) goto loc_826B8A78;
	// bl 0x822900a0
	ctx.lr = 0x826B8A74;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
loc_826B8A78:
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
	ctx.lr = 0x826B8A94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_826B8A98:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826b8ac8
	if (ctx.cr6.eq) goto loc_826B8AC8;
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826b8ab4
	if (!ctx.cr6.eq) goto loc_826B8AB4;
	// bl 0x822900a0
	ctx.lr = 0x826B8AB0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
loc_826B8AB4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B8AC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B8AC8:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// stw r22,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r22.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r22,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// beq cr6,0x826b8b1c
	if (ctx.cr6.eq) goto loc_826B8B1C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826b8b4c
	if (ctx.cr6.eq) goto loc_826B8B4C;
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826b8afc
	if (!ctx.cr6.eq) goto loc_826B8AFC;
	// bl 0x822900a0
	ctx.lr = 0x826B8AF8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
loc_826B8AFC:
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
	ctx.lr = 0x826B8B18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_826B8B1C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826b8b4c
	if (ctx.cr6.eq) goto loc_826B8B4C;
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826b8b38
	if (!ctx.cr6.eq) goto loc_826B8B38;
	// bl 0x822900a0
	ctx.lr = 0x826B8B34;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
loc_826B8B38:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B8B4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B8B4C:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// stw r22,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r22.u32);
	// stw r22,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r22.u32);
	// cmpwi cr6,r25,8
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 8, ctx.xer);
	// stw r22,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r22.u32);
	// bgt cr6,0x826b8b74
	if (ctx.cr6.gt) goto loc_826B8B74;
loc_826B8B64:
	// lwz r9,-31264(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + -31264);
loc_826B8B68:
	// lwz r28,608(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 608);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x826b8960
	if (!ctx.cr6.eq) goto loc_826B8960;
loc_826B8B74:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B8B80"))) PPC_WEAK_FUNC(sub_826B8B80);
PPC_FUNC_IMPL(__imp__sub_826B8B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,556(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 556);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x826b8bb8
	if (!ctx.cr6.gt) goto loc_826B8BB8;
	// lwz r11,552(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 552);
loc_826B8B98:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,72(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x826b8c0c
	if (ctx.cr6.eq) goto loc_826B8C0C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826b8b98
	if (ctx.cr6.lt) goto loc_826B8B98;
loc_826B8BB8:
	// lfs f0,244(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lfs f13,244(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,252(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,252(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 252);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,248(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,248(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 248);
	ctx.f7.f64 = double(temp.f32);
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f12,f3
	ctx.f12.f64 = double(float(sqrt(ctx.f3.f64)));
	// bgt cr6,0x826b8c14
	if (ctx.cr6.gt) goto loc_826B8C14;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x826b8c1c
	goto loc_826B8C1C;
loc_826B8C0C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_826B8C14:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826B8C1C:
	// lwz r11,1004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b8c44
	if (ctx.cr6.eq) goto loc_826B8C44;
loc_826B8C28:
	// lwz r10,492(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// stw r7,600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 600, ctx.r7.u32);
	// rlwinm r9,r10,0,4,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r9,492(r11)
	PPC_STORE_U32(ctx.r11.u32 + 492, ctx.r9.u32);
	// lwz r11,608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b8c28
	if (!ctx.cr6.eq) goto loc_826B8C28;
loc_826B8C44:
	// lhz r11,548(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 548);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b8c64
	if (!ctx.cr6.eq) goto loc_826B8C64;
	// lhz r11,548(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 548);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826b8c68
	if (ctx.cr6.eq) goto loc_826B8C68;
loc_826B8C64:
	// li r7,1
	ctx.r7.s64 = 1;
loc_826B8C68:
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f0,-14296(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14296);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-14344(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -14344);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// b 0x826b8588
	sub_826B8588(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B8C84"))) PPC_WEAK_FUNC(sub_826B8C84);
PPC_FUNC_IMPL(__imp__sub_826B8C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B8C88"))) PPC_WEAK_FUNC(sub_826B8C88);
PPC_FUNC_IMPL(__imp__sub_826B8C88) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,556(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 556);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x826b8ccc
	if (!ctx.cr6.gt) goto loc_826B8CCC;
	// lwz r8,552(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 552);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_826B8CA0:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x826b8cbc
	if (ctx.cr6.eq) goto loc_826B8CBC;
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x826b8cd4
	if (ctx.cr6.eq) goto loc_826B8CD4;
loc_826B8CBC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826b8ca0
	if (ctx.cr6.lt) goto loc_826B8CA0;
loc_826B8CCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_826B8CD4:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B8CE0"))) PPC_WEAK_FUNC(sub_826B8CE0);
PPC_FUNC_IMPL(__imp__sub_826B8CE0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 100);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B8CF8"))) PPC_WEAK_FUNC(sub_826B8CF8);
PPC_FUNC_IMPL(__imp__sub_826B8CF8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 100);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826b8d14
	if (ctx.cr6.eq) goto loc_826B8D14;
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_826B8D14:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B8D1C"))) PPC_WEAK_FUNC(sub_826B8D1C);
PPC_FUNC_IMPL(__imp__sub_826B8D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B8D20"))) PPC_WEAK_FUNC(sub_826B8D20);
PPC_FUNC_IMPL(__imp__sub_826B8D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x826B8D28;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r28,-31883
	ctx.r28.s64 = -2089484288;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,556(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 556);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826b8dd0
	if (!ctx.cr6.gt) goto loc_826B8DD0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_826B8D4C:
	// lwz r11,552(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 552);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b8dbc
	if (ctx.cr6.eq) goto loc_826B8DBC;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826b8da4
	if (!ctx.cr6.eq) goto loc_826B8DA4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 | ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b8dbc
	if (ctx.cr6.eq) goto loc_826B8DBC;
	// lwz r3,-31264(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31264);
	// bl 0x82421710
	ctx.lr = 0x826B8D9C;
	sub_82421710(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b8dbc
	if (ctx.cr6.eq) goto loc_826B8DBC;
loc_826B8DA4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,956(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 956);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B8DBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B8DBC:
	// lwz r11,556(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 556);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826b8d4c
	if (ctx.cr6.lt) goto loc_826B8D4C;
loc_826B8DD0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x826b8e1c
	if (ctx.cr6.eq) goto loc_826B8E1C;
	// lwz r11,-31264(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x826b8df4
	if (ctx.cr6.gt) goto loc_826B8DF4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x826b8dfc
	goto loc_826B8DFC;
loc_826B8DF4:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826B8DFC:
	// lwz r10,684(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 684);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r9,r10,0,12,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// stw r9,684(r11)
	PPC_STORE_U32(ctx.r11.u32 + 684, ctx.r9.u32);
	// lwz r8,548(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 548);
	// oris r7,r8,64
	ctx.r7.u64 = ctx.r8.u64 | 4194304;
	// stw r7,548(r30)
	PPC_STORE_U32(ctx.r30.u32 + 548, ctx.r7.u32);
	// bl 0x826b7b10
	ctx.lr = 0x826B8E1C;
	sub_826B7B10(ctx, base);
loc_826B8E1C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8260d3f0
	ctx.lr = 0x826B8E28;
	sub_8260D3F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B8E30"))) PPC_WEAK_FUNC(sub_826B8E30);
PPC_FUNC_IMPL(__imp__sub_826B8E30) {
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
	// bl 0x8260d8a0
	ctx.lr = 0x826B8E48;
	sub_8260D8A0(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b8e64
	if (!ctx.cr6.eq) goto loc_826B8E64;
	// rlwinm r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b8ea4
	if (ctx.cr6.eq) goto loc_826B8EA4;
loc_826B8E64:
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
	// bgt cr6,0x826b8e84
	if (ctx.cr6.gt) goto loc_826B8E84;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x826b8e8c
	goto loc_826B8E8C;
loc_826B8E84:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826B8E8C:
	// lwz r10,684(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 684);
	// rlwinm r9,r10,0,12,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// stw r9,684(r11)
	PPC_STORE_U32(ctx.r11.u32 + 684, ctx.r9.u32);
	// lwz r8,548(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// oris r7,r8,64
	ctx.r7.u64 = ctx.r8.u64 | 4194304;
	// stw r7,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r7.u32);
loc_826B8EA4:
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

__attribute__((alias("__imp__sub_826B8EB8"))) PPC_WEAK_FUNC(sub_826B8EB8);
PPC_FUNC_IMPL(__imp__sub_826B8EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x826B8EC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,556(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 556);
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x826b8f20
	if (ctx.cr0.lt) goto loc_826B8F20;
	// addi r29,r28,552
	ctx.r29.s64 = ctx.r28.s64 + 552;
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_826B8EDC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826b8f14
	if (ctx.cr6.eq) goto loc_826B8F14;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lbz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826b8f14
	if (ctx.cr6.eq) goto loc_826B8F14;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232d180
	ctx.lr = 0x826B8F14;
	sub_8232D180(ctx, base);
loc_826B8F14:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// bge 0x826b8edc
	if (!ctx.cr0.lt) goto loc_826B8EDC;
loc_826B8F20:
	// lwz r11,556(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 556);
	// addi r3,r28,552
	ctx.r3.s64 = ctx.r28.s64 + 552;
	// lwz r10,560(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 560);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x826b8f44
	if (ctx.cr6.eq) goto loc_826B8F44;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82294520
	ctx.lr = 0x826B8F44;
	sub_82294520(ctx, base);
loc_826B8F44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B8F4C"))) PPC_WEAK_FUNC(sub_826B8F4C);
PPC_FUNC_IMPL(__imp__sub_826B8F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B8F50"))) PPC_WEAK_FUNC(sub_826B8F50);
PPC_FUNC_IMPL(__imp__sub_826B8F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x826B8F58;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 548);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826b8fd0
	if (ctx.cr6.eq) goto loc_826B8FD0;
	// addi r4,r30,256
	ctx.r4.s64 = ctx.r30.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823d7698
	ctx.lr = 0x826B8F84;
	sub_823D7698(ctx, base);
	// lfs f0,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f7.f64 = double(temp.f32);
	// lfs f4,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f3,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f12,f6
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmadds f1,f9,f4,f2
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fmadds f13,f5,f3,f1
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x826b905c
	if (!ctx.cr6.gt) goto loc_826B905C;
loc_826B8FD0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826b9018
	if (ctx.cr6.eq) goto loc_826B9018;
	// lfs f0,248(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f0,-17124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17124);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bgt cr6,0x826b905c
	if (ctx.cr6.gt) goto loc_826B905C;
loc_826B9018:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b905c
	if (!ctx.cr6.eq) goto loc_826B905C;
	// lwz r11,548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// rlwinm r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b905c
	if (!ctx.cr6.eq) goto loc_826B905C;
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b905c
	if (!ctx.cr6.eq) goto loc_826B905C;
	// rlwinm r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b905c
	if (!ctx.cr6.eq) goto loc_826B905C;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x826b9060
	if (!ctx.cr6.eq) goto loc_826B9060;
loc_826B905C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B9060:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B9068"))) PPC_WEAK_FUNC(sub_826B9068);
PPC_FUNC_IMPL(__imp__sub_826B9068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x826B9070;
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
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x826c8c38
	ctx.lr = 0x826B9088;
	sub_826C8C38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b90ac
	if (ctx.cr6.eq) goto loc_826B90AC;
	// lwz r11,684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	// lwz r10,684(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826b90ac
	if (!ctx.cr6.eq) goto loc_826B90AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_826B90AC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b8f50
	ctx.lr = 0x826B90BC;
	sub_826B8F50(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B90C4"))) PPC_WEAK_FUNC(sub_826B90C4);
PPC_FUNC_IMPL(__imp__sub_826B90C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B90C8"))) PPC_WEAK_FUNC(sub_826B90C8);
PPC_FUNC_IMPL(__imp__sub_826B90C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b90e4
	if (ctx.cr6.eq) goto loc_826B90E4;
	// lwz r11,588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	// rlwinm r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b9104
	if (!ctx.cr6.eq) goto loc_826B9104;
loc_826B90E4:
	// lwz r11,548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 548);
	// rlwinm r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b9104
	if (!ctx.cr6.eq) goto loc_826B9104;
	// lwz r11,636(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 636);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_826B9104:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B910C"))) PPC_WEAK_FUNC(sub_826B910C);
PPC_FUNC_IMPL(__imp__sub_826B910C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B9110"))) PPC_WEAK_FUNC(sub_826B9110);
PPC_FUNC_IMPL(__imp__sub_826B9110) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B9114"))) PPC_WEAK_FUNC(sub_826B9114);
PPC_FUNC_IMPL(__imp__sub_826B9114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B9118"))) PPC_WEAK_FUNC(sub_826B9118);
PPC_FUNC_IMPL(__imp__sub_826B9118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x826B9120;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826b924c
	if (ctx.cr6.eq) goto loc_826B924C;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x826b924c
	if (ctx.cr6.eq) goto loc_826B924C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x826b915c
	if (!ctx.cr6.eq) goto loc_826B915C;
	// bl 0x828b3fa0
	ctx.lr = 0x826B9150;
	sub_828B3FA0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x826b924c
	if (ctx.cr6.eq) goto loc_826B924C;
loc_826B915C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x826b916c
	if (!ctx.cr6.eq) goto loc_826B916C;
	// bl 0x823138f8
	ctx.lr = 0x826B9168;
	sub_823138F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_826B916C:
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bne cr6,0x826b918c
	if (!ctx.cr6.eq) goto loc_826B918C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r4,25104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25104);
loc_826B918C:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,28868(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// bl 0x822a93e8
	ctx.lr = 0x826B91B0;
	sub_822A93E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,292(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826B91D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,92
	ctx.r8.s64 = 92;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// li r7,96
	ctx.r7.s64 = 96;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,552
	ctx.r3.s64 = ctx.r30.s64 + 552;
	// stfiwx f13,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.f13.u32);
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.f11.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// lfs f10,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f10.f64 = double(temp.f32);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// lfs f9,252(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 252);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,244(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 244);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,248(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 248);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fsubs f3,f10,f9
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fmuls f2,f4,f4
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fsubs f1,f8,f7
	ctx.f1.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmadds f0,f3,f3,f2
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f2.f64));
	// fmadds f13,f1,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f0.f64));
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.f11.u32);
	// bl 0x825d52a8
	ctx.lr = 0x826B924C;
	sub_825D52A8(ctx, base);
loc_826B924C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B9254"))) PPC_WEAK_FUNC(sub_826B9254);
PPC_FUNC_IMPL(__imp__sub_826B9254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B9258"))) PPC_WEAK_FUNC(sub_826B9258);
PPC_FUNC_IMPL(__imp__sub_826B9258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x826B9260;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826b9380
	if (ctx.cr6.eq) goto loc_826B9380;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x826b9380
	if (ctx.cr6.eq) goto loc_826B9380;
	// lwz r9,568(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x826b92b0
	if (!ctx.cr6.gt) goto loc_826B92B0;
	// lwz r11,564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
loc_826B9294:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x826b92bc
	if (ctx.cr6.eq) goto loc_826B92BC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826b9294
	if (ctx.cr6.lt) goto loc_826B9294;
loc_826B92B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_826B92BC:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r28,40(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r3,-28720(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28720);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826b92f0
	if (!ctx.cr6.eq) goto loc_826B92F0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826023f0
	ctx.lr = 0x826B92E4;
	sub_826023F0(ctx, base);
	// stw r3,-28720(r30)
	PPC_STORE_U32(ctx.r30.u32 + -28720, ctx.r3.u32);
	// bl 0x826024b0
	ctx.lr = 0x826B92EC;
	sub_826024B0(ctx, base);
	// lwz r3,-28720(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28720);
loc_826B92F0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x826b9304
	if (!ctx.cr6.eq) goto loc_826B9304;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r4,25104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25104);
loc_826B9304:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,28868(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// bl 0x822a93e8
	ctx.lr = 0x826B9324;
	sub_822A93E8(ctx, base);
	// lfs f0,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,248(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,252(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 252);
	ctx.f10.f64 = double(temp.f32);
	// li r10,64
	ctx.r10.s64 = 64;
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,244(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 244);
	ctx.f7.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stw r31,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r31.u32);
	// stw r29,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,552
	ctx.r3.s64 = ctx.r31.s64 + 552;
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// fctiwz f1,f2
	ctx.f1.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f2.f64));
	// stfiwx f1,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.f1.u32);
	// bl 0x825d52a8
	ctx.lr = 0x826B9380;
	sub_825D52A8(ctx, base);
loc_826B9380:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B938C"))) PPC_WEAK_FUNC(sub_826B938C);
PPC_FUNC_IMPL(__imp__sub_826B938C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B9390"))) PPC_WEAK_FUNC(sub_826B9390);
PPC_FUNC_IMPL(__imp__sub_826B9390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x826B9398;
	__savegprlr_19(ctx, base);
	// stfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// lis r20,-31885
	ctx.r20.s64 = -2089615360;
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b941c
	if (!ctx.cr6.eq) goto loc_826B941C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,1020(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B93D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b941c
	if (ctx.cr6.eq) goto loc_826B941C;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// rlwinm r9,r10,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826b941c
	if (ctx.cr6.eq) goto loc_826B941C;
	// lwz r3,28872(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28872);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r8,r11,-15704
	ctx.r8.s64 = ctx.r11.s64 + -15704;
	// addi r6,r10,-15672
	ctx.r6.s64 = ctx.r10.s64 + -15672;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,64(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B941C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B941C:
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b9548
	if (ctx.cr6.eq) goto loc_826B9548;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826b9548
	if (ctx.cr6.eq) goto loc_826B9548;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b9548
	if (!ctx.cr6.eq) goto loc_826B9548;
	// bl 0x826b7958
	ctx.lr = 0x826B944C;
	sub_826B7958(ctx, base);
	// lwz r10,116(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b9470
	if (ctx.cr6.eq) goto loc_826B9470;
loc_826B945C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x826b9548
	if (ctx.cr6.eq) goto loc_826B9548;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b945c
	if (!ctx.cr6.eq) goto loc_826B945C;
loc_826B9470:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826b9548
	if (!ctx.cr6.eq) goto loc_826B9548;
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// rlwinm r9,r11,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826b9548
	if (ctx.cr6.eq) goto loc_826B9548;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bne cr6,0x826b94ac
	if (!ctx.cr6.eq) goto loc_826B94AC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-27584
	ctx.r4.s64 = ctx.r11.s64 + -27584;
	// bl 0x822960c0
	ctx.lr = 0x826B94A8;
	sub_822960C0(ctx, base);
	// b 0x826b94d0
	goto loc_826B94D0;
loc_826B94AC:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x826b94c8
	if (!ctx.cr6.eq) goto loc_826B94C8;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-19580
	ctx.r4.s64 = ctx.r11.s64 + -19580;
	// bl 0x822960c0
	ctx.lr = 0x826B94C4;
	sub_822960C0(ctx, base);
	// b 0x826b94d0
	goto loc_826B94D0;
loc_826B94C8:
	// addi r4,r10,44
	ctx.r4.s64 = ctx.r10.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x826B94D0;
	sub_8233E1A0(ctx, base);
loc_826B94D0:
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r31,r11,11272
	ctx.r31.s64 = ctx.r11.s64 + 11272;
	// bne cr6,0x826b94ec
	if (!ctx.cr6.eq) goto loc_826B94EC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_826B94EC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-15496
	ctx.r4.s64 = ctx.r11.s64 + -15496;
	// bl 0x8232e868
	ctx.lr = 0x826B94FC;
	sub_8232E868(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826b9510
	if (!ctx.cr6.eq) goto loc_826B9510;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_826B9510:
	// lwz r3,28872(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28872);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r11,-15544
	ctx.r8.s64 = ctx.r11.s64 + -15544;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826B9538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x826B9540;
	sub_82299080(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82299080
	ctx.lr = 0x826B9548;
	sub_82299080(ctx, base);
loc_826B9548:
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r29,r11,-15940
	ctx.r29.s64 = ctx.r11.s64 + -15940;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// lwz r11,17912(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17912);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b956c
	if (!ctx.cr6.eq) goto loc_826B956C;
	// bl 0x8233e3e0
	ctx.lr = 0x826B956C;
	sub_8233E3E0(ctx, base);
loc_826B956C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// bl 0x82343a80
	ctx.lr = 0x826B9580;
	sub_82343A80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b9594
	if (ctx.cr6.eq) goto loc_826B9594;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r29,r1,224
	ctx.r29.s64 = ctx.r1.s64 + 224;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
loc_826B9594:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b95e4
	if (ctx.cr6.eq) goto loc_826B95E4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x822946f0
	ctx.lr = 0x826B95AC;
	sub_822946F0(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// rlwinm r10,r3,2,18,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FFC;
	// addi r9,r11,32016
	ctx.r9.s64 = ctx.r11.s64 + 32016;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826b95e4
	if (ctx.cr6.eq) goto loc_826B95E4;
loc_826B95C4:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb0328
	ctx.lr = 0x826B95D0;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826b9684
	if (ctx.cr6.eq) goto loc_826B9684;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x826b95c4
	if (!ctx.cr6.eq) goto loc_826B95C4;
loc_826B95E4:
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
loc_826B95EC:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// ld r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r10,1220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1220);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B9608;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// lwz r8,1236(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1236);
	// lwz r31,40(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826B9628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r21,-31884
	ctx.r21.s64 = -2089549824;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x826b9638
	if (!ctx.cr6.eq) goto loc_826B9638;
	// lwz r31,25104(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 25104);
loc_826B9638:
	// lis r24,-31885
	ctx.r24.s64 = -2089615360;
	// ld r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,28868(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28868);
	// bl 0x822a93e8
	ctx.lr = 0x826B965C;
	sub_822A93E8(ctx, base);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x826b9690
	if (ctx.cr6.gt) goto loc_826B9690;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x826b9698
	goto loc_826B9698;
loc_826B9684:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// b 0x826b95ec
	goto loc_826B95EC;
loc_826B9690:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826B9698:
	// lwz r28,1004(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x826b9888
	if (ctx.cr6.eq) goto loc_826B9888;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r26,r11,-15352
	ctx.r26.s64 = ctx.r11.s64 + -15352;
	// lfs f30,-15120(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f30.f64 = double(temp.f32);
	// addi r25,r10,-15392
	ctx.r25.s64 = ctx.r10.s64 + -15392;
	// lfs f31,21152(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21152);
	ctx.f31.f64 = double(temp.f32);
loc_826B96C4:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x826b96ec
	if (ctx.cr6.eq) goto loc_826B96EC;
	// lwz r11,548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 548);
	// rlwinm r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b96ec
	if (!ctx.cr6.eq) goto loc_826B96EC;
	// lwz r11,548(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 548);
	// rlwinm r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826b987c
	if (ctx.cr6.eq) goto loc_826B987C;
loc_826B96EC:
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x826b987c
	if (ctx.cr6.eq) goto loc_826B987C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,1044(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B9710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826b987c
	if (!ctx.cr6.eq) goto loc_826B987C;
	// lfs f0,248(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r30,244
	ctx.r31.s64 = ctx.r30.s64 + 244;
	// lfs f13,248(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r28,244
	ctx.r29.s64 = ctx.r28.s64 + 244;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,252(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,244(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 244);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f5,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f31
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fmuls f3,f12,f12
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f2,f9,f9,f3
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fmadds f1,f6,f6,f2
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fcmpu cr6,f1,f4
	ctx.cr6.compare(ctx.f1.f64, ctx.f4.f64);
	// bge cr6,0x826b979c
	if (!ctx.cr6.lt) goto loc_826B979C;
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// rlwinm r9,r10,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826b979c
	if (ctx.cr6.eq) goto loc_826B979C;
	// lwz r3,28872(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28872);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B979C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B979C:
	// lwz r9,580(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 580);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x826b97cc
	if (!ctx.cr6.gt) goto loc_826B97CC;
	// lwz r11,576(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 576);
loc_826B97B0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x826b9898
	if (ctx.cr6.eq) goto loc_826B9898;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826b97b0
	if (ctx.cr6.lt) goto loc_826B97B0;
loc_826B97CC:
	// lwz r11,548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 548);
	// rlwinm r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b987c
	if (!ctx.cr6.eq) goto loc_826B987C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,1048(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B97F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b987c
	if (ctx.cr6.eq) goto loc_826B987C;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82918570
	ctx.lr = 0x826B9814;
	sub_82918570(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826b987c
	if (ctx.cr6.eq) goto loc_826B987C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r30,552
	ctx.r3.s64 = ctx.r30.s64 + 552;
	// bl 0x825d52a8
	ctx.lr = 0x826B9828;
	sub_825D52A8(ctx, base);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// lwz r10,1236(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1236);
	// lwz r31,40(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B9848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x826b9854
	if (!ctx.cr6.eq) goto loc_826B9854;
	// lwz r31,25104(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 25104);
loc_826B9854:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,28868(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28868);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822a93e8
	ctx.lr = 0x826B9874;
	sub_822A93E8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
loc_826B987C:
	// lwz r28,608(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 608);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x826b96c4
	if (!ctx.cr6.eq) goto loc_826B96C4;
loc_826B9888:
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
loc_826B9898:
	// lwz r11,548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 548);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826b98f8
	if (ctx.cr6.eq) goto loc_826B98F8;
	// addi r4,r30,256
	ctx.r4.s64 = ctx.r30.s64 + 256;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823d7698
	ctx.lr = 0x826B98B4;
	sub_823D7698(ctx, base);
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f4,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f3,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f12,f6
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmadds f1,f9,f4,f2
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fmadds f0,f5,f3,f1
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x826b97cc
	if (ctx.cr6.lt) goto loc_826B97CC;
loc_826B98F8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,1036(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B9918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826b987c
	goto loc_826B987C;
}

__attribute__((alias("__imp__sub_826B991C"))) PPC_WEAK_FUNC(sub_826B991C);
PPC_FUNC_IMPL(__imp__sub_826B991C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B9920"))) PPC_WEAK_FUNC(sub_826B9920);
PPC_FUNC_IMPL(__imp__sub_826B9920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x826B9928;
	__savegprlr_23(ctx, base);
	// stfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f29.u64);
	// stfd f30,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// std r5,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r5.u64);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// std r6,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r6.u64);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// lwz r3,288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// bl 0x825d5df8
	ctx.lr = 0x826B9974;
	sub_825D5DF8(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826b9af8
	if (!ctx.cr6.gt) goto loc_826B9AF8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f30,292(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,288(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f29.f64 = double(temp.f32);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// lfs f31,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
loc_826B9998:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lbz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826b9ae4
	if (ctx.cr6.eq) goto loc_826B9AE4;
	// lwz r28,44(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x826b9ae4
	if (ctx.cr6.eq) goto loc_826B9AE4;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt cr6,0x826b99d0
	if (ctx.cr6.lt) goto loc_826B99D0;
	// lwz r11,672(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 672);
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x826b9ae4
	if (!ctx.cr6.eq) goto loc_826B9AE4;
loc_826B99D0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x826b99e8
	if (ctx.cr6.eq) goto loc_826B99E8;
	// lwz r11,548(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 548);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b9ae4
	if (!ctx.cr6.eq) goto loc_826B9AE4;
loc_826B99E8:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// ble cr6,0x826b99fc
	if (!ctx.cr6.gt) goto loc_826B99FC;
	// lfs f0,644(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 644);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bgt cr6,0x826b9ae4
	if (ctx.cr6.gt) goto loc_826B9AE4;
loc_826B99FC:
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// ble cr6,0x826b9a10
	if (!ctx.cr6.gt) goto loc_826B9A10;
	// lfs f0,640(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 640);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bgt cr6,0x826b9ae4
	if (ctx.cr6.gt) goto loc_826B9AE4;
loc_826B9A10:
	// lfs f0,248(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f12,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f12.f64 = double(temp.f32);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f9,252(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 252);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// fsubs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f7,244(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 244);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f0,f6,f6,f4
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// ble cr6,0x826b9a98
	if (!ctx.cr6.gt) goto loc_826B9A98;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_826B9A54:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f10,248(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f8,252(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 252);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// lfs f6,244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f11
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f2,f5,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bge cr6,0x826b9b5c
	if (!ctx.cr6.lt) goto loc_826B9B5C;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826b9a54
	if (ctx.cr6.lt) goto loc_826B9A54;
loc_826B9A98:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// ble cr6,0x826b9ad0
	if (!ctx.cr6.gt) goto loc_826B9AD0;
	// addi r10,r29,32
	ctx.r10.s64 = ctx.r29.s64 + 32;
	// li r5,8
	ctx.r5.s64 = 8;
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// li r4,4
	ctx.r4.s64 = 4;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// bl 0x82294520
	ctx.lr = 0x826B9AD0;
	sub_82294520(ctx, base);
loc_826B9AD0:
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_826B9AD4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826b9ae4
	if (ctx.cr0.eq) goto loc_826B9AE4;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_826B9AE4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826b9998
	if (ctx.cr6.lt) goto loc_826B9998;
loc_826B9AF8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x826b9b0c
	if (ctx.cr6.gt) goto loc_826B9B0C;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_826B9B0C:
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826b9b44
	if (ctx.cr6.eq) goto loc_826B9B44;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826b9b30
	if (!ctx.cr6.eq) goto loc_826B9B30;
	// bl 0x822900a0
	ctx.lr = 0x826B9B2C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_826B9B30:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B9B44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B9B44:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_826B9B5C:
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294498
	ctx.lr = 0x826B9B78;
	sub_82294498(ctx, base);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x826b9ad4
	goto loc_826B9AD4;
}

__attribute__((alias("__imp__sub_826B9B80"))) PPC_WEAK_FUNC(sub_826B9B80);
PPC_FUNC_IMPL(__imp__sub_826B9B80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 556);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_826B9B90:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// ble 0x826b9bf4
	if (!ctx.cr0.gt) goto loc_826B9BF4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826B9BA0:
	// lwz r10,552(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 552);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,64(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// lwz r4,64(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x826b9bdc
	if (!ctx.cr6.gt) goto loc_826B9BDC;
	// lwz r10,552(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 552);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r5,552(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 552);
	// stwx r6,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r6.u32);
loc_826B9BDC:
	// lwz r10,556(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 556);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826b9ba0
	if (ctx.cr6.lt) goto loc_826B9BA0;
loc_826B9BF4:
	// lwz r11,556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 556);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826b9b90
	if (ctx.cr6.lt) goto loc_826B9B90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B9C08"))) PPC_WEAK_FUNC(sub_826B9C08);
PPC_FUNC_IMPL(__imp__sub_826B9C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x826B9C10;
	__savegprlr_22(ctx, base);
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f29.u64);
	// stfd f30,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 548);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826b9ea8
	if (ctx.cr6.eq) goto loc_826B9EA8;
	// rlwinm r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b9ea8
	if (!ctx.cr6.eq) goto loc_826B9EA8;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r31,40(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lwz r10,1236(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1236);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B9C68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r22,-31884
	ctx.r22.s64 = -2089549824;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x826b9c78
	if (!ctx.cr6.eq) goto loc_826B9C78;
	// lwz r31,25104(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 25104);
loc_826B9C78:
	// lis r25,-31885
	ctx.r25.s64 = -2089615360;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,28868(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28868);
	// bl 0x822a93e8
	ctx.lr = 0x826B9C9C;
	sub_822A93E8(ctx, base);
	// lis r24,-31883
	ctx.r24.s64 = -2089484288;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// lwz r11,-31264(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x826b9cc4
	if (ctx.cr6.gt) goto loc_826B9CC4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x826b9ccc
	goto loc_826B9CCC;
loc_826B9CC4:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826B9CCC:
	// lwz r28,1004(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x826b9ea8
	if (ctx.cr6.eq) goto loc_826B9EA8;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// li r23,-1
	ctx.r23.s64 = -1;
	// lfs f30,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,-17124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17124);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,-15120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
loc_826B9CF4:
	// lwz r11,548(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 548);
	// stfs f31,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r23,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// stfs f30,144(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// stw r29,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r29.u32);
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// stw r23,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r23.u32);
	// stw r29,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r29.u32);
	// beq cr6,0x826b9e9c
	if (ctx.cr6.eq) goto loc_826B9E9C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,1048(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B9D6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b9e9c
	if (ctx.cr6.eq) goto loc_826B9E9C;
	// lfs f0,248(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r30,244
	ctx.r5.s64 = ctx.r30.s64 + 244;
	// lfs f13,248(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r28,244
	ctx.r31.s64 = ctx.r28.s64 + 244;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,252(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,244(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 244);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f29
	ctx.cr6.compare(ctx.f3.f64, ctx.f29.f64);
	// ble cr6,0x826b9e9c
	if (!ctx.cr6.gt) goto loc_826B9E9C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826b8c88
	ctx.lr = 0x826B9DC0;
	sub_826B8C88(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826b9e9c
	if (!ctx.cr6.eq) goto loc_826B9E9C;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r8,8838
	ctx.r8.s64 = 8838;
	// lwz r3,-31264(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -31264);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x827723e0
	ctx.lr = 0x826B9DF8;
	sub_827723E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b9e9c
	if (ctx.cr6.eq) goto loc_826B9E9C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,1028(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B9E18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826b9e9c
	if (!ctx.cr6.eq) goto loc_826B9E9C;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82918570
	ctx.lr = 0x826B9E34;
	sub_82918570(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826b9e9c
	if (ctx.cr6.eq) goto loc_826B9E9C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,552
	ctx.r3.s64 = ctx.r30.s64 + 552;
	// bl 0x825d52a8
	ctx.lr = 0x826B9E48;
	sub_825D52A8(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// lwz r10,1236(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1236);
	// lwz r31,40(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B9E68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x826b9e74
	if (!ctx.cr6.eq) goto loc_826B9E74;
	// lwz r31,25104(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 25104);
loc_826B9E74:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,28868(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28868);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822a93e8
	ctx.lr = 0x826B9E94;
	sub_822A93E8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
loc_826B9E9C:
	// lwz r28,608(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 608);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x826b9cf4
	if (!ctx.cr6.eq) goto loc_826B9CF4;
loc_826B9EA8:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f30,-104(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B9EBC"))) PPC_WEAK_FUNC(sub_826B9EBC);
PPC_FUNC_IMPL(__imp__sub_826B9EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B9EC0"))) PPC_WEAK_FUNC(sub_826B9EC0);
PPC_FUNC_IMPL(__imp__sub_826B9EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b4
	ctx.lr = 0x826B9EC8;
	__savegprlr_15(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r16,r5
	ctx.r16.u64 = ctx.r5.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// lwz r3,-28724(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28724);
	// lwz r29,40(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826b9f10
	if (!ctx.cr6.eq) goto loc_826B9F10;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826021c0
	ctx.lr = 0x826B9F04;
	sub_826021C0(ctx, base);
	// stw r3,-28724(r30)
	PPC_STORE_U32(ctx.r30.u32 + -28724, ctx.r3.u32);
	// bl 0x82602280
	ctx.lr = 0x826B9F0C;
	sub_82602280(ctx, base);
	// lwz r3,-28724(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28724);
loc_826B9F10:
	// lis r17,-31884
	ctx.r17.s64 = -2089549824;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x826b9f24
	if (!ctx.cr6.eq) goto loc_826B9F24;
	// lwz r4,25104(r17)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25104);
loc_826B9F24:
	// lis r18,-31885
	ctx.r18.s64 = -2089615360;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,28868(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28868);
	// bl 0x822a93e8
	ctx.lr = 0x826B9F44;
	sub_822A93E8(ctx, base);
	// lwz r11,548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	// li r15,1
	ctx.r15.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b9f6c
	if (!ctx.cr6.eq) goto loc_826B9F6C;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// bne cr6,0x826b9f70
	if (!ctx.cr6.eq) goto loc_826B9F70;
loc_826B9F6C:
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
loc_826B9F70:
	// lwz r9,684(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	// rlwimi r11,r10,22,9,9
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 22) & 0x400000) | (ctx.r11.u64 & 0xFFFFFFFFFFBFFFFF);
	// stw r11,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826ba1ac
	if (ctx.cr6.eq) goto loc_826BA1AC;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823824d8
	ctx.lr = 0x826B9F8C;
	sub_823824D8(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826ba1ac
	if (!ctx.cr6.eq) goto loc_826BA1AC;
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r20,-31882
	ctx.r20.s64 = -2089418752;
	// li r22,92
	ctx.r22.s64 = 92;
	// li r23,96
	ctx.r23.s64 = 96;
	// li r24,64
	ctx.r24.s64 = 64;
	// addi r19,r11,32016
	ctx.r19.s64 = ctx.r11.s64 + 32016;
	// addi r21,r10,-18840
	ctx.r21.s64 = ctx.r10.s64 + -18840;
loc_826B9FB8:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x826c8c38
	ctx.lr = 0x826B9FC0;
	sub_826C8C38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826ba198
	if (ctx.cr6.eq) goto loc_826BA198;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x826ba198
	if (ctx.cr6.eq) goto loc_826BA198;
	// lwz r11,684(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 684);
	// lwz r10,684(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826ba198
	if (!ctx.cr6.eq) goto loc_826BA198;
	// lwz r11,548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// rlwinm r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826ba004
	if (!ctx.cr6.eq) goto loc_826BA004;
	// lwz r11,548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 548);
	// rlwinm r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826ba198
	if (ctx.cr6.eq) goto loc_826BA198;
loc_826BA004:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_826BA008:
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ba020
	if (ctx.cr6.eq) goto loc_826BA020;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826ba008
	if (!ctx.cr6.eq) goto loc_826BA008;
loc_826BA020:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229bf58
	ctx.lr = 0x826BA028;
	sub_8229BF58(ctx, base);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x826ba198
	if (!ctx.cr6.eq) goto loc_826BA198;
	// lwz r11,17912(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17912);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826ba048
	if (!ctx.cr6.eq) goto loc_826BA048;
	// bl 0x8233e3e0
	ctx.lr = 0x826BA048;
	sub_8233E3E0(ctx, base);
loc_826BA048:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82343a80
	ctx.lr = 0x826BA05C;
	sub_82343A80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826ba070
	if (ctx.cr6.eq) goto loc_826BA070;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r28,r1,160
	ctx.r28.s64 = ctx.r1.s64 + 160;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_826BA070:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826ba0b8
	if (ctx.cr6.eq) goto loc_826BA0B8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x822946f0
	ctx.lr = 0x826BA088;
	sub_822946F0(ctx, base);
	// rlwinm r11,r3,2,18,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FFC;
	// lwzx r29,r11,r19
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826ba0b8
	if (ctx.cr6.eq) goto loc_826BA0B8;
loc_826BA098:
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0328
	ctx.lr = 0x826BA0A4;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826ba23c
	if (ctx.cr6.eq) goto loc_826BA23C;
	// lwz r29,12(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x826ba098
	if (!ctx.cr6.eq) goto loc_826BA098;
loc_826BA0B8:
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
loc_826BA0C0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r10,1220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1220);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826BA0DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,r27,r22
	PPC_STORE_U32(ctx.r27.u32 + ctx.r22.u32, ctx.f13.u32);
	// lfs f12,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,r27,r23
	PPC_STORE_U32(ctx.r27.u32 + ctx.r23.u32, ctx.f11.u32);
	// stw r31,68(r27)
	PPC_STORE_U32(ctx.r27.u32 + 68, ctx.r31.u32);
	// lfs f10,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f10.f64 = double(temp.f32);
	// stw r30,72(r27)
	PPC_STORE_U32(ctx.r27.u32 + 72, ctx.r30.u32);
	// lfs f9,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f8,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f8.f64 = double(temp.f32);
	// addi r3,r31,552
	ctx.r3.s64 = ctx.r31.s64 + 552;
	// lfs f7,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fsubs f3,f10,f9
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fmuls f2,f4,f4
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fsubs f1,f8,f7
	ctx.f1.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmadds f0,f3,f3,f2
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f2.f64));
	// fmadds f13,f1,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f0.f64));
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,r27,r24
	PPC_STORE_U32(ctx.r27.u32 + ctx.r24.u32, ctx.f11.u32);
	// bl 0x825d52a8
	ctx.lr = 0x826BA144;
	sub_825D52A8(ctx, base);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// lwz r8,1236(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1236);
	// lwz r30,40(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826BA164;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x826ba170
	if (!ctx.cr6.eq) goto loc_826BA170;
	// lwz r30,25104(r17)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25104);
loc_826BA170:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,28868(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28868);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822a93e8
	ctx.lr = 0x826BA190;
	sub_822A93E8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
loc_826BA198:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82382368
	ctx.lr = 0x826BA1A0;
	sub_82382368(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b9fb8
	if (ctx.cr6.eq) goto loc_826B9FB8;
loc_826BA1AC:
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b9390
	ctx.lr = 0x826BA1BC;
	sub_826B9390(ctx, base);
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826ba234
	if (!ctx.cr6.gt) goto loc_826BA234;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_826BA1D0:
	// lwz r10,552(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826ba220
	if (ctx.cr6.eq) goto loc_826BA220;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r7,100(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// rlwinm r6,r7,0,28,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x826ba220
	if (ctx.cr6.eq) goto loc_826BA220;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r7,68(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// lwz r6,72(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r5,636(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 636);
	// lfs f0,252(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,252(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,656(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 656);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x826ba220
	if (!ctx.cr6.lt) goto loc_826BA220;
	// stb r15,108(r9)
	PPC_STORE_U8(ctx.r9.u32 + 108, ctx.r15.u8);
loc_826BA220:
	// lwz r10,556(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826ba1d0
	if (ctx.cr6.lt) goto loc_826BA1D0;
loc_826BA234:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x82cb1104
	__restgprlr_15(ctx, base);
	return;
loc_826BA23C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x826ba0c0
	goto loc_826BA0C0;
}

