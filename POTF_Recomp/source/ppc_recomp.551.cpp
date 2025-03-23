#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_831B4B48"))) PPC_WEAK_FUNC(sub_831B4B48);
PPC_FUNC_IMPL(__imp__sub_831B4B48) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r3,1029
	ctx.r3.s64 = 67436544;
	// ori r4,r4,515
	ctx.r4.u64 = ctx.r4.u64 | 515;
	// ori r3,r3,1543
	ctx.r3.u64 = ctx.r3.u64 | 1543;
	// stw r4,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r4.u32);
	// lis r4,3085
	ctx.r4.s64 = 202178560;
	// stw r3,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r3.u32);
	// lis r3,4113
	ctx.r3.s64 = 269549568;
	// ori r4,r4,3599
	ctx.r4.u64 = ctx.r4.u64 | 3599;
	// lis r31,2057
	ctx.r31.s64 = 134807552;
	// ori r3,r3,4627
	ctx.r3.u64 = ctx.r3.u64 | 4627;
	// stw r4,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r4.u32);
	// ori r31,r31,2571
	ctx.r31.u64 = ctx.r31.u64 | 2571;
	// lis r4,6169
	ctx.r4.s64 = 404291584;
	// stw r3,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r3.u32);
	// lis r3,7197
	ctx.r3.s64 = 471662592;
	// stw r31,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r31.u32);
	// ori r4,r4,6683
	ctx.r4.u64 = ctx.r4.u64 | 6683;
	// lis r31,5141
	ctx.r31.s64 = 336920576;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r4.u32);
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// ori r3,r3,7711
	ctx.r3.u64 = ctx.r3.u64 | 7711;
	// addi r7,r1,-48
	ctx.r7.s64 = ctx.r1.s64 + -48;
	// addi r5,r1,-48
	ctx.r5.s64 = ctx.r1.s64 + -48;
	// stw r3,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r3.u32);
	// ori r31,r31,5655
	ctx.r31.u64 = ctx.r31.u64 | 5655;
	// addi r4,r1,-48
	ctx.r4.s64 = ctx.r1.s64 + -48;
	// addi r3,r1,-48
	ctx.r3.s64 = ctx.r1.s64 + -48;
	// stw r31,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r31.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r9,r8,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwzx r8,r6,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// lwzx r7,r11,r4
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// stw r7,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r7.u32);
	// stw r8,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r8.u32);
	// stw r10,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r10.u32);
	// stw r9,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r9.u32);
	// lvx128 v1,r0,r3
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B4BFC"))) PPC_WEAK_FUNC(sub_831B4BFC);
PPC_FUNC_IMPL(__imp__sub_831B4BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831B4C00"))) PPC_WEAK_FUNC(sub_831B4C00);
PPC_FUNC_IMPL(__imp__sub_831B4C00) {
	PPC_FUNC_PROLOGUE();
	// vspltisw128 v63,1
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x1)));
	// lvx128 v62,r0,r3
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrsqrtefp128 v0,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v62.f32))));
	// vcsxwfp128 v13,v63,1
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v63.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v62,v13
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v10,v11,v12,v13
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r3
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v60,v61,v0
	_mm_store_ps(ctx.v60.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v60,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B4C34"))) PPC_WEAK_FUNC(sub_831B4C34);
PPC_FUNC_IMPL(__imp__sub_831B4C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831B4C38"))) PPC_WEAK_FUNC(sub_831B4C38);
PPC_FUNC_IMPL(__imp__sub_831B4C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r10,r11,-29440
	ctx.r10.s64 = ctx.r11.s64 + -29440;
	// lvx128 v1,r0,r10
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B4C48"))) PPC_WEAK_FUNC(sub_831B4C48);
PPC_FUNC_IMPL(__imp__sub_831B4C48) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v63,r0,r3
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r5
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaxfp128 v61,v62,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v61.f32, _mm_max_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32)));
	// lvx128 v60,r0,r4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vminfp128 v1,v60,v61
	_mm_store_ps(ctx.v1.f32, _mm_min_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v61.f32)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B4C60"))) PPC_WEAK_FUNC(sub_831B4C60);
PPC_FUNC_IMPL(__imp__sub_831B4C60) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lvx128 v63,r0,r4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lvx128 v62,r0,r3
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r3,1029
	ctx.r3.s64 = 67436544;
	// ori r4,r4,515
	ctx.r4.u64 = ctx.r4.u64 | 515;
	// ori r3,r3,1543
	ctx.r3.u64 = ctx.r3.u64 | 1543;
	// stw r4,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r4.u32);
	// lis r4,3085
	ctx.r4.s64 = 202178560;
	// stw r3,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r3.u32);
	// lis r3,4113
	ctx.r3.s64 = 269549568;
	// ori r4,r4,3599
	ctx.r4.u64 = ctx.r4.u64 | 3599;
	// lis r31,2057
	ctx.r31.s64 = 134807552;
	// ori r3,r3,4627
	ctx.r3.u64 = ctx.r3.u64 | 4627;
	// stw r4,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r4.u32);
	// ori r31,r31,2571
	ctx.r31.u64 = ctx.r31.u64 | 2571;
	// lis r4,6169
	ctx.r4.s64 = 404291584;
	// stw r3,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r3.u32);
	// lis r3,7197
	ctx.r3.s64 = 471662592;
	// stw r31,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r31.u32);
	// ori r4,r4,6683
	ctx.r4.u64 = ctx.r4.u64 | 6683;
	// lis r31,5141
	ctx.r31.s64 = 336920576;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r4.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// ori r3,r3,7711
	ctx.r3.u64 = ctx.r3.u64 | 7711;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-48
	ctx.r7.s64 = ctx.r1.s64 + -48;
	// stw r3,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r3.u32);
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,-48
	ctx.r5.s64 = ctx.r1.s64 + -48;
	// ori r31,r31,5655
	ctx.r31.u64 = ctx.r31.u64 | 5655;
	// addi r4,r1,-48
	ctx.r4.s64 = ctx.r1.s64 + -48;
	// addi r3,r1,-48
	ctx.r3.s64 = ctx.r1.s64 + -48;
	// stw r31,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r31.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r9,r8,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwzx r8,r6,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// lwzx r7,r11,r4
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// stw r7,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r7.u32);
	// stw r8,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r8.u32);
	// stw r10,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r10.u32);
	// stw r9,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r9.u32);
	// lvx128 v0,r0,r3
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v1,v62,v63,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B4D20"))) PPC_WEAK_FUNC(sub_831B4D20);
PPC_FUNC_IMPL(__imp__sub_831B4D20) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v63,r0,r4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r3
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v61,v63,24
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xE7));
	// vpermwi128 v60,v62,24
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xE7));
	// vcmpequw128. v59,v60,v61
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v59.f32), 0xF);
	// mfocrf r11,2
	ctx.r11.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B4D44"))) PPC_WEAK_FUNC(sub_831B4D44);
PPC_FUNC_IMPL(__imp__sub_831B4D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831B4D48"))) PPC_WEAK_FUNC(sub_831B4D48);
PPC_FUNC_IMPL(__imp__sub_831B4D48) {
	PPC_FUNC_PROLOGUE();
	// vcmpgtfp128. v63,v1,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v63.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v2.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v63.f32), 0xF);
	// mfocrf r11,2
	ctx.r11.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// rlwinm r3,r11,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B4D58"))) PPC_WEAK_FUNC(sub_831B4D58);
PPC_FUNC_IMPL(__imp__sub_831B4D58) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v63,r0,r6
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r4
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r3
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum3fp128 v60,v62,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v60.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// vmsum3fp128 v1,v61,v63
	_mm_store_ps(ctx.v1.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// lvx128 v59,r0,r5
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum3fp128 v58,v59,v63
	_mm_store_ps(ctx.v58.f32, _mm_dp_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// vrlimi128 v1,v60,4,0
	_mm_store_ps(ctx.v1.f32, _mm_blend_ps(_mm_load_ps(ctx.v1.f32), _mm_permute_ps(_mm_load_ps(ctx.v60.f32), 228), 4));
	// vrlimi128 v1,v58,2,0
	_mm_store_ps(ctx.v1.f32, _mm_blend_ps(_mm_load_ps(ctx.v1.f32), _mm_permute_ps(_mm_load_ps(ctx.v58.f32), 228), 2));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B4D80"))) PPC_WEAK_FUNC(sub_831B4D80);
PPC_FUNC_IMPL(__imp__sub_831B4D80) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v63,r0,r4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r3
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v61,v63,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v60,v62,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// vcmpgtfp128. v59,v60,v61
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v59.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v61.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v59.f32), 0xF);
	// mfocrf r11,2
	ctx.r11.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// rlwinm r3,r11,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B4DA0"))) PPC_WEAK_FUNC(sub_831B4DA0);
PPC_FUNC_IMPL(__imp__sub_831B4DA0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lfs f13,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lfs f10,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f12,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f8,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,7676(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f31,6140(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6140);
	ctx.f31.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f6,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f2,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f1,f12,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f9,f8,f12,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmsubs f8,f8,f13,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 - ctx.f7.f64));
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f2,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f5,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fadds f30,f7,f2
	ctx.f30.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// lfs f4,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fnmsubs f1,f1,f0,f31
	ctx.f1.f64 = double(float(-(ctx.f1.f64 * ctx.f0.f64 - ctx.f31.f64)));
	// fmuls f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f12,f8,f0
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f11,f1,f6
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// fmuls f10,f13,f6
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fmuls f9,f12,f6
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fadds f8,f5,f11
	ctx.f8.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// stfs f8,172(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fsubs f7,f5,f11
	ctx.f7.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// stfs f7,160(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fadds f6,f4,f10
	ctx.f6.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// stfs f6,176(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fadds f5,f3,f9
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// stfs f5,180(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fsubs f4,f4,f10
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// stfs f4,164(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fsubs f3,f3,f9
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f9.f64));
	// stfs f3,168(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fsubs f2,f8,f7
	ctx.f2.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f2,120(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsubs f1,f6,f4
	ctx.f1.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// stfs f1,124(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fsubs f0,f5,f3
	ctx.f0.f64 = double(float(ctx.f5.f64 - ctx.f3.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x831b93f0
	ctx.lr = 0x831B4EB0;
	sub_831B93F0(ctx, base);
	// fmuls f13,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x831b4fb8
	if (!ctx.cr6.lt) goto loc_831B4FB8;
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// lfs f5,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f12
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f12.f64));
	// lfs f10,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// lfs f3,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f3,f10
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f10.f64));
	// lfs f9,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f5,f4,f0
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f4,f2,f0
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fadds f3,f6,f13
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// fadds f2,f5,f12
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// fadds f12,f4,f10
	ctx.f12.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// fsubs f0,f9,f3
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// fsubs f13,f8,f2
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f2.f64));
	// fsubs f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f6,f13,f13,f10
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f10,f12,f12,f6
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bne cr6,0x831b4f3c
	if (!ctx.cr6.eq) goto loc_831B4F3C;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// b 0x831b4f50
	goto loc_831B4F50;
loc_831B4F3C:
	// fsqrts f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(sqrt(ctx.f10.f64)));
	// fdivs f10,f31,f11
	ctx.f10.f64 = double(float(ctx.f31.f64 / ctx.f11.f64));
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f11,f13,f10
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
loc_831B4F50:
	// lfs f13,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f10,f1
	ctx.f10.f64 = double(float(sqrt(ctx.f1.f64)));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f5,f0,f13
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f6,f12,f13
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f4,f11,f13
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fsubs f1,f10,f30
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f30.f64));
	// fsubs f2,f9,f5
	ctx.f2.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// stfs f2,140(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fsubs f3,f7,f6
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// stfs f3,136(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fsubs f0,f8,f4
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f4.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x831B4FB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831b4fbc
	goto loc_831B4FBC;
loc_831B4FB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831B4FBC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
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

__attribute__((alias("__imp__sub_831B4FDC"))) PPC_WEAK_FUNC(sub_831B4FDC);
PPC_FUNC_IMPL(__imp__sub_831B4FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831B4FE0"))) PPC_WEAK_FUNC(sub_831B4FE0);
PPC_FUNC_IMPL(__imp__sub_831B4FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fsubs f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f5,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lfs f6,20(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f4,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// lfs f2,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r6,12
	ctx.r11.s64 = ctx.r6.s64 + 12;
	// lfs f3,16(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f1,f10,f2
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f2.f64));
	// lfs f5,24(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f2,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f31,f5,f5
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// lfs f0,7676(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,6140(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6140);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f30,f6,f7
	ctx.f30.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,6048(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6048);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f6,f4
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// fmsubs f31,f31,f0,f9
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 - ctx.f9.f64));
	// fmsubs f4,f3,f4,f30
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f4.f64 - ctx.f30.f64));
	// fmadds f6,f2,f1,f6
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 + ctx.f6.f64));
	// fmuls f5,f4,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// fmadds f4,f3,f7,f6
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f2,f4,f2
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f2.f64));
	// fmsubs f1,f31,f1,f3
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f1.f64 - ctx.f3.f64));
	// fmadds f7,f2,f0,f1
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f1.f64));
	// fsubs f1,f7,f13
	ctx.f1.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fcmpu cr6,f1,f8
	ctx.cr6.compare(ctx.f1.f64, ctx.f8.f64);
	// bgt cr6,0x831b5118
	if (ctx.cr6.gt) goto loc_831B5118;
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f8
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f7,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmuls f3,f7,f5
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// lfs f2,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// fmadds f7,f5,f5,f6
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f6.f64));
	// fmadds f6,f2,f5,f4
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fmsubs f5,f2,f8,f3
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f8.f64 - ctx.f3.f64));
	// fnmsubs f9,f7,f0,f9
	ctx.f9.f64 = double(float(-(ctx.f7.f64 * ctx.f0.f64 - ctx.f9.f64)));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f8,f6,f0
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f4,f9,f13
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f3,f8,f13
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fsubs f0,f10,f4
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f13,f12,f3
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f12,f11,f2
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f2.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x831B5110;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831b511c
	goto loc_831B511C;
loc_831B5118:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831B511C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B5134"))) PPC_WEAK_FUNC(sub_831B5134);
PPC_FUNC_IMPL(__imp__sub_831B5134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831B5138"))) PPC_WEAK_FUNC(sub_831B5138);
PPC_FUNC_IMPL(__imp__sub_831B5138) {
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
	// lfs f8,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f7,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// lfs f6,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f12,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f5,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// lfs f4,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fadds f10,f4,f5
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f9,f10,f10
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f3,f13,f13,f11
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f11,f12,f12,f3
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f3.f64));
	// fcmpu cr6,f11,f9
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// bge cr6,0x831b5258
	if (!ctx.cr6.lt) goto loc_831B5258;
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f9,-18284(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18284);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f11,f9
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// bgt cr6,0x831b51c0
	if (ctx.cr6.gt) goto loc_831B51C0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x831b51dc
	goto loc_831B51DC;
loc_831B51C0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f9,6140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 / ctx.f11.f64));
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
loc_831B51DC:
	// fadds f9,f5,f11
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// fsubs f1,f11,f10
	ctx.f1.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f11,-18200(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18200);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// fsubs f5,f9,f4
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// fmuls f4,f5,f11
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f0,f4,f12
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmuls f3,f13,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fadds f12,f8,f2
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f11,f6,f0
	ctx.f11.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f13,f7,f3
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f3.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x831B5244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_831B5258:
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

__attribute__((alias("__imp__sub_831B526C"))) PPC_WEAK_FUNC(sub_831B526C);
PPC_FUNC_IMPL(__imp__sub_831B526C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831B5270"))) PPC_WEAK_FUNC(sub_831B5270);
PPC_FUNC_IMPL(__imp__sub_831B5270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x831B5278;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x831b52e4
	if (!ctx.cr6.lt) goto loc_831B52E4;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r29,r10,29560
	ctx.r29.s64 = ctx.r10.s64 + 29560;
	// li r5,412
	ctx.r5.s64 = 412;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8315b860
	ctx.lr = 0x831B52B0;
	sub_8315B860(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82bea998
	ctx.lr = 0x831B52CC;
	sub_82BEA998(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,417
	ctx.r5.s64 = 417;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8315b870
	ctx.lr = 0x831B52DC;
	sub_8315B870(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_831B52E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831B52EC"))) PPC_WEAK_FUNC(sub_831B52EC);
PPC_FUNC_IMPL(__imp__sub_831B52EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831B52F0"))) PPC_WEAK_FUNC(sub_831B52F0);
PPC_FUNC_IMPL(__imp__sub_831B52F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x831B52F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x831b5324
	if (ctx.cr6.gt) goto loc_831B5324;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x831b5270
	ctx.lr = 0x831B5324;
	sub_831B5270(ctx, base);
loc_831B5324:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831b5334
	if (ctx.cr6.eq) goto loc_831B5334;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_831B5334:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831b5368
	if (ctx.cr0.eq) goto loc_831B5368;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_831B5368:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831B5390"))) PPC_WEAK_FUNC(sub_831B5390);
PPC_FUNC_IMPL(__imp__sub_831B5390) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// bge cr6,0x831b53c4
	if (!ctx.cr6.lt) goto loc_831B53C4;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
loc_831B53C4:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x831b541c
	if (ctx.cr6.eq) goto loc_831B541C;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f11,-17600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17600);
	ctx.f11.f64 = double(temp.f32);
loc_831B53E8:
	// lfs f10,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f5,f7,f13,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fabs f4,f5
	ctx.f4.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fcmpu cr6,f4,f11
	ctx.cr6.compare(ctx.f4.f64, ctx.f11.f64);
	// bgt cr6,0x831b543c
	if (ctx.cr6.gt) goto loc_831B543C;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x831b53e8
	if (!ctx.cr6.eq) goto loc_831B53E8;
loc_831B541C:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831b52f0
	ctx.lr = 0x831B5428;
	sub_831B52F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_831B543C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B5450"))) PPC_WEAK_FUNC(sub_831B5450);
PPC_FUNC_IMPL(__imp__sub_831B5450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6abc
	ctx.lr = 0x831B5460;
	__savefpr_17(ctx, base);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 + 24;
	// lfs f12,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f13,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f4,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f4,f13
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f12,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f2,f13
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f7,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f2,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f30,f11,f5
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// lfs f12,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f2,f2,f7
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// lfs f31,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f7,f31,f7
	ctx.f7.f64 = double(float(ctx.f31.f64 * ctx.f7.f64));
	// lfs f31,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f3,f0,f5
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// lfs f26,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f26.f64 = double(temp.f32);
	// lfs f24,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f5,f9,f5
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// lfs f23,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f26,f26,f31
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f31.f64));
	// fmuls f24,f24,f31
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f31.f64));
	// lfs f29,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f31,f23,f31
	ctx.f31.f64 = double(float(ctx.f23.f64 * ctx.f31.f64));
	// lfs f22,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f22.f64 = double(temp.f32);
	// lfs f23,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f22,f22,f29
	ctx.f22.f64 = double(float(ctx.f22.f64 * ctx.f29.f64));
	// lfs f21,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f21.f64 = double(temp.f32);
	// fmuls f23,f23,f29
	ctx.f23.f64 = double(float(ctx.f23.f64 * ctx.f29.f64));
	// fmuls f29,f21,f29
	ctx.f29.f64 = double(float(ctx.f21.f64 * ctx.f29.f64));
	// lfs f28,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f27.f64 = double(temp.f32);
	// fadds f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// lfs f21,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f21.f64 = double(temp.f32);
	// fadds f13,f30,f12
	ctx.f13.f64 = double(float(ctx.f30.f64 + ctx.f12.f64));
	// lfs f20,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f20.f64 = double(temp.f32);
	// fmuls f30,f21,f28
	ctx.f30.f64 = double(float(ctx.f21.f64 * ctx.f28.f64));
	// lfs f19,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f19.f64 = double(temp.f32);
	// fmuls f25,f0,f27
	ctx.f25.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fmuls f20,f20,f28
	ctx.f20.f64 = double(float(ctx.f20.f64 * ctx.f28.f64));
	// lfs f12,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f18,f11,f27
	ctx.f18.f64 = double(float(ctx.f11.f64 * ctx.f27.f64));
	// lfs f21,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f21.f64 = double(temp.f32);
	// fadds f1,f10,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// lfs f17,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f17.f64 = double(temp.f32);
	// fmuls f28,f19,f28
	ctx.f28.f64 = double(float(ctx.f19.f64 * ctx.f28.f64));
	// lfs f19,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f19.f64 = double(temp.f32);
	// fadds f7,f5,f7
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// lfs f5,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f27,f9,f27
	ctx.f27.f64 = double(float(ctx.f9.f64 * ctx.f27.f64));
	// fadds f10,f4,f8
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// lfs f8,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fadds f3,f3,f2
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// lfs f4,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// fadds f6,f6,f31
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f31.f64));
	// fmuls f4,f4,f8
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fmuls f2,f2,f8
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f8.f64));
	// fadds f31,f18,f30
	ctx.f31.f64 = double(float(ctx.f18.f64 + ctx.f30.f64));
	// fmuls f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fadds f8,f25,f20
	ctx.f8.f64 = double(float(ctx.f25.f64 + ctx.f20.f64));
	// fadds f7,f7,f29
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f29.f64));
	// lfs f29,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f29.f64 = double(temp.f32);
	// fadds f30,f27,f28
	ctx.f30.f64 = double(float(ctx.f27.f64 + ctx.f28.f64));
	// fadds f1,f1,f26
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f26.f64));
	// fadds f10,f10,f24
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f24.f64));
	// fadds f3,f3,f22
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f22.f64));
	// fadds f13,f13,f23
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f23.f64));
	// fmuls f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmuls f28,f19,f21
	ctx.f28.f64 = double(float(ctx.f19.f64 * ctx.f21.f64));
	// fmuls f11,f11,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// lfs f26,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f27,f17,f21
	ctx.f27.f64 = double(float(ctx.f17.f64 * ctx.f21.f64));
	// lfs f25,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// lfs f24,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f29,f29,f21
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f21.f64));
	// lfs f5,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// fmuls f25,f26,f25
	ctx.f25.f64 = double(float(ctx.f26.f64 * ctx.f25.f64));
	// fmuls f24,f24,f26
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f26.f64));
	// fmuls f5,f5,f26
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f26.f64));
	// fadds f4,f8,f4
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f4.f64));
	// fadds f2,f31,f2
	ctx.f2.f64 = double(float(ctx.f31.f64 + ctx.f2.f64));
	// fadds f12,f30,f12
	ctx.f12.f64 = double(float(ctx.f30.f64 + ctx.f12.f64));
	// fadds f11,f11,f27
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f27.f64));
	// fadds f9,f9,f29
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f29.f64));
	// fadds f8,f0,f25
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f25.f64));
	// stfs f8,0(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f0,f11,f24
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f24.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f11,f9,f5
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f4,12(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f2,16(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f3,24(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f7,32(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f1,36(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f10,40(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f6,44(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b08
	ctx.lr = 0x831B562C;
	__restfpr_17(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B5638"))) PPC_WEAK_FUNC(sub_831B5638);
PPC_FUNC_IMPL(__imp__sub_831B5638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,24(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f11,f10,f12
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f5,f9,f8,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fadds f4,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// stfs f4,0(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f3,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmadds f9,f3,f2,f10
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f10.f64));
	// fmadds f8,f1,f0,f9
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fadds f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f7,4(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B569C"))) PPC_WEAK_FUNC(sub_831B569C);
PPC_FUNC_IMPL(__imp__sub_831B569C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831B56A0"))) PPC_WEAK_FUNC(sub_831B56A0);
PPC_FUNC_IMPL(__imp__sub_831B56A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f6,f9,f8,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,0(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f5,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmadds f12,f5,f4,f13
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f13.f64));
	// fmadds f11,f3,f2,f12
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f12.f64));
	// stfs f11,4(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B56F4"))) PPC_WEAK_FUNC(sub_831B56F4);
PPC_FUNC_IMPL(__imp__sub_831B56F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831B56F8"))) PPC_WEAK_FUNC(sub_831B56F8);
PPC_FUNC_IMPL(__imp__sub_831B56F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f11,f10,f12
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f5,f9,f8,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fadds f1,f5,f7
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B5728"))) PPC_WEAK_FUNC(sub_831B5728);
PPC_FUNC_IMPL(__imp__sub_831B5728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f1,f9,f8,f7
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B5750"))) PPC_WEAK_FUNC(sub_831B5750);
PPC_FUNC_IMPL(__imp__sub_831B5750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,-12
	ctx.r10.s64 = ctx.r10.s64 + -12;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// bge cr6,0x831b577c
	if (!ctx.cr6.lt) goto loc_831B577C;
	// li r8,0
	ctx.r8.s64 = 0;
loc_831B577C:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x831b5808
	if (ctx.cr6.eq) goto loc_831B5808;
loc_831B5788:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// li r9,1
	ctx.r9.s64 = 1;
	// bge cr6,0x831b57a0
	if (!ctx.cr6.lt) goto loc_831B57A0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_831B57A0:
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x831b57f4
	if (ctx.cr6.eq) goto loc_831B57F4;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f13,f2
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// li r10,1
	ctx.r10.s64 = 1;
	// fmuls f6,f8,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fcmpu cr6,f6,f5
	ctx.cr6.compare(ctx.f6.f64, ctx.f5.f64);
	// bgt cr6,0x831b57e0
	if (ctx.cr6.gt) goto loc_831B57E0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_831B57E0:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x831b57f4
	if (!ctx.cr6.eq) goto loc_831B57F4;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x831b5810
	if (ctx.cr6.eq) goto loc_831B5810;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_831B57F4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x831b5788
	if (!ctx.cr6.eq) goto loc_831B5788;
loc_831B5808:
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// blr 
	return;
loc_831B5810:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B5818"))) PPC_WEAK_FUNC(sub_831B5818);
PPC_FUNC_IMPL(__imp__sub_831B5818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x831B5820;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6ab0
	ctx.lr = 0x831B5828;
	__savefpr_14(ctx, base);
	// addi r31,r1,-656
	ctx.r31.s64 = ctx.r1.s64 + -656;
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// stb r27,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r27.u8);
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r15,r6
	ctx.r15.u64 = ctx.r6.u64;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f12,104(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f10,108(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// mr r14,r7
	ctx.r14.u64 = ctx.r7.u64;
	// stfs f9,112(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
	// cmplw cr6,r16,r19
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r19.u32, ctx.xer);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// blt cr6,0x831b5894
	if (ctx.cr6.lt) goto loc_831B5894;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_831B5894:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// rlwinm r12,r9,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82cb8074
	ctx.lr = 0x831B58AC;
	sub_82CB8074(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r6,0(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r30,748(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 748);
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f25,6048(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6048);
	ctx.f25.f64 = double(temp.f32);
	// lfs f21,6140(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6140);
	ctx.f21.f64 = double(temp.f32);
	// stwux r6,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r1.u32 = ea;
	// stfs f25,120(r31)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stfs f25,124(r31)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// addi r17,r1,80
	ctx.r17.s64 = ctx.r1.s64 + 80;
	// stfs f21,128(r31)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f21,116(r31)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// bl 0x831b6d50
	ctx.lr = 0x831B58EC;
	sub_831B6D50(ctx, base);
	// lbz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// lfs f13,348(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// lwz r28,764(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lfs f0,344(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,352(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	ctx.f12.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stfs f13,164(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f12,176(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f31,320(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,332(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,324(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,336(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,328(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f8,f9,f12,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// lfs f26,340(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f26.f64 = double(temp.f32);
	// stfs f31,144(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f30,148(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stfs f29,156(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// stfs f28,160(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stfs f27,168(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// stfs f26,172(r31)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// fmadds f20,f0,f7,f8
	ctx.f20.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f8.f64));
	// bl 0x831b5450
	ctx.lr = 0x831B5974;
	sub_831B5450(ctx, base);
	// lwz r24,740(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// lfs f13,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// addi r23,r24,12
	ctx.r23.s64 = ctx.r24.s64 + 12;
	// lfs f12,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// addi r21,r24,24
	ctx.r21.s64 = ctx.r24.s64 + 24;
	// lfs f7,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,16(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfs f4,28(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,20(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f2,f4,f13
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f3,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f11,12(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f3,f13
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// lfs f10,32(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f1,f1,f0,f5
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fmadds f10,f10,f0,f2
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f2.f64));
	// lfs f6,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f24,f11,f12,f1
	ctx.f24.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f1.f64));
	// fmadds f23,f8,f12,f10
	ctx.f23.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f9,f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfd f13,-10264(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -10264);
	// fmuls f8,f24,f7
	ctx.f8.f64 = double(float(ctx.f24.f64 * ctx.f7.f64));
	// fmadds f22,f12,f6,f9
	ctx.f22.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f9.f64));
	// fmadds f7,f23,f4,f8
	ctx.f7.f64 = double(float(ctx.f23.f64 * ctx.f4.f64 + ctx.f8.f64));
	// fmadds f0,f22,f3,f7
	ctx.f0.f64 = double(float(ctx.f22.f64 * ctx.f3.f64 + ctx.f7.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x831b5a0c
	if (!ctx.cr6.gt) goto loc_831B5A0C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f13,-10272(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -10272);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x831b5e3c
	if (ctx.cr6.lt) goto loc_831B5E3C;
loc_831B5A0C:
	// fdivs f21,f21,f0
	ctx.fpscr.disableFlushMode();
	ctx.f21.f64 = double(float(ctx.f21.f64 / ctx.f0.f64));
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x831b5e3c
	if (ctx.cr6.eq) goto loc_831B5E3C;
	// lfs f19,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f19.f64 = double(temp.f32);
	// lfs f18,224(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f18.f64 = double(temp.f32);
	// lfs f17,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f17.f64 = double(temp.f32);
	// lfs f16,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f16.f64 = double(temp.f32);
loc_831B5A2C:
	// lbzx r11,r26,r18
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r18.u32);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r22
	ctx.r5.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lfsx f0,r11,r22
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f18,f13
	ctx.f11.f64 = double(float(ctx.f18.f64 * ctx.f13.f64));
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f10,f16,f0,f11
	ctx.f10.f64 = double(float(ctx.f16.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f9,f17,f12,f10
	ctx.f9.f64 = double(float(ctx.f17.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fadds f8,f9,f19
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f19.f64));
	// fcmpu cr6,f8,f20
	ctx.cr6.compare(ctx.f8.f64, ctx.f20.f64);
	// bge cr6,0x831b5e30
	if (!ctx.cr6.lt) goto loc_831B5E30;
	// lfs f11,16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f4,28(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f2,f4,f13
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f1,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f1,f12
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// lfs f7,32(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f11,f0
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f1,24(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,40(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// lfs f12,44(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// lfs f8,36(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f5,f3,f5
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// lfs f3,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fadds f10,f6,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// fadds f9,f9,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// fadds f6,f5,f4
	ctx.f6.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fadds f5,f10,f13
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// fadds f13,f12,f6
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// fadds f12,f5,f8
	ctx.f12.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// fmuls f4,f0,f11
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmadds f2,f13,f7,f4
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f11,f12,f3,f2
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f3.f64 + ctx.f2.f64));
	// fadds f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// fmuls f4,f10,f21
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f21.f64));
	// fcmpu cr6,f4,f25
	ctx.cr6.compare(ctx.f4.f64, ctx.f25.f64);
	// bge cr6,0x831b5e30
	if (!ctx.cr6.lt) goto loc_831B5E30;
	// fmuls f11,f23,f4
	ctx.f11.f64 = double(float(ctx.f23.f64 * ctx.f4.f64));
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// fmuls f10,f22,f4
	ctx.f10.f64 = double(float(ctx.f22.f64 * ctx.f4.f64));
	// fmuls f9,f24,f4
	ctx.f9.f64 = double(float(ctx.f24.f64 * ctx.f4.f64));
	// fsubs f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsubs f7,f12,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fsubs f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fmuls f5,f8,f27
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f27.f64));
	// fmuls f3,f8,f26
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f26.f64));
	// fmadds f2,f7,f31,f5
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f5.f64));
	// fmadds f0,f30,f7,f3
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f7.f64 + ctx.f3.f64));
	// fmadds f1,f6,f29,f2
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f29.f64 + ctx.f2.f64));
	// fmadds f2,f6,f28,f0
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f28.f64 + ctx.f0.f64));
	// bne cr6,0x831b5d1c
	if (!ctx.cr6.eq) goto loc_831B5D1C;
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r19,4
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 4, ctx.xer);
	// blt cr6,0x831b5ca8
	if (ctx.cr6.lt) goto loc_831B5CA8;
	// addi r11,r19,-4
	ctx.r11.s64 = ctx.r19.s64 + -4;
	// addi r9,r20,1
	ctx.r9.s64 = ctx.r20.s64 + 1;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r17,28
	ctx.r11.s64 = ctx.r17.s64 + 28;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_831B5B68:
	// lbz r10,-1(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f27,f0
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f31,f12,f13
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f29,f11,f10
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,-28(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + -28, temp.u32);
	// lfs f8,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f28,f6
	ctx.f5.f64 = double(float(ctx.f28.f64 * ctx.f6.f64));
	// fmadds f3,f26,f8,f5
	ctx.f3.f64 = double(float(ctx.f26.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f0,f30,f7,f3
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f7.f64 + ctx.f3.f64));
	// stfs f0,-24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -24, temp.u32);
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f27,f11
	ctx.f10.f64 = double(float(ctx.f27.f64 * ctx.f11.f64));
	// fmadds f9,f31,f13,f10
	ctx.f9.f64 = double(float(ctx.f31.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f8,f29,f12,f9
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f8,-16(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + -16, temp.u32);
	// lfs f7,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f3,f28,f5
	ctx.f3.f64 = double(float(ctx.f28.f64 * ctx.f5.f64));
	// fmadds f0,f26,f7,f3
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f7.f64 + ctx.f3.f64));
	// fmadds f13,f30,f6,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f6.f64 + ctx.f0.f64));
	// stfs f13,-12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// lbz r10,1(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f27,f10
	ctx.f9.f64 = double(float(ctx.f27.f64 * ctx.f10.f64));
	// fmadds f8,f31,f12,f9
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f7,f29,f11,f8
	ctx.f7.f64 = double(float(ctx.f29.f64 * ctx.f11.f64 + ctx.f8.f64));
	// stfs f7,-4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f0,f28,f3
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f3.f64));
	// fmadds f13,f26,f6,f0
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f6.f64 + ctx.f0.f64));
	// fmadds f12,f30,f5,f13
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f5.f64 + ctx.f13.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lbz r10,2(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r3,r10,r7
	ctx.r3.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f27,f9
	ctx.f8.f64 = double(float(ctx.f27.f64 * ctx.f9.f64));
	// fmadds f7,f31,f11,f8
	ctx.f7.f64 = double(float(ctx.f31.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fmadds f6,f29,f10,f7
	ctx.f6.f64 = double(float(ctx.f29.f64 * ctx.f10.f64 + ctx.f7.f64));
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f5,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f28,f0
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// fmadds f12,f26,f5,f13
	ctx.f12.f64 = double(float(ctx.f26.f64 * ctx.f5.f64 + ctx.f13.f64));
	// fmadds f11,f30,f3,f12
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f3.f64 + ctx.f12.f64));
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bne 0x831b5b68
	if (!ctx.cr0.eq) goto loc_831B5B68;
loc_831B5CA8:
	// cmplw cr6,r6,r19
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r19.u32, ctx.xer);
	// bge cr6,0x831b5d1c
	if (!ctx.cr6.lt) goto loc_831B5D1C;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r17
	ctx.r10.u64 = ctx.r11.u64 + ctx.r17.u64;
loc_831B5CC0:
	// lbzx r11,r6,r20
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r20.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// cmplw cr6,r6,r19
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r19.u32, ctx.xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f27,f0
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f31,f12,f13
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f29,f11,f10
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,0(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f28,f6
	ctx.f5.f64 = double(float(ctx.f28.f64 * ctx.f6.f64));
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f3,f26,f8,f5
	ctx.f3.f64 = double(float(ctx.f26.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f0,f30,f7,f3
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f7.f64 + ctx.f3.f64));
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// blt cr6,0x831b5cc0
	if (ctx.cr6.lt) goto loc_831B5CC0;
loc_831B5D1C:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831b5750
	ctx.lr = 0x831B5D28;
	sub_831B5750(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831b5e30
	if (ctx.cr6.eq) goto loc_831B5E30;
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lbz r10,807(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 807);
	// lfs f12,12(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lfs f11,16(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,20(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,0(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f5,4(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f3,f7,f13
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f2,8(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f5,f13
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f0,f2,f13
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,32(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,24(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f2,f7,f13
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f11,28(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f5,f11,f13
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f13,36(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,40(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,44(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f3,f10
	ctx.f10.f64 = double(float(ctx.f3.f64 + ctx.f10.f64));
	// fadds f8,f1,f8
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f8.f64));
	// fadds f7,f0,f6
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// fadds f6,f10,f9
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// fadds f5,f8,f5
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// fadds f3,f7,f2
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// fadds f2,f6,f13
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// stfs f2,240(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// fadds f1,f12,f5
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// stfs f1,244(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// fadds f0,f11,f3
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// stfs f0,248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// beq cr6,0x831b5ddc
	if (ctx.cr6.eq) goto loc_831B5DDC;
	// addi r5,r31,104
	ctx.r5.s64 = ctx.r31.s64 + 104;
	// b 0x831b5e04
	goto loc_831B5E04;
loc_831B5DDC:
	// lfs f0,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r31,304
	ctx.r5.s64 = ctx.r31.s64 + 304;
	// lfs f13,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f12,304(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// stfs f10,308(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// stfs f9,312(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
loc_831B5E04:
	// lwz r3,796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 796);
	// fmr f1,f4
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f4.f64;
	// lwz r8,788(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// lwz r7,780(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x831B5E28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r9.u8);
loc_831B5E30:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r16
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r16.u32, ctx.xer);
	// blt cr6,0x831b5a2c
	if (ctx.cr6.lt) goto loc_831B5A2C;
loc_831B5E3C:
	// cmplw cr6,r25,r16
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r16.u32, ctx.xer);
	// beq cr6,0x831b6aa4
	if (ctx.cr6.eq) goto loc_831B6AA4;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x831b6d50
	ctx.lr = 0x831B5E5C;
	sub_831B6D50(ctx, base);
	// lbz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r30,772(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 772);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,28(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lfs f31,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f27.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f26,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f26.f64 = double(temp.f32);
	// stfs f13,152(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stfs f12,176(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// stfs f31,144(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f30,156(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// stfs f29,168(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// stfs f28,148(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stfs f27,160(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stfs f26,172(r31)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f9,f12,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f16,f13,f7,f8
	ctx.f16.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f8.f64));
	// bl 0x831b5450
	ctx.lr = 0x831B5EE8;
	sub_831B5450(ctx, base);
	// lbz r25,80(r31)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x831b628c
	if (ctx.cr6.eq) goto loc_831B628C;
	// lfs f15,236(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f15.f64 = double(temp.f32);
	// lfs f24,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,228(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	ctx.f23.f64 = double(temp.f32);
	// lfs f14,224(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f14.f64 = double(temp.f32);
	// lfs f22,220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f22.f64 = double(temp.f32);
	// lfs f21,216(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f21.f64 = double(temp.f32);
	// lfs f20,208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f20.f64 = double(temp.f32);
	// lfs f19,204(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	ctx.f19.f64 = double(temp.f32);
	// lfs f18,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f18.f64 = double(temp.f32);
	// lfs f17,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f17.f64 = double(temp.f32);
loc_831B5F20:
	// lbzx r11,r28,r20
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r20.u32);
	// lfs f13,212(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lfsx f0,r11,r29
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f14,f11
	ctx.f10.f64 = double(float(ctx.f14.f64 * ctx.f11.f64));
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f13,f9,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmadds f7,f12,f0,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fadds f4,f7,f15
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f15.f64));
	// fcmpu cr6,f4,f16
	ctx.cr6.compare(ctx.f4.f64, ctx.f16.f64);
	// bge cr6,0x831b627c
	if (!ctx.cr6.lt) goto loc_831B627C;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
	// fmuls f11,f22,f13
	ctx.f11.f64 = double(float(ctx.f22.f64 * ctx.f13.f64));
	// fmuls f10,f19,f12
	ctx.f10.f64 = double(float(ctx.f19.f64 * ctx.f12.f64));
	// fmadds f9,f20,f12,f11
	ctx.f9.f64 = double(float(ctx.f20.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f8,f0,f17,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f17.f64 + ctx.f10.f64));
	// fmadds f7,f18,f0,f9
	ctx.f7.f64 = double(float(ctx.f18.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmadds f6,f21,f13,f8
	ctx.f6.f64 = double(float(ctx.f21.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fadds f2,f7,f24
	ctx.f2.f64 = double(float(ctx.f7.f64 + ctx.f24.f64));
	// fadds f1,f6,f23
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f23.f64));
	// bne cr6,0x831b616c
	if (!ctx.cr6.eq) goto loc_831B616C;
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r16,4
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 4, ctx.xer);
	// blt cr6,0x831b60f8
	if (ctx.cr6.lt) goto loc_831B60F8;
	// addi r11,r16,-4
	ctx.r11.s64 = ctx.r16.s64 + -4;
	// addi r9,r18,1
	ctx.r9.s64 = ctx.r18.s64 + 1;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r17,28
	ctx.r11.s64 = ctx.r17.s64 + 28;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_831B5FB8:
	// lbz r10,-1(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f31,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f13.f64));
	// fmadds f9,f30,f11,f10
	ctx.f9.f64 = double(float(ctx.f30.f64 * ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,-28(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + -28, temp.u32);
	// lfs f7,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f27,f6
	ctx.f5.f64 = double(float(ctx.f27.f64 * ctx.f6.f64));
	// fmadds f3,f26,f7,f5
	ctx.f3.f64 = double(float(ctx.f26.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fmadds f0,f28,f8,f3
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f8.f64 + ctx.f3.f64));
	// stfs f0,-24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -24, temp.u32);
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f29,f12
	ctx.f11.f64 = double(float(ctx.f29.f64 * ctx.f12.f64));
	// fmadds f9,f10,f31,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f11.f64));
	// fmadds f8,f30,f13,f9
	ctx.f8.f64 = double(float(ctx.f30.f64 * ctx.f13.f64 + ctx.f9.f64));
	// stfs f8,-16(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + -16, temp.u32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f27,f6
	ctx.f5.f64 = double(float(ctx.f27.f64 * ctx.f6.f64));
	// lfs f3,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f0,f26,f3,f5
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f3.f64 + ctx.f5.f64));
	// fmadds f13,f28,f7,f0
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f7.f64 + ctx.f0.f64));
	// stfs f13,-12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// lbz r10,1(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f29,f10
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f10.f64));
	// fmadds f8,f12,f31,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f9.f64));
	// fmadds f7,f30,f11,f8
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f11.f64 + ctx.f8.f64));
	// stfs f7,-4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f0,f27,f3
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f3.f64));
	// fmadds f13,f26,f6,f0
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f6.f64 + ctx.f0.f64));
	// fmadds f12,f28,f5,f13
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f5.f64 + ctx.f13.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lbz r10,2(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r3,r10,r7
	ctx.r3.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f29,f9
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f9.f64));
	// fmadds f7,f11,f31,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f8.f64));
	// fmadds f6,f30,f10,f7
	ctx.f6.f64 = double(float(ctx.f30.f64 * ctx.f10.f64 + ctx.f7.f64));
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f5,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f27,f0
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// fmadds f12,f26,f5,f13
	ctx.f12.f64 = double(float(ctx.f26.f64 * ctx.f5.f64 + ctx.f13.f64));
	// fmadds f11,f28,f3,f12
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f3.f64 + ctx.f12.f64));
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bne 0x831b5fb8
	if (!ctx.cr0.eq) goto loc_831B5FB8;
loc_831B60F8:
	// cmplw cr6,r6,r16
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r16.u32, ctx.xer);
	// bge cr6,0x831b616c
	if (!ctx.cr6.lt) goto loc_831B616C;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r17
	ctx.r10.u64 = ctx.r11.u64 + ctx.r17.u64;
loc_831B6110:
	// lbzx r11,r6,r18
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r18.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// cmplw cr6,r6,r16
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r16.u32, ctx.xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f31,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f13.f64));
	// fmadds f9,f30,f11,f10
	ctx.f9.f64 = double(float(ctx.f30.f64 * ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,0(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f27,f7
	ctx.f6.f64 = double(float(ctx.f27.f64 * ctx.f7.f64));
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f3,f26,f5,f6
	ctx.f3.f64 = double(float(ctx.f26.f64 * ctx.f5.f64 + ctx.f6.f64));
	// fmadds f0,f28,f8,f3
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f8.f64 + ctx.f3.f64));
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// blt cr6,0x831b6110
	if (ctx.cr6.lt) goto loc_831B6110;
loc_831B616C:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831b5750
	ctx.lr = 0x831B6178;
	sub_831B5750(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831b627c
	if (ctx.cr6.eq) goto loc_831B627C;
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lbz r10,807(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 807);
	// lfs f12,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lfs f11,4(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f9,8(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f5,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f3,f13,f7
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// lfs f2,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f5,f13
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f0,f2,f13
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,8(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,0(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f2,f7,f13
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f11,4(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f5,f11,f13
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f13,36(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,40(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,44(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f3,f10
	ctx.f10.f64 = double(float(ctx.f3.f64 + ctx.f10.f64));
	// fadds f8,f1,f8
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f8.f64));
	// fadds f7,f0,f6
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// fadds f6,f10,f9
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// fadds f5,f8,f5
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// fadds f3,f7,f2
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// fadds f2,f6,f13
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// stfs f2,272(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// fadds f1,f12,f5
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// stfs f1,276(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// fadds f0,f11,f3
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// stfs f0,280(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// beq cr6,0x831b622c
	if (ctx.cr6.eq) goto loc_831B622C;
	// addi r5,r31,104
	ctx.r5.s64 = ctx.r31.s64 + 104;
	// b 0x831b6254
	goto loc_831B6254;
loc_831B622C:
	// lfs f0,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r31,288
	ctx.r5.s64 = ctx.r31.s64 + 288;
	// lfs f13,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f12,288(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// stfs f10,292(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// stfs f9,296(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
loc_831B6254:
	// lwz r3,796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 796);
	// fsubs f1,f4,f16
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f16.f64));
	// lwz r8,788(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	// addi r4,r31,272
	ctx.r4.s64 = ctx.r31.s64 + 272;
	// lwz r7,780(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x831B6278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r25,1
	ctx.r25.s64 = 1;
loc_831B627C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r19
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x831b5f20
	if (ctx.cr6.lt) goto loc_831B5F20;
	// stb r25,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r25.u8);
loc_831B628C:
	// cmplw cr6,r27,r19
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r19.u32, ctx.xer);
	// bne cr6,0x831b62a8
	if (!ctx.cr6.eq) goto loc_831B62A8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r31,656
	ctx.r1.s64 = ctx.r31.s64 + 656;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6afc
	ctx.lr = 0x831B62A4;
	__restfpr_14(ctx, base);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_831B62A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r19,4
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 4, ctx.xer);
	// blt cr6,0x831b6578
	if (ctx.cr6.lt) goto loc_831B6578;
	// addi r11,r19,-4
	ctx.r11.s64 = ctx.r19.s64 + -4;
	// addi r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 + 24;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r8,r30,36
	ctx.r8.s64 = ctx.r30.s64 + 36;
	// addi r7,r20,1
	ctx.r7.s64 = ctx.r20.s64 + 1;
	// addi r11,r17,20
	ctx.r11.s64 = ctx.r17.s64 + 20;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_831B62D8:
	// lbz r6,-1(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + -1);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rotlwi r4,r6,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// lfs f10,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// add r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 + ctx.r29.u64;
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfs f31,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f11,f1,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmuls f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fmuls f9,f1,f9
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// fmuls f10,f10,f2
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmuls f8,f31,f8
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f8.f64));
	// fmuls f7,f31,f7
	ctx.f7.f64 = double(float(ctx.f31.f64 * ctx.f7.f64));
	// fmuls f6,f31,f6
	ctx.f6.f64 = double(float(ctx.f31.f64 * ctx.f6.f64));
	// fadds f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f1,f11,f12
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fadds f0,f9,f10
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fadds f13,f2,f8
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// fadds f12,f1,f7
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// fadds f11,f0,f6
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// fadds f10,f5,f13
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// stfs f10,-20(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + -20, temp.u32);
	// fadds f9,f12,f4
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// stfs f9,-16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + -16, temp.u32);
	// fadds f8,f11,f3
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// stfs f8,-12(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// lbz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// rotlwi r4,r6,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// add r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 + ctx.r4.u64;
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f5,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f3,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// add r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 + ctx.r29.u64;
	// lfs f1,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f31,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f7,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f9,f7
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// lfs f6,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f4,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f9
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// fmuls f3,f3,f9
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// fmuls f6,f31,f6
	ctx.f6.f64 = double(float(ctx.f31.f64 * ctx.f6.f64));
	// fmuls f9,f31,f4
	ctx.f9.f64 = double(float(ctx.f31.f64 * ctx.f4.f64));
	// fmuls f4,f8,f2
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// fmuls f2,f8,f1
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmuls f1,f8,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f0,f11,f7
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fadds f11,f6,f5
	ctx.f11.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// fadds f9,f9,f3
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// fadds f8,f0,f4
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// fadds f7,f11,f2
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f2.f64));
	// fadds f6,f9,f1
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// fadds f5,f13,f8
	ctx.f5.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// stfs f5,-8(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// fadds f4,f7,f10
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// stfs f4,-4(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// fadds f3,f6,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lbz r6,1(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// lfs f7,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// rotlwi r4,r6,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// lfs f3,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// lfs f1,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// add r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 + ctx.r29.u64;
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f31,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// lfs f8,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f7
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// lfs f2,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f2,f2,f5
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// fmuls f7,f5,f3
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// lfs f3,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f1,f6
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// fmuls f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmuls f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fadds f6,f2,f4
	ctx.f6.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// fmuls f5,f3,f11
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fmuls f4,f3,f10
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fmuls f12,f3,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fadds f3,f7,f1
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// fadds f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f1,f6,f12
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// fadds f0,f3,f5
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// fadds f13,f2,f4
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// fadds f12,f9,f1
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fadds f10,f13,f8
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lbz r6,2(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// rotlwi r4,r6,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// add r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 + ctx.r4.u64;
	// lfs f8,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f4,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f1,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// add r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 + ctx.r29.u64;
	// lfs f3,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f5,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f2,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f12,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f31,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f10,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f6,f11,f6
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f8,f31,f4
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f4.f64));
	// fmuls f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fmuls f4,f31,f9
	ctx.f4.f64 = double(float(ctx.f31.f64 * ctx.f9.f64));
	// fmuls f3,f10,f3
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f10,f10,f5
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fadds f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fadds f9,f1,f6
	ctx.f9.f64 = double(float(ctx.f1.f64 + ctx.f6.f64));
	// fadds f6,f4,f11
	ctx.f6.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// fadds f4,f8,f10
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// fadds f5,f9,f3
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// fadds f3,f6,f13
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// fadds f0,f4,f12
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// fadds f1,f7,f5
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// stfs f1,16(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fadds f13,f3,f2
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bne 0x831b62d8
	if (!ctx.cr0.eq) goto loc_831B62D8;
loc_831B6578:
	// cmplw cr6,r3,r19
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r19.u32, ctx.xer);
	// bge cr6,0x831b6654
	if (!ctx.cr6.lt) goto loc_831B6654;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r30,24
	ctx.r9.s64 = ctx.r30.s64 + 24;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r8,r30,12
	ctx.r8.s64 = ctx.r30.s64 + 12;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r30,36
	ctx.r7.s64 = ctx.r30.s64 + 36;
	// add r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 + ctx.r17.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_831B65A0:
	// lbzx r10,r3,r20
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r20.u32);
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// rotlwi r6,r10,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// cmplw cr6,r3,r19
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r19.u32, ctx.xer);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f8,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lfs f6,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// lfs f31,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fmuls f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fmuls f9,f1,f9
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// fmuls f10,f1,f10
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fmuls f8,f31,f8
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f8.f64));
	// fmuls f7,f31,f7
	ctx.f7.f64 = double(float(ctx.f31.f64 * ctx.f7.f64));
	// fmuls f6,f31,f6
	ctx.f6.f64 = double(float(ctx.f31.f64 * ctx.f6.f64));
	// fadds f2,f11,f0
	ctx.f2.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fadds f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f1,f10,f13
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f13,f2,f8
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// fadds f11,f0,f6
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// fadds f12,f1,f7
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// fadds f10,f5,f13
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// stfs f10,-8(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// fadds f8,f11,f3
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f9,f12,f4
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// stfs f9,-4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// blt cr6,0x831b65a0
	if (ctx.cr6.lt) goto loc_831B65A0;
loc_831B6654:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x831b6aa4
	if (ctx.cr6.eq) goto loc_831B6AA4;
	// lfs f7,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// li r21,1
	ctx.r21.s64 = 1;
	// lfs f6,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f6.f64 = double(temp.f32);
	// addi r25,r17,4
	ctx.r25.s64 = ctx.r17.s64 + 4;
	// lfs f5,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
	// lfs f29,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f29.f64 = double(temp.f32);
	// lfs f4,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f4.f64 = double(temp.f32);
loc_831B667C:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// cmplw cr6,r21,r19
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x831b668c
	if (ctx.cr6.lt) goto loc_831B668C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_831B668C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f10,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// addi r24,r25,-4
	ctx.r24.s64 = ctx.r25.s64 + -4;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f11,0(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f3,8(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// add r28,r11,r17
	ctx.r28.u64 = ctx.r11.u64 + ctx.r17.u64;
	// lfsx f1,r11,r17
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r17.u32);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f13,f1,f9
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f9.f64));
	// stfs f13,120(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lfs f0,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f10
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f1,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f1,f8
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f8.f64));
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f12,124(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// fmuls f1,f3,f13
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmuls f31,f11,f12
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f30,f2,f0
	ctx.f30.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmsubs f0,f11,f0,f1
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f1.f64));
	// fmsubs f13,f2,f13,f31
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 - ctx.f31.f64));
	// fmsubs f12,f3,f12,f30
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 - ctx.f30.f64));
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f3,f12,f12,f11
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f11,f0,f0,f3
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f3.f64));
	// fcmpu cr6,f11,f25
	ctx.cr6.compare(ctx.f11.f64, ctx.f25.f64);
	// ble cr6,0x831b6720
	if (!ctx.cr6.gt) goto loc_831B6720;
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f3,f4,f11
	ctx.f3.f64 = double(float(ctx.f4.f64 / ctx.f11.f64));
	// fmuls f27,f12,f3
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fmuls f31,f0,f3
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// fmuls f30,f13,f3
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// b 0x831b672c
	goto loc_831B672C;
loc_831B6720:
	// fmr f27,f25
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f25.f64;
	// fmr f31,f25
	ctx.f31.f64 = ctx.f25.f64;
	// fmr f30,f25
	ctx.f30.f64 = ctx.f25.f64;
loc_831B672C:
	// fmuls f11,f10,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fabs f13,f27
	ctx.f13.u64 = ctx.f27.u64 & ~0x8000000000000000;
	// li r10,2
	ctx.r10.s64 = 2;
	// fabs f0,f31
	ctx.f0.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// fabs f12,f30
	ctx.f12.u64 = ctx.f30.u64 & ~0x8000000000000000;
	// fmadds f10,f8,f30,f11
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 + ctx.f11.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fnmadds f28,f9,f27,f10
	ctx.f28.f64 = double(float(-(ctx.f9.f64 * ctx.f27.f64 + ctx.f10.f64)));
	// ble cr6,0x831b675c
	if (!ctx.cr6.gt) goto loc_831B675C;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x831b6768
	if (ctx.cr6.gt) goto loc_831B6768;
loc_831B675C:
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x831b676c
	if (!ctx.cr6.gt) goto loc_831B676C;
	// li r10,1
	ctx.r10.s64 = 1;
loc_831B6768:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831B676C:
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r31,120
	ctx.r11.s64 = ctx.r31.s64 + 120;
	// addi r10,r31,120
	ctx.r10.s64 = ctx.r31.s64 + 120;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// lfsx f13,r26,r14
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r14.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r27,r14
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r14.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f26,r27,r11
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f12,f13,f26
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f26.f64));
	// lfsx f24,r26,r10
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	ctx.f24.f64 = double(temp.f32);
	// fmsubs f11,f0,f24,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f24.f64 - ctx.f12.f64));
	// fdivs f23,f4,f11
	ctx.f23.f64 = double(float(ctx.f4.f64 / ctx.f11.f64));
	// beq cr6,0x831b6a94
	if (ctx.cr6.eq) goto loc_831B6A94;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r29,r18,-1
	ctx.r29.s64 = ctx.r18.s64 + -1;
	// mr r23,r16
	ctx.r23.u64 = ctx.r16.u64;
loc_831B67AC:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r16.u32, ctx.xer);
	// blt cr6,0x831b67bc
	if (ctx.cr6.lt) goto loc_831B67BC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_831B67BC:
	// lbzx r10,r10,r18
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r18.u32);
	// lbzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r30.u32);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f3,f30,f0
	ctx.f3.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmuls f2,f30,f13
	ctx.f2.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f27,f10
	ctx.f8.f64 = double(float(ctx.f27.f64 * ctx.f10.f64));
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f1,f31,f11,f3
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f11.f64 + ctx.f3.f64));
	// fmadds f3,f31,f12,f2
	ctx.f3.f64 = double(float(ctx.f31.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fmadds f2,f27,f9,f1
	ctx.f2.f64 = double(float(ctx.f27.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fadds f1,f3,f8
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// fadds f3,f2,f28
	ctx.f3.f64 = double(float(ctx.f2.f64 + ctx.f28.f64));
	// fadds f2,f1,f28
	ctx.f2.f64 = double(float(ctx.f1.f64 + ctx.f28.f64));
	// fmuls f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fcmpu cr6,f1,f25
	ctx.cr6.compare(ctx.f1.f64, ctx.f25.f64);
	// bgt cr6,0x831b697c
	if (ctx.cr6.gt) goto loc_831B697C;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsubs f13,f9,f10
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f9,f13,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f11,f12,f12,f9
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fcmpu cr6,f11,f25
	ctx.cr6.compare(ctx.f11.f64, ctx.f25.f64);
	// ble cr6,0x831b6864
	if (!ctx.cr6.gt) goto loc_831B6864;
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f9,f4,f11
	ctx.f9.f64 = double(float(ctx.f4.f64 / ctx.f11.f64));
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// b 0x831b6870
	goto loc_831B6870;
loc_831B6864:
	// fmr f13,f25
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f25.f64;
	// fmr f12,f25
	ctx.f12.f64 = ctx.f25.f64;
	// fmr f0,f25
	ctx.f0.f64 = ctx.f25.f64;
loc_831B6870:
	// fmuls f11,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmadds f9,f13,f27,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f27.f64 + ctx.f11.f64));
	// fmadds f11,f12,f31,f9
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f9.f64));
	// fcmpu cr6,f11,f25
	ctx.cr6.compare(ctx.f11.f64, ctx.f25.f64);
	// beq cr6,0x831b697c
	if (ctx.cr6.eq) goto loc_831B697C;
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r9,r31,88
	ctx.r9.s64 = ctx.r31.s64 + 88;
	// fmuls f7,f30,f9
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f9.f64));
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// addi r10,r31,88
	ctx.r10.s64 = ctx.r31.s64 + 88;
	// fmadds f5,f31,f6,f7
	ctx.f5.f64 = double(float(ctx.f31.f64 * ctx.f6.f64 + ctx.f7.f64));
	// fadds f3,f5,f8
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// fadds f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f28.f64));
	// fdivs f1,f2,f11
	ctx.f1.f64 = double(float(ctx.f2.f64 / ctx.f11.f64));
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f8,f12,f1
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmuls f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fsubs f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f13,f6,f8
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// fsubs f12,f9,f11
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fmr f5,f0
	ctx.f5.f64 = ctx.f0.f64;
	// stfs f5,88(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// fmr f6,f13
	ctx.f6.f64 = ctx.f13.f64;
	// stfs f6,92(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// fmr f7,f12
	ctx.f7.f64 = ctx.f12.f64;
	// stfs f7,96(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lfsx f11,r27,r9
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f3,r26,r10
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	ctx.f3.f64 = double(temp.f32);
	// lfsx f9,r27,r24
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r24.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f2,r26,r24
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r24.u32);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fmuls f10,f1,f26
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f26.f64));
	// fsubs f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fmsubs f3,f8,f24,f10
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f24.f64 - ctx.f10.f64));
	// fmuls f29,f3,f23
	ctx.f29.f64 = double(float(ctx.f3.f64 * ctx.f23.f64));
	// fcmpu cr6,f29,f25
	ctx.cr6.compare(ctx.f29.f64, ctx.f25.f64);
	// blt cr6,0x831b697c
	if (ctx.cr6.lt) goto loc_831B697C;
	// lfs f10,4(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f8,8(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f29,f10
	ctx.f7.f64 = double(float(ctx.f29.f64 * ctx.f10.f64));
	// fmuls f3,f29,f8
	ctx.f3.f64 = double(float(ctx.f29.f64 * ctx.f8.f64));
	// lfs f11,0(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f11,f29
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fsubs f6,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// stfs f6,92(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// fsubs f7,f12,f3
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// stfs f7,96(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// fsubs f5,f0,f9
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// stfs f5,88(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lfs f13,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// lfs f11,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f12,f7
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fsubs f9,f11,f7
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// lfs f2,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f8,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f1,f2,f6
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f6.f64));
	// fsubs f3,f8,f6
	ctx.f3.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// lfs f0,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// fmuls f2,f9,f10
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmadds f12,f3,f1,f2
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f1.f64 + ctx.f2.f64));
	// fmadds f11,f0,f13,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f11,f25
	ctx.cr6.compare(ctx.f11.f64, ctx.f25.f64);
	// blt cr6,0x831b6980
	if (ctx.cr6.lt) goto loc_831B6980;
loc_831B697C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831B6980:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831b6a88
	if (ctx.cr6.eq) goto loc_831B6A88;
	// lfs f0,12(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lbz r10,807(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 807);
	// lfs f13,16(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f6,f0
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f11,20(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f6
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fmuls f8,f11,f6
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// lfs f9,0(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,4(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f4,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// lfs f3,8(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f6,f5
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmuls f1,f3,f5
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// lfs f0,24(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f7,f0
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f9,32(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f6,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmuls f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// lfs f3,36(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,40(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f13,44(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f4,f12
	ctx.f12.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// fadds f10,f2,f10
	ctx.f10.f64 = double(float(ctx.f2.f64 + ctx.f10.f64));
	// fadds f9,f1,f8
	ctx.f9.f64 = double(float(ctx.f1.f64 + ctx.f8.f64));
	// fadds f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f7,f10,f6
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// fadds f6,f9,f5
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// fadds f5,f8,f3
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// stfs f5,88(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// fadds f4,f0,f7
	ctx.f4.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// stfs f4,92(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// fadds f3,f13,f6
	ctx.f3.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// stfs f3,96(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// beq cr6,0x831b6a24
	if (ctx.cr6.eq) goto loc_831B6A24;
	// addi r5,r31,104
	ctx.r5.s64 = ctx.r31.s64 + 104;
	// b 0x831b6a4c
	goto loc_831B6A4C;
loc_831B6A24:
	// lfs f0,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r31,256
	ctx.r5.s64 = ctx.r31.s64 + 256;
	// lfs f13,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f12,256(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// stfs f10,260(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stfs f9,264(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
loc_831B6A4C:
	// lwz r3,796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 796);
	// fneg f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// lwz r8,788(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r7,780(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x831B6A70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f7,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f6.f64 = double(temp.f32);
	// stb r9,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r9.u8);
	// lfs f5,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f4.f64 = double(temp.f32);
loc_831B6A88:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne 0x831b67ac
	if (!ctx.cr0.eq) goto loc_831B67AC;
loc_831B6A94:
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r25,r25,12
	ctx.r25.s64 = ctx.r25.s64 + 12;
	// bne 0x831b667c
	if (!ctx.cr0.eq) goto loc_831B667C;
loc_831B6AA4:
	// lbz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// addi r1,r31,656
	ctx.r1.s64 = ctx.r31.s64 + 656;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6afc
	ctx.lr = 0x831B6AB4;
	__restfpr_14(ctx, base);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831B6AB8"))) PPC_WEAK_FUNC(sub_831B6AB8);
PPC_FUNC_IMPL(__imp__sub_831B6AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x831B6AC0;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// lfs f13,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stfs f13,88(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// bl 0x831b6d50
	ctx.lr = 0x831B6B04;
	sub_831B6D50(ctx, base);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r7,r8
	ctx.r7.s64 = -ctx.r8.s64;
	// rlwinm r12,r7,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82cb8074
	ctx.lr = 0x831B6B1C;
	sub_82CB8074(ctx, base);
	// lwz r5,0(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f13,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// lfs f12,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// stwux r5,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r1.u32 = ea;
	// lfs f10,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x831b6ca4
	if (ctx.cr6.lt) goto loc_831B6CA4;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// addi r9,r28,1
	ctx.r9.s64 = ctx.r28.s64 + 1;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_831B6B64:
	// lbz r10,-1(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lfs f8,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// lfs f6,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f6,f10,f7
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fmadds f3,f9,f5,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f5.f64 + ctx.f4.f64));
	// stfs f3,-28(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + -28, temp.u32);
	// lfs f2,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f8,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmadds f6,f2,f13,f7
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f5,f12,f1,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f6.f64));
	// stfs f5,-24(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + -24, temp.u32);
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lfs f4,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f11
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmadds f8,f4,f10,f1
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f1.f64));
	// fmadds f7,f9,f3,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f3.f64 + ctx.f8.f64));
	// stfs f7,-16(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + -16, temp.u32);
	// lfs f6,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmadds f2,f6,f13,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fmadds f1,f12,f5,f2
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + ctx.f2.f64));
	// stfs f1,-12(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// lbz r10,1(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lfs f8,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f11
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmadds f4,f8,f10,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fmadds f3,f9,f7,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 + ctx.f4.f64));
	// stfs f3,-4(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f2,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f8,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmadds f6,f2,f13,f7
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f5,f12,f1,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f6.f64));
	// stfs f5,0(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lbz r10,2(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lfs f4,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f11
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmadds f8,f4,f10,f1
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f1.f64));
	// fmadds f7,f9,f3,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f3.f64 + ctx.f8.f64));
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f6,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmadds f2,f6,f13,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fmadds f1,f12,f5,f2
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + ctx.f2.f64));
	// stfs f1,12(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bne 0x831b6b64
	if (!ctx.cr0.eq) goto loc_831B6B64;
loc_831B6CA4:
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x831b6d18
	if (!ctx.cr6.lt) goto loc_831B6D18;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_831B6CBC:
	// lbzx r11,r6,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r28.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r29.u32, ctx.xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f8,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f6,f10,f7
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fmadds f3,f9,f5,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f5.f64 + ctx.f4.f64));
	// stfs f3,0(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f6,f2,f13,f7
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f7.f64));
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f5,f12,f1,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f6.f64));
	// stfs f5,4(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// blt cr6,0x831b6cbc
	if (ctx.cr6.lt) goto loc_831B6CBC;
loc_831B6D18:
	// lfs f8,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmuls f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// lfs f6,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f4,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f6,f9,f7
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fmadds f2,f6,f12,f5
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fmadds f1,f4,f10,f3
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f3.f64));
	// fmadds f2,f4,f13,f2
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f2.f64));
	// bl 0x831b5750
	ctx.lr = 0x831B6D44;
	sub_831B5750(ctx, base);
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831B6D4C"))) PPC_WEAK_FUNC(sub_831B6D4C);
PPC_FUNC_IMPL(__imp__sub_831B6D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831B6D50"))) PPC_WEAK_FUNC(sub_831B6D50);
PPC_FUNC_IMPL(__imp__sub_831B6D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6ae4
	ctx.lr = 0x831B6D60;
	__savefpr_27(ctx, base);
	// lfs f13,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f5,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f3,f5,f12
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f10,f13
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f4,f7,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// lfs f9,-17600(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17600);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmadds f2,f10,f7,f11
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f7.f64 + ctx.f11.f64));
	// fmsubs f11,f13,f8,f3
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 - ctx.f3.f64));
	// fmsubs f0,f7,f12,f6
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 - ctx.f6.f64));
	// fmsubs f12,f10,f5,f4
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f5.f64 - ctx.f4.f64));
	// fmadds f13,f5,f8,f2
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 + ctx.f2.f64));
	// fabs f1,f13
	ctx.f1.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f1,f9
	ctx.cr6.compare(ctx.f1.f64, ctx.f9.f64);
	// ble cr6,0x831b6f30
	if (!ctx.cr6.gt) goto loc_831B6F30;
	// fmr f9,f8
	ctx.f9.f64 = ctx.f8.f64;
	// addi r11,r11,6140
	ctx.r11.s64 = ctx.r11.s64 + 6140;
	// fabs f0,f10
	ctx.f0.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// lfs f6,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fabs f12,f6
	ctx.f12.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fabs f13,f9
	ctx.f13.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x831b6df4
	if (!ctx.cr6.lt) goto loc_831B6DF4;
	// lfs f13,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x831b6e10
	if (!ctx.cr6.lt) goto loc_831B6E10;
	// fmr f12,f5
	ctx.f12.f64 = ctx.f5.f64;
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// b 0x831b6e18
	goto loc_831B6E18;
loc_831B6DF4:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x831b6e0c
	if (!ctx.cr6.lt) goto loc_831B6E0C;
	// lfs f12,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f12.f64 = double(temp.f32);
	// fmr f13,f5
	ctx.f13.f64 = ctx.f5.f64;
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// b 0x831b6e18
	goto loc_831B6E18;
loc_831B6E0C:
	// lfs f13,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
loc_831B6E10:
	// fmr f11,f5
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f5.f64;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
loc_831B6E18:
	// lfs f8,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fsubs f9,f13,f8
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// lfs f4,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f13,f11,f6
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f6.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f8,f11,f4
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f4.f64));
	// stfs f0,-60(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// fsubs f7,f12,f7
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// stfs f9,-76(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stfs f8,-72(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// stfs f13,-56(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lfs f10,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// stfs f7,-80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f12,-64(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// fmuls f3,f0,f0
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f2,f9,f9
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmuls f1,f9,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmadds f11,f13,f13,f3
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fmadds f6,f8,f8,f2
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f2.f64));
	// fmadds f4,f8,f13,f1
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fmadds f3,f12,f12,f11
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f2,f7,f7,f6
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fmadds f1,f7,f12,f4
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fdivs f11,f10,f3
	ctx.f11.f64 = double(float(ctx.f10.f64 / ctx.f3.f64));
	// fdivs f10,f10,f2
	ctx.f10.f64 = double(float(ctx.f10.f64 / ctx.f2.f64));
	// fmuls f6,f1,f10
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fmuls f6,f6,f11
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
loc_831B6E98:
	// addi r8,r1,-80
	ctx.r8.s64 = ctx.r1.s64 + -80;
	// addi r7,r1,-64
	ctx.r7.s64 = ctx.r1.s64 + -64;
	// lfsx f4,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// lfsx f2,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f4,f10
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fmuls f31,f4,f10
	ctx.f31.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f30,f2,f11
	ctx.f30.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// fmuls f29,f2,f11
	ctx.f29.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmuls f2,f2,f11
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmuls f28,f4,f6
	ctx.f28.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// fmuls f27,f4,f6
	ctx.f27.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// fmuls f4,f4,f6
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// fmuls f3,f3,f7
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// fmuls f1,f1,f9
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// fmuls f31,f31,f8
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f8.f64));
	// fmadds f3,f30,f12,f3
	ctx.f3.f64 = double(float(ctx.f30.f64 * ctx.f12.f64 + ctx.f3.f64));
	// fmadds f1,f29,f0,f1
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f1.f64));
	// fmadds f2,f2,f13,f31
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f31.f64));
	// fmsubs f3,f28,f12,f3
	ctx.f3.f64 = double(float(ctx.f28.f64 * ctx.f12.f64 - ctx.f3.f64));
	// stfs f3,-24(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + -24, temp.u32);
	// fmsubs f1,f27,f0,f1
	ctx.f1.f64 = double(float(ctx.f27.f64 * ctx.f0.f64 - ctx.f1.f64));
	// stfs f1,-12(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + -12, temp.u32);
	// fmsubs f4,f4,f13,f2
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 - ctx.f2.f64));
	// stfs f4,0(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f3,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// stfs f2,0(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// blt cr6,0x831b6e98
	if (ctx.cr6.lt) goto loc_831B6E98;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b30
	ctx.lr = 0x831B6F24;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_831B6F30:
	// lfs f10,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f0,f0
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fadds f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fdivs f7,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 / ctx.f8.f64));
	// fmuls f6,f11,f7
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmadds f4,f9,f7,f13
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 + ctx.f13.f64));
	// stfs f4,16(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fmuls f3,f0,f6
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmuls f2,f12,f6
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f1,f0,f5
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmadds f10,f11,f6,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f6.f64 + ctx.f13.f64));
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmadds f9,f12,f5,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + ctx.f13.f64));
	// stfs f9,32(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fsubs f8,f3,f12
	ctx.f8.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// stfs f8,12(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fadds f6,f3,f12
	ctx.f6.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// stfs f6,4(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f7,f2,f0
	ctx.f7.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// stfs f7,24(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fsubs f5,f1,f11
	ctx.f5.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
	// stfs f5,28(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fsubs f4,f2,f0
	ctx.f4.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// stfs f4,8(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fadds f3,f1,f11
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// stfs f3,20(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b30
	ctx.lr = 0x831B6FA4;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B6FB0"))) PPC_WEAK_FUNC(sub_831B6FB0);
PPC_FUNC_IMPL(__imp__sub_831B6FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lfs f4,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f5,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f3,f12,f4
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fmuls f2,f10,f5
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f31,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f3,f11,f8,f3
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fmadds f2,f9,f4,f2
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fmadds f5,f13,f5,f3
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fadds f4,f2,f31
	ctx.f4.f64 = double(float(ctx.f2.f64 + ctx.f31.f64));
	// fadds f3,f5,f31
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f31.f64));
	// fadds f2,f4,f6
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// fmuls f5,f3,f2
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// bgt cr6,0x831b7190
	if (ctx.cr6.gt) goto loc_831B7190;
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fsubs f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f9,f12,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f10,f11,f11,f9
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x831b7054
	if (!ctx.cr6.gt) goto loc_831B7054;
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f5,f10,f9
	ctx.f5.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fmuls f11,f11,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f12,f12,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// fmuls f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// b 0x831b7060
	goto loc_831B7060;
loc_831B7054:
	// fmr f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f0.f64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_831B7060:
	// lfs f10,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f10,f12
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f4,f9,f13,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f8,f8,f11,f4
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f4.f64));
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// beq cr6,0x831b7190
	if (ctx.cr6.eq) goto loc_831B7190;
	// lfs f5,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fmuls f4,f5,f9
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// lfs f3,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// fmadds f10,f3,f10,f4
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 + ctx.f4.f64));
	// fadds f9,f10,f6
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// fadds f6,f9,f2
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// fdivs f4,f6,f8
	ctx.f4.f64 = double(float(ctx.f6.f64 / ctx.f8.f64));
	// fmuls f2,f13,f4
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fmuls f13,f11,f4
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fmuls f12,f12,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fsubs f11,f5,f2
	ctx.f11.f64 = double(float(ctx.f5.f64 - ctx.f2.f64));
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fsubs f10,f7,f13
	ctx.f10.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f9,f3,f12
	ctx.f9.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfsx f8,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f7,r8,r5
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f6,r8,r3
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f5,r9,r3
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfsx f3,r9,r5
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fsubs f13,f8,f7
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f12,f2,f6
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f6.f64));
	// fmsubs f11,f13,f5,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 - ctx.f12.f64));
	// fmuls f13,f11,f1
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x831b7190
	if (ctx.cr6.lt) goto loc_831B7190;
	// lfs f8,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fmuls f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f12,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f1,f4,f6
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// stfs f1,8(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fsubs f3,f7,f10
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f2,f5,f9
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// stfs f2,4(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f11,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f8,f13,f1
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// lfs f7,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// lfs f5,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f2
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f2.f64));
	// fsubs f2,f7,f2
	ctx.f2.f64 = double(float(ctx.f7.f64 - ctx.f2.f64));
	// fsubs f6,f12,f3
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// fsubs f1,f9,f3
	ctx.f1.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// fmuls f13,f4,f2
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f2.f64));
	// fmadds f12,f8,f10,f13
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fmadds f11,f6,f1,f12
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f1.f64 + ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x831b7194
	if (ctx.cr6.lt) goto loc_831B7194;
loc_831B7190:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831B7194:
	// lfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B719C"))) PPC_WEAK_FUNC(sub_831B719C);
PPC_FUNC_IMPL(__imp__sub_831B719C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831B71A0"))) PPC_WEAK_FUNC(sub_831B71A0);
PPC_FUNC_IMPL(__imp__sub_831B71A0) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v1,r3,r4
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B71A8"))) PPC_WEAK_FUNC(sub_831B71A8);
PPC_FUNC_IMPL(__imp__sub_831B71A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x831b7218
	if (ctx.cr6.eq) goto loc_831B7218;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f6,f7,f11
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f11.f64));
	// fmadds f12,f5,f7,f9
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 + ctx.f9.f64));
	// fmadds f11,f4,f7,f8
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f8.f64));
	// fmadds f10,f3,f2,f13
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f13.f64));
	// stfs f10,-16(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fmadds f9,f3,f1,f12
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f1.f64 + ctx.f12.f64));
	// stfs f9,-12(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmadds f8,f3,f0,f11
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f8,-8(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// b 0x831b721c
	goto loc_831B721C;
loc_831B7218:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_831B721C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,36(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// lfs f0,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f9,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f9,f12,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f0,f8,f11,f7
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f7.f64));
	// blt cr6,0x831b7320
	if (ctx.cr6.lt) goto loc_831B7320;
	// addi r8,r7,-3
	ctx.r8.s64 = ctx.r7.s64 + -3;
	// addi r10,r9,52
	ctx.r10.s64 = ctx.r9.s64 + 52;
loc_831B7270:
	// lfs f10,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f8,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f10,f7,f13,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x831b7298
	if (!ctx.cr6.gt) goto loc_831B7298;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_831B7298:
	// lfs f10,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f10,f7,f11,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x831b72c0
	if (!ctx.cr6.gt) goto loc_831B72C0;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
loc_831B72C0:
	// lfs f10,72(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f10,f7,f11,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x831b72e8
	if (!ctx.cr6.gt) goto loc_831B72E8;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
loc_831B72E8:
	// lfs f10,108(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f10,f7,f11,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x831b7310
	if (!ctx.cr6.gt) goto loc_831B7310;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
loc_831B7310:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,144
	ctx.r10.s64 = ctx.r10.s64 + 144;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x831b7270
	if (ctx.cr6.lt) goto loc_831B7270;
loc_831B7320:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_831B733C:
	// lfs f10,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f8,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f10,f13,f7,f6
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x831b7364
	if (!ctx.cr6.gt) goto loc_831B7364;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_831B7364:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x831b733c
	if (ctx.cr6.lt) goto loc_831B733C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B7378"))) PPC_WEAK_FUNC(sub_831B7378);
PPC_FUNC_IMPL(__imp__sub_831B7378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x831b73f4
	if (ctx.cr6.eq) goto loc_831B73F4;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f6,f7,f11
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f11.f64));
	// fmadds f12,f5,f7,f9
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 + ctx.f9.f64));
	// fmadds f11,f4,f7,f8
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f8.f64));
	// fmadds f10,f3,f2,f13
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f13.f64));
	// stfs f10,-32(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// fmadds f9,f1,f3,f12
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + ctx.f12.f64));
	// stfs f9,-28(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// fmadds f8,f0,f3,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f11.f64));
	// stfs f8,-24(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// b 0x831b73f8
	goto loc_831B73F8;
loc_831B73F4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_831B73F8:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r31,36(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// lwz r8,32(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f9,f12,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f0,f8,f11,f7
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f7.f64));
	// blt cr6,0x831b74fc
	if (ctx.cr6.lt) goto loc_831B74FC;
	// addi r9,r8,-3
	ctx.r9.s64 = ctx.r8.s64 + -3;
	// addi r10,r31,52
	ctx.r10.s64 = ctx.r31.s64 + 52;
loc_831B744C:
	// lfs f10,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f8,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f10,f7,f13,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x831b7474
	if (!ctx.cr6.gt) goto loc_831B7474;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_831B7474:
	// lfs f10,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f10,f7,f11,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x831b749c
	if (!ctx.cr6.gt) goto loc_831B749C;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
loc_831B749C:
	// lfs f10,72(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f10,f7,f11,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x831b74c4
	if (!ctx.cr6.gt) goto loc_831B74C4;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
loc_831B74C4:
	// lfs f10,108(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f10,f7,f11,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x831b74ec
	if (!ctx.cr6.gt) goto loc_831B74EC;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
loc_831B74EC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,144
	ctx.r10.s64 = ctx.r10.s64 + 144;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x831b744c
	if (ctx.cr6.lt) goto loc_831B744C;
loc_831B74FC:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x831b7550
	if (!ctx.cr6.lt) goto loc_831B7550;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_831B7518:
	// lfs f10,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f8,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f10,f7,f13,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x831b7540
	if (!ctx.cr6.gt) goto loc_831B7540;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_831B7540:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x831b7518
	if (ctx.cr6.lt) goto loc_831B7518;
loc_831B7550:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r4,48(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r5,56(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// blt cr6,0x831b7634
	if (ctx.cr6.lt) goto loc_831B7634;
	// addi r7,r4,-3
	ctx.r7.s64 = ctx.r4.s64 + -3;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r10,r5,16
	ctx.r10.s64 = ctx.r5.s64 + 16;
loc_831B7580:
	// lfs f10,-12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f10,f7,f11,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x831b75a8
	if (!ctx.cr6.gt) goto loc_831B75A8;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_831B75A8:
	// lfs f10,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f8,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f10,f7,f13,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x831b75d0
	if (!ctx.cr6.gt) goto loc_831B75D0;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831B75D0:
	// lfs f10,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f10,f7,f11,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x831b75f8
	if (!ctx.cr6.gt) goto loc_831B75F8;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_831B75F8:
	// lfs f10,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f10,f7,f11,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x831b7620
	if (!ctx.cr6.gt) goto loc_831B7620;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
loc_831B7620:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x831b7580
	if (ctx.cr6.lt) goto loc_831B7580;
loc_831B7634:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x831b7688
	if (!ctx.cr6.lt) goto loc_831B7688;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_831B7650:
	// lfs f10,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f8,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f11,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fmadds f10,f7,f13,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x831b7678
	if (!ctx.cr6.gt) goto loc_831B7678;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_831B7678:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x831b7650
	if (ctx.cr6.lt) goto loc_831B7650;
loc_831B7688:
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x831b773c
	if (ctx.cr6.eq) goto loc_831B773C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x831b76a0
	if (ctx.cr6.eq) goto loc_831B76A0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_831B76A0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,60(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// lwz r9,64(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r3,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 3);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r6,r3,r10
	ctx.r6.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// lfs f0,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f7,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f6,f12,f9
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f2,f7,f12,f8
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmadds f1,f4,f11,f3
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f3.f64));
	// fmadds f0,f5,f11,f2
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x831b774c
	if (!ctx.cr6.gt) goto loc_831B774C;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_831B773C:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x831b774c
	if (ctx.cr6.eq) goto loc_831B774C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_831B774C:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B7758"))) PPC_WEAK_FUNC(sub_831B7758);
PPC_FUNC_IMPL(__imp__sub_831B7758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f11,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f10,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f9,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B7790"))) PPC_WEAK_FUNC(sub_831B7790);
PPC_FUNC_IMPL(__imp__sub_831B7790) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B77A4"))) PPC_WEAK_FUNC(sub_831B77A4);
PPC_FUNC_IMPL(__imp__sub_831B77A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831B77A8"))) PPC_WEAK_FUNC(sub_831B77A8);
PPC_FUNC_IMPL(__imp__sub_831B77A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,32(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B77BC"))) PPC_WEAK_FUNC(sub_831B77BC);
PPC_FUNC_IMPL(__imp__sub_831B77BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831B77C0"))) PPC_WEAK_FUNC(sub_831B77C0);
PPC_FUNC_IMPL(__imp__sub_831B77C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,40(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,36(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B77E4"))) PPC_WEAK_FUNC(sub_831B77E4);
PPC_FUNC_IMPL(__imp__sub_831B77E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831B77E8"))) PPC_WEAK_FUNC(sub_831B77E8);
PPC_FUNC_IMPL(__imp__sub_831B77E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,36(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B77FC"))) PPC_WEAK_FUNC(sub_831B77FC);
PPC_FUNC_IMPL(__imp__sub_831B77FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831B7800"))) PPC_WEAK_FUNC(sub_831B7800);
PPC_FUNC_IMPL(__imp__sub_831B7800) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,48(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B7814"))) PPC_WEAK_FUNC(sub_831B7814);
PPC_FUNC_IMPL(__imp__sub_831B7814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831B7818"))) PPC_WEAK_FUNC(sub_831B7818);
PPC_FUNC_IMPL(__imp__sub_831B7818) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B782C"))) PPC_WEAK_FUNC(sub_831B782C);
PPC_FUNC_IMPL(__imp__sub_831B782C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831B7830"))) PPC_WEAK_FUNC(sub_831B7830);
PPC_FUNC_IMPL(__imp__sub_831B7830) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B7844"))) PPC_WEAK_FUNC(sub_831B7844);
PPC_FUNC_IMPL(__imp__sub_831B7844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831B7848"))) PPC_WEAK_FUNC(sub_831B7848);
PPC_FUNC_IMPL(__imp__sub_831B7848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r11,-29208
	ctx.r9.s64 = ctx.r11.s64 + -29208;
	// addi r8,r10,-29304
	ctx.r8.s64 = ctx.r10.s64 + -29304;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r3,108
	ctx.r11.s64 = ctx.r3.s64 + 108;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fneg f9,f0
	ctx.f9.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f10,8(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f9,16(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// addi r9,r8,-24
	ctx.r9.s64 = ctx.r8.s64 + -24;
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stfs f11,24(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stfs f9,28(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f12,36(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f9,40(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f10,44(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f12,48(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f9,52(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f10,56(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f11,60(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f11,72(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f13,80(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f12,84(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f10,92(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f12,96(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
loc_831B78E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// sth r7,-4(r11)
	PPC_STORE_U16(ctx.r11.u32 + -4, ctx.r7.u16);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// bne 0x831b78e8
	if (!ctx.cr0.eq) goto loc_831B78E8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f13,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,152(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// lfs f0,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// lfs f12,-18324(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18324);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f10,164(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stfs f12,224(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// stfs f0,228(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// stfs f0,232(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f9,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f8,236(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// lfs f7,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,172(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// lfs f6,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fneg f5,f6
	ctx.f5.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// stfs f5,168(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// lfs f4,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,244(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// lfs f3,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fneg f2,f3
	ctx.f2.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// stfs f2,240(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// stfs f13,264(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 264, temp.u32);
	// stfs f0,260(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// stfs f0,268(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 268, temp.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f1,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fneg f11,f1
	ctx.f11.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f11,272(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 272, temp.u32);
	// stfs f0,296(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 296, temp.u32);
	// stfs f12,300(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 300, temp.u32);
	// stfs f0,304(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 304, temp.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f9,308(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 308, temp.u32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,280(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 280, temp.u32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fneg f6,f7
	ctx.f6.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// stfs f6,276(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 276, temp.u32);
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,316(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 316, temp.u32);
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fneg f3,f4
	ctx.f3.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// stfs f3,312(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 312, temp.u32);
	// stfs f13,196(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// stfs f0,192(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f2,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// stfs f1,200(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f12,124(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,128(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,208(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f10,204(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,136(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// stfs f7,132(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B7A44"))) PPC_WEAK_FUNC(sub_831B7A44);
PPC_FUNC_IMPL(__imp__sub_831B7A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831B7A48"))) PPC_WEAK_FUNC(sub_831B7A48);
PPC_FUNC_IMPL(__imp__sub_831B7A48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x831b7abc
	if (ctx.cr6.eq) goto loc_831B7ABC;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f6,f7,f11
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f11.f64));
	// fmadds f12,f5,f7,f9
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 + ctx.f9.f64));
	// fmadds f11,f4,f7,f8
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f8.f64));
	// fmadds f10,f3,f2,f13
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f13.f64));
	// stfs f10,-16(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fmadds f9,f3,f1,f12
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f1.f64 + ctx.f12.f64));
	// stfs f9,-12(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmadds f8,f3,f0,f11
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f8,-8(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// b 0x831b7ac0
	goto loc_831B7AC0;
loc_831B7ABC:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_831B7AC0:
	// addi r11,r9,104
	ctx.r11.s64 = ctx.r9.s64 + 104;
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,124(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 124);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,116(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f5,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f9,f12,f10
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f2,f5,f12,f6
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmadds f0,f8,f11,f3
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f3.f64));
	// fmadds f10,f4,f11,f2
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x831b7b18
	if (!ctx.cr6.gt) goto loc_831B7B18;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// li r3,1
	ctx.r3.s64 = 1;
loc_831B7B18:
	// lfs f10,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f10,f7,f11,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x831b7b40
	if (!ctx.cr6.gt) goto loc_831B7B40;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// li r3,2
	ctx.r3.s64 = 2;
loc_831B7B40:
	// lfs f10,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,92(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f10,f7,f11,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x831b7b68
	if (!ctx.cr6.gt) goto loc_831B7B68;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// li r3,3
	ctx.r3.s64 = 3;
loc_831B7B68:
	// lfs f10,124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f10,f7,f11,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x831b7b90
	if (!ctx.cr6.gt) goto loc_831B7B90;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// li r3,4
	ctx.r3.s64 = 4;
loc_831B7B90:
	// lfs f10,160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f5,f7,f11,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B7BB8"))) PPC_WEAK_FUNC(sub_831B7BB8);
PPC_FUNC_IMPL(__imp__sub_831B7BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x831b7c28
	if (ctx.cr6.eq) goto loc_831B7C28;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f6,f7,f11
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f11.f64));
	// fmadds f12,f5,f7,f9
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 + ctx.f9.f64));
	// fmadds f11,f4,f7,f8
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f8.f64));
	// fmadds f10,f3,f2,f13
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f13.f64));
	// stfs f10,-16(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fmadds f9,f1,f3,f12
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + ctx.f12.f64));
	// stfs f9,-12(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmadds f8,f0,f3,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f11.f64));
	// stfs f8,-8(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// b 0x831b7c2c
	goto loc_831B7C2C;
loc_831B7C28:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_831B7C2C:
	// addi r8,r3,104
	ctx.r8.s64 = ctx.r3.s64 + 104;
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r8,36
	ctx.r11.s64 = ctx.r8.s64 + 36;
	// lfs f0,16(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,52(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f7,20(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,56(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,48(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f7,f12,f9
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f2,f6,f12,f8
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmadds f0,f5,f11,f3
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f3.f64));
	// fmadds f10,f4,f11,f2
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x831b7c84
	if (!ctx.cr6.gt) goto loc_831B7C84;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// li r3,1
	ctx.r3.s64 = 1;
loc_831B7C84:
	// lfs f10,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f10,f7,f11,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x831b7cac
	if (!ctx.cr6.gt) goto loc_831B7CAC;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// li r3,2
	ctx.r3.s64 = 2;
loc_831B7CAC:
	// lfs f10,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,92(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f10,f7,f11,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x831b7cd4
	if (!ctx.cr6.gt) goto loc_831B7CD4;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// li r3,3
	ctx.r3.s64 = 3;
loc_831B7CD4:
	// lfs f10,124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f10,f7,f11,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x831b7cfc
	if (!ctx.cr6.gt) goto loc_831B7CFC;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// li r3,4
	ctx.r3.s64 = 4;
loc_831B7CFC:
	// lfs f10,160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f10,f7,f11,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x831b7d24
	if (!ctx.cr6.gt) goto loc_831B7D24;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// li r3,5
	ctx.r3.s64 = 5;
loc_831B7D24:
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r11,-13488
	ctx.r7.s64 = ctx.r11.s64 + -13488;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r9,r7,-264
	ctx.r9.s64 = ctx.r7.s64 + -264;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
loc_831B7D3C:
	// lfs f10,-12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,-8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f10,f7,f11,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x831b7d64
	if (!ctx.cr6.gt) goto loc_831B7D64;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
loc_831B7D64:
	// lfs f10,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f8,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f10,f7,f13,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x831b7d8c
	if (!ctx.cr6.gt) goto loc_831B7D8C;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
loc_831B7D8C:
	// lfs f10,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f10,f7,f11,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x831b7db4
	if (!ctx.cr6.gt) goto loc_831B7DB4;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_831B7DB4:
	// lfs f10,24(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,28(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f10,f7,f11,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x831b7ddc
	if (!ctx.cr6.gt) goto loc_831B7DDC;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_831B7DDC:
	// lfs f10,36(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,40(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f10,f7,f11,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x831b7e04
	if (!ctx.cr6.gt) goto loc_831B7E04;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
loc_831B7E04:
	// lfs f10,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,52(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,44(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f10,f7,f11,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x831b7e2c
	if (!ctx.cr6.gt) goto loc_831B7E2C;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
loc_831B7E2C:
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// addi r9,r9,72
	ctx.r9.s64 = ctx.r9.s64 + 72;
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r5,12
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 12, ctx.xer);
	// blt cr6,0x831b7d3c
	if (ctx.cr6.lt) goto loc_831B7D3C;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x831b7ee0
	if (ctx.cr6.eq) goto loc_831B7EE0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x831b7e58
	if (ctx.cr6.eq) goto loc_831B7E58;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_831B7E58:
	// addi r11,r7,-96
	ctx.r11.s64 = ctx.r7.s64 + -96;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lhz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r10,r3,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 3);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r5,r3,r10
	ctx.r5.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// lfs f0,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f7,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f6,f12,f9
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f2,f7,f12,f8
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmadds f1,f4,f11,f3
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f3.f64));
	// fmadds f0,f5,f11,f2
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
loc_831B7EE0:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B7EF4"))) PPC_WEAK_FUNC(sub_831B7EF4);
PPC_FUNC_IMPL(__imp__sub_831B7EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831B7EF8"))) PPC_WEAK_FUNC(sub_831B7EF8);
PPC_FUNC_IMPL(__imp__sub_831B7EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f9,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f4,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f13,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// fmadds f12,f10,f11,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfs f1,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f10,f4,f11,f7
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fmadds f9,f3,f11,f6
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fmadds f12,f5,f0,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f11,f2,f0,f10
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f10,f0,f1,f9
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f9.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x831b7f68
	if (ctx.cr6.lt) goto loc_831B7F68;
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// b 0x831b7f70
	goto loc_831B7F70;
loc_831B7F68:
	// lfs f9,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
loc_831B7F70:
	// lfs f9,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x831b7f80
	if (!ctx.cr6.lt) goto loc_831B7F80;
	// fneg f9,f9
	ctx.f9.u64 = ctx.f9.u64 ^ 0x8000000000000000;
loc_831B7F80:
	// fcmpu cr6,f10,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x831b7f90
	if (!ctx.cr6.lt) goto loc_831B7F90;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
loc_831B7F90:
	// lfs f7,44(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f5,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// lfs f3,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f13,f13,f10,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fmadds f11,f3,f2,f4
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f4.f64));
	// fmadds f10,f8,f12,f13
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f1,f0,f11
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fadds f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f8,0(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fsubs f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// stfs f7,0(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B7FD0"))) PPC_WEAK_FUNC(sub_831B7FD0);
PPC_FUNC_IMPL(__imp__sub_831B7FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f10,4(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f9,8(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,0(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,4(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,8(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B8014"))) PPC_WEAK_FUNC(sub_831B8014);
PPC_FUNC_IMPL(__imp__sub_831B8014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831B8018"))) PPC_WEAK_FUNC(sub_831B8018);
PPC_FUNC_IMPL(__imp__sub_831B8018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r3,r11,24228
	ctx.r3.s64 = ctx.r11.s64 + 24228;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B8024"))) PPC_WEAK_FUNC(sub_831B8024);
PPC_FUNC_IMPL(__imp__sub_831B8024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831B8028"))) PPC_WEAK_FUNC(sub_831B8028);
PPC_FUNC_IMPL(__imp__sub_831B8028) {
	PPC_FUNC_PROLOGUE();
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B8030"))) PPC_WEAK_FUNC(sub_831B8030);
PPC_FUNC_IMPL(__imp__sub_831B8030) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B8048"))) PPC_WEAK_FUNC(sub_831B8048);
PPC_FUNC_IMPL(__imp__sub_831B8048) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,104
	ctx.r3.s64 = ctx.r3.s64 + 104;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B8050"))) PPC_WEAK_FUNC(sub_831B8050);
PPC_FUNC_IMPL(__imp__sub_831B8050) {
	PPC_FUNC_PROLOGUE();
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B8058"))) PPC_WEAK_FUNC(sub_831B8058);
PPC_FUNC_IMPL(__imp__sub_831B8058) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B8060"))) PPC_WEAK_FUNC(sub_831B8060);
PPC_FUNC_IMPL(__imp__sub_831B8060) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B8068"))) PPC_WEAK_FUNC(sub_831B8068);
PPC_FUNC_IMPL(__imp__sub_831B8068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r10,r11,-29164
	ctx.r10.s64 = ctx.r11.s64 + -29164;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B807C"))) PPC_WEAK_FUNC(sub_831B807C);
PPC_FUNC_IMPL(__imp__sub_831B807C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831B8080"))) PPC_WEAK_FUNC(sub_831B8080);
PPC_FUNC_IMPL(__imp__sub_831B8080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x831B8088;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r6,128
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 128, ctx.xer);
	// blt cr6,0x831b82c4
	if (ctx.cr6.lt) goto loc_831B82C4;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831b82c4
	if (ctx.cr6.eq) goto loc_831B82C4;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f5,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f6,f7,f11
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f11.f64));
	// fmadds f12,f5,f7,f9
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 + ctx.f9.f64));
	// fmadds f11,f4,f7,f8
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f8.f64));
	// fmadds f10,f3,f2,f13
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f13.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f9,f3,f1,f12
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f1.f64 + ctx.f12.f64));
	// stfs f9,92(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmadds f8,f3,f0,f11
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r28,12(r8)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r3,44(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// bl 0x831bc120
	ctx.lr = 0x831B8150;
	sub_831BC120(ctx, base);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r6,44(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lbzx r11,r4,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,44(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lbzx r8,r9,r5
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r7,40(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// bl 0x83177aa8
	ctx.lr = 0x831B818C;
	sub_83177AA8(ctx, base);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r24,940(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 940);
	// bl 0x831b11a8
	ctx.lr = 0x831B8198;
	sub_831B11A8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x831bbfe8
	ctx.lr = 0x831B81BC;
	sub_831BBFE8(ctx, base);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lfs f7,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f6.f64 = double(temp.f32);
	// fneg f5,f7
	ctx.f5.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// lfs f4,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// fneg f3,f6
	ctx.f3.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// fneg f2,f4
	ctx.f2.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// lwz r27,940(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 940);
	// stfs f5,104(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f3,108(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f2,112(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x831b11a8
	ctx.lr = 0x831B81EC;
	sub_831B11A8(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// bl 0x831bbfe8
	ctx.lr = 0x831B8210;
	sub_831BBFE8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f1,f11
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f7,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f4,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lfs f3,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f1,f7,f6,f9
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f9.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f2,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f10,f4,f3,f1
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fmadds f11,f5,f13,f8
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f9,f2,f12,f11
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fadds f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f8,0(r26)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// lfs f7,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmadds f3,f7,f13,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fmadds f2,f6,f12,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f3.f64));
	// fadds f0,f2,f10
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f10.f64));
	// stfs f0,0(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// lfs f13,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x831b846c
	if (!ctx.cr6.gt) goto loc_831B846C;
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// stfs f13,0(r25)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_831B82C4:
	// li r11,12
	ctx.r11.s64 = 12;
	// lvlx128 v63,r0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// lvlx128 v62,r0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r31,24
	ctx.r8.s64 = ctx.r31.s64 + 24;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// lvrx128 v61,r11,r30
	temp.u32 = ctx.r11.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r4,r7,-30304
	ctx.r4.s64 = ctx.r7.s64 + -30304;
	// lvrx128 v60,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vsldoi128 v59,v61,v61,4
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v61.u8), 12));
	// lvrx128 v58,r11,r31
	temp.u32 = ctx.r11.u32 + ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vsldoi128 v57,v60,v60,4
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v60.u8), 12));
	// vsldoi128 v56,v58,v58,4
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v58.u8), 12));
	// lvlx128 v55,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v53,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r7,r31,36
	ctx.r7.s64 = ctx.r31.s64 + 36;
	// vor128 v54,v63,v59
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v59.u8)));
	// vsldoi128 v52,v53,v53,4
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v53.u8), 12));
	// vor128 v51,v55,v57
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v57.u8)));
	// lvlx128 v50,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v49,v62,v56
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v56.u8)));
	// addi r3,r5,-30320
	ctx.r3.s64 = ctx.r5.s64 + -30320;
	// clrlwi r9,r6,30
	ctx.r9.u64 = ctx.r6.u32 & 0x3;
	// lvx128 v62,r0,r4
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v48,v50,v52
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v52.u8)));
	// lvrx128 v46,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v46.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vmsum3fp128 v47,v51,v54
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v54.f32), 0xEF));
	// vsldoi128 v44,v46,v46,4
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v46.u8), 12));
	// vmsum3fp128 v63,v49,v54
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v54.f32), 0xEF));
	// lvlx128 v43,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v61,r0,r3
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// vmsum3fp128 v45,v48,v54
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v54.f32), 0xEF));
	// vor128 v60,v62,v62
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// vor128 v59,v61,v61
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_load_si128((__m128i*)ctx.v61.u8));
	// vor128 v58,v62,v62
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// vor128 v57,v61,v61
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_load_si128((__m128i*)ctx.v61.u8));
	// vor128 v53,v43,v44
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v44.u8)));
	// vor128 v56,v62,v62
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// vor128 v55,v61,v61
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_load_si128((__m128i*)ctx.v61.u8));
	// vrlimi128 v63,v47,4,0
	_mm_store_ps(ctx.v63.f32, _mm_blend_ps(_mm_load_ps(ctx.v63.f32), _mm_permute_ps(_mm_load_ps(ctx.v47.f32), 228), 4));
	// vrlimi128 v63,v45,2,0
	_mm_store_ps(ctx.v63.f32, _mm_blend_ps(_mm_load_ps(ctx.v63.f32), _mm_permute_ps(_mm_load_ps(ctx.v45.f32), 228), 2));
	// beq cr6,0x831b83a0
	if (ctx.cr6.eq) goto loc_831B83A0;
loc_831B8378:
	// lvrx128 v42,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v42.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// vsldoi128 v41,v42,v42,4
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)ctx.v42.u8), 12));
	// lvlx128 v40,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// vor128 v39,v40,v41
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)ctx.v41.u8)));
	// vmsum3fp128 v38,v63,v39
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v39.f32), 0xEF));
	// vminfp128 v62,v62,v38
	_mm_store_ps(ctx.v62.f32, _mm_min_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v38.f32)));
	// vmaxfp128 v61,v61,v38
	_mm_store_ps(ctx.v61.f32, _mm_max_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v38.f32)));
	// bne 0x831b8378
	if (!ctx.cr0.eq) goto loc_831B8378;
loc_831B83A0:
	// rlwinm r8,r6,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x831b8438
	if (ctx.cr6.eq) goto loc_831B8438;
	// addi r9,r10,24
	ctx.r9.s64 = ctx.r10.s64 + 24;
loc_831B83B0:
	// addi r7,r9,-12
	ctx.r7.s64 = ctx.r9.s64 + -12;
	// lvrx128 v37,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v37.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r6,r9,12
	ctx.r6.s64 = ctx.r9.s64 + 12;
	// lvrx128 v36,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v36.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vsldoi128 v35,v37,v37,4
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)ctx.v37.u8), 12));
	// lvlx128 v34,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v33,v36,v36,4
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)ctx.v36.u8), 12));
	// lvlx128 v32,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lvrx128 v52,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// lvrx128 v51,r11,r6
	temp.u32 = ctx.r11.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v51.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vsldoi128 v50,v52,v52,4
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v52.u8), 12));
	// vsldoi128 v49,v51,v51,4
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v51.u8), 12));
	// lvlx128 v48,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v47,r0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v46,v34,v35
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)ctx.v35.u8)));
	// vor128 v45,v32,v33
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)ctx.v33.u8)));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// vor128 v44,v48,v50
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v50.u8)));
	// vor128 v43,v47,v49
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v49.u8)));
	// vmsum3fp128 v42,v63,v46
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v46.f32), 0xEF));
	// vmsum3fp128 v41,v63,v45
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v45.f32), 0xEF));
	// vmsum3fp128 v40,v63,v44
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v44.f32), 0xEF));
	// vmsum3fp128 v39,v63,v43
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v43.f32), 0xEF));
	// vminfp128 v62,v62,v42
	_mm_store_ps(ctx.v62.f32, _mm_min_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v42.f32)));
	// vmaxfp128 v61,v61,v42
	_mm_store_ps(ctx.v61.f32, _mm_max_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v42.f32)));
	// vminfp128 v60,v60,v40
	_mm_store_ps(ctx.v60.f32, _mm_min_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v40.f32)));
	// vmaxfp128 v59,v59,v40
	_mm_store_ps(ctx.v59.f32, _mm_max_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v40.f32)));
	// vminfp128 v58,v58,v41
	_mm_store_ps(ctx.v58.f32, _mm_min_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v41.f32)));
	// vmaxfp128 v57,v57,v41
	_mm_store_ps(ctx.v57.f32, _mm_max_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v41.f32)));
	// vminfp128 v56,v56,v39
	_mm_store_ps(ctx.v56.f32, _mm_min_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v39.f32)));
	// vmaxfp128 v55,v55,v39
	_mm_store_ps(ctx.v55.f32, _mm_max_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v39.f32)));
	// bne 0x831b83b0
	if (!ctx.cr0.eq) goto loc_831B83B0;
loc_831B8438:
	// vminfp128 v36,v62,v60
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v36.f32, _mm_min_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v60.f32)));
	// vmsum3fp128 v37,v53,v54
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v54.f32), 0xEF));
	// vminfp128 v38,v58,v56
	_mm_store_ps(ctx.v38.f32, _mm_min_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v56.f32)));
	// vmaxfp128 v34,v61,v59
	_mm_store_ps(ctx.v34.f32, _mm_max_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v59.f32)));
	// vmaxfp128 v35,v57,v55
	_mm_store_ps(ctx.v35.f32, _mm_max_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v55.f32)));
	// vminfp128 v33,v36,v38
	_mm_store_ps(ctx.v33.f32, _mm_min_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v38.f32)));
	// vmaxfp128 v32,v34,v35
	_mm_store_ps(ctx.v32.f32, _mm_max_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v35.f32)));
	// vaddfp128 v63,v33,v37
	_mm_store_ps(ctx.v63.f32, _mm_add_ps(_mm_load_ps(ctx.v33.f32), _mm_load_ps(ctx.v37.f32)));
	// vaddfp128 v62,v32,v37
	_mm_store_ps(ctx.v62.f32, _mm_add_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v37.f32)));
	// vspltw128 v61,v63,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v60,v62,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// stvewx128 v61,r0,r26
	ea = (ctx.r26.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r0,r25
	ea = (ctx.r25.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
loc_831B846C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831B8474"))) PPC_WEAK_FUNC(sub_831B8474);
PPC_FUNC_IMPL(__imp__sub_831B8474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831B8478"))) PPC_WEAK_FUNC(sub_831B8478);
PPC_FUNC_IMPL(__imp__sub_831B8478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r11,-30304
	ctx.r9.s64 = ctx.r11.s64 + -30304;
	// addi r8,r10,-30320
	ctx.r8.s64 = ctx.r10.s64 + -30320;
	// clrlwi r11,r5,30
	ctx.r11.u64 = ctx.r5.u32 & 0x3;
	// li r10,12
	ctx.r10.s64 = 12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lvx128 v62,r0,r9
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r8
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v60,v62,v62
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// vor128 v59,v61,v61
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_load_si128((__m128i*)ctx.v61.u8));
	// vor128 v58,v62,v62
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// vor128 v57,v61,v61
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_load_si128((__m128i*)ctx.v61.u8));
	// vor128 v56,v62,v62
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// vor128 v55,v61,v61
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_load_si128((__m128i*)ctx.v61.u8));
	// beq cr6,0x831b84e4
	if (ctx.cr6.eq) goto loc_831B84E4;
	// lvx128 v63,r0,r3
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
loc_831B84BC:
	// lvrx128 v54,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// vsldoi128 v53,v54,v54,4
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v54.u8), 12));
	// lvlx128 v52,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// vor128 v51,v52,v53
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v53.u8)));
	// vmsum3fp128 v50,v63,v51
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v51.f32), 0xEF));
	// vminfp128 v62,v62,v50
	_mm_store_ps(ctx.v62.f32, _mm_min_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v50.f32)));
	// vmaxfp128 v61,v61,v50
	_mm_store_ps(ctx.v61.f32, _mm_max_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v50.f32)));
	// bne 0x831b84bc
	if (!ctx.cr0.eq) goto loc_831B84BC;
loc_831B84E4:
	// rlwinm r9,r5,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x831b8580
	if (ctx.cr6.eq) goto loc_831B8580;
	// lvx128 v63,r0,r3
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 + 24;
loc_831B84F8:
	// addi r8,r11,-12
	ctx.r8.s64 = ctx.r11.s64 + -12;
	// lvrx128 v49,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// lvrx128 v48,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vsldoi128 v47,v49,v49,4
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v49.u8), 12));
	// lvlx128 v46,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v45,v48,v48,4
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v48.u8), 12));
	// lvlx128 v44,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lvrx128 v43,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v43.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r4,r4,48
	ctx.r4.s64 = ctx.r4.s64 + 48;
	// lvrx128 v42,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v42.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vsldoi128 v41,v43,v43,4
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v43.u8), 12));
	// vsldoi128 v40,v42,v42,4
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)ctx.v42.u8), 12));
	// lvlx128 v39,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v38,r0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v37,v46,v47
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v47.u8)));
	// vor128 v36,v44,v45
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)ctx.v45.u8)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// vor128 v35,v39,v41
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)ctx.v41.u8)));
	// vor128 v34,v38,v40
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)ctx.v40.u8)));
	// vmsum3fp128 v33,v63,v37
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v37.f32), 0xEF));
	// vmsum3fp128 v32,v63,v36
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v36.f32), 0xEF));
	// vmsum3fp128 v54,v63,v35
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v35.f32), 0xEF));
	// vmsum3fp128 v53,v63,v34
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v34.f32), 0xEF));
	// vminfp128 v62,v62,v33
	_mm_store_ps(ctx.v62.f32, _mm_min_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v33.f32)));
	// vmaxfp128 v61,v61,v33
	_mm_store_ps(ctx.v61.f32, _mm_max_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v33.f32)));
	// vminfp128 v60,v60,v54
	_mm_store_ps(ctx.v60.f32, _mm_min_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v54.f32)));
	// vmaxfp128 v59,v59,v54
	_mm_store_ps(ctx.v59.f32, _mm_max_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v54.f32)));
	// vminfp128 v58,v58,v32
	_mm_store_ps(ctx.v58.f32, _mm_min_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v32.f32)));
	// vmaxfp128 v57,v57,v32
	_mm_store_ps(ctx.v57.f32, _mm_max_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v32.f32)));
	// vminfp128 v56,v56,v53
	_mm_store_ps(ctx.v56.f32, _mm_min_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v53.f32)));
	// vmaxfp128 v55,v55,v53
	_mm_store_ps(ctx.v55.f32, _mm_max_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v53.f32)));
	// bne 0x831b84f8
	if (!ctx.cr0.eq) goto loc_831B84F8;
loc_831B8580:
	// vminfp128 v52,v58,v56
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v52.f32, _mm_min_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v56.f32)));
	// vminfp128 v51,v62,v60
	_mm_store_ps(ctx.v51.f32, _mm_min_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v60.f32)));
	// vmaxfp128 v50,v57,v55
	_mm_store_ps(ctx.v50.f32, _mm_max_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v55.f32)));
	// vmaxfp128 v49,v61,v59
	_mm_store_ps(ctx.v49.f32, _mm_max_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v59.f32)));
	// vminfp128 v48,v51,v52
	_mm_store_ps(ctx.v48.f32, _mm_min_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v52.f32)));
	// vmaxfp128 v47,v49,v50
	_mm_store_ps(ctx.v47.f32, _mm_max_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v50.f32)));
	// stvx128 v48,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v47,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B85A4"))) PPC_WEAK_FUNC(sub_831B85A4);
PPC_FUNC_IMPL(__imp__sub_831B85A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831B85A8"))) PPC_WEAK_FUNC(sub_831B85A8);
PPC_FUNC_IMPL(__imp__sub_831B85A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r10,r11,-29252
	ctx.r10.s64 = ctx.r11.s64 + -29252;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B85B8"))) PPC_WEAK_FUNC(sub_831B85B8);
PPC_FUNC_IMPL(__imp__sub_831B85B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r11,12
	ctx.r11.s64 = 12;
	// lvlx128 v62,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r4,12
	ctx.r9.s64 = ctx.r4.s64 + 12;
	// addi r3,r4,24
	ctx.r3.s64 = ctx.r4.s64 + 24;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lvrx128 v58,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// lvrx128 v61,r11,r31
	temp.u32 = ctx.r11.u32 + ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vsldoi128 v56,v58,v58,4
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v58.u8), 12));
	// lvrx128 v60,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vsldoi128 v59,v61,v61,4
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v61.u8), 12));
	// vsldoi128 v57,v60,v60,4
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v60.u8), 12));
	// lvlx128 v63,r0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v55,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r31,r4,36
	ctx.r31.s64 = ctx.r4.s64 + 36;
	// lvrx128 v53,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v49,v62,v56
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v56.u8)));
	// vor128 v54,v63,v59
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v59.u8)));
	// vsldoi128 v52,v53,v53,4
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v53.u8), 12));
	// vor128 v51,v55,v57
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v57.u8)));
	// lvlx128 v50,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r30,-32247
	ctx.r30.s64 = -2113339392;
	// addi r5,r5,-30304
	ctx.r5.s64 = ctx.r5.s64 + -30304;
	// lvrx128 v46,r11,r31
	temp.u32 = ctx.r11.u32 + ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v46.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v48,v50,v52
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v52.u8)));
	// vmsum3fp128 v63,v49,v54
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v54.f32), 0xEF));
	// vmsum3fp128 v47,v51,v54
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v54.f32), 0xEF));
	// addi r30,r30,-30320
	ctx.r30.s64 = ctx.r30.s64 + -30320;
	// vsldoi128 v44,v46,v46,4
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v46.u8), 12));
	// clrlwi r9,r6,30
	ctx.r9.u64 = ctx.r6.u32 & 0x3;
	// lvlx128 v43,r0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmsum3fp128 v45,v48,v54
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v54.f32), 0xEF));
	// lvx128 v62,r0,r5
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v60,v62,v62
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lvx128 v61,r0,r30
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v58,v62,v62
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// vor128 v59,v61,v61
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_load_si128((__m128i*)ctx.v61.u8));
	// vor128 v57,v61,v61
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_load_si128((__m128i*)ctx.v61.u8));
	// vor128 v56,v62,v62
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// vor128 v53,v43,v44
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v44.u8)));
	// vor128 v55,v61,v61
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_load_si128((__m128i*)ctx.v61.u8));
	// vrlimi128 v63,v47,4,0
	_mm_store_ps(ctx.v63.f32, _mm_blend_ps(_mm_load_ps(ctx.v63.f32), _mm_permute_ps(_mm_load_ps(ctx.v47.f32), 228), 4));
	// vrlimi128 v63,v45,2,0
	_mm_store_ps(ctx.v63.f32, _mm_blend_ps(_mm_load_ps(ctx.v63.f32), _mm_permute_ps(_mm_load_ps(ctx.v45.f32), 228), 2));
	// beq cr6,0x831b86a0
	if (ctx.cr6.eq) goto loc_831B86A0;
loc_831B8678:
	// lvrx128 v42,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v42.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// vsldoi128 v41,v42,v42,4
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)ctx.v42.u8), 12));
	// lvlx128 v40,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// vor128 v39,v40,v41
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)ctx.v41.u8)));
	// vmsum3fp128 v38,v63,v39
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v39.f32), 0xEF));
	// vminfp128 v62,v62,v38
	_mm_store_ps(ctx.v62.f32, _mm_min_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v38.f32)));
	// vmaxfp128 v61,v61,v38
	_mm_store_ps(ctx.v61.f32, _mm_max_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v38.f32)));
	// bne 0x831b8678
	if (!ctx.cr0.eq) goto loc_831B8678;
loc_831B86A0:
	// rlwinm r6,r6,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x831b8738
	if (ctx.cr6.eq) goto loc_831B8738;
	// addi r9,r10,24
	ctx.r9.s64 = ctx.r10.s64 + 24;
loc_831B86B0:
	// addi r5,r9,-12
	ctx.r5.s64 = ctx.r9.s64 + -12;
	// lvrx128 v37,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v37.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r4,r9,12
	ctx.r4.s64 = ctx.r9.s64 + 12;
	// lvrx128 v36,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v36.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vsldoi128 v35,v37,v37,4
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)ctx.v37.u8), 12));
	// lvlx128 v34,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v33,v36,v36,4
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)ctx.v36.u8), 12));
	// lvlx128 v32,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lvrx128 v52,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// lvrx128 v51,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v51.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vsldoi128 v50,v52,v52,4
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v52.u8), 12));
	// vsldoi128 v49,v51,v51,4
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v51.u8), 12));
	// lvlx128 v48,r0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v47,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v46,v34,v35
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)ctx.v35.u8)));
	// vor128 v45,v32,v33
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)ctx.v33.u8)));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// vor128 v44,v48,v50
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v50.u8)));
	// vor128 v43,v47,v49
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v49.u8)));
	// vmsum3fp128 v42,v63,v46
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v46.f32), 0xEF));
	// vmsum3fp128 v41,v63,v45
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v45.f32), 0xEF));
	// vmsum3fp128 v40,v63,v44
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v44.f32), 0xEF));
	// vmsum3fp128 v39,v63,v43
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v43.f32), 0xEF));
	// vminfp128 v62,v62,v42
	_mm_store_ps(ctx.v62.f32, _mm_min_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v42.f32)));
	// vmaxfp128 v61,v61,v42
	_mm_store_ps(ctx.v61.f32, _mm_max_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v42.f32)));
	// vminfp128 v60,v60,v40
	_mm_store_ps(ctx.v60.f32, _mm_min_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v40.f32)));
	// vmaxfp128 v59,v59,v40
	_mm_store_ps(ctx.v59.f32, _mm_max_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v40.f32)));
	// vminfp128 v58,v58,v41
	_mm_store_ps(ctx.v58.f32, _mm_min_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v41.f32)));
	// vmaxfp128 v57,v57,v41
	_mm_store_ps(ctx.v57.f32, _mm_max_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v41.f32)));
	// vminfp128 v56,v56,v39
	_mm_store_ps(ctx.v56.f32, _mm_min_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v39.f32)));
	// vmaxfp128 v55,v55,v39
	_mm_store_ps(ctx.v55.f32, _mm_max_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v39.f32)));
	// bne 0x831b86b0
	if (!ctx.cr0.eq) goto loc_831B86B0;
loc_831B8738:
	// vminfp128 v36,v62,v60
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v36.f32, _mm_min_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v60.f32)));
	// vmsum3fp128 v37,v53,v54
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v54.f32), 0xEF));
	// vminfp128 v38,v58,v56
	_mm_store_ps(ctx.v38.f32, _mm_min_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v56.f32)));
	// vmaxfp128 v34,v61,v59
	_mm_store_ps(ctx.v34.f32, _mm_max_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v59.f32)));
	// vmaxfp128 v35,v57,v55
	_mm_store_ps(ctx.v35.f32, _mm_max_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v55.f32)));
	// vminfp128 v33,v36,v38
	_mm_store_ps(ctx.v33.f32, _mm_min_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v38.f32)));
	// vmaxfp128 v32,v34,v35
	_mm_store_ps(ctx.v32.f32, _mm_max_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v35.f32)));
	// vaddfp128 v63,v33,v37
	_mm_store_ps(ctx.v63.f32, _mm_add_ps(_mm_load_ps(ctx.v33.f32), _mm_load_ps(ctx.v37.f32)));
	// vaddfp128 v62,v32,v37
	_mm_store_ps(ctx.v62.f32, _mm_add_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v37.f32)));
	// vspltw128 v61,v63,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v60,v62,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// stvewx128 v61,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B8778"))) PPC_WEAK_FUNC(sub_831B8778);
PPC_FUNC_IMPL(__imp__sub_831B8778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f1,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f9,f13,f13
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f5,f1,f13
	ctx.f5.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// lfs f6,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f6,f7,f6
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f8,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f4,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f10,f10,f12
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f12.f64));
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f7,f8,f10,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f11.f64));
	// lfs f13,7712(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7712);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f4,f4,f12
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f12.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmadds f31,f8,f8,f9
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fmuls f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmuls f12,f6,f6
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmadds f11,f3,f3,f1
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fnmadds f9,f2,f3,f7
	ctx.f9.f64 = double(float(-(ctx.f2.f64 * ctx.f3.f64 + ctx.f7.f64)));
	// fmadds f7,f2,f2,f31
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f31.f64));
	// fmadds f10,f10,f4,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f4.f64 + ctx.f0.f64));
	// fmadds f2,f4,f4,f12
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f12.f64));
	// fmuls f1,f9,f9
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f12,f3,f6,f10
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f10.f64));
	// fmadds f0,f5,f5,f2
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f2.f64));
	// fmsubs f10,f7,f11,f1
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 - ctx.f1.f64));
	// fabs f3,f10
	ctx.f3.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fcmpu cr6,f3,f13
	ctx.cr6.compare(ctx.f3.f64, ctx.f13.f64);
	// blt cr6,0x831b8b40
	if (ctx.cr6.lt) goto loc_831B8B40;
	// lfs f13,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f12,f7
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f2,f6,f13
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfs f1,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f6,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f13,f8,f4,f2
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fnmadds f8,f5,f1,f13
	ctx.f8.f64 = double(float(-(ctx.f5.f64 * ctx.f1.f64 + ctx.f13.f64)));
	// fmsubs f13,f8,f9,f10
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 - ctx.f10.f64));
	// fmuls f10,f8,f11
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fcmpu cr6,f13,f6
	ctx.cr6.compare(ctx.f13.f64, ctx.f6.f64);
	// fmsubs f5,f12,f9,f10
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 - ctx.f10.f64));
	// blt cr6,0x831b8a70
	if (ctx.cr6.lt) goto loc_831B8A70;
	// fcmpu cr6,f13,f3
	ctx.cr6.compare(ctx.f13.f64, ctx.f3.f64);
	// bgt cr6,0x831b894c
	if (ctx.cr6.gt) goto loc_831B894C;
	// fcmpu cr6,f5,f6
	ctx.cr6.compare(ctx.f5.f64, ctx.f6.f64);
	// blt cr6,0x831b8910
	if (ctx.cr6.lt) goto loc_831B8910;
	// fcmpu cr6,f5,f3
	ctx.cr6.compare(ctx.f5.f64, ctx.f3.f64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// bgt cr6,0x831b88a0
	if (ctx.cr6.gt) goto loc_831B88A0;
	// lfs f10,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fdivs f4,f10,f3
	ctx.f4.f64 = double(float(ctx.f10.f64 / ctx.f3.f64));
	// lfs f6,7676(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7676);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f10,f4,f13
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f13,f4,f5
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// fmuls f3,f10,f11
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f2,f10,f9
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmadds f1,f13,f9,f3
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fmadds f11,f13,f7,f2
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f2.f64));
	// fmadds f9,f12,f6,f1
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f1.f64));
	// fmadds f8,f8,f6,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f6.f64 + ctx.f11.f64));
	// fmuls f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmadds f6,f8,f13,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fadds f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// b 0x831b8c8c
	goto loc_831B8C8C;
loc_831B88A0:
	// fadds f12,f12,f9
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// lfs f13,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f12,f6
	ctx.cr6.compare(ctx.f12.f64, ctx.f6.f64);
	// blt cr6,0x831b88c8
	if (ctx.cr6.lt) goto loc_831B88C8;
	// lfs f12,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f12.f64 = double(temp.f32);
	// fmr f10,f6
	ctx.f10.f64 = ctx.f6.f64;
	// fmadds f0,f8,f12,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fadds f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// b 0x831b8c8c
	goto loc_831B8C8C;
loc_831B88C8:
	// fneg f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// blt cr6,0x831b88f0
	if (ctx.cr6.lt) goto loc_831B88F0;
	// fadds f9,f12,f8
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// lfs f12,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f12.f64 = double(temp.f32);
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// fmadds f8,f9,f12,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fadds f7,f8,f7
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// fadds f0,f7,f11
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// b 0x831b8c8c
	goto loc_831B8C8C;
loc_831B88F0:
	// fdivs f10,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// lfs f11,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f8,f11
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fneg f10,f10
	ctx.f10.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fmadds f8,f12,f10,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fadds f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fadds f0,f6,f7
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// b 0x831b8c8c
	goto loc_831B8C8C;
loc_831B8910:
	// fmr f13,f6
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f6.f64;
	// fcmpu cr6,f12,f6
	ctx.cr6.compare(ctx.f12.f64, ctx.f6.f64);
	// blt cr6,0x831b8924
	if (ctx.cr6.lt) goto loc_831B8924;
	// fmr f10,f6
	ctx.f10.f64 = ctx.f6.f64;
	// b 0x831b8c8c
	goto loc_831B8C8C;
loc_831B8924:
	// fneg f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// blt cr6,0x831b8c24
	if (ctx.cr6.lt) goto loc_831B8C24;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f12,f10,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f0.f64));
	// lfs f10,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// b 0x831b8c8c
	goto loc_831B8C8C;
loc_831B894C:
	// fcmpu cr6,f5,f6
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f5.f64, ctx.f6.f64);
	// blt cr6,0x831b8a04
	if (ctx.cr6.lt) goto loc_831B8A04;
	// fcmpu cr6,f5,f3
	ctx.cr6.compare(ctx.f5.f64, ctx.f3.f64);
	// bgt cr6,0x831b8988
	if (ctx.cr6.gt) goto loc_831B8988;
loc_831B895C:
	// fadds f9,f8,f9
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f9,f6
	ctx.cr6.compare(ctx.f9.f64, ctx.f6.f64);
	// blt cr6,0x831b8a24
	if (ctx.cr6.lt) goto loc_831B8A24;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f13,f6
	ctx.f13.f64 = ctx.f6.f64;
	// lfs f9,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f0,f12,f9,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// b 0x831b8c8c
	goto loc_831B8C8C;
loc_831B8988:
	// fadds f5,f12,f9
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fneg f13,f5
	ctx.f13.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bgt cr6,0x831b89dc
	if (ctx.cr6.gt) goto loc_831B89DC;
	// lfs f13,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f5,f6
	ctx.cr6.compare(ctx.f5.f64, ctx.f6.f64);
	// lfs f12,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f12.f64 = double(temp.f32);
	// blt cr6,0x831b89c0
	if (ctx.cr6.lt) goto loc_831B89C0;
	// fmadds f0,f8,f12,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmr f10,f6
	ctx.f10.f64 = ctx.f6.f64;
	// fadds f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// b 0x831b8c8c
	goto loc_831B8C8C;
loc_831B89C0:
	// fdivs f11,f5,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f5.f64 / ctx.f11.f64));
	// fmuls f9,f8,f12
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fmadds f8,f5,f10,f9
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fadds f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fadds f0,f6,f7
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// b 0x831b8c8c
	goto loc_831B8C8C;
loc_831B89DC:
	// fadds f9,f8,f9
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// lfs f10,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f9,f6
	ctx.cr6.compare(ctx.f9.f64, ctx.f6.f64);
	// blt cr6,0x831b8a24
	if (ctx.cr6.lt) goto loc_831B8A24;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f13,f6
	ctx.f13.f64 = ctx.f6.f64;
	// lfs f9,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f0,f12,f9,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// b 0x831b8c8c
	goto loc_831B8C8C;
loc_831B8A04:
	// fneg f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x831b895c
	if (!ctx.cr6.lt) goto loc_831B895C;
	// fmr f13,f6
	ctx.f13.f64 = ctx.f6.f64;
	// fcmpu cr6,f12,f6
	ctx.cr6.compare(ctx.f12.f64, ctx.f6.f64);
	// blt cr6,0x831b8c24
	if (ctx.cr6.lt) goto loc_831B8C24;
	// fmr f10,f6
	ctx.f10.f64 = ctx.f6.f64;
	// b 0x831b8c8c
	goto loc_831B8C8C;
loc_831B8A24:
	// fneg f13,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f13,f7
	ctx.cr6.compare(ctx.f13.f64, ctx.f7.f64);
	// blt cr6,0x831b8a50
	if (ctx.cr6.lt) goto loc_831B8A50;
	// fadds f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// lfs f12,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f12.f64 = double(temp.f32);
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
	// fmadds f8,f9,f12,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fadds f7,f8,f7
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// fadds f0,f7,f11
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// b 0x831b8c8c
	goto loc_831B8C8C;
loc_831B8A50:
	// fdivs f8,f9,f7
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f7.f64));
	// lfs f13,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f12,f13
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fneg f13,f8
	ctx.f13.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fmadds f6,f9,f13,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fadds f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// fadds f0,f5,f11
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// b 0x831b8c8c
	goto loc_831B8C8C;
loc_831B8A70:
	// fcmpu cr6,f5,f6
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f5.f64, ctx.f6.f64);
	// blt cr6,0x831b8ad4
	if (ctx.cr6.lt) goto loc_831B8AD4;
	// fcmpu cr6,f5,f3
	ctx.cr6.compare(ctx.f5.f64, ctx.f3.f64);
	// bgt cr6,0x831b8a94
	if (ctx.cr6.gt) goto loc_831B8A94;
loc_831B8A80:
	// fmr f10,f6
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f6.f64;
	// fcmpu cr6,f8,f6
	ctx.cr6.compare(ctx.f8.f64, ctx.f6.f64);
	// blt cr6,0x831b8b08
	if (ctx.cr6.lt) goto loc_831B8B08;
	// fmr f13,f6
	ctx.f13.f64 = ctx.f6.f64;
	// b 0x831b8c8c
	goto loc_831B8C8C;
loc_831B8A94:
	// fadds f12,f12,f9
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// fcmpu cr6,f12,f6
	ctx.cr6.compare(ctx.f12.f64, ctx.f6.f64);
	// bge cr6,0x831b8a80
	if (!ctx.cr6.lt) goto loc_831B8A80;
	// fneg f10,f12
	ctx.f10.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// blt cr6,0x831b88f0
	if (ctx.cr6.lt) goto loc_831B88F0;
	// fadds f9,f12,f8
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// lfs f12,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f12.f64 = double(temp.f32);
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// fmadds f8,f9,f12,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fadds f7,f8,f7
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// fadds f0,f7,f11
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// b 0x831b8c8c
	goto loc_831B8C8C;
loc_831B8AD4:
	// fcmpu cr6,f12,f6
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f6.f64);
	// bge cr6,0x831b8a80
	if (!ctx.cr6.lt) goto loc_831B8A80;
	// fneg f10,f12
	ctx.f10.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fmr f13,f6
	ctx.f13.f64 = ctx.f6.f64;
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// blt cr6,0x831b8c24
	if (ctx.cr6.lt) goto loc_831B8C24;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f12,f10,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f0.f64));
	// lfs f10,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// b 0x831b8c8c
	goto loc_831B8C8C;
loc_831B8B08:
	// fneg f13,f8
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f7
	ctx.cr6.compare(ctx.f13.f64, ctx.f7.f64);
	// blt cr6,0x831b8b30
	if (ctx.cr6.lt) goto loc_831B8B30;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f8,f13,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// b 0x831b8c8c
	goto loc_831B8C8C;
loc_831B8B30:
	// fdivs f13,f8,f7
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f8.f64 / ctx.f7.f64));
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmadds f0,f13,f8,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f0.f64));
	// b 0x831b8c8c
	goto loc_831B8C8C;
loc_831B8B40:
	// lfs f13,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f9,f13
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// ble cr6,0x831b8bf4
	if (!ctx.cr6.gt) goto loc_831B8BF4;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x831b8b5c
	if (ctx.cr6.lt) goto loc_831B8B5C;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// b 0x831b8c8c
	goto loc_831B8C8C;
loc_831B8B5C:
	// fneg f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bgt cr6,0x831b8b78
	if (ctx.cr6.gt) goto loc_831B8B78;
	// fdivs f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fmadds f0,f10,f12,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f0.f64));
	// b 0x831b8c8c
	goto loc_831B8C8C;
loc_831B8B78:
	// lfs f10,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fmuls f6,f6,f10
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f3,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f10,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fneg f2,f13
	ctx.f2.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmadds f1,f8,f4,f6
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 + ctx.f6.f64));
	// fcmpu cr6,f2,f9
	ctx.cr6.compare(ctx.f2.f64, ctx.f9.f64);
	// fnmadds f8,f5,f3,f1
	ctx.f8.f64 = double(float(-(ctx.f5.f64 * ctx.f3.f64 + ctx.f1.f64)));
	// blt cr6,0x831b8bc8
	if (ctx.cr6.lt) goto loc_831B8BC8;
	// fadds f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// lfs f12,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f12.f64 = double(temp.f32);
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
	// fadds f6,f8,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// fmadds f5,f6,f12,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fadds f4,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// fadds f0,f4,f11
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// b 0x831b8c8c
	goto loc_831B8C8C;
loc_831B8BC8:
	// fdivs f13,f13,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// fadds f8,f8,f9
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// lfs f9,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f6,f12,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmuls f5,f13,f7
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmadds f4,f8,f9,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f4,f13,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fadds f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// fadds f0,f2,f11
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// b 0x831b8c8c
	goto loc_831B8C8C;
loc_831B8BF4:
	// fneg f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// blt cr6,0x831b8c1c
	if (ctx.cr6.lt) goto loc_831B8C1C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f12,f10,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f0.f64));
	// lfs f10,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// b 0x831b8c8c
	goto loc_831B8C8C;
loc_831B8C1C:
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x831b8c34
	if (ctx.cr6.gt) goto loc_831B8C34;
loc_831B8C24:
	// fdivs f11,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fmadds f0,f10,f12,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f0.f64));
	// b 0x831b8c8c
	goto loc_831B8C8C;
loc_831B8C34:
	// lfs f11,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// fmuls f2,f6,f11
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// lfs f1,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fneg f3,f9
	ctx.f3.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmadds f13,f8,f4,f2
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fcmpu cr6,f12,f3
	ctx.cr6.compare(ctx.f12.f64, ctx.f3.f64);
	// fnmadds f13,f5,f1,f13
	ctx.f13.f64 = double(float(-(ctx.f5.f64 * ctx.f1.f64 + ctx.f13.f64)));
	// blt cr6,0x831b8c74
	if (ctx.cr6.lt) goto loc_831B8C74;
	// lfs f12,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// lfs f13,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// b 0x831b8c8c
	goto loc_831B8C8C;
loc_831B8C74:
	// fdivs f11,f12,f9
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f9.f64));
	// lfs f12,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fneg f13,f11
	ctx.f13.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fmadds f8,f13,f7,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f9.f64));
	// fmadds f0,f8,f13,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f0.f64));
loc_831B8C8C:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x831b8c98
	if (ctx.cr6.eq) goto loc_831B8C98;
	// stfs f10,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
loc_831B8C98:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// fabs f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// beq cr6,0x831b8ca8
	if (ctx.cr6.eq) goto loc_831B8CA8;
	// stfs f13,0(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_831B8CA8:
	// lfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B8CB0"))) PPC_WEAK_FUNC(sub_831B8CB0);
PPC_FUNC_IMPL(__imp__sub_831B8CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f30,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lfs f12,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f6,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// lfs f9,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f3,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f3,f3,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// lfs f7,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f6,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f11,f9,f10,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f11.f64));
	// lfs f5,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// lfs f13,-29120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29120);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f8,f4
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmuls f30,f7,f4
	ctx.f30.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// fmuls f4,f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fnmadds f11,f7,f8,f11
	ctx.f11.f64 = double(float(-(ctx.f7.f64 * ctx.f8.f64 + ctx.f11.f64)));
	// fmadds f0,f0,f6,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f31.f64));
	// fmadds f8,f12,f6,f30
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f30.f64));
	// fmadds f7,f3,f3,f4
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f4.f64));
	// fnmsubs f4,f11,f11,f5
	ctx.f4.f64 = double(float(-(ctx.f11.f64 * ctx.f11.f64 - ctx.f5.f64)));
	// fmadds f12,f10,f3,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f3.f64 + ctx.f0.f64));
	// fnmadds f9,f9,f3,f8
	ctx.f9.f64 = double(float(-(ctx.f9.f64 * ctx.f3.f64 + ctx.f8.f64)));
	// fmadds f10,f6,f6,f7
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f7.f64));
	// fabs f0,f4
	ctx.f0.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x831b9194
	if (ctx.cr6.lt) goto loc_831B9194;
	// fmuls f7,f0,f1
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmsubs f8,f9,f11,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 - ctx.f12.f64));
	// fmsubs f13,f12,f11,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 - ctx.f9.f64));
	// fmuls f6,f0,f2
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fneg f4,f7
	ctx.f4.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f8,f4
	ctx.cr6.compare(ctx.f8.f64, ctx.f4.f64);
	// blt cr6,0x831b9014
	if (ctx.cr6.lt) goto loc_831B9014;
	// fcmpu cr6,f8,f7
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// bgt cr6,0x831b8ea0
	if (ctx.cr6.gt) goto loc_831B8EA0;
	// fneg f7,f6
	ctx.f7.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f13,f7
	ctx.cr6.compare(ctx.f13.f64, ctx.f7.f64);
	// blt cr6,0x831b8e2c
	if (ctx.cr6.lt) goto loc_831B8E2C;
	// fcmpu cr6,f13,f6
	ctx.cr6.compare(ctx.f13.f64, ctx.f6.f64);
	// bgt cr6,0x831b8db8
	if (ctx.cr6.gt) goto loc_831B8DB8;
	// fdivs f7,f5,f0
	ctx.f7.f64 = double(float(ctx.f5.f64 / ctx.f0.f64));
	// lfs f0,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f0,f7,f13
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f13,f7,f8
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmadds f4,f0,f11,f6
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fmadds f3,f13,f11,f5
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fadds f2,f4,f13
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// fadds f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// fmuls f12,f2,f13
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmadds f11,f1,f0,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fadds f12,f11,f10
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// b 0x831b91fc
	goto loc_831B91FC;
loc_831B8DB8:
	// fnmadds f12,f11,f2,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(-(ctx.f11.f64 * ctx.f2.f64 + ctx.f12.f64)));
	// fneg f13,f1
	ctx.f13.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fmr f0,f2
	ctx.f0.f64 = ctx.f2.f64;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x831b8de8
	if (!ctx.cr6.lt) goto loc_831B8DE8;
	// lfs f11,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f9,f9,f11,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fnmsubs f8,f12,f11,f13
	ctx.f8.f64 = double(float(-(ctx.f12.f64 * ctx.f11.f64 - ctx.f13.f64)));
	// fmuls f7,f9,f2
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmadds f6,f8,f13,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fadds f12,f6,f10
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// b 0x831b91fc
	goto loc_831B91FC;
loc_831B8DE8:
	// fcmpu cr6,f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f1.f64);
	// bgt cr6,0x831b8e0c
	if (ctx.cr6.gt) goto loc_831B8E0C;
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// lfs f12,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f9,f9,f12,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fmsubs f8,f9,f2,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f2.f64 - ctx.f11.f64));
	// fadds f12,f8,f10
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// b 0x831b91fc
	goto loc_831B91FC;
loc_831B8E0C:
	// lfs f11,7676(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f11.f64 = double(temp.f32);
	// fmr f13,f1
	ctx.f13.f64 = ctx.f1.f64;
	// fmadds f9,f9,f11,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fnmsubs f8,f12,f11,f1
	ctx.f8.f64 = double(float(-(ctx.f12.f64 * ctx.f11.f64 - ctx.f1.f64)));
	// fmuls f7,f9,f2
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmadds f6,f8,f1,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 + ctx.f7.f64));
	// fadds f12,f6,f10
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// b 0x831b91fc
	goto loc_831B91FC;
loc_831B8E2C:
	// fneg f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fneg f13,f1
	ctx.f13.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fnmadds f12,f0,f11,f12
	ctx.f12.f64 = double(float(-(ctx.f0.f64 * ctx.f11.f64 + ctx.f12.f64)));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x831b8e5c
	if (!ctx.cr6.lt) goto loc_831B8E5C;
	// lfs f11,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f9,f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fnmsubs f8,f12,f11,f13
	ctx.f8.f64 = double(float(-(ctx.f12.f64 * ctx.f11.f64 - ctx.f13.f64)));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmadds f6,f8,f13,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fadds f12,f6,f10
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// b 0x831b91fc
	goto loc_831B91FC;
loc_831B8E5C:
	// fcmpu cr6,f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f1.f64);
	// bgt cr6,0x831b8e80
	if (ctx.cr6.gt) goto loc_831B8E80;
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// lfs f12,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f9,f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmsubs f8,f9,f0,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 - ctx.f11.f64));
	// fadds f12,f8,f10
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// b 0x831b91fc
	goto loc_831B91FC;
loc_831B8E80:
	// lfs f11,7676(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f11.f64 = double(temp.f32);
	// fmr f13,f1
	ctx.f13.f64 = ctx.f1.f64;
	// fmadds f9,f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fnmsubs f8,f12,f11,f1
	ctx.f8.f64 = double(float(-(ctx.f12.f64 * ctx.f11.f64 - ctx.f1.f64)));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmadds f6,f8,f1,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 + ctx.f7.f64));
	// fadds f12,f6,f10
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// b 0x831b91fc
	goto loc_831B91FC;
loc_831B8EA0:
	// fneg f0,f6
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x831b8f68
	if (ctx.cr6.lt) goto loc_831B8F68;
	// fcmpu cr6,f13,f6
	ctx.cr6.compare(ctx.f13.f64, ctx.f6.f64);
	// bgt cr6,0x831b8ee8
	if (ctx.cr6.gt) goto loc_831B8EE8;
loc_831B8EB4:
	// fnmadds f11,f11,f1,f9
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(-(ctx.f11.f64 * ctx.f1.f64 + ctx.f9.f64)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fneg f0,f2
	ctx.f0.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fmr f13,f1
	ctx.f13.f64 = ctx.f1.f64;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x831b8f44
	if (!ctx.cr6.lt) goto loc_831B8F44;
loc_831B8ECC:
	// lfs f9,7676(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f12,f12,f9,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fnmsubs f11,f11,f9,f0
	ctx.f11.f64 = double(float(-(ctx.f11.f64 * ctx.f9.f64 - ctx.f0.f64)));
	// fmuls f9,f12,f1
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmadds f8,f11,f0,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fadds f12,f8,f10
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// b 0x831b91fc
	goto loc_831B91FC;
loc_831B8EE8:
	// fnmadds f8,f11,f2,f12
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(-(ctx.f11.f64 * ctx.f2.f64 + ctx.f12.f64)));
	// fneg f13,f1
	ctx.f13.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fmr f0,f2
	ctx.f0.f64 = ctx.f2.f64;
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// bge cr6,0x831b8f1c
	if (!ctx.cr6.lt) goto loc_831B8F1C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f9,f12,f2
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fnmsubs f9,f8,f12,f13
	ctx.f9.f64 = double(float(-(ctx.f8.f64 * ctx.f12.f64 - ctx.f13.f64)));
	// fmuls f8,f11,f2
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// fmadds f7,f9,f13,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fadds f12,f7,f10
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// b 0x831b91fc
	goto loc_831B91FC;
loc_831B8F1C:
	// fcmpu cr6,f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f1.f64);
	// bgt cr6,0x831b8eb4
	if (ctx.cr6.gt) goto loc_831B8EB4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f11,f8,f8
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmr f13,f8
	ctx.f13.f64 = ctx.f8.f64;
	// lfs f12,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f9,f9,f12,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fmsubs f8,f9,f2,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f2.f64 - ctx.f11.f64));
	// fadds f12,f8,f10
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// b 0x831b91fc
	goto loc_831B91FC;
loc_831B8F44:
	// fcmpu cr6,f11,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f2.f64);
	// bgt cr6,0x831b8fd0
	if (ctx.cr6.gt) goto loc_831B8FD0;
	// fmuls f9,f11,f11
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// lfs f11,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f8,f12,f11,f1
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f1.f64));
	// fmsubs f7,f8,f1,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 - ctx.f9.f64));
	// fadds f12,f7,f10
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// b 0x831b91fc
	goto loc_831B91FC;
loc_831B8F68:
	// fneg f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fneg f13,f1
	ctx.f13.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fnmadds f8,f0,f11,f12
	ctx.f8.f64 = double(float(-(ctx.f0.f64 * ctx.f11.f64 + ctx.f12.f64)));
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// bge cr6,0x831b8f9c
	if (!ctx.cr6.lt) goto loc_831B8F9C;
	// lfs f12,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f9,f12,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fnmsubs f9,f8,f12,f13
	ctx.f9.f64 = double(float(-(ctx.f8.f64 * ctx.f12.f64 - ctx.f13.f64)));
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f7,f9,f13,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fadds f12,f7,f10
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// b 0x831b91fc
	goto loc_831B91FC;
loc_831B8F9C:
	// fcmpu cr6,f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f1.f64);
	// bgt cr6,0x831b8fc0
	if (ctx.cr6.gt) goto loc_831B8FC0;
	// lfs f12,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f8,f8
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmadds f9,f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmr f13,f8
	ctx.f13.f64 = ctx.f8.f64;
	// fmsubs f8,f9,f0,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 - ctx.f11.f64));
	// fadds f12,f8,f10
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// b 0x831b91fc
	goto loc_831B91FC;
loc_831B8FC0:
	// fnmadds f11,f11,f1,f9
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(-(ctx.f11.f64 * ctx.f1.f64 + ctx.f9.f64)));
	// fmr f13,f1
	ctx.f13.f64 = ctx.f1.f64;
	// fcmpu cr6,f11,f2
	ctx.cr6.compare(ctx.f11.f64, ctx.f2.f64);
	// ble cr6,0x831b8ff0
	if (!ctx.cr6.gt) goto loc_831B8FF0;
loc_831B8FD0:
	// lfs f9,7676(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f9.f64 = double(temp.f32);
	// fmr f0,f2
	ctx.f0.f64 = ctx.f2.f64;
	// fmadds f12,f12,f9,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fnmsubs f11,f11,f9,f2
	ctx.f11.f64 = double(float(-(ctx.f11.f64 * ctx.f9.f64 - ctx.f2.f64)));
	// fmuls f9,f12,f1
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmadds f8,f11,f2,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f2.f64 + ctx.f9.f64));
	// fadds f12,f8,f10
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// b 0x831b91fc
	goto loc_831B91FC;
loc_831B8FF0:
	// fcmpu cr6,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x831b8ecc
	if (ctx.cr6.lt) goto loc_831B8ECC;
	// fmuls f9,f11,f11
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// lfs f11,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f8,f12,f11,f1
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f1.f64));
	// fmsubs f7,f8,f1,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 - ctx.f9.f64));
	// fadds f12,f7,f10
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// b 0x831b91fc
	goto loc_831B91FC;
loc_831B9014:
	// fneg f0,f6
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x831b90ec
	if (ctx.cr6.lt) goto loc_831B90EC;
	// fcmpu cr6,f13,f6
	ctx.cr6.compare(ctx.f13.f64, ctx.f6.f64);
	// bgt cr6,0x831b905c
	if (ctx.cr6.gt) goto loc_831B905C;
	// fneg f13,f1
	ctx.f13.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fneg f0,f2
	ctx.f0.u64 = ctx.f2.u64 ^ 0x8000000000000000;
loc_831B9030:
	// fnmadds f11,f13,f11,f9
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(-(ctx.f13.f64 * ctx.f11.f64 + ctx.f9.f64)));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x831b914c
	if (!ctx.cr6.lt) goto loc_831B914C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f12,f12,f9,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fnmsubs f11,f11,f9,f0
	ctx.f11.f64 = double(float(-(ctx.f11.f64 * ctx.f9.f64 - ctx.f0.f64)));
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmadds f8,f11,f0,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fadds f12,f8,f10
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// b 0x831b91fc
	goto loc_831B91FC;
loc_831B905C:
	// fnmadds f8,f11,f2,f12
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(-(ctx.f11.f64 * ctx.f2.f64 + ctx.f12.f64)));
	// fmr f0,f2
	ctx.f0.f64 = ctx.f2.f64;
	// fcmpu cr6,f8,f1
	ctx.cr6.compare(ctx.f8.f64, ctx.f1.f64);
	// ble cr6,0x831b9090
	if (!ctx.cr6.gt) goto loc_831B9090;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f13,f1
	ctx.f13.f64 = ctx.f1.f64;
	// lfs f12,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f9,f12,f2
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fnmsubs f9,f8,f12,f1
	ctx.f9.f64 = double(float(-(ctx.f8.f64 * ctx.f12.f64 - ctx.f1.f64)));
	// fmuls f8,f11,f2
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// fmadds f7,f9,f1,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f8.f64));
	// fadds f12,f7,f10
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// b 0x831b91fc
	goto loc_831B91FC;
loc_831B9090:
	// fneg f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// blt cr6,0x831b90bc
	if (ctx.cr6.lt) goto loc_831B90BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f11,f8,f8
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmr f13,f8
	ctx.f13.f64 = ctx.f8.f64;
	// lfs f12,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f9,f9,f12,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fmsubs f8,f9,f2,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f2.f64 - ctx.f11.f64));
	// fadds f12,f8,f10
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// b 0x831b91fc
	goto loc_831B91FC;
loc_831B90BC:
	// fnmadds f11,f13,f11,f9
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(-(ctx.f13.f64 * ctx.f11.f64 + ctx.f9.f64)));
	// fneg f0,f2
	ctx.f0.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x831b914c
	if (!ctx.cr6.lt) goto loc_831B914C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f12,f12,f9,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fnmsubs f11,f11,f9,f0
	ctx.f11.f64 = double(float(-(ctx.f11.f64 * ctx.f9.f64 - ctx.f0.f64)));
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmadds f8,f11,f0,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fadds f12,f8,f10
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// b 0x831b91fc
	goto loc_831B91FC;
loc_831B90EC:
	// fneg f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fnmadds f8,f0,f11,f12
	ctx.f8.f64 = double(float(-(ctx.f0.f64 * ctx.f11.f64 + ctx.f12.f64)));
	// fcmpu cr6,f8,f1
	ctx.cr6.compare(ctx.f8.f64, ctx.f1.f64);
	// ble cr6,0x831b9120
	if (!ctx.cr6.gt) goto loc_831B9120;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f13,f1
	ctx.f13.f64 = ctx.f1.f64;
	// lfs f12,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f9,f12,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fnmsubs f9,f8,f12,f1
	ctx.f9.f64 = double(float(-(ctx.f8.f64 * ctx.f12.f64 - ctx.f1.f64)));
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f7,f9,f1,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f8.f64));
	// fadds f12,f7,f10
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// b 0x831b91fc
	goto loc_831B91FC;
loc_831B9120:
	// fneg f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// blt cr6,0x831b9030
	if (ctx.cr6.lt) goto loc_831B9030;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f11,f8,f8
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmr f13,f8
	ctx.f13.f64 = ctx.f8.f64;
	// lfs f12,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f9,f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmsubs f8,f9,f0,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 - ctx.f11.f64));
	// fadds f12,f8,f10
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// b 0x831b91fc
	goto loc_831B91FC;
loc_831B914C:
	// fcmpu cr6,f11,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f2.f64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// bgt cr6,0x831b9174
	if (ctx.cr6.gt) goto loc_831B9174;
	// fmuls f9,f11,f11
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// lfs f11,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f8,f12,f11,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fmsubs f7,f8,f13,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 - ctx.f9.f64));
	// fadds f12,f7,f10
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// b 0x831b91fc
	goto loc_831B91FC;
loc_831B9174:
	// lfs f9,7676(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f9.f64 = double(temp.f32);
	// fmr f0,f2
	ctx.f0.f64 = ctx.f2.f64;
	// fmadds f12,f12,f9,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fnmsubs f11,f11,f9,f2
	ctx.f11.f64 = double(float(-(ctx.f11.f64 * ctx.f9.f64 - ctx.f2.f64)));
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmadds f8,f11,f2,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f2.f64 + ctx.f9.f64));
	// fadds f12,f8,f10
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// b 0x831b91fc
	goto loc_831B91FC;
loc_831B9194:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f0,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// lfs f13,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// ble cr6,0x831b91b4
	if (!ctx.cr6.gt) goto loc_831B91B4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f11,-18324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f11.f64 = double(temp.f32);
	// b 0x831b91b8
	goto loc_831B91B8;
loc_831B91B4:
	// fmr f11,f5
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f5.f64;
loc_831B91B8:
	// fneg f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fneg f9,f0
	ctx.f9.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f9
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// bge cr6,0x831b91d0
	if (!ctx.cr6.lt) goto loc_831B91D0;
	// fmr f13,f9
	ctx.f13.f64 = ctx.f9.f64;
	// b 0x831b91dc
	goto loc_831B91DC;
loc_831B91D0:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x831b91dc
	if (!ctx.cr6.gt) goto loc_831B91DC;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_831B91DC:
	// fdivs f9,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f8,f12,f0,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmuls f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmadds f12,f8,f13,f10
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmuls f0,f7,f2
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fmadds f13,f11,f0,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
loc_831B91FC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x831b9208
	if (ctx.cr6.eq) goto loc_831B9208;
	// stfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_831B9208:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fabs f1,f12
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// beq cr6,0x831b9218
	if (ctx.cr6.eq) goto loc_831B9218;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_831B9218:
	// lfd f30,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B9224"))) PPC_WEAK_FUNC(sub_831B9224);
PPC_FUNC_IMPL(__imp__sub_831B9224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831B9228"))) PPC_WEAK_FUNC(sub_831B9228);
PPC_FUNC_IMPL(__imp__sub_831B9228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6ae4
	ctx.lr = 0x831B9238;
	__savefpr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f12,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f13,f13
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// fmuls f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmuls f3,f12,f0
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f4,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f2,f10,f0
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f12,6048(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6048);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f1,f10,f10,f11
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f11.f64));
	// lfs f6,6140(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6140);
	ctx.f6.f64 = double(temp.f32);
	// fadds f11,f9,f5
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f10,f8,f3
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// stfs f10,132(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f9,f4,f2
	ctx.f9.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// stfs f9,136(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f11,f1,f7
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x831b92d0
	if (!ctx.cr6.gt) goto loc_831B92D0;
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f8,f6,f11
	ctx.f8.f64 = double(float(ctx.f6.f64 / ctx.f11.f64));
	// fmuls f11,f13,f8
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmuls f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// b 0x831b92dc
	goto loc_831B92DC;
loc_831B92D0:
	// fmr f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f12.f64;
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
loc_831B92DC:
	// lfs f13,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fneg f10,f10
	ctx.f10.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fmuls f5,f13,f13
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f4,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f4,f4
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fmuls f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f4,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f29,f4,f0
	ctx.f29.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f8,f13,f13
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fneg f9,f9
	ctx.f9.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f28,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f27.f64 = double(temp.f32);
	// lfs f30,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f5,f3,f3,f5
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f5.f64));
	// fmadds f4,f4,f4,f2
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fadds f3,f28,f1
	ctx.f3.f64 = double(float(ctx.f28.f64 + ctx.f1.f64));
	// stfs f3,100(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f1,f27,f29
	ctx.f1.f64 = double(float(ctx.f27.f64 + ctx.f29.f64));
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f2,f30,f31
	ctx.f2.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f10,f5,f7
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// fadds f11,f4,f8
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// fmuls f1,f9,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x831b9384
	if (!ctx.cr6.gt) goto loc_831B9384;
	// fsqrts f12,f11
	ctx.f12.f64 = double(float(sqrt(ctx.f11.f64)));
	// lfs f11,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f9,f6,f12
	ctx.f9.f64 = double(float(ctx.f6.f64 / ctx.f12.f64));
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f12,f10,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// b 0x831b938c
	goto loc_831B938C;
loc_831B9384:
	// fmr f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f12.f64;
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
loc_831B938C:
	// lfs f10,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fneg f9,f13
	ctx.f9.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmuls f7,f10,f10
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f6,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fneg f5,f11
	ctx.f5.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fneg f4,f12
	ctx.f4.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmadds f3,f6,f6,f7
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f7.f64));
	// fadds f2,f3,f8
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// fsqrts f13,f2
	ctx.f13.f64 = double(float(sqrt(ctx.f2.f64)));
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x831b8cb0
	ctx.lr = 0x831B93D4;
	sub_831B8CB0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b30
	ctx.lr = 0x831B93E0;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B93EC"))) PPC_WEAK_FUNC(sub_831B93EC);
PPC_FUNC_IMPL(__imp__sub_831B93EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831B93F0"))) PPC_WEAK_FUNC(sub_831B93F0);
PPC_FUNC_IMPL(__imp__sub_831B93F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f8,f7
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmadds f5,f10,f0,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f7,f8,f12,f5
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fcmpu cr6,f7,f11
	ctx.cr6.compare(ctx.f7.f64, ctx.f11.f64);
	// ble cr6,0x831b9480
	if (!ctx.cr6.gt) goto loc_831B9480;
	// fmr f11,f8
	ctx.f11.f64 = ctx.f8.f64;
	// fmr f5,f9
	ctx.f5.f64 = ctx.f9.f64;
	// fmuls f6,f11,f11
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f4,f5,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f6.f64));
	// fmadds f11,f10,f10,f4
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f4.f64));
	// fcmpu cr6,f7,f11
	ctx.cr6.compare(ctx.f7.f64, ctx.f11.f64);
	// blt cr6,0x831b9464
	if (ctx.cr6.lt) goto loc_831B9464;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f11.f64 = double(temp.f32);
	// b 0x831b9474
	goto loc_831B9474;
loc_831B9464:
	// fdivs f11,f7,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f7.f64 / ctx.f11.f64));
	// fmuls f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
loc_831B9474:
	// fsubs f12,f12,f8
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fsubs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
loc_831B9480:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x831b948c
	if (ctx.cr6.eq) goto loc_831B948C;
	// stfs f11,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_831B948C:
	// fmuls f12,f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f11,f0,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f1,f13,f13,f11
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B949C"))) PPC_WEAK_FUNC(sub_831B949C);
PPC_FUNC_IMPL(__imp__sub_831B949C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831B94A0"))) PPC_WEAK_FUNC(sub_831B94A0);
PPC_FUNC_IMPL(__imp__sub_831B94A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x831B94A8;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82cb6ab0
	ctx.lr = 0x831B94B0;
	__savefpr_14(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f29,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// fmuls f11,f29,f0
	ctx.f11.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// lfs f28,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f21,f28,f28
	ctx.f21.f64 = double(float(ctx.f28.f64 * ctx.f28.f64));
	// lfs f24,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f24.f64 = double(temp.f32);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f28,f24
	ctx.f8.f64 = double(float(ctx.f28.f64 * ctx.f24.f64));
	// fmuls f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f25,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f7,f25,f25
	ctx.f7.f64 = double(float(ctx.f25.f64 * ctx.f25.f64));
	// lfs f6,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f2,f10,f25
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f25.f64));
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f31,f28,f25
	ctx.f31.f64 = double(float(ctx.f28.f64 * ctx.f25.f64));
	// lfs f4,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f26,f28,f10
	ctx.f26.f64 = double(float(ctx.f28.f64 * ctx.f10.f64));
	// lfs f23,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f23.f64 = double(temp.f32);
	// fsubs f1,f4,f12
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f12.f64));
	// lfs f5,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmsubs f11,f13,f24,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f24.f64 - ctx.f11.f64));
	// lfs f22,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f22.f64 = double(temp.f32);
	// fmadds f21,f13,f13,f21
	ctx.f21.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f21.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f27,f10,f10
	ctx.f27.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f19,f29,f10,f8
	ctx.f19.f64 = double(float(ctx.f29.f64 * ctx.f10.f64 - ctx.f8.f64));
	// lfs f3,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmsubs f20,f28,f0,f9
	ctx.f20.f64 = double(float(ctx.f28.f64 * ctx.f0.f64 - ctx.f9.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f9,f6,f6,f7
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f7.f64));
	// lfd f30,24704(r11)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24704);
	// fmadds f8,f0,f6,f2
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f2.f64));
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// fmadds f7,f13,f6,f31
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f31.f64));
	// fmadds f26,f13,f0,f26
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f26.f64));
	// fsubs f31,f5,f22
	ctx.f31.f64 = double(float(ctx.f5.f64 - ctx.f22.f64));
	// fmuls f18,f11,f11
	ctx.f18.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmuls f17,f25,f1
	ctx.f17.f64 = double(float(ctx.f25.f64 * ctx.f1.f64));
	// fmadds f27,f0,f0,f27
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f27.f64));
	// fmuls f16,f6,f19
	ctx.f16.f64 = double(float(ctx.f6.f64 * ctx.f19.f64));
	// fmuls f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmadds f2,f23,f23,f9
	ctx.f2.f64 = double(float(ctx.f23.f64 * ctx.f23.f64 + ctx.f9.f64));
	// fnmadds f9,f24,f23,f8
	ctx.f9.f64 = double(float(-(ctx.f24.f64 * ctx.f23.f64 + ctx.f8.f64)));
	// fnmadds f8,f29,f23,f7
	ctx.f8.f64 = double(float(-(ctx.f29.f64 * ctx.f23.f64 + ctx.f7.f64)));
	// fmadds f7,f29,f24,f26
	ctx.f7.f64 = double(float(ctx.f29.f64 * ctx.f24.f64 + ctx.f26.f64));
	// fmadds f26,f29,f29,f21
	ctx.f26.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f21.f64));
	// fmadds f18,f20,f20,f18
	ctx.f18.f64 = double(float(ctx.f20.f64 * ctx.f20.f64 + ctx.f18.f64));
	// fmuls f21,f28,f1
	ctx.f21.f64 = double(float(ctx.f28.f64 * ctx.f1.f64));
	// fsubs f28,f3,f12
	ctx.f28.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// fmadds f20,f23,f20,f16
	ctx.f20.f64 = double(float(ctx.f23.f64 * ctx.f20.f64 + ctx.f16.f64));
	// fmadds f12,f6,f31,f17
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 + ctx.f17.f64));
	// fmadds f27,f24,f24,f27
	ctx.f27.f64 = double(float(ctx.f24.f64 * ctx.f24.f64 + ctx.f27.f64));
	// fmadds f15,f0,f31,f10
	ctx.f15.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f10.f64));
	// fmuls f16,f7,f7
	ctx.f16.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmadds f19,f19,f19,f18
	ctx.f19.f64 = double(float(ctx.f19.f64 * ctx.f19.f64 + ctx.f18.f64));
	// fmadds f21,f13,f31,f21
	ctx.f21.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f21.f64));
	// fmuls f18,f26,f9
	ctx.f18.f64 = double(float(ctx.f26.f64 * ctx.f9.f64));
	// fmadds f20,f25,f11,f20
	ctx.f20.f64 = double(float(ctx.f25.f64 * ctx.f11.f64 + ctx.f20.f64));
	// fnmadds f25,f23,f28,f12
	ctx.f25.f64 = double(float(-(ctx.f23.f64 * ctx.f28.f64 + ctx.f12.f64)));
	// fmuls f17,f27,f8
	ctx.f17.f64 = double(float(ctx.f27.f64 * ctx.f8.f64));
	// fmadds f24,f24,f28,f15
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f28.f64 + ctx.f15.f64));
	// fmsubs f10,f26,f27,f16
	ctx.f10.f64 = double(float(ctx.f26.f64 * ctx.f27.f64 - ctx.f16.f64));
	// fmul f19,f19,f2
	ctx.f19.f64 = ctx.f19.f64 * ctx.f2.f64;
	// fmadds f23,f29,f28,f21
	ctx.f23.f64 = double(float(ctx.f29.f64 * ctx.f28.f64 + ctx.f21.f64));
	// fmsubs f12,f7,f8,f18
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 - ctx.f18.f64));
	// fmuls f29,f20,f20
	ctx.f29.f64 = double(float(ctx.f20.f64 * ctx.f20.f64));
	// fmsubs f11,f7,f9,f17
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 - ctx.f17.f64));
	// fmul f30,f19,f30
	ctx.f30.f64 = ctx.f19.f64 * ctx.f30.f64;
	// fcmpu cr6,f29,f30
	ctx.cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// blt cr6,0x831ba490
	if (ctx.cr6.lt) goto loc_831BA490;
	// fmuls f21,f12,f9
	ctx.f21.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f20,f7,f2
	ctx.f20.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f19,f8,f8
	ctx.f19.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmuls f18,f9,f9
	ctx.f18.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// lfs f29,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f21,f11,f8,f21
	ctx.f21.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 + ctx.f21.f64));
	// fmsubs f20,f8,f9,f20
	ctx.f20.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 - ctx.f20.f64));
	// fmsubs f19,f26,f2,f19
	ctx.f19.f64 = double(float(ctx.f26.f64 * ctx.f2.f64 - ctx.f19.f64));
	// fmsubs f18,f27,f2,f18
	ctx.f18.f64 = double(float(ctx.f27.f64 * ctx.f2.f64 - ctx.f18.f64));
	// fmadds f21,f10,f2,f21
	ctx.f21.f64 = double(float(ctx.f10.f64 * ctx.f2.f64 + ctx.f21.f64));
	// fdivs f21,f29,f21
	ctx.f21.f64 = double(float(ctx.f29.f64 / ctx.f21.f64));
	// fmuls f17,f21,f24
	ctx.f17.f64 = double(float(ctx.f21.f64 * ctx.f24.f64));
	// fmuls f16,f21,f23
	ctx.f16.f64 = double(float(ctx.f21.f64 * ctx.f23.f64));
	// fmuls f21,f21,f25
	ctx.f21.f64 = double(float(ctx.f21.f64 * ctx.f25.f64));
	// fneg f17,f17
	ctx.f17.u64 = ctx.f17.u64 ^ 0x8000000000000000;
	// fneg f16,f16
	ctx.f16.u64 = ctx.f16.u64 ^ 0x8000000000000000;
	// fneg f21,f21
	ctx.f21.u64 = ctx.f21.u64 ^ 0x8000000000000000;
	// fmuls f15,f17,f12
	ctx.f15.f64 = double(float(ctx.f17.f64 * ctx.f12.f64));
	// fmuls f14,f16,f20
	ctx.f14.f64 = double(float(ctx.f16.f64 * ctx.f20.f64));
	// fmuls f20,f17,f20
	ctx.f20.f64 = double(float(ctx.f17.f64 * ctx.f20.f64));
	// fmadds f15,f16,f11,f15
	ctx.f15.f64 = double(float(ctx.f16.f64 * ctx.f11.f64 + ctx.f15.f64));
	// fmadds f19,f19,f17,f14
	ctx.f19.f64 = double(float(ctx.f19.f64 * ctx.f17.f64 + ctx.f14.f64));
	// fmadds f20,f18,f16,f20
	ctx.f20.f64 = double(float(ctx.f18.f64 * ctx.f16.f64 + ctx.f20.f64));
	// fmadds f10,f21,f10,f15
	ctx.f10.f64 = double(float(ctx.f21.f64 * ctx.f10.f64 + ctx.f15.f64));
	// stfs f10,92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmadds f12,f21,f12,f19
	ctx.f12.f64 = double(float(ctx.f21.f64 * ctx.f12.f64 + ctx.f19.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f11,f21,f11,f20
	ctx.f11.f64 = double(float(ctx.f21.f64 * ctx.f11.f64 + ctx.f20.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fcmpu cr6,f10,f30
	ctx.cr6.compare(ctx.f10.f64, ctx.f30.f64);
	// bge cr6,0x831b9b14
	if (!ctx.cr6.lt) goto loc_831B9B14;
	// fadds f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fcmpu cr6,f10,f29
	ctx.cr6.compare(ctx.f10.f64, ctx.f29.f64);
	// bgt cr6,0x831b9864
	if (ctx.cr6.gt) goto loc_831B9864;
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// bge cr6,0x831b97c0
	if (!ctx.cr6.lt) goto loc_831B97C0;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f30
	ctx.cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// stfs f4,124(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// stfs f3,128(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bge cr6,0x831b977c
	if (!ctx.cr6.lt) goto loc_831B977C;
	// bl 0x831b8778
	ctx.lr = 0x831B96CC;
	sub_831B8778(ctx, base);
	// lfs f11,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lfs f9,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lfs f7,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// lfs f6,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f10,124(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x831b8778
	ctx.lr = 0x831B9720;
	sub_831B8778(ctx, base);
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x831b9744
	if (!ctx.cr6.lt) goto loc_831B9744;
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_831B9744:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831bbc30
	ctx.lr = 0x831B9760;
	sub_831BBC30(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x831ba67c
	if (!ctx.cr6.lt) goto loc_831BA67C;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmr f10,f30
	ctx.f10.f64 = ctx.f30.f64;
	// b 0x831ba688
	goto loc_831BA688;
loc_831B977C:
	// bl 0x831b8778
	ctx.lr = 0x831B9780;
	sub_831B8778(ctx, base);
	// stfs f30,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831bbc30
	ctx.lr = 0x831B97A4;
	sub_831BBC30(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x831ba67c
	if (!ctx.cr6.lt) goto loc_831BA67C;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmr f10,f30
	ctx.f10.f64 = ctx.f30.f64;
	// b 0x831ba688
	goto loc_831BA688;
loc_831B97C0:
	// fcmpu cr6,f11,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// bge cr6,0x831b9840
	if (!ctx.cr6.lt) goto loc_831B9840;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stfs f4,124(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f3,128(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x831b8778
	ctx.lr = 0x831B9800;
	sub_831B8778(ctx, base);
	// stfs f30,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831bbc30
	ctx.lr = 0x831B9824;
	sub_831BBC30(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x831ba67c
	if (!ctx.cr6.lt) goto loc_831BA67C;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmr f10,f30
	ctx.f10.f64 = ctx.f30.f64;
	// b 0x831ba688
	goto loc_831BA688;
loc_831B9840:
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831bbc30
	ctx.lr = 0x831B9858;
	sub_831BBC30(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f10,f30
	ctx.f10.f64 = ctx.f30.f64;
	// b 0x831ba680
	goto loc_831BA680;
loc_831B9864:
	// fcmpu cr6,f12,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bge cr6,0x831b997c
	if (!ctx.cr6.lt) goto loc_831B997C;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f4,124(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f3,128(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x831b8778
	ctx.lr = 0x831B98A4;
	sub_831B8778(ctx, base);
	// lfs f11,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f3,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fadds f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f3,f11
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f11.f64));
	// lfs f7,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f4,f10,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f5,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f2,f9,f5
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// fsubs f10,f12,f9
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stfs f4,124(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stfs f2,128(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x831b8778
	ctx.lr = 0x831B991C;
	sub_831B8778(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x831b9944
	if (!ctx.cr6.lt) goto loc_831B9944;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_831B9944:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831bbc30
	ctx.lr = 0x831B9960;
	sub_831BBC30(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x831ba67c
	if (!ctx.cr6.lt) goto loc_831BA67C;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmr f10,f30
	ctx.f10.f64 = ctx.f30.f64;
	// b 0x831ba688
	goto loc_831BA688;
loc_831B997C:
	// fcmpu cr6,f11,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// bge cr6,0x831b9a84
	if (!ctx.cr6.lt) goto loc_831B9A84;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f4,124(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f3,128(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x831b8778
	ctx.lr = 0x831B99AC;
	sub_831B8778(ctx, base);
	// lfs f11,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f3,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fadds f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f3,f11
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f11.f64));
	// lfs f7,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f4,f10,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f5,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f2,f9,f5
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// fsubs f10,f12,f9
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stfs f4,124(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stfs f2,128(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x831b8778
	ctx.lr = 0x831B9A24;
	sub_831B8778(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x831b9a4c
	if (!ctx.cr6.lt) goto loc_831B9A4C;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_831B9A4C:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831bbc30
	ctx.lr = 0x831B9A68;
	sub_831BBC30(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x831ba67c
	if (!ctx.cr6.lt) goto loc_831BA67C;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmr f10,f30
	ctx.f10.f64 = ctx.f30.f64;
	// b 0x831ba688
	goto loc_831BA688;
loc_831B9A84:
	// lfs f12,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f5
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f12,f4
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f3
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f3.f64));
	// lfs f6,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f4,f8,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsubs f3,f6,f10
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// stfs f9,124(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f7,128(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// stfs f5,104(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f4,108(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f3,112(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x831b8778
	ctx.lr = 0x831B9ACC;
	sub_831B8778(ctx, base);
	// lfs f2,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f0,f29,f2
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f2.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831bbc30
	ctx.lr = 0x831B9AF8;
	sub_831BBC30(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x831ba67c
	if (!ctx.cr6.lt) goto loc_831BA67C;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmr f10,f30
	ctx.f10.f64 = ctx.f30.f64;
	// b 0x831ba688
	goto loc_831BA688;
loc_831B9B14:
	// fcmpu cr6,f10,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f29.f64);
	// bgt cr6,0x831b9e9c
	if (ctx.cr6.gt) goto loc_831B9E9C;
	// fadds f6,f11,f12
	ctx.f6.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fcmpu cr6,f6,f29
	ctx.cr6.compare(ctx.f6.f64, ctx.f29.f64);
	// bgt cr6,0x831b9ca4
	if (ctx.cr6.gt) goto loc_831B9CA4;
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// bge cr6,0x831b9bf8
	if (!ctx.cr6.lt) goto loc_831B9BF8;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f30
	ctx.cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// stfs f4,124(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// stfs f3,128(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bge cr6,0x831b9be4
	if (!ctx.cr6.lt) goto loc_831B9BE4;
	// bl 0x831b8778
	ctx.lr = 0x831B9B74;
	sub_831B8778(ctx, base);
	// lfs f11,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lfs f9,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lfs f7,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// lfs f6,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f10,124(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x831b8778
	ctx.lr = 0x831B9BC8;
	sub_831B8778(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x831ba67c
	if (!ctx.cr6.lt) goto loc_831BA67C;
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmr f11,f30
	ctx.f11.f64 = ctx.f30.f64;
	// b 0x831ba688
	goto loc_831BA688;
loc_831B9BE4:
	// bl 0x831b8778
	ctx.lr = 0x831B9BE8;
	sub_831B8778(ctx, base);
	// lfs f10,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f12,f30
	ctx.f12.f64 = ctx.f30.f64;
	// b 0x831ba684
	goto loc_831BA684;
loc_831B9BF8:
	// fcmpu cr6,f11,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// bge cr6,0x831b9c50
	if (!ctx.cr6.lt) goto loc_831B9C50;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stfs f4,124(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f3,128(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x831b8778
	ctx.lr = 0x831B9C3C;
	sub_831B8778(ctx, base);
	// lfs f10,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f11,f30
	ctx.f11.f64 = ctx.f30.f64;
	// b 0x831ba688
	goto loc_831BA688;
loc_831B9C50:
	// fmuls f13,f12,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f5,f12,f9
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f0,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f4,f11,f7,f13
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 + ctx.f13.f64));
	// fmadds f3,f11,f26,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f26.f64 + ctx.f6.f64));
	// fmadds f13,f11,f8,f5
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f9,f10,f9,f4
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fmadds f8,f10,f8,f3
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fmadds f7,f10,f2,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f2.f64 + ctx.f13.f64));
	// fmadds f6,f24,f0,f9
	ctx.f6.f64 = double(float(ctx.f24.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmadds f5,f23,f0,f8
	ctx.f5.f64 = double(float(ctx.f23.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f4,f25,f0,f7
	ctx.f4.f64 = double(float(ctx.f25.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmuls f3,f6,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmadds f2,f5,f11,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f3.f64));
	// fmadds f0,f4,f10,f2
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f2.f64));
	// fmadds f13,f31,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f0.f64));
	// fmadds f9,f1,f1,f13
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f13.f64));
	// fmadds f31,f28,f28,f9
	ctx.f31.f64 = double(float(ctx.f28.f64 * ctx.f28.f64 + ctx.f9.f64));
	// b 0x831ba688
	goto loc_831BA688;
loc_831B9CA4:
	// fcmpu cr6,f12,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bge cr6,0x831b9d7c
	if (!ctx.cr6.lt) goto loc_831B9D7C;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f4,124(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f3,128(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x831b8778
	ctx.lr = 0x831B9CE8;
	sub_831B8778(ctx, base);
	// lfs f11,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f3,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fadds f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f3,f11
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f11.f64));
	// lfs f7,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f4,f10,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f5,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f2,f9,f5
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// fsubs f10,f12,f9
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stfs f4,124(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stfs f2,128(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x831b8778
	ctx.lr = 0x831B9D60;
	sub_831B8778(ctx, base);
	// lfs f11,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f29,f11
	ctx.f12.f64 = double(float(ctx.f29.f64 - ctx.f11.f64));
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x831ba67c
	if (!ctx.cr6.lt) goto loc_831BA67C;
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// b 0x831ba688
	goto loc_831BA688;
loc_831B9D7C:
	// fcmpu cr6,f11,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// bge cr6,0x831b9e40
	if (!ctx.cr6.lt) goto loc_831B9E40;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f4,124(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f3,128(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x831b8778
	ctx.lr = 0x831B9DAC;
	sub_831B8778(ctx, base);
	// lfs f11,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f3,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fadds f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f3,f11
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f11.f64));
	// lfs f7,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f4,f10,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f5,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f2,f9,f5
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// fsubs f10,f12,f9
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stfs f4,124(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stfs f2,128(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x831b8778
	ctx.lr = 0x831B9E24;
	sub_831B8778(ctx, base);
	// lfs f11,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f29,f11
	ctx.f12.f64 = double(float(ctx.f29.f64 - ctx.f11.f64));
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x831ba67c
	if (!ctx.cr6.lt) goto loc_831BA67C;
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// b 0x831ba688
	goto loc_831BA688;
loc_831B9E40:
	// lfs f12,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f5
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f12,f4
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f3
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f3.f64));
	// lfs f6,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f4,f8,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsubs f3,f6,f10
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// stfs f9,124(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f7,128(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// stfs f5,104(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f4,108(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f3,112(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x831b8778
	ctx.lr = 0x831B9E88;
	sub_831B8778(ctx, base);
	// lfs f11,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fsubs f12,f29,f11
	ctx.f12.f64 = double(float(ctx.f29.f64 - ctx.f11.f64));
	// b 0x831ba688
	goto loc_831BA688;
loc_831B9E9C:
	// fadds f10,f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fcmpu cr6,f10,f29
	ctx.cr6.compare(ctx.f10.f64, ctx.f29.f64);
	// bgt cr6,0x831ba14c
	if (ctx.cr6.gt) goto loc_831BA14C;
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// bge cr6,0x831ba048
	if (!ctx.cr6.lt) goto loc_831BA048;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f30
	ctx.cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// stfs f4,124(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// stfs f3,128(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bge cr6,0x831b9fd4
	if (!ctx.cr6.lt) goto loc_831B9FD4;
	// bl 0x831b8778
	ctx.lr = 0x831B9EF4;
	sub_831B8778(ctx, base);
	// lfs f11,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lfs f9,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lfs f7,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// lfs f6,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f10,124(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x831b8778
	ctx.lr = 0x831B9F48;
	sub_831B8778(ctx, base);
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x831b9f6c
	if (!ctx.cr6.lt) goto loc_831B9F6C;
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_831B9F6C:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lfs f12,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f9,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f7,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fadds f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f8,140(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stfs f6,144(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x831bbc30
	ctx.lr = 0x831B9FB8;
	sub_831BBC30(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x831ba67c
	if (!ctx.cr6.lt) goto loc_831BA67C;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmr f10,f29
	ctx.f10.f64 = ctx.f29.f64;
	// b 0x831ba688
	goto loc_831BA688;
loc_831B9FD4:
	// bl 0x831b8778
	ctx.lr = 0x831B9FD8;
	sub_831B8778(ctx, base);
	// lfs f11,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f9,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f7,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lfs f6,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// lfs f4,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// fadds f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f8,136(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stfs f5,140(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stfs f3,144(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x831bbc30
	ctx.lr = 0x831BA02C;
	sub_831BBC30(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x831ba67c
	if (!ctx.cr6.lt) goto loc_831BA67C;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmr f10,f29
	ctx.f10.f64 = ctx.f29.f64;
	// b 0x831ba688
	goto loc_831BA688;
loc_831BA048:
	// fcmpu cr6,f11,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// bge cr6,0x831ba0fc
	if (!ctx.cr6.lt) goto loc_831BA0FC;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stfs f4,124(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f3,128(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x831b8778
	ctx.lr = 0x831BA08C;
	sub_831B8778(ctx, base);
	// lfs f11,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f9,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f7,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lfs f6,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// lfs f4,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// fadds f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f8,136(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stfs f5,140(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stfs f3,144(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x831bbc30
	ctx.lr = 0x831BA0E0;
	sub_831BBC30(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x831ba67c
	if (!ctx.cr6.lt) goto loc_831BA67C;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmr f10,f29
	ctx.f10.f64 = ctx.f29.f64;
	// b 0x831ba688
	goto loc_831BA688;
loc_831BA0FC:
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f6,f22
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f22.f64));
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fadds f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f9,140(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stfs f8,144(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x831bbc30
	ctx.lr = 0x831BA140;
	sub_831BBC30(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f10,f29
	ctx.f10.f64 = ctx.f29.f64;
	// b 0x831ba680
	goto loc_831BA680;
loc_831BA14C:
	// fcmpu cr6,f12,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bge cr6,0x831ba298
	if (!ctx.cr6.lt) goto loc_831BA298;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f4,124(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f3,128(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x831b8778
	ctx.lr = 0x831BA190;
	sub_831B8778(ctx, base);
	// lfs f11,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f3,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fadds f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f3,f11
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f11.f64));
	// lfs f7,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f4,f10,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f5,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f2,f9,f5
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// fsubs f10,f12,f9
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stfs f4,124(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stfs f2,128(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x831b8778
	ctx.lr = 0x831BA208;
	sub_831B8778(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x831ba230
	if (!ctx.cr6.lt) goto loc_831BA230;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_831BA230:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lfs f12,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f9,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f7,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fadds f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f8,140(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stfs f6,144(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x831bbc30
	ctx.lr = 0x831BA27C;
	sub_831BBC30(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x831ba67c
	if (!ctx.cr6.lt) goto loc_831BA67C;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmr f10,f29
	ctx.f10.f64 = ctx.f29.f64;
	// b 0x831ba688
	goto loc_831BA688;
loc_831BA298:
	// fcmpu cr6,f11,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// bge cr6,0x831ba3d0
	if (!ctx.cr6.lt) goto loc_831BA3D0;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f4,124(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f3,128(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x831b8778
	ctx.lr = 0x831BA2C8;
	sub_831B8778(ctx, base);
	// lfs f11,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f3,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fadds f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f3,f11
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f11.f64));
	// lfs f7,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f4,f10,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f5,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f2,f9,f5
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// fsubs f10,f12,f9
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stfs f4,124(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stfs f2,128(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x831b8778
	ctx.lr = 0x831BA340;
	sub_831B8778(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x831ba368
	if (!ctx.cr6.lt) goto loc_831BA368;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_831BA368:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lfs f12,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f9,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f7,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fadds f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f8,140(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stfs f6,144(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x831bbc30
	ctx.lr = 0x831BA3B4;
	sub_831BBC30(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x831ba67c
	if (!ctx.cr6.lt) goto loc_831BA67C;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmr f10,f29
	ctx.f10.f64 = ctx.f29.f64;
	// b 0x831ba688
	goto loc_831BA688;
loc_831BA3D0:
	// lfs f12,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f5
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f12,f4
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f3
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f3.f64));
	// lfs f6,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f4,f8,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsubs f3,f6,f10
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// stfs f9,124(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f7,128(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// stfs f5,104(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f4,108(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f3,112(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x831b8778
	ctx.lr = 0x831BA418;
	sub_831B8778(ctx, base);
	// lfs f2,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// lfs f11,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f29,f13
	ctx.f10.f64 = double(float(ctx.f29.f64 - ctx.f13.f64));
	// lfs f9,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lfs f8,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f11,f9
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// lfs f6,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// fadds f5,f8,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stfs f7,140(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stfs f5,144(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x831bbc30
	ctx.lr = 0x831BA474;
	sub_831BBC30(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x831ba67c
	if (!ctx.cr6.lt) goto loc_831BA67C;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmr f10,f29
	ctx.f10.f64 = ctx.f29.f64;
	// b 0x831ba688
	goto loc_831BA688;
loc_831BA490:
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stfs f4,124(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f3,128(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x831b8778
	ctx.lr = 0x831BA4CC;
	sub_831B8778(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// lfs f30,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f30.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stfs f10,108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x831b8778
	ctx.lr = 0x831BA510;
	sub_831B8778(ctx, base);
	// stfs f30,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x831ba534
	if (!ctx.cr6.lt) goto loc_831BA534;
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_831BA534:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f11,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// lfs f6,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lfs f10,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// lfs f8,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// lfs f4,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fadds f5,f12,f8
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// lfs f2,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f4,f13
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// fsubs f0,f2,f12
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f12.f64));
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f7,124(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stfs f5,128(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f1,108(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x831b8778
	ctx.lr = 0x831BA5A4;
	sub_831B8778(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// lfs f29,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f13,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bge cr6,0x831ba5d4
	if (!ctx.cr6.lt) goto loc_831BA5D4;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_831BA5D4:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831bbc30
	ctx.lr = 0x831BA5F0;
	sub_831BBC30(ctx, base);
	// stfs f30,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x831ba614
	if (!ctx.cr6.lt) goto loc_831BA614;
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_831BA614:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lfs f12,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f9,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f7,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fadds f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f8,140(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stfs f6,144(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x831bbc30
	ctx.lr = 0x831BA660;
	sub_831BBC30(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x831ba67c
	if (!ctx.cr6.lt) goto loc_831BA67C;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmr f10,f29
	ctx.f10.f64 = ctx.f29.f64;
	// b 0x831ba688
	goto loc_831BA688;
loc_831BA67C:
	// lfs f10,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
loc_831BA680:
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
loc_831BA684:
	// lfs f11,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
loc_831BA688:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x831ba694
	if (ctx.cr6.eq) goto loc_831BA694;
	// stfs f10,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
loc_831BA694:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x831ba6a0
	if (ctx.cr6.eq) goto loc_831BA6A0;
	// stfs f12,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
loc_831BA6A0:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// fabs f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// beq cr6,0x831ba6b0
	if (ctx.cr6.eq) goto loc_831BA6B0;
	// stfs f11,0(r24)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
loc_831BA6B0:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82cb6afc
	ctx.lr = 0x831BA6BC;
	__restfpr_14(ctx, base);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BA6C0"))) PPC_WEAK_FUNC(sub_831BA6C0);
PPC_FUNC_IMPL(__imp__sub_831BA6C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6ae8
	ctx.lr = 0x831BA6D0;
	__savefpr_28(ctx, base);
	// lfs f13,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lbz r11,87(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lfs f12,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f31,f12,f13
	ctx.f31.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f10,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f1,f10,f0
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f3,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f5,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f30,f3,f9
	ctx.f30.f64 = double(float(ctx.f3.f64 - ctx.f9.f64));
	// lfs f4,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f9,f2,f9
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f9.f64));
	// lfs f12,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f8,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmuls f6,f11,f31
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fsubs f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fmuls f3,f5,f1
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// fmuls f2,f4,f30
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f30.f64));
	// fmsubs f6,f4,f1,f6
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f1.f64 - ctx.f6.f64));
	// fmsubs f10,f11,f30,f3
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f30.f64 - ctx.f3.f64));
	// fmsubs f5,f5,f31,f2
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 - ctx.f2.f64));
	// fmuls f13,f6,f9
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fmadds f12,f10,f8,f13
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 + ctx.f13.f64));
	// fmadds f3,f5,f7,f12
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 + ctx.f12.f64));
	// beq cr6,0x831ba83c
	if (ctx.cr6.eq) goto loc_831BA83C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lfs f13,-29116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29116);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f3,f13
	ctx.cr6.compare(ctx.f3.f64, ctx.f13.f64);
	// blt cr6,0x831ba930
	if (ctx.cr6.lt) goto loc_831BA930;
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f4,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f12,f11,f4
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f4.f64));
	// lfs f2,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// lfs f4,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f11,f13,f6
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fmadds f10,f12,f10,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fmadds f11,f0,f5,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f5.f64 + ctx.f10.f64));
	// stfs f11,0(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fcmpu cr6,f11,f4
	ctx.cr6.compare(ctx.f11.f64, ctx.f4.f64);
	// blt cr6,0x831ba930
	if (ctx.cr6.lt) goto loc_831BA930;
	// fcmpu cr6,f11,f3
	ctx.cr6.compare(ctx.f11.f64, ctx.f3.f64);
	// bgt cr6,0x831ba930
	if (ctx.cr6.gt) goto loc_831BA930;
	// fmuls f11,f0,f8
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f12,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f5,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f2,f13,f7
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// lfs f29,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// fmsubs f12,f12,f7,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 - ctx.f11.f64));
	// fmsubs f13,f13,f8,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 - ctx.f6.f64));
	// fmsubs f11,f0,f9,f2
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 - ctx.f2.f64));
	// fmuls f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmadds f10,f5,f11,f0
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f0,f13,f29,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f29.f64 + ctx.f10.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f4
	ctx.cr6.compare(ctx.f0.f64, ctx.f4.f64);
	// blt cr6,0x831ba930
	if (ctx.cr6.lt) goto loc_831BA930;
	// lfs f10,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f3
	ctx.cr6.compare(ctx.f9.f64, ctx.f3.f64);
	// bgt cr6,0x831ba930
	if (ctx.cr6.gt) goto loc_831BA930;
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f10,f0,f3
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f3.f64));
	// fmadds f9,f13,f1,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f11.f64));
	// fmadds f8,f12,f30,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f9.f64));
	// fmuls f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// stfs f7,0(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f6,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f10
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// stfs f5,0(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f4,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// stfs f3,0(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b34
	ctx.lr = 0x831BA830;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_831BA83C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-3484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f3,f13
	ctx.cr6.compare(ctx.f3.f64, ctx.f13.f64);
	// ble cr6,0x831ba85c
	if (!ctx.cr6.gt) goto loc_831BA85C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lfs f13,-29116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29116);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f3,f13
	ctx.cr6.compare(ctx.f3.f64, ctx.f13.f64);
	// blt cr6,0x831ba930
	if (ctx.cr6.lt) goto loc_831BA930;
loc_831BA85C:
	// lfs f12,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f4,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f12,f11,f4
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f4.f64));
	// lfs f2,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// lfs f2,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f2.f64 = double(temp.f32);
	// fdivs f11,f2,f3
	ctx.f11.f64 = double(float(ctx.f2.f64 / ctx.f3.f64));
	// lfs f4,6048(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6048);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f6,f13,f6
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fmadds f3,f12,f10,f6
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fmadds f10,f0,f5,f3
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fmuls f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f10,0(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fcmpu cr6,f10,f4
	ctx.cr6.compare(ctx.f10.f64, ctx.f4.f64);
	// blt cr6,0x831ba930
	if (ctx.cr6.lt) goto loc_831BA930;
	// fcmpu cr6,f10,f2
	ctx.cr6.compare(ctx.f10.f64, ctx.f2.f64);
	// bgt cr6,0x831ba930
	if (ctx.cr6.gt) goto loc_831BA930;
	// fmuls f10,f0,f8
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f6,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f12,f9
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f3,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f29,f13,f7
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// lfs f28,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// fmsubs f12,f12,f7,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 - ctx.f10.f64));
	// fmsubs f13,f13,f8,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 - ctx.f5.f64));
	// fmsubs f10,f0,f9,f29
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 - ctx.f29.f64));
	// fmuls f0,f6,f12
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmadds f9,f3,f10,f0
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fmadds f8,f13,f28,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f28.f64 + ctx.f9.f64));
	// fmuls f0,f8,f11
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f4
	ctx.cr6.compare(ctx.f0.f64, ctx.f4.f64);
	// blt cr6,0x831ba930
	if (ctx.cr6.lt) goto loc_831BA930;
	// lfs f9,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// fcmpu cr6,f8,f2
	ctx.cr6.compare(ctx.f8.f64, ctx.f2.f64);
	// bgt cr6,0x831ba930
	if (ctx.cr6.gt) goto loc_831BA930;
	// fmuls f0,f10,f31
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fmadds f13,f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f0.f64));
	// fmadds f12,f12,f30,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f13.f64));
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b34
	ctx.lr = 0x831BA924;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_831BA930:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b34
	ctx.lr = 0x831BA93C;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BA948"))) PPC_WEAK_FUNC(sub_831BA948);
PPC_FUNC_IMPL(__imp__sub_831BA948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f29,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f4,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f13,f0,f4
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f3,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f0,f12,f3
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f8,f9
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// lfs f7,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// stfs f0,-40(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// stfs f13,-48(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// stfs f12,-44(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// fmuls f5,f10,f13
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f11,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f11.f64 = double(temp.f32);
	// lfs f1,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f2,f7,f0
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f8,f6,f12
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmsubs f0,f6,f0,f5
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 - ctx.f5.f64));
	// fmsubs f12,f10,f12,f2
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f2.f64));
	// fmsubs f13,f7,f13,f8
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 - ctx.f8.f64));
	// fmuls f7,f0,f0
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f6,f13,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f10,f12,f12,f6
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// ble cr6,0x831ba9e4
	if (!ctx.cr6.gt) goto loc_831BA9E4;
	// fsqrts f10,f10
	ctx.f10.f64 = double(float(sqrt(ctx.f10.f64)));
	// fdivs f8,f1,f10
	ctx.f8.f64 = double(float(ctx.f1.f64 / ctx.f10.f64));
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// b 0x831ba9f0
	goto loc_831BA9F0;
loc_831BA9E4:
	// fmr f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f11.f64;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
loc_831BA9F0:
	// lfs f10,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f31,f9,f0
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f30,f10,f0
	ctx.f30.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f29,f7,f0
	ctx.f29.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f9,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f2,f5,f12
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// lfs f8,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f3,f3,f13,f31
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f31.f64));
	// fmadds f31,f9,f13,f30
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f30.f64));
	// fmadds f30,f6,f13,f29
	ctx.f30.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f29.f64));
	// fnmadds f4,f4,f12,f3
	ctx.f4.f64 = double(float(-(ctx.f4.f64 * ctx.f12.f64 + ctx.f3.f64)));
	// fmadds f3,f8,f12,f31
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f31.f64));
	// fadds f31,f30,f2
	ctx.f31.f64 = double(float(ctx.f30.f64 + ctx.f2.f64));
	// fadds f3,f3,f4
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// fadds f31,f31,f4
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f4.f64));
	// fmuls f3,f3,f31
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// fcmpu cr6,f3,f11
	ctx.cr6.compare(ctx.f3.f64, ctx.f11.f64);
	// bgt cr6,0x831babfc
	if (ctx.cr6.gt) goto loc_831BABFC;
	// fsubs f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// fsubs f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// fsubs f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// fmuls f7,f10,f10
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f6,f9,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fmadds f7,f8,f8,f6
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fcmpu cr6,f7,f11
	ctx.cr6.compare(ctx.f7.f64, ctx.f11.f64);
	// ble cr6,0x831baa7c
	if (!ctx.cr6.gt) goto loc_831BAA7C;
	// fsqrts f7,f7
	ctx.f7.f64 = double(float(sqrt(ctx.f7.f64)));
	// fdivs f6,f1,f7
	ctx.f6.f64 = double(float(ctx.f1.f64 / ctx.f7.f64));
	// fmuls f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmuls f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// b 0x831baa88
	goto loc_831BAA88;
loc_831BAA7C:
	// fmr f8,f11
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f11.f64;
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
loc_831BAA88:
	// fmuls f7,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmadds f6,f9,f13,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f7,f8,f12,f6
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fcmpu cr6,f7,f11
	ctx.cr6.compare(ctx.f7.f64, ctx.f11.f64);
	// beq cr6,0x831babfc
	if (ctx.cr6.eq) goto loc_831BABFC;
	// lfs f3,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fabs f6,f13
	ctx.f6.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f31,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fmadds f13,f31,f13,f1
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// fadds f2,f13,f2
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// fadds f1,f2,f4
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// fdivs f13,f1,f7
	ctx.f13.f64 = double(float(ctx.f1.f64 / ctx.f7.f64));
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f4,f9,f13
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fsubs f2,f5,f8
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// stfs f2,0(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fsubs f1,f3,f7
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f7.f64));
	// stfs f1,4(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fsubs f13,f31,f4
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f4.f64));
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// ble cr6,0x831bab04
	if (!ctx.cr6.gt) goto loc_831BAB04;
	// fcmpu cr6,f12,f6
	ctx.cr6.compare(ctx.f12.f64, ctx.f6.f64);
	// ble cr6,0x831bab18
	if (!ctx.cr6.gt) goto loc_831BAB18;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x831bab20
	goto loc_831BAB20;
loc_831BAB04:
	// fcmpu cr6,f0,f6
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// ble cr6,0x831bab18
	if (!ctx.cr6.gt) goto loc_831BAB18;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x831bab20
	goto loc_831BAB20;
loc_831BAB18:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
loc_831BAB20:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-48
	ctx.r7.s64 = ctx.r1.s64 + -48;
	// addi r6,r1,-48
	ctx.r6.s64 = ctx.r1.s64 + -48;
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfsx f10,r10,r7
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f9,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f8,r10,r3
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f7,r11,r5
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f8
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fmuls f5,f7,f10
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// lfsx f4,r11,r6
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfsx f3,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f12,f10
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmsubs f1,f3,f4,f5
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f4.f64 - ctx.f5.f64));
	// fmsubs f0,f6,f4,f2
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f4.f64 - ctx.f2.f64));
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x831babfc
	if (ctx.cr6.lt) goto loc_831BABFC;
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f6,f10
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// stfs f3,0(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fsubs f2,f5,f8
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// stfs f2,4(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fsubs f1,f4,f7
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f7.f64));
	// stfs f1,8(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f6,f0,f3
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f3.f64));
	// fsubs f7,f8,f3
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f3.f64));
	// fsubs f5,f13,f1
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// fsubs f4,f12,f1
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// fsubs f3,f10,f2
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f2.f64));
	// fsubs f2,f9,f2
	ctx.f2.f64 = double(float(ctx.f9.f64 - ctx.f2.f64));
	// fmuls f1,f7,f6
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmadds f0,f5,f4,f1
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f1.f64));
	// fmadds f13,f3,f2,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f0.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// blt cr6,0x831bac00
	if (ctx.cr6.lt) goto loc_831BAC00;
loc_831BABFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831BAC00:
	// lfd f29,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f30,-16(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BAC10"))) PPC_WEAK_FUNC(sub_831BAC10);
PPC_FUNC_IMPL(__imp__sub_831BAC10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r1,-32
	ctx.r31.s64 = ctx.r1.s64 + -32;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r1,-32
	ctx.r30.s64 = ctx.r1.s64 + -32;
	// lfsx f0,r6,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f5,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f13,r5,r6
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f5
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// lfsx f4,r5,r8
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	ctx.f4.f64 = double(temp.f32);
	// stfsx f12,r31,r4
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, temp.u32);
	// fadds f0,f4,f13
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// lfsx f11,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f12,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f9,r7,r4
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f9.f64 = double(temp.f32);
	// stfsx f0,r5,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r30.u32, temp.u32);
	// fmuls f10,f12,f9
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfsx f13,r31,r4
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfsx f7,r5,r7
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f8,f10
	ctx.cr6.compare(ctx.f8.f64, ctx.f10.f64);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f8,f7,f12
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// blt cr6,0x831bae0c
	if (ctx.cr6.lt) goto loc_831BAE0C;
	// fcmpu cr6,f10,f8
	ctx.cr6.compare(ctx.f10.f64, ctx.f8.f64);
	// blt cr6,0x831bacec
	if (ctx.cr6.lt) goto loc_831BACEC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x831bb1c0
	if (ctx.cr6.eq) goto loc_831BB1C0;
	// lfsx f0,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfsx f0,r11,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// lfsx f10,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f11,r6,r4
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f13,r7,r4
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6140(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f12,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fdivs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fnmsubs f7,f8,f9,f11
	ctx.f7.f64 = double(float(-(ctx.f8.f64 * ctx.f9.f64 - ctx.f11.f64)));
	// stfsx f7,r6,r4
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, temp.u32);
	// lfsx f6,r5,r6
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f5,r5,r7
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fnmsubs f2,f3,f9,f6
	ctx.f2.f64 = double(float(-(ctx.f3.f64 * ctx.f9.f64 - ctx.f6.f64)));
	// stfsx f2,r5,r6
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, temp.u32);
	// lfsx f1,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f1,f9
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_831BACEC:
	// lfsx f6,r11,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f6.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfsx f4,r5,r7
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f6,f6
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f8,7676(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 7676);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f10,f4,f4,f3
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f3.f64));
	// fmadds f1,f6,f12,f2
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fmuls f12,f10,f5
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fmuls f9,f1,f9
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// fmuls f8,f12,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmsubs f12,f13,f10,f9
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 - ctx.f9.f64));
	// lfsx f9,r7,r4
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f6,f9,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fcmpu cr6,f12,f8
	ctx.cr6.compare(ctx.f12.f64, ctx.f8.f64);
	// bgt cr6,0x831bad94
	if (ctx.cr6.gt) goto loc_831BAD94;
	// fdivs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// lfsx f8,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f8.f64 = double(temp.f32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// fmuls f5,f0,f0
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f10,-18324(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18324);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f2,f10,f6
	ctx.f2.f64 = double(float(ctx.f10.f64 / ctx.f6.f64));
	// lfs f4,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f13,f12
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmadds f1,f8,f8,f5
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmuls f13,f9,f3
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmadds f11,f8,f11,f13
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fmadds f10,f7,f0,f11
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmuls f0,f2,f10
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// fmadds f9,f0,f10,f1
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f1.f64));
	// fmadds f8,f3,f3,f9
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f9.f64));
	// fadds f7,f8,f4
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f4.f64));
	// stfs f7,0(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// beq cr6,0x831bb1c0
	if (ctx.cr6.eq) goto loc_831BB1C0;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsx f0,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// lfsx f13,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// b 0x831bb1b0
	goto loc_831BB1B0;
loc_831BAD94:
	// lfsx f13,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis r31,-32222
	ctx.r31.s64 = -2111700992;
	// fmuls f12,f13,f11
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfsx f11,r9,r4
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f13,f13
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f13,-18324(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -18324);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f2,f13,f6
	ctx.f2.f64 = double(float(ctx.f13.f64 / ctx.f6.f64));
	// lfs f5,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f11,f9,f12
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f12.f64));
	// fmadds f3,f11,f11,f8
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fmadds f1,f7,f0,f4
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fmadds f13,f0,f0,f3
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f3.f64));
	// fmuls f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// fmadds f12,f0,f1,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// fadds f11,f12,f5
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// beq cr6,0x831bb1c0
	if (ctx.cr6.eq) goto loc_831BB1C0;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsx f0,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// lfsx f13,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r6,r4
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, temp.u32);
	// lfsx f12,r5,r8
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfsx f11,r5,r6
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, temp.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_831BAE0C:
	// fcmpu cr6,f10,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f8.f64);
	// blt cr6,0x831baf54
	if (ctx.cr6.lt) goto loc_831BAF54;
	// lfsx f6,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f6.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfsx f5,r7,r4
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f3,f6,f6
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmuls f2,f5,f13
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f8,7676(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 7676);
	ctx.f8.f64 = double(temp.f32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmadds f10,f5,f5,f3
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fmadds f1,f6,f12,f2
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fmuls f12,f4,f10
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f7,f1,f7
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// fmuls f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmsubs f0,f0,f10,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 - ctx.f7.f64));
	// fcmpu cr6,f0,f6
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// bgt cr6,0x831baed8
	if (ctx.cr6.gt) goto loc_831BAED8;
	// fdivs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// lfsx f8,r5,r30
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r30.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f7,r5,r7
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	ctx.f7.f64 = double(temp.f32);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// fmadds f5,f7,f7,f10
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f10.f64));
	// lfsx f6,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f4,f13,f13
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f3,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f12,-18324(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -18324);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f2,f8,f0
	ctx.f2.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fdivs f1,f12,f5
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f5.f64));
	// fmadds f12,f6,f6,f4
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fmuls f10,f7,f2
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fmadds f8,f6,f11,f10
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmadds f7,f9,f13,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmuls f13,f1,f7
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// fmadds f6,f13,f7,f12
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f12.f64));
	// fmadds f5,f2,f2,f6
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f6.f64));
	// fadds f4,f5,f3
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// stfs f4,0(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// beq cr6,0x831bb1c0
	if (ctx.cr6.eq) goto loc_831BB1C0;
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsx f13,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r11,r6
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// lfsx f12,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfsx f11,r6,r4
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, temp.u32);
	// lfsx f10,r5,r8
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// stfsx f9,r5,r6
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, temp.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_831BAED8:
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// lis r31,-32222
	ctx.r31.s64 = -2111700992;
	// fmuls f12,f0,f11
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfsx f11,r5,r9
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f8,r5,r7
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f0,f0
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f6,f8,f8,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f10.f64));
	// lfs f5,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,-18324(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -18324);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f4,f11,f8,f12
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 + ctx.f12.f64));
	// fmadds f3,f11,f11,f7
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fdivs f2,f0,f6
	ctx.f2.f64 = double(float(ctx.f0.f64 / ctx.f6.f64));
	// fmadds f1,f9,f13,f4
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fmadds f13,f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fmuls f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// fmadds f12,f0,f1,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// fadds f11,f12,f5
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// beq cr6,0x831bb1c0
	if (ctx.cr6.eq) goto loc_831BB1C0;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsx f0,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// lfsx f13,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfsx f12,r6,r4
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, temp.u32);
	// lfsx f11,r5,r8
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r5,r6
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, temp.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_831BAF54:
	// lfsx f10,r5,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	ctx.f10.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfsx f3,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f3
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// lfs f6,6048(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6048);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f1,f3,f12,f8
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmadds f10,f10,f10,f2
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f2.f64));
	// fmuls f8,f1,f9
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// fmsubs f8,f13,f10,f8
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 - ctx.f8.f64));
	// fcmpu cr6,f8,f6
	ctx.cr6.compare(ctx.f8.f64, ctx.f6.f64);
	// blt cr6,0x831bb00c
	if (ctx.cr6.lt) goto loc_831BB00C;
	// fmuls f9,f10,f5
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f12,7676(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 7676);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfsx f9,r7,r4
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f8,f6
	ctx.cr6.compare(ctx.f8.f64, ctx.f6.f64);
	// fmadds f6,f9,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f10.f64));
	// bgt cr6,0x831bad94
	if (ctx.cr6.gt) goto loc_831BAD94;
	// fdivs f12,f8,f10
	ctx.f12.f64 = double(float(ctx.f8.f64 / ctx.f10.f64));
	// lfsx f8,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f8.f64 = double(temp.f32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// fmuls f5,f0,f0
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f10,-18324(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18324);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f2,f10,f6
	ctx.f2.f64 = double(float(ctx.f10.f64 / ctx.f6.f64));
	// lfs f4,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f13,f12
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmadds f1,f8,f8,f5
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmuls f13,f9,f3
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmadds f11,f8,f11,f13
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fmadds f10,f7,f0,f11
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmuls f0,f2,f10
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// fmadds f9,f0,f10,f1
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f1.f64));
	// fmadds f8,f3,f3,f9
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f9.f64));
	// fadds f7,f8,f4
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f4.f64));
	// stfs f7,0(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// beq cr6,0x831bb1c0
	if (ctx.cr6.eq) goto loc_831BB1C0;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsx f0,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// lfsx f13,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// b 0x831bb1b0
	goto loc_831BB1B0;
loc_831BB00C:
	// lfsx f10,r7,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfsx f5,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f3,f5,f5
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmadds f2,f5,f12,f8
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmadds f12,f10,f10,f3
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f3.f64));
	// fmuls f1,f2,f7
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// fmsubs f10,f0,f12,f1
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 - ctx.f1.f64));
	// fcmpu cr6,f10,f6
	ctx.cr6.compare(ctx.f10.f64, ctx.f6.f64);
	// blt cr6,0x831bb14c
	if (ctx.cr6.lt) goto loc_831BB14C;
	// fmuls f8,f4,f12
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f0,7676(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfsx f8,r5,r7
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f6,f8,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f12.f64));
	// fcmpu cr6,f10,f7
	ctx.cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// bgt cr6,0x831bb0d8
	if (ctx.cr6.gt) goto loc_831BB0D8;
	// fdivs f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f12.f64));
	// lfsx f10,r5,r30
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r30.u32);
	ctx.f10.f64 = double(temp.f32);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// lfsx f7,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f13,f13
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f4,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f12,-18324(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -18324);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f2,f12,f6
	ctx.f2.f64 = double(float(ctx.f12.f64 / ctx.f6.f64));
	// fsubs f3,f10,f0
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fmadds f1,f7,f7,f5
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fmuls f12,f8,f3
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// fmadds f11,f7,f11,f12
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f10,f9,f13,f11
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmuls f13,f2,f10
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// fmadds f9,f13,f10,f1
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f1.f64));
	// fmadds f8,f3,f3,f9
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f9.f64));
	// fadds f7,f8,f4
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f4.f64));
	// stfs f7,0(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// beq cr6,0x831bb1c0
	if (ctx.cr6.eq) goto loc_831BB1C0;
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsx f13,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r11,r6
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// lfsx f12,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfsx f11,r6,r4
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, temp.u32);
	// lfsx f10,r5,r8
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// stfsx f9,r5,r6
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, temp.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_831BB0D8:
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// lis r31,-32222
	ctx.r31.s64 = -2111700992;
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfsx f10,r5,r9
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f0,f0
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f5,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,-18324(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -18324);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f2,f0,f6
	ctx.f2.f64 = double(float(ctx.f0.f64 / ctx.f6.f64));
	// fmadds f4,f10,f8,f11
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 + ctx.f11.f64));
	// fmadds f3,f10,f10,f7
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fmadds f1,f9,f13,f4
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fmadds f13,f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fmuls f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// fmadds f12,f0,f1,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// fadds f11,f12,f5
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// beq cr6,0x831bb1c0
	if (ctx.cr6.eq) goto loc_831BB1C0;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsx f0,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// lfsx f13,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfsx f12,r6,r4
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, temp.u32);
	// lfsx f11,r5,r8
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r5,r6
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, temp.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_831BB14C:
	// lfsx f10,r5,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f13,f13
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfsx f6,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f10,f10,f12
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f12.f64));
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f12,-18324(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18324);
	ctx.f12.f64 = double(temp.f32);
	// lfs f4,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f6,f6,f8
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f8.f64));
	// fmadds f2,f6,f11,f7
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fdivs f1,f12,f5
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f5.f64));
	// fmadds f12,f0,f0,f3
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f3.f64));
	// fmadds f11,f9,f13,f2
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f2.f64));
	// fmuls f0,f1,f11
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmadds f10,f0,f11,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fadds f9,f10,f4
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// stfs f9,0(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// beq cr6,0x831bb1c0
	if (ctx.cr6.eq) goto loc_831BB1C0;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsx f0,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// lfsx f13,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
loc_831BB1B0:
	// stfsx f12,r6,r4
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, temp.u32);
	// lfsx f11,r5,r8
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfsx f10,r5,r6
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, temp.u32);
loc_831BB1C0:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BB1CC"))) PPC_WEAK_FUNC(sub_831BB1CC);
PPC_FUNC_IMPL(__imp__sub_831BB1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BB1D0"))) PPC_WEAK_FUNC(sub_831BB1D0);
PPC_FUNC_IMPL(__imp__sub_831BB1D0) {
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
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f7,f11,f13
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcmpu cr6,f8,f7
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// blt cr6,0x831bb298
	if (ctx.cr6.lt) goto loc_831BB298;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f11,f10
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// blt cr6,0x831bb270
	if (ctx.cr6.lt) goto loc_831BB270;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bac10
	ctx.lr = 0x831BB260;
	sub_831BAC10(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_831BB270:
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x831bac10
	ctx.lr = 0x831BB288;
	sub_831BAC10(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_831BB298:
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// blt cr6,0x831bb2d4
	if (ctx.cr6.lt) goto loc_831BB2D4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831bac10
	ctx.lr = 0x831BB2C4;
	sub_831BAC10(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_831BB2D4:
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x831bac10
	ctx.lr = 0x831BB2EC;
	sub_831BAC10(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BB2FC"))) PPC_WEAK_FUNC(sub_831BB2FC);
PPC_FUNC_IMPL(__imp__sub_831BB2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BB300"))) PPC_WEAK_FUNC(sub_831BB300);
PPC_FUNC_IMPL(__imp__sub_831BB300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfsx f0,r11,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r4,r6
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r4,r8
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfsx f10,r4,r7
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f7,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// lfs f10,6048(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6048);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f7,f8
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x831bb3e8
	if (ctx.cr6.lt) goto loc_831BB3E8;
	// stfsx f12,r11,r6
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// lfsx f12,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f13,r4,r6
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f11,r4,r8
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fnmsubs f13,f12,f11,f0
	ctx.f13.f64 = double(float(-(ctx.f12.f64 * ctx.f11.f64 - ctx.f0.f64)));
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// blt cr6,0x831bb3c0
	if (ctx.cr6.lt) goto loc_831BB3C0;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// lfsx f10,r4,r7
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	ctx.f10.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,6140(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f7,f10,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fdivs f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f7.f64));
	// fmuls f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmadds f5,f6,f13,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f8.f64));
	// stfs f5,0(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// beq cr6,0x831bb494
	if (ctx.cr6.eq) goto loc_831BB494;
	// lfsx f13,r4,r8
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfsx f12,r4,r6
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r6.u32, temp.u32);
	// lfsx f10,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f8,r4,r7
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmadds f6,f10,f9,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fneg f4,f5
	ctx.f4.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// stfs f4,0(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// b 0x831bb494
	goto loc_831BB494;
loc_831BB3C0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x831bb494
	if (ctx.cr6.eq) goto loc_831BB494;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfsx f11,r4,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fnmsubs f8,f10,f0,f11
	ctx.f8.f64 = double(float(-(ctx.f10.f64 * ctx.f0.f64 - ctx.f11.f64)));
	// stfsx f8,r4,r6
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r6.u32, temp.u32);
	// fmuls f9,f10,f9
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// b 0x831bb48c
	goto loc_831BB48C;
loc_831BB3E8:
	// stfsx f11,r4,r6
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r6.u32, temp.u32);
	// lfsx f0,r11,r6
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f11,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfsx f12,r4,r7
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f0,f12,f11,f13
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f11.f64 - ctx.f13.f64)));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x831bb468
	if (ctx.cr6.lt) goto loc_831BB468;
	// lfsx f13,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfsx f10,r4,r7
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f13,6140(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f7,f10,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fdivs f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f7.f64));
	// fmuls f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmadds f5,f6,f0,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f5,0(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// beq cr6,0x831bb494
	if (ctx.cr6.eq) goto loc_831BB494;
	// lfsx f0,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfsx f12,r11,r6
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// lfsx f10,r4,r7
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f8
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// lfsx f8,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f8,f11,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fneg f5,f6
	ctx.f5.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// stfs f5,0(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// b 0x831bb494
	goto loc_831BB494;
loc_831BB468:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x831bb494
	if (ctx.cr6.eq) goto loc_831BB494;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfsx f11,r11,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,6140(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmuls f9,f10,f8
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fnmsubs f8,f10,f13,f11
	ctx.f8.f64 = double(float(-(ctx.f10.f64 * ctx.f13.f64 - ctx.f11.f64)));
	// stfsx f8,r11,r6
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
loc_831BB48C:
	// fneg f7,f9
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f7,0(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_831BB494:
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfsx f0,r11,r6
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x831bb4cc
	if (!ctx.cr6.lt) goto loc_831BB4CC;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f10,0(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsx f9,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f9.f64 = double(temp.f32);
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfsx f8,r11,r6
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// blr 
	return;
loc_831BB4CC:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lfsx f13,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f10,0(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsx f9,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f9.f64 = double(temp.f32);
	// stfsx f9,r11,r6
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BB4F4"))) PPC_WEAK_FUNC(sub_831BB4F4);
PPC_FUNC_IMPL(__imp__sub_831BB4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BB4F8"))) PPC_WEAK_FUNC(sub_831BB4F8);
PPC_FUNC_IMPL(__imp__sub_831BB4F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x831bb51c
	if (ctx.cr6.eq) goto loc_831BB51C;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r6
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfsx f11,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// stfs f10,0(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_831BB51C:
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// lfsx f0,r11,r6
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x831bb560
	if (!ctx.cr6.lt) goto loc_831BB560;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f10,0(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsx f9,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f9.f64 = double(temp.f32);
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfsx f8,r11,r6
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// b 0x831bb584
	goto loc_831BB584;
loc_831BB560:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x831bb584
	if (!ctx.cr6.gt) goto loc_831BB584;
	// lfsx f13,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f10,0(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsx f9,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f9.f64 = double(temp.f32);
	// stfsx f9,r11,r6
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
loc_831BB584:
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfsx f0,r11,r6
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x831bb5bc
	if (!ctx.cr6.lt) goto loc_831BB5BC;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f10,0(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsx f9,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f9.f64 = double(temp.f32);
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfsx f8,r11,r6
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// blr 
	return;
loc_831BB5BC:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lfsx f13,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f10,0(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsx f9,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f9.f64 = double(temp.f32);
	// stfsx f9,r11,r6
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BB5E4"))) PPC_WEAK_FUNC(sub_831BB5E4);
PPC_FUNC_IMPL(__imp__sub_831BB5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BB5E8"))) PPC_WEAK_FUNC(sub_831BB5E8);
PPC_FUNC_IMPL(__imp__sub_831BB5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x831bb61c
	if (!ctx.cr6.lt) goto loc_831BB61C;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f0,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// b 0x831bb63c
	goto loc_831BB63C;
loc_831BB61C:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x831bb63c
	if (!ctx.cr6.gt) goto loc_831BB63C;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f0,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
loc_831BB63C:
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x831bb670
	if (!ctx.cr6.lt) goto loc_831BB670;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f10,0(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f8,4(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// b 0x831bb694
	goto loc_831BB694;
loc_831BB670:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x831bb694
	if (!ctx.cr6.gt) goto loc_831BB694;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f10,0(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
loc_831BB694:
	// lfs f13,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x831bb6c8
	if (!ctx.cr6.lt) goto loc_831BB6C8;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f10,0(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f8,8(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
loc_831BB6C8:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f10,0(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BB6F0"))) PPC_WEAK_FUNC(sub_831BB6F0);
PPC_FUNC_IMPL(__imp__sub_831BB6F0) {
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
	ctx.lr = 0x831BB708;
	__savefpr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lfs f9,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,16(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f3,28(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lfs f2,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f10,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// lfs f8,20(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f4,f11,f6
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmuls f1,f11,f3
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// lfs f5,32(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f30,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,24(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	ctx.f29.f64 = double(temp.f32);
	// lfs f27,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f2,f10,f12
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f28,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f31,f8,f12
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f12,f5,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmadds f7,f0,f11,f7
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fmadds f4,f11,f30,f4
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f30.f64 + ctx.f4.f64));
	// fmadds f1,f11,f29,f1
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f29.f64 + ctx.f1.f64));
	// fsubs f28,f28,f27
	ctx.f28.f64 = double(float(ctx.f28.f64 - ctx.f27.f64));
	// lfs f27,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f27.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmadds f11,f9,f13,f2
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f2.f64));
	// fmadds f9,f6,f13,f31
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f31.f64));
	// fmadds f6,f3,f13,f12
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f3,f10,f27,f7
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f27.f64 + ctx.f7.f64));
	// lfs f7,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f2,f27,f8,f4
	ctx.f2.f64 = double(float(ctx.f27.f64 * ctx.f8.f64 + ctx.f4.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f1,f27,f5,f1
	ctx.f1.f64 = double(float(ctx.f27.f64 * ctx.f5.f64 + ctx.f1.f64));
	// stfs f2,92(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f0,f0,f28,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 + ctx.f11.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f13,f30,f28,f9
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f28.f64 + ctx.f9.f64));
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f12,f29,f28,f6
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f28.f64 + ctx.f6.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_831BB7E8:
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lfsx f0,r11,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// bge cr6,0x831bb81c
	if (!ctx.cr6.lt) goto loc_831BB81C;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfsx f0,r11,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// lfsx f13,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfsx f12,r11,r10
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// stbx r6,r9,r3
	PPC_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r6.u8);
	// b 0x831bb824
	goto loc_831BB824;
loc_831BB81C:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stbx r5,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r5.u8);
loc_831BB824:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// blt cr6,0x831bb7e8
	if (ctx.cr6.lt) goto loc_831BB7E8;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ble cr6,0x831bb8e0
	if (!ctx.cr6.gt) goto loc_831BB8E0;
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x831bb8a0
	if (!ctx.cr6.gt) goto loc_831BB8A0;
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// ble cr6,0x831bb878
	if (!ctx.cr6.gt) goto loc_831BB878;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x831bb1d0
	ctx.lr = 0x831BB874;
	sub_831BB1D0(ctx, base);
	// b 0x831bb974
	goto loc_831BB974;
loc_831BB878:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bb300
	ctx.lr = 0x831BB89C;
	sub_831BB300(ctx, base);
	// b 0x831bb974
	goto loc_831BB974;
loc_831BB8A0:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// fcmpu cr6,f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// ble cr6,0x831bb8d0
	if (!ctx.cr6.gt) goto loc_831BB8D0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x831bb300
	ctx.lr = 0x831BB8CC;
	sub_831BB300(ctx, base);
	// b 0x831bb974
	goto loc_831BB974;
loc_831BB8D0:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831bb4f8
	ctx.lr = 0x831BB8DC;
	sub_831BB4F8(ctx, base);
	// b 0x831bb974
	goto loc_831BB974;
loc_831BB8E0:
	// fcmpu cr6,f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x831bb92c
	if (!ctx.cr6.gt) goto loc_831BB92C;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// ble cr6,0x831bb91c
	if (!ctx.cr6.gt) goto loc_831BB91C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x831bb300
	ctx.lr = 0x831BB918;
	sub_831BB300(ctx, base);
	// b 0x831bb974
	goto loc_831BB974;
loc_831BB91C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831bb4f8
	ctx.lr = 0x831BB928;
	sub_831BB4F8(ctx, base);
	// b 0x831bb974
	goto loc_831BB974;
loc_831BB92C:
	// fcmpu cr6,f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// ble cr6,0x831bb95c
	if (!ctx.cr6.gt) goto loc_831BB95C;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x831bb4f8
	ctx.lr = 0x831BB958;
	sub_831BB4F8(ctx, base);
	// b 0x831bb974
	goto loc_831BB974;
loc_831BB95C:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x831bb5e8
	ctx.lr = 0x831BB968;
	sub_831BB5E8(ctx, base);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x831bb974
	if (ctx.cr6.eq) goto loc_831BB974;
	// stfs f7,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_831BB974:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831bb9d4
	if (ctx.cr6.eq) goto loc_831BB9D4;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x831bb994
	if (ctx.cr6.eq) goto loc_831BB994;
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x831bb998
	goto loc_831BB998;
loc_831BB994:
	// lfs f12,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
loc_831BB998:
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x831bb9b0
	if (ctx.cr6.eq) goto loc_831BB9B0;
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x831bb9b4
	goto loc_831BB9B4;
loc_831BB9B0:
	// lfs f13,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
loc_831BB9B4:
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x831bb9c8
	if (ctx.cr6.eq) goto loc_831BB9C8;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_831BB9C8:
	// stfs f12,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_831BB9D4:
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82cb6b30
	ctx.lr = 0x831BB9E4;
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

__attribute__((alias("__imp__sub_831BB9F8"))) PPC_WEAK_FUNC(sub_831BB9F8);
PPC_FUNC_IMPL(__imp__sub_831BB9F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x831BBA00;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// lfs f11,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f7,92(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x831bb6f0
	ctx.lr = 0x831BBA60;
	sub_831BB6F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x831bbacc
	if (ctx.cr6.lt) goto loc_831BBACC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x831bbab8
	if (ctx.cr6.gt) goto loc_831BBAB8;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x831bba90
	if (ctx.cr6.eq) goto loc_831BBA90;
	// stfs f13,0(r25)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
loc_831BBA90:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x831bbaf0
	if (ctx.cr6.eq) goto loc_831BBAF0;
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// stfs f13,4(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 4, temp.u32);
	// stfs f12,8(r26)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r26.u32 + 8, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_831BBAB8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x831bbac4
	if (ctx.cr6.eq) goto loc_831BBAC4;
	// stfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
loc_831BBAC4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x831bbadc
	goto loc_831BBADC;
loc_831BBACC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x831bbad8
	if (ctx.cr6.eq) goto loc_831BBAD8;
	// stfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
loc_831BBAD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_831BBADC:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831bc278
	ctx.lr = 0x831BBAF0;
	sub_831BC278(ctx, base);
loc_831BBAF0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BBAF8"))) PPC_WEAK_FUNC(sub_831BBAF8);
PPC_FUNC_IMPL(__imp__sub_831BBAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r30,-32222
	ctx.r30.s64 = -2111700992;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r31,-1
	ctx.r31.s64 = -1;
	// subf r6,r11,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lfs f0,-18268(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18268);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,-18264(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -18264);
	ctx.f13.f64 = double(temp.f32);
	// lis r3,-32222
	ctx.r3.s64 = -2111700992;
	// lis r30,-32222
	ctx.r30.s64 = -2111700992;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f13,0(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// lfs f10,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f10.f64 = double(temp.f32);
	// subf r5,r11,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r11.s64;
	// lfs f11,-18188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -18188);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,-18192(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -18192);
	ctx.f9.f64 = double(temp.f32);
loc_831BBB48:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// ble cr6,0x831bbb7c
	if (!ctx.cr6.gt) goto loc_831BBB7C;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x831bbb7c
	if (!ctx.cr6.lt) goto loc_831BBB7C;
	// lfsx f0,r5,r11
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x831bbc20
	if (ctx.cr6.lt) goto loc_831BBC20;
	// lfsx f13,r4,r11
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x831bbc20
	if (ctx.cr6.gt) goto loc_831BBC20;
	// b 0x831bbbf4
	goto loc_831BBBF4;
loc_831BBB7C:
	// lfsx f13,r5,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// lfsx f8,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lfsx f7,r4,r11
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fsubs f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fmuls f0,f6,f12
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f13,f5,f12
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x831bbbb8
	if (!ctx.cr6.gt) goto loc_831BBBB8;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// addi r10,r9,3
	ctx.r10.s64 = ctx.r9.s64 + 3;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_831BBBB8:
	// lfs f12,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x831bbbcc
	if (!ctx.cr6.gt) goto loc_831BBBCC;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_831BBBCC:
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x831bbbdc
	if (!ctx.cr6.lt) goto loc_831BBBDC;
	// stfs f13,0(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_831BBBDC:
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x831bbc20
	if (ctx.cr6.gt) goto loc_831BBC20;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x831bbc20
	if (ctx.cr6.lt) goto loc_831BBC20;
loc_831BBBF4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// blt cr6,0x831bbb48
	if (ctx.cr6.lt) goto loc_831BBB48;
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x831bbc20
	if (ctx.cr6.gt) goto loc_831BBC20;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge cr6,0x831bbc24
	if (!ctx.cr6.lt) goto loc_831BBC24;
loc_831BBC20:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_831BBC24:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BBC30"))) PPC_WEAK_FUNC(sub_831BBC30);
PPC_FUNC_IMPL(__imp__sub_831BBC30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f6,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f6
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmuls f2,f5,f6
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// lfs f3,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f5,f5
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fsubs f13,f3,f1
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,6048
	ctx.r11.s64 = ctx.r11.s64 + 6048;
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f3,f10,f9
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f1,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f9,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f6,f7
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f6,f5,f7
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// fmadds f5,f12,f12,f4
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmadds f4,f11,f12,f2
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fmadds f2,f11,f11,f0
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmuls f0,f3,f3
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmadds f31,f12,f13,f8
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f6,f11,f13,f6
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmadds f8,f1,f1,f5
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f5.f64));
	// fmadds f12,f9,f1,f4
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f4.f64));
	// fmadds f10,f9,f9,f2
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fmadds f5,f13,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f11,f1,f3,f31
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + ctx.f31.f64));
	// fmadds f9,f9,f3,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f3.f64 + ctx.f6.f64));
	// fmuls f4,f12,f12
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f7,f7,f7,f5
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fmuls f3,f11,f10
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f2,f9,f8
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmsubs f1,f10,f8,f4
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 - ctx.f4.f64));
	// fmsubs f0,f9,f12,f3
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 - ctx.f3.f64));
	// fmsubs f13,f11,f12,f2
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f2.f64));
	// fabs f6,f1
	ctx.f6.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fadds f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f5,f6
	ctx.cr6.compare(ctx.f5.f64, ctx.f6.f64);
	// bgt cr6,0x831bbe18
	if (ctx.cr6.gt) goto loc_831BBE18;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x831bbd70
	if (!ctx.cr6.lt) goto loc_831BBD70;
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// bge cr6,0x831bbd30
	if (!ctx.cr6.lt) goto loc_831BBD30;
	// fcmpu cr6,f11,f1
	ctx.cr6.compare(ctx.f11.f64, ctx.f1.f64);
	// bge cr6,0x831bbd30
	if (!ctx.cr6.lt) goto loc_831BBD30;
	// fneg f0,f11
	ctx.f0.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fmr f13,f1
	ctx.f13.f64 = ctx.f1.f64;
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// blt cr6,0x831bbf48
	if (ctx.cr6.lt) goto loc_831BBF48;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f11,f0,f7
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f7.f64));
	// lfs f0,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// b 0x831bbfbc
	goto loc_831BBFBC;
loc_831BBD30:
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fcmpu cr6,f9,f1
	ctx.cr6.compare(ctx.f9.f64, ctx.f1.f64);
	// blt cr6,0x831bbd48
	if (ctx.cr6.lt) goto loc_831BBD48;
	// fmr f13,f1
	ctx.f13.f64 = ctx.f1.f64;
	// fmr f12,f7
	ctx.f12.f64 = ctx.f7.f64;
	// b 0x831bbfbc
	goto loc_831BBFBC;
loc_831BBD48:
	// fneg f13,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// blt cr6,0x831bbea0
	if (ctx.cr6.lt) goto loc_831BBEA0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f9,f13,f7
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f7.f64));
	// lfs f13,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// b 0x831bbfbc
	goto loc_831BBFBC;
loc_831BBD70:
	// fcmpu cr6,f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// bge cr6,0x831bbdb8
	if (!ctx.cr6.lt) goto loc_831BBDB8;
	// fmr f13,f1
	ctx.f13.f64 = ctx.f1.f64;
	// fcmpu cr6,f11,f1
	ctx.cr6.compare(ctx.f11.f64, ctx.f1.f64);
	// blt cr6,0x831bbd90
	if (ctx.cr6.lt) goto loc_831BBD90;
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f12,f7
	ctx.f12.f64 = ctx.f7.f64;
	// b 0x831bbfbc
	goto loc_831BBFBC;
loc_831BBD90:
	// fneg f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// blt cr6,0x831bbf48
	if (ctx.cr6.lt) goto loc_831BBF48;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f11,f0,f7
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f7.f64));
	// lfs f0,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// b 0x831bbfbc
	goto loc_831BBFBC;
loc_831BBDB8:
	// fcmpu cr6,f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f6.f64, ctx.f1.f64);
	// bne cr6,0x831bbdd4
	if (!ctx.cr6.eq) goto loc_831BBDD4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f13,f1
	ctx.f13.f64 = ctx.f1.f64;
	// lfs f12,-18264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18264);
	ctx.f12.f64 = double(temp.f32);
	// b 0x831bbfbc
	goto loc_831BBFBC;
loc_831BBDD4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f5,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f5.f64 = double(temp.f32);
	// fdivs f5,f5,f6
	ctx.f5.f64 = double(float(ctx.f5.f64 / ctx.f6.f64));
	// lfs f6,7676(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7676);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f4,f0,f8
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f3,f0,f12
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmadds f2,f13,f12,f4
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmadds f12,f13,f10,f3
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f3.f64));
	// fmadds f11,f11,f6,f2
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fmadds f10,f9,f6,f12
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f6.f64 + ctx.f12.f64));
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f8,f10,f13,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fadds f12,f8,f7
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// b 0x831bbfbc
	goto loc_831BBFBC;
loc_831BBE18:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x831bbeb0
	if (!ctx.cr6.lt) goto loc_831BBEB0;
	// fadds f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fadds f13,f9,f10
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x831bbe64
	if (!ctx.cr6.gt) goto loc_831BBE64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_831BBE38:
	// lfs f6,7676(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f6.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fnmsubs f13,f12,f6,f8
	ctx.f13.f64 = double(float(-(ctx.f12.f64 * ctx.f6.f64 - ctx.f8.f64)));
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x831bbf8c
	if (ctx.cr6.lt) goto loc_831BBF8C;
	// fmadds f12,f11,f6,f7
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f6.f64 + ctx.f7.f64));
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f1
	ctx.f13.f64 = ctx.f1.f64;
	// fadds f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// b 0x831bbfbc
	goto loc_831BBFBC;
loc_831BBE64:
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// bgt cr6,0x831bbe8c
	if (ctx.cr6.gt) goto loc_831BBE8C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f9,f13,f7
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f7.f64));
	// lfs f13,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// b 0x831bbfbc
	goto loc_831BBFBC;
loc_831BBE8C:
	// fcmpu cr6,f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f1.f64);
	// blt cr6,0x831bbea0
	if (ctx.cr6.lt) goto loc_831BBEA0;
	// fmr f13,f1
	ctx.f13.f64 = ctx.f1.f64;
	// fmr f12,f7
	ctx.f12.f64 = ctx.f7.f64;
	// b 0x831bbfbc
	goto loc_831BBFBC;
loc_831BBEA0:
	// fdivs f13,f9,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmadds f12,f13,f9,f7
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f7.f64));
	// b 0x831bbfbc
	goto loc_831BBFBC;
loc_831BBEB0:
	// fcmpu cr6,f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// bge cr6,0x831bbf58
	if (!ctx.cr6.lt) goto loc_831BBF58;
	// fadds f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f0,f11,f8
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x831bbf0c
	if (!ctx.cr6.gt) goto loc_831BBF0C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f6,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f6.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fnmsubs f13,f12,f6,f8
	ctx.f13.f64 = double(float(-(ctx.f12.f64 * ctx.f6.f64 - ctx.f8.f64)));
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x831bbefc
	if (ctx.cr6.lt) goto loc_831BBEFC;
	// fmadds f12,f9,f6,f7
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f6.f64 + ctx.f7.f64));
	// lfs f13,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// b 0x831bbfbc
	goto loc_831BBFBC;
loc_831BBEFC:
	// fdivs f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x831bbf98
	goto loc_831BBF98;
loc_831BBF0C:
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x831bbf34
	if (ctx.cr6.gt) goto loc_831BBF34;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f11,f0,f7
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f7.f64));
	// lfs f0,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// b 0x831bbfbc
	goto loc_831BBFBC;
loc_831BBF34:
	// fcmpu cr6,f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f1.f64);
	// blt cr6,0x831bbf48
	if (ctx.cr6.lt) goto loc_831BBF48;
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f12,f7
	ctx.f12.f64 = ctx.f7.f64;
	// b 0x831bbfbc
	goto loc_831BBFBC;
loc_831BBF48:
	// fdivs f0,f11,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f8.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmadds f12,f0,f11,f7
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f7.f64));
	// b 0x831bbfbc
	goto loc_831BBFBC;
loc_831BBF58:
	// fadds f0,f9,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x831bbe38
	if (ctx.cr6.gt) goto loc_831BBE38;
	// lfs f13,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmadds f12,f9,f13,f7
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// lfs f13,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// b 0x831bbfbc
	goto loc_831BBFBC;
loc_831BBF8C:
	// fdivs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f13,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_831BBF98:
	// fmuls f8,f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f5,f0,f12
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmadds f4,f13,f12,f8
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmadds f3,f13,f10,f5
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fmadds f2,f11,f6,f4
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fmadds f12,f9,f6,f3
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fmuls f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmadds f10,f12,f13,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fadds f12,f10,f7
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
loc_831BBFBC:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x831bbfc8
	if (ctx.cr6.eq) goto loc_831BBFC8;
	// stfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
loc_831BBFC8:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x831bbfd4
	if (ctx.cr6.eq) goto loc_831BBFD4;
	// stfs f13,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_831BBFD4:
	// fcmpu cr6,f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f1.f64);
	// blt cr6,0x831bbfe0
	if (ctx.cr6.lt) goto loc_831BBFE0;
	// fmr f1,f12
	ctx.f1.f64 = ctx.f12.f64;
loc_831BBFE0:
	// lfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BBFE8"))) PPC_WEAK_FUNC(sub_831BBFE8);
PPC_FUNC_IMPL(__imp__sub_831BBFE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x831BBFF0;
	__savegprlr_27(ctx, base);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x831bc118
	if (ctx.cr6.eq) goto loc_831BC118;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x831bc118
	if (ctx.cr6.eq) goto loc_831BC118;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x831bc118
	if (ctx.cr6.eq) goto loc_831BC118;
	// lwz r27,8(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831bc118
	if (ctx.cr6.eq) goto loc_831BC118;
	// lwz r28,12(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831bc118
	if (ctx.cr6.eq) goto loc_831BC118;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stwx r7,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
	// fmadds f7,f9,f13,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f13,f12,f8,f7
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f7.f64));
loc_831BC06C:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + ctx.r28.u64;
	// beq cr6,0x831bc104
	if (ctx.cr6.eq) goto loc_831BC104;
loc_831BC08C:
	// lbz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rotlwi r11,r9,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// clrlwi r31,r10,16
	ctx.r31.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x831bc0f8
	if (ctx.cr6.eq) goto loc_831BC0F8;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r7,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u32);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmadds f6,f10,f0,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmadds f0,f12,f9,f6
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x831bc0f8
	if (!ctx.cr6.gt) goto loc_831BC0F8;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_831BC0F8:
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x831bc08c
	if (!ctx.cr6.eq) goto loc_831BC08C;
loc_831BC104:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x831bc06c
	if (!ctx.cr6.eq) goto loc_831BC06C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_831BC118:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BC120"))) PPC_WEAK_FUNC(sub_831BC120);
PPC_FUNC_IMPL(__imp__sub_831BC120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x831bc164
	if (!ctx.cr6.gt) goto loc_831BC164;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x831bc164
	if (!ctx.cr6.gt) goto loc_831BC164;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,6140
	ctx.r10.s64 = ctx.r10.s64 + 6140;
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// b 0x831bc18c
	goto loc_831BC18C;
loc_831BC164:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fcmpu cr6,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// addi r10,r10,6140
	ctx.r10.s64 = ctx.r10.s64 + 6140;
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x831bc184
	if (!ctx.cr6.gt) goto loc_831BC184;
	// li r11,2
	ctx.r11.s64 = 2;
	// fdivs f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// b 0x831bc18c
	goto loc_831BC18C;
loc_831BC184:
	// li r11,0
	ctx.r11.s64 = 0;
	// fdivs f13,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
loc_831BC18C:
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// lis r9,256
	ctx.r9.s64 = 16777216;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// ori r5,r9,513
	ctx.r5.u64 = ctx.r9.u64 | 513;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// srw r10,r5,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwinm r9,r10,26,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FC;
	// lfs f12,6380(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6380);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r7,r10,2,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfsx f9,r9,r4
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f7,r7,r4
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfsx f5,r6,r4
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,-16(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r3,r4,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// frsp f4,f10
	ctx.f4.f64 = double(float(ctx.f10.f64));
	// or r9,r3,r5
	ctx.r9.u64 = ctx.r3.u64 | ctx.r5.u64;
	// fadds f3,f8,f0
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fadds f2,f6,f0
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// fmuls f1,f4,f12
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmuls f0,f3,f1
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// fmuls f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// fctidz f11,f0
	ctx.f11.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// fctidz f10,f13
	ctx.f10.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f10.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f7,-16(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// fsubs f3,f13,f5
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// fsubs f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
	// fcmpu cr6,f3,f12
	ctx.cr6.compare(ctx.f3.f64, ctx.f12.f64);
	// ble cr6,0x831bc258
	if (!ctx.cr6.gt) goto loc_831BC258;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_831BC258:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x831bc264
	if (!ctx.cr6.gt) goto loc_831BC264;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_831BC264:
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BC278"))) PPC_WEAK_FUNC(sub_831BC278);
PPC_FUNC_IMPL(__imp__sub_831BC278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lfs f9,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f7,16(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// subf r10,r10,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r10.s64;
	// lfs f6,28(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// li r9,3
	ctx.r9.s64 = 3;
	// lfs f5,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f5,f4
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// lfs f0,20(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f9,f12
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f10,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f7,f12
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f7,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// lfs f5,24(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f1,6048(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6048);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f4,f3,f8,f11
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 + ctx.f11.f64));
	// fmadds f3,f0,f8,f9
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fmadds f0,f13,f8,f6
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fmadds f13,f10,f2,f4
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f2.f64 + ctx.f4.f64));
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fmadds f12,f7,f2,f3
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f2.f64 + ctx.f3.f64));
	// stfs f12,-12(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmadds f11,f5,f2,f0
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f2.f64 + ctx.f0.f64));
	// stfs f11,-8(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
loc_831BC308:
	// lfsx f13,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x831bc32c
	if (!ctx.cr6.lt) goto loc_831BC32C;
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x831bc340
	goto loc_831BC340;
loc_831BC32C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x831bc344
	if (!ctx.cr6.gt) goto loc_831BC344;
	// lfsx f13,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_831BC340:
	// fmadds f1,f12,f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f1.f64));
loc_831BC344:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x831bc308
	if (!ctx.cr0.eq) goto loc_831BC308;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f12,8(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BC374"))) PPC_WEAK_FUNC(sub_831BC374);
PPC_FUNC_IMPL(__imp__sub_831BC374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BC378"))) PPC_WEAK_FUNC(sub_831BC378);
PPC_FUNC_IMPL(__imp__sub_831BC378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f11,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f5,f6,f10
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f10.f64));
	// fmadds f10,f4,f6,f8
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f8.f64));
	// fmadds f9,f3,f13,f7
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f8,f2,f0,f11
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f8,4(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmadds f7,f1,f0,f10
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f7,8(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmadds f6,f6,f12,f9
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f6,0(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BC3DC"))) PPC_WEAK_FUNC(sub_831BC3DC);
PPC_FUNC_IMPL(__imp__sub_831BC3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BC3E0"))) PPC_WEAK_FUNC(sub_831BC3E0);
PPC_FUNC_IMPL(__imp__sub_831BC3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f11,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f5,f6,f10
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f10.f64));
	// fmadds f10,f4,f6,f8
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f8.f64));
	// fmadds f9,f3,f13,f7
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f8,f2,f0,f11
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f8,4(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmadds f7,f1,f0,f10
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f7,8(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmadds f6,f6,f12,f9
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f6,0(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BC444"))) PPC_WEAK_FUNC(sub_831BC444);
PPC_FUNC_IMPL(__imp__sub_831BC444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BC448"))) PPC_WEAK_FUNC(sub_831BC448);
PPC_FUNC_IMPL(__imp__sub_831BC448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f8,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// lfs f6,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f13,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f4,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f3,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f5,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f2,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f11,f4,f6,f9
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f9.f64));
	// fmadds f9,f3,f0,f7
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmadds f12,f5,f6,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f12.f64));
	// fmadds f7,f1,f10,f11
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f10.f64 + ctx.f11.f64));
	// stfs f7,8(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmadds f6,f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f9.f64));
	// stfs f6,0(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmadds f8,f2,f10,f12
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f10.f64 + ctx.f12.f64));
	// stfs f8,4(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f5,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmr f4,f6
	ctx.f4.f64 = ctx.f6.f64;
	// fadds f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// stfs f3,0(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f2,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f2,f8
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// stfs f1,4(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f7
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// stfs f13,8(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BC4D4"))) PPC_WEAK_FUNC(sub_831BC4D4);
PPC_FUNC_IMPL(__imp__sub_831BC4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BC4D8"))) PPC_WEAK_FUNC(sub_831BC4D8);
PPC_FUNC_IMPL(__imp__sub_831BC4D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f12,f9,f8
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f6,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f5,f10,f0
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmadds f4,f7,f13,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f10,f6,f12,f4
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x831bc590
	if (!ctx.cr6.lt) goto loc_831BC590;
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// ble cr6,0x831bc590
	if (!ctx.cr6.gt) goto loc_831BC590;
	// lfs f11,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f7,f9,f13,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f10,f8,f12,f7
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x831bc590
	if (!ctx.cr6.lt) goto loc_831BC590;
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// ble cr6,0x831bc590
	if (!ctx.cr6.gt) goto loc_831BC590;
	// lfs f11,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f7,f9,f13,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f13,f8,f12,f7
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x831bc590
	if (!ctx.cr6.lt) goto loc_831BC590;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_831BC590:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BC598"))) PPC_WEAK_FUNC(sub_831BC598);
PPC_FUNC_IMPL(__imp__sub_831BC598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r3,24
	ctx.r9.s64 = ctx.r3.s64 + 24;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f11,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmr f7,f9
	ctx.f7.f64 = ctx.f9.f64;
	// lfs f6,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// lfs f5,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// lfs f0,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// stfs f4,8(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmuls f1,f7,f0
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f2,f8,f0
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f1,4(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f2,0(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// fmuls f13,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f12,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f10,12(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmr f6,f10
	ctx.f6.f64 = ctx.f10.f64;
	// lfs f9,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// stfs f7,16(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// lfs f4,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f1,f6,f0
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f3,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fmr f13,f2
	ctx.f13.f64 = ctx.f2.f64;
	// stfs f2,20(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fmuls f12,f5,f0
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f1,12(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f11,20(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f10,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f31,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmadds f7,f7,f5,f11
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f5.f64 + ctx.f11.f64));
	// fmadds f11,f8,f5,f9
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f5.f64 + ctx.f9.f64));
	// fmadds f10,f6,f5,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 + ctx.f10.f64));
	// fmadds f9,f3,f1,f7
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f1.f64 + ctx.f7.f64));
	// fmadds f8,f1,f4,f11
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f4.f64 + ctx.f11.f64));
	// fmadds f7,f2,f1,f10
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 + ctx.f10.f64));
	// fadds f6,f12,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f6,4(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f5,f0,f8
	ctx.f5.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// stfs f5,0(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f4,f13,f7
	ctx.f4.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// stfs f4,8(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_831BC6E0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x831bc6e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831BC6E0;
	// lfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BC6FC"))) PPC_WEAK_FUNC(sub_831BC6FC);
PPC_FUNC_IMPL(__imp__sub_831BC6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BC700"))) PPC_WEAK_FUNC(sub_831BC700);
PPC_FUNC_IMPL(__imp__sub_831BC700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6ad4
	ctx.lr = 0x831BC710;
	__savefpr_23(ctx, base);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x831bc730
	if (!ctx.cr6.eq) goto loc_831BC730;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b20
	ctx.lr = 0x831BC724;
	__restfpr_23(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_831BC730:
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// lfs f13,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f30,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f30.f64 = double(temp.f32);
	// fneg f8,f11
	ctx.f8.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f9,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fneg f28,f30
	ctx.f28.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// lfs f7,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// fneg f6,f9
	ctx.f6.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// lfs f5,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// fneg f4,f7
	ctx.f4.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// lfs f3,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// fneg f2,f5
	ctx.f2.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// lfs f1,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// fneg f31,f3
	ctx.f31.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fneg f29,f1
	ctx.f29.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// stfs f11,8(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// stfs f10,20(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// stfs f8,24(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// addi r11,r4,64
	ctx.r11.s64 = ctx.r4.s64 + 64;
	// stfs f12,16(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// addi r11,r4,80
	ctx.r11.s64 = ctx.r4.s64 + 80;
	// stfs f9,32(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// stfs f7,36(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// stfs f5,40(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// stfs f6,48(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// stfs f2,56(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// stfs f4,52(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// stfs f1,68(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 68, temp.u32);
	// stfs f3,64(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 64, temp.u32);
	// stfs f30,72(r4)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r4.u32 + 72, temp.u32);
	// stfs f31,80(r4)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r4.u32 + 80, temp.u32);
	// stfs f28,88(r4)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r4.u32 + 88, temp.u32);
	// stfs f29,84(r4)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r4.u32 + 84, temp.u32);
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f2,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f29,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f9,f10,f9
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fmuls f7,f7,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmuls f5,f5,f10
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fmuls f10,f30,f8
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f8.f64));
	// fmuls f3,f8,f3
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// fmuls f1,f1,f8
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// fadds f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fadds f28,f12,f9
	ctx.f28.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// fadds f27,f6,f7
	ctx.f27.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// fadds f26,f4,f5
	ctx.f26.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// fsubs f7,f6,f7
	ctx.f7.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fadds f23,f4,f10
	ctx.f23.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// fadds f24,f6,f1
	ctx.f24.f64 = double(float(ctx.f6.f64 + ctx.f1.f64));
	// fmuls f2,f8,f2
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// fadds f31,f6,f13
	ctx.f31.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// fadds f30,f4,f11
	ctx.f30.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// fsubs f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fsubs f1,f6,f1
	ctx.f1.f64 = double(float(ctx.f6.f64 - ctx.f1.f64));
	// fsubs f11,f4,f11
	ctx.f11.f64 = double(float(ctx.f4.f64 - ctx.f11.f64));
	// fsubs f9,f12,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fsubs f5,f4,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// fadds f25,f12,f3
	ctx.f25.f64 = double(float(ctx.f12.f64 + ctx.f3.f64));
	// fsubs f10,f4,f10
	ctx.f10.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// fsubs f6,f12,f3
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// fmadds f8,f29,f31,f2
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f31.f64 + ctx.f2.f64));
	// lfs f2,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fnmadds f4,f2,f30,f8
	ctx.f4.f64 = double(float(-(ctx.f2.f64 * ctx.f30.f64 + ctx.f8.f64)));
	// stfs f4,12(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f3,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f12,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmadds f4,f3,f11,f8
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fnmadds f3,f2,f0,f4
	ctx.f3.f64 = double(float(-(ctx.f2.f64 * ctx.f0.f64 + ctx.f4.f64)));
	// stfs f3,28(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// lfs f2,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f27
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fmadds f11,f2,f26,f12
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f26.f64 + ctx.f12.f64));
	// fnmadds f8,f0,f28,f11
	ctx.f8.f64 = double(float(-(ctx.f0.f64 * ctx.f28.f64 + ctx.f11.f64)));
	// stfs f8,44(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// lfs f4,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f0,f2,f7
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// fmadds f13,f4,f5,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f5.f64 + ctx.f0.f64));
	// fnmadds f12,f3,f9,f13
	ctx.f12.f64 = double(float(-(ctx.f3.f64 * ctx.f9.f64 + ctx.f13.f64)));
	// stfs f12,60(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// lfs f11,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f24
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f24.f64));
	// fmadds f5,f11,f23,f7
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f23.f64 + ctx.f7.f64));
	// fnmadds f4,f9,f25,f5
	ctx.f4.f64 = double(float(-(ctx.f9.f64 * ctx.f25.f64 + ctx.f5.f64)));
	// stfs f4,76(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 76, temp.u32);
	// lfs f3,88(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmadds f12,f3,f10,f13
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fnmadds f11,f2,f6,f12
	ctx.f11.f64 = double(float(-(ctx.f2.f64 * ctx.f6.f64 + ctx.f12.f64)));
	// stfs f11,92(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 92, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b20
	ctx.lr = 0x831BC910;
	__restfpr_23(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BC91C"))) PPC_WEAK_FUNC(sub_831BC91C);
PPC_FUNC_IMPL(__imp__sub_831BC91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BC920"))) PPC_WEAK_FUNC(sub_831BC920);
PPC_FUNC_IMPL(__imp__sub_831BC920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x831bc930
	if (!ctx.cr6.eq) goto loc_831BC930;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831BC930:
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// lfs f12,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r4,84
	ctx.r11.s64 = ctx.r4.s64 + 84;
	// lfs f13,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f10,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f4,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// lfs f6,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f12,f1,f4
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// lfs f2,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// addi r11,r4,36
	ctx.r11.s64 = ctx.r4.s64 + 36;
	// lfs f7,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f0,f4,f2
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f2.f64));
	// lfs f5,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// addi r11,r4,72
	ctx.r11.s64 = ctx.r4.s64 + 72;
	// lfs f3,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r4,60
	ctx.r11.s64 = ctx.r4.s64 + 60;
	// lfs f13,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 + 24;
	// fsubs f1,f6,f9
	ctx.f1.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// lfs f10,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f2,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f7,f7,f11
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f6,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f5,f8
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// stfs f1,88(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 88, temp.u32);
	// fmuls f1,f3,f10
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// stfs f5,92(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 92, temp.u32);
	// fmuls f10,f6,f3
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// stfs f7,84(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 84, temp.u32);
	// fmuls f4,f13,f4
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// stfs f7,48(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// fmuls f13,f2,f3
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// lfs f6,88(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// stfs f6,52(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// lfs f5,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f5.f64 = double(temp.f32);
	// fadds f3,f1,f0
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f5,56(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// fsubs f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f7,36(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// fadds f2,f13,f12
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f5,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f5,40(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// fadds f6,f10,f4
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// lfs f13,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f4,f10
	ctx.f12.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// stfs f13,44(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// stfs f7,0(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f10,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f7,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,8(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f5,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f10,f13,f8
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// fadds f8,f5,f11
	ctx.f8.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// stfs f10,80(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 80, temp.u32);
	// fadds f7,f4,f9
	ctx.f7.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// stfs f7,76(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 76, temp.u32);
	// stfs f8,72(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 72, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f8,60(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// lfs f5,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,64(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 64, temp.u32);
	// lfs f4,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,68(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 68, temp.u32);
	// stfs f8,24(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f13,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,28(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// lfs f11,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// stfs f8,12(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f10,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f9,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f7,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f11,f8,f3
	ctx.f11.f64 = double(float(ctx.f8.f64 - ctx.f3.f64));
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fsubs f13,f7,f2
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f2.f64));
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fsubs f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// stfs f4,8(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f4,f10,f3
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// fsubs f7,f8,f2
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f2.f64));
	// stfs f7,16(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// fsubs f5,f9,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// stfs f4,12(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// stfs f5,20(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f11,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fadds f7,f13,f3
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// fadds f9,f6,f10
	ctx.f9.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// stfs f9,80(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 80, temp.u32);
	// fadds f8,f2,f11
	ctx.f8.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// stfs f8,76(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 76, temp.u32);
	// stfs f7,72(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 72, temp.u32);
	// lfs f4,88(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// lfs f13,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f5,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// fadds f9,f5,f3
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// fadds f11,f13,f6
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// stfs f9,84(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 84, temp.u32);
	// fadds f10,f4,f2
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// stfs f10,88(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 88, temp.u32);
	// stfs f11,92(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 92, temp.u32);
	// lfs f7,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// lfs f8,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fadds f4,f8,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// fadds f6,f7,f1
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// stfs f4,32(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// fadds f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfs f3,28(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// stfs f6,24(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f13,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f2,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// fadds f9,f12,f2
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// fadds f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f9,44(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// fadds f8,f13,f1
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// stfs f8,36(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// stfs f10,40(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// lfs f5,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f2,f7,f0
	ctx.f2.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// stfs f2,52(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// fsubs f4,f5,f12
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f12.f64));
	// lfs f6,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f3,f6,f1
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f1.f64));
	// stfs f3,48(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// stfs f4,56(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// lfs f11,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f7,f13,f12
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// stfs f9,60(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// fsubs f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f8,64(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 64, temp.u32);
	// stfs f7,68(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 68, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BCBA4"))) PPC_WEAK_FUNC(sub_831BCBA4);
PPC_FUNC_IMPL(__imp__sub_831BCBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BCBA8"))) PPC_WEAK_FUNC(sub_831BCBA8);
PPC_FUNC_IMPL(__imp__sub_831BCBA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x831bcbbc
	if (!ctx.cr6.eq) goto loc_831BCBBC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831BCBBC:
	// lis r9,-31907
	ctx.r9.s64 = -2091057152;
	// lfs f11,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// addi r8,r9,-13440
	ctx.r8.s64 = ctx.r9.s64 + -13440;
	// lfs f9,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,-13440(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -13440);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f11,f0
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f4,f10,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f9,f13
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f1,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f8,f12,f5
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fmadds f9,f7,f12,f4
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmadds f8,f6,f0,f2
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f2.f64));
	// fmadds f7,f3,f13,f10
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f7,4(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmadds f6,f1,f13,f9
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f9.f64));
	// stfs f6,8(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmadds f5,f11,f12,f8
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f8.f64));
	// stfs f5,0(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,16(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// lfs f12,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f1,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,20(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f5,f4,f0
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f4,f3,f0
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmadds f3,f2,f0,f6
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f2,f1,f12,f5
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fmadds f1,f11,f12,f4
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmadds f0,f10,f12,f3
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f3.f64));
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// fmadds f12,f9,f13,f2
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f2.f64));
	// stfs f12,16(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// fmadds f11,f8,f13,f1
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f1.f64));
	// stfs f11,20(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f0,28(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,24(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// lfs f13,32(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f2,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f13
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f10,f9,f0
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmadds f9,f8,f0,f1
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f1.f64));
	// fmadds f8,f7,f12,f11
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f7,f6,f12,f10
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f6,f5,f12,f9
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f6,24(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// fmadds f5,f4,f13,f8
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f8.f64));
	// stfs f5,28(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// fmadds f4,f3,f13,f7
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f7.f64));
	// stfs f4,32(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// lfs f3,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,44(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,40(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f8,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f2,f0
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// lfs f13,36(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f4,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f0,f5,f0,f9
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmadds f11,f11,f13,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f10,f3,f13,f6
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmadds f9,f4,f13,f0
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfs f9,36(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// fmadds f8,f2,f12,f11
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f7,f1,f12,f10
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f10.f64));
	// stfs f7,40(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// stfs f8,44(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// lfs f6,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// lfs f12,48(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f5,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,52(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,56(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmadds f0,f7,f0,f9
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmadds f11,f5,f12,f8
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmadds f10,f4,f12,f6
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmadds f9,f3,f12,f0
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f0.f64));
	// stfs f9,48(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// fmadds f8,f2,f13,f11
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stfs f8,52(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// fmadds f7,f1,f13,f10
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f7,56(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// lfs f6,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// lfs f12,60(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// lfs f5,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,64(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f1,f13
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f8,f6,f0
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f6,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f1,f6,f0,f10
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f10,f5,f12,f7
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmadds f0,f4,f12,f8
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmadds f9,f11,f12,f1
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f1.f64));
	// stfs f9,60(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// fmadds f7,f3,f13,f10
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f7,64(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 64, temp.u32);
	// fmadds f8,f2,f13,f0
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfs f8,68(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 68, temp.u32);
	// lfs f5,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,72(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,80(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,76(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f6,f0
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f11,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f5,f0
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f10,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f4,f13
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f9,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f5,f3,f12,f7
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f7.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fmadds f3,f9,f0,f6
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f4,f2,f12,f8
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmadds f2,f1,f13,f5
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f0,f10,f12,f3
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f3.f64));
	// stfs f0,72(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 72, temp.u32);
	// stfs f2,76(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 76, temp.u32);
	// fmadds f1,f11,f13,f4
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f4.f64));
	// stfs f1,80(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 80, temp.u32);
	// lfs f4,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f11,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,88(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f2,f12,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f13,92(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f12,84(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f9,f12,f2
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fmuls f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmadds f0,f10,f0,f3
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f3.f64));
	// fmadds f10,f8,f12,f1
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f1.f64));
	// fmadds f8,f6,f13,f11
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f9,f7,f12,f0
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f0.f64));
	// stfs f9,84(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 84, temp.u32);
	// stfs f8,88(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 88, temp.u32);
	// fmadds f7,f5,f13,f10
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f7,92(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 92, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BCED0"))) PPC_WEAK_FUNC(sub_831BCED0);
PPC_FUNC_IMPL(__imp__sub_831BCED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// addi r3,r11,-13344
	ctx.r3.s64 = ctx.r11.s64 + -13344;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BCEDC"))) PPC_WEAK_FUNC(sub_831BCEDC);
PPC_FUNC_IMPL(__imp__sub_831BCEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BCEE0"))) PPC_WEAK_FUNC(sub_831BCEE0);
PPC_FUNC_IMPL(__imp__sub_831BCEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// addi r3,r11,-13248
	ctx.r3.s64 = ctx.r11.s64 + -13248;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BCEEC"))) PPC_WEAK_FUNC(sub_831BCEEC);
PPC_FUNC_IMPL(__imp__sub_831BCEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BCEF0"))) PPC_WEAK_FUNC(sub_831BCEF0);
PPC_FUNC_IMPL(__imp__sub_831BCEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// addi r3,r11,-13200
	ctx.r3.s64 = ctx.r11.s64 + -13200;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BCEFC"))) PPC_WEAK_FUNC(sub_831BCEFC);
PPC_FUNC_IMPL(__imp__sub_831BCEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BCF00"))) PPC_WEAK_FUNC(sub_831BCF00);
PPC_FUNC_IMPL(__imp__sub_831BCF00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// addi r3,r11,-13056
	ctx.r3.s64 = ctx.r11.s64 + -13056;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BCF0C"))) PPC_WEAK_FUNC(sub_831BCF0C);
PPC_FUNC_IMPL(__imp__sub_831BCF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BCF10"))) PPC_WEAK_FUNC(sub_831BCF10);
PPC_FUNC_IMPL(__imp__sub_831BCF10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-31907
	ctx.r9.s64 = -2091057152;
	// lfs f13,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lfs f12,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f10,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r9,-13056
	ctx.r11.s64 = ctx.r9.s64 + -13056;
	// lfs f9,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f7,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f2,f0,f4
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f3,f12,f5
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f13,f4
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fmadds f12,f11,f1,f2
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 + ctx.f2.f64));
	// fmadds f13,f9,f4,f3
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f4.f64 + ctx.f3.f64));
	// fmadds f11,f10,f1,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f1.f64 + ctx.f0.f64));
	// fmadds f9,f8,f5,f12
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f5.f64 + ctx.f12.f64));
	// stfs f9,4(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fmadds f10,f6,f1,f13
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f10,0(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmadds f8,f7,f5,f11
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f5.f64 + ctx.f11.f64));
	// stfs f8,8(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BCF8C"))) PPC_WEAK_FUNC(sub_831BCF8C);
PPC_FUNC_IMPL(__imp__sub_831BCF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BCF90"))) PPC_WEAK_FUNC(sub_831BCF90);
PPC_FUNC_IMPL(__imp__sub_831BCF90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// lfs f0,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f12,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// ble cr6,0x831bcfd4
	if (!ctx.cr6.gt) goto loc_831BCFD4;
	// li r10,1
	ctx.r10.s64 = 1;
loc_831BCFD4:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f5,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// fcmpu cr6,f5,f4
	ctx.cr6.compare(ctx.f5.f64, ctx.f4.f64);
	// ble cr6,0x831bcfec
	if (!ctx.cr6.gt) goto loc_831BCFEC;
	// li r10,2
	ctx.r10.s64 = 2;
loc_831BCFEC:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x831bd12c
	if (ctx.cr6.lt) goto loc_831BD12C;
	// beq cr6,0x831bd094
	if (ctx.cr6.eq) goto loc_831BD094;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,24(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f2,f4,f11
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f11.f64));
	// fmuls f1,f2,f8
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f8.f64));
	// fmuls f0,f7,f2
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fmuls f13,f6,f2
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// fmr f3,f11
	ctx.f3.f64 = ctx.f11.f64;
	// fadds f12,f10,f1
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fadds f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f11,4(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fadds f10,f5,f13
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// stfs f10,8(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// fmuls f0,f1,f8
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// fmuls f13,f7,f1
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fmuls f12,f6,f1
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// fsubs f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfs f11,12(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// fsubs f10,f5,f13
	ctx.f10.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// stfs f10,16(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// fsubs f9,f4,f12
	ctx.f9.f64 = double(float(ctx.f4.f64 - ctx.f12.f64));
	// stfs f9,20(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// blr 
	return;
loc_831BD094:
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f8,24(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f2,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmr f4,f8
	ctx.f4.f64 = ctx.f8.f64;
	// fmr f1,f8
	ctx.f1.f64 = ctx.f8.f64;
	// lfs f5,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// lfs f7,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f0,f3,f11
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fmuls f13,f10,f3
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// fmuls f12,f9,f3
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fadds f8,f7,f0
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// stfs f8,0(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fadds f7,f6,f13
	ctx.f7.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// stfs f7,4(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fadds f6,f2,f12
	ctx.f6.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f6,8(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f5,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f1
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f1.f64));
	// lfs f2,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f0,f4,f11
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// lfs f1,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f10,f4
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// fmuls f12,f9,f4
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// lfs f3,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f9,f3,f12
	ctx.f9.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// stfs f9,20(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// fsubs f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// stfs f11,12(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// fsubs f10,f1,f13
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// stfs f10,16(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// blr 
	return;
loc_831BD12C:
	// lfs f11,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f11,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f8,24(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f3,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmr f2,f8
	ctx.f2.f64 = ctx.f8.f64;
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// lfs f7,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f11,f5,f13
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f10,f12,f5
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// fadds f9,f7,f1
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// stfs f9,0(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fadds f8,f4,f11
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// stfs f8,4(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fadds f7,f3,f10
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f10.f64));
	// stfs f7,8(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f6,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f2
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f2.f64));
	// lfs f2,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f4,f13
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f12,f4
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fsubs f12,f6,f3
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f3.f64));
	// stfs f12,12(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f10,20(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// fsubs f11,f2,f1
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// stfs f11,16(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BD1C0"))) PPC_WEAK_FUNC(sub_831BD1C0);
PPC_FUNC_IMPL(__imp__sub_831BD1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x831bd214
	if (ctx.cr6.eq) goto loc_831BD214;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
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
	// lfs f9,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f7,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
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
	// b 0x831bd244
	goto loc_831BD244;
loc_831BD214:
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f10,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,28(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f10,20(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
loc_831BD244:
	// lfs f0,44(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fnmadds f6,f9,f8,f7
	ctx.f6.f64 = double(float(-(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64)));
	// stfs f6,36(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f5,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmadds f12,f5,f4,f13
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f13.f64));
	// fnmadds f11,f3,f2,f12
	ctx.f11.f64 = double(float(-(ctx.f3.f64 * ctx.f2.f64 + ctx.f12.f64)));
	// stfs f11,40(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f10,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmadds f3,f10,f9,f4
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fnmadds f2,f8,f7,f3
	ctx.f2.f64 = double(float(-(ctx.f8.f64 * ctx.f7.f64 + ctx.f3.f64)));
	// stfs f2,44(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BD2C0"))) PPC_WEAK_FUNC(sub_831BD2C0);
PPC_FUNC_IMPL(__imp__sub_831BD2C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6ab8
	ctx.lr = 0x831BD2D0;
	__savefpr_16(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r8,24
	ctx.r11.s64 = ctx.r8.s64 + 24;
	// lfs f0,6048(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lfs f13,6140(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// li r7,9
	ctx.r7.s64 = 9;
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_831BD32C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x831bd32c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831BD32C;
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f12,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f12,172(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x831bd1c0
	ctx.lr = 0x831BD364;
	sub_831BD1C0(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f12,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f2,f9,f13
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f5,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f10,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f3,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f9,f0
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f30,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f1,f9,f12
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f31,f5,f11
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// lfs f28,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f29,f3,f11
	ctx.f29.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// lfs f26,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f26.f64 = double(temp.f32);
	// lfs f24,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f24.f64 = double(temp.f32);
	// lfs f21,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f21.f64 = double(temp.f32);
	// fmadds f23,f30,f11,f8
	ctx.f23.f64 = double(float(ctx.f30.f64 * ctx.f11.f64 + ctx.f8.f64));
	// lfs f20,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f20.f64 = double(temp.f32);
	// lfs f18,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f18.f64 = double(temp.f32);
	// fmadds f4,f28,f11,f4
	ctx.f4.f64 = double(float(ctx.f28.f64 * ctx.f11.f64 + ctx.f4.f64));
	// lfs f11,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f31,f26,f0,f31
	ctx.f31.f64 = double(float(ctx.f26.f64 * ctx.f0.f64 + ctx.f31.f64));
	// lfs f10,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f29,f24,f0,f29
	ctx.f29.f64 = double(float(ctx.f24.f64 * ctx.f0.f64 + ctx.f29.f64));
	// fmadds f22,f30,f10,f7
	ctx.f22.f64 = double(float(ctx.f30.f64 * ctx.f10.f64 + ctx.f7.f64));
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f2,f28,f10,f2
	ctx.f2.f64 = double(float(ctx.f28.f64 * ctx.f10.f64 + ctx.f2.f64));
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f27,f5,f10
	ctx.f27.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// lfs f7,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f25,f3,f10
	ctx.f25.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f5,f9
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// lfs f5,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f6,f30,f9,f6
	ctx.f6.f64 = double(float(ctx.f30.f64 * ctx.f9.f64 + ctx.f6.f64));
	// lfs f30,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f3,f3,f9
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// lfs f19,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f19.f64 = double(temp.f32);
	// fmadds f1,f28,f9,f1
	ctx.f1.f64 = double(float(ctx.f28.f64 * ctx.f9.f64 + ctx.f1.f64));
	// lfs f28,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f23,f30,f8,f23
	ctx.f23.f64 = double(float(ctx.f30.f64 * ctx.f8.f64 + ctx.f23.f64));
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f17,f21,f8,f4
	ctx.f17.f64 = double(float(ctx.f21.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f22,f30,f7,f22
	ctx.f22.f64 = double(float(ctx.f30.f64 * ctx.f7.f64 + ctx.f22.f64));
	// fmadds f16,f21,f7,f2
	ctx.f16.f64 = double(float(ctx.f21.f64 * ctx.f7.f64 + ctx.f2.f64));
	// fmadds f27,f26,f13,f27
	ctx.f27.f64 = double(float(ctx.f26.f64 * ctx.f13.f64 + ctx.f27.f64));
	// fmadds f25,f24,f13,f25
	ctx.f25.f64 = double(float(ctx.f24.f64 * ctx.f13.f64 + ctx.f25.f64));
	// lfs f13,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f2,f26,f12,f10
	ctx.f2.f64 = double(float(ctx.f26.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f30,f30,f0,f6
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f26,f24,f12,f3
	ctx.f26.f64 = double(float(ctx.f24.f64 * ctx.f12.f64 + ctx.f3.f64));
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f1,f21,f0,f1
	ctx.f1.f64 = double(float(ctx.f21.f64 * ctx.f0.f64 + ctx.f1.f64));
	// fmadds f6,f20,f8,f31
	ctx.f6.f64 = double(float(ctx.f20.f64 * ctx.f8.f64 + ctx.f31.f64));
	// fmadds f4,f28,f8,f29
	ctx.f4.f64 = double(float(ctx.f28.f64 * ctx.f8.f64 + ctx.f29.f64));
	// fmuls f31,f12,f23
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f23.f64));
	// fmuls f29,f13,f22
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f22.f64));
	// fmadds f8,f20,f7,f27
	ctx.f8.f64 = double(float(ctx.f20.f64 * ctx.f7.f64 + ctx.f27.f64));
	// fmadds f3,f28,f7,f25
	ctx.f3.f64 = double(float(ctx.f28.f64 * ctx.f7.f64 + ctx.f25.f64));
	// fmadds f7,f20,f0,f2
	ctx.f7.f64 = double(float(ctx.f20.f64 * ctx.f0.f64 + ctx.f2.f64));
	// fadds f10,f5,f17
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f17.f64));
	// fmadds f2,f28,f0,f26
	ctx.f2.f64 = double(float(ctx.f28.f64 * ctx.f0.f64 + ctx.f26.f64));
	// fadds f5,f19,f1
	ctx.f5.f64 = double(float(ctx.f19.f64 + ctx.f1.f64));
	// fmuls f30,f11,f30
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fadds f9,f9,f16
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f16.f64));
	// fabs f0,f31
	ctx.f0.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// fabs f1,f29
	ctx.f1.u64 = ctx.f29.u64 & ~0x8000000000000000;
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// fabs f31,f30
	ctx.f31.u64 = ctx.f30.u64 & ~0x8000000000000000;
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fsubs f0,f1,f18
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f18.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x831bd4a4
	if (!ctx.cr6.gt) goto loc_831BD4A4;
loc_831BD49C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831bd530
	goto loc_831BD530;
loc_831BD4A4:
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x831bd49c
	if (ctx.cr6.lt) goto loc_831BD49C;
	// fmuls f0,f12,f6
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// lfs f10,16(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f13,f8
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f7,f11,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fabs f6,f0
	ctx.f6.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fabs f1,f8
	ctx.f1.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fabs f0,f7
	ctx.f0.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fadds f8,f6,f1
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f1.f64));
	// fadds f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fsubs f0,f7,f10
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bgt cr6,0x831bd49c
	if (ctx.cr6.gt) goto loc_831BD49C;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// blt cr6,0x831bd49c
	if (ctx.cr6.lt) goto loc_831BD49C;
	// fmuls f0,f12,f4
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// lfs f12,20(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f3
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// fmuls f9,f11,f2
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// fabs f8,f0
	ctx.f8.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fabs f7,f10
	ctx.f7.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fabs f6,f9
	ctx.f6.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fadds f4,f8,f7
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// fadds f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// fsubs f0,f3,f12
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// fcmpu cr6,f0,f5
	ctx.cr6.compare(ctx.f0.f64, ctx.f5.f64);
	// bgt cr6,0x831bd49c
	if (ctx.cr6.gt) goto loc_831BD49C;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// li r3,0
	ctx.r3.s64 = 0;
	// fcmpu cr6,f0,f5
	ctx.cr6.compare(ctx.f0.f64, ctx.f5.f64);
	// blt cr6,0x831bd530
	if (ctx.cr6.lt) goto loc_831BD530;
	// li r3,1
	ctx.r3.s64 = 1;
loc_831BD530:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b04
	ctx.lr = 0x831BD53C;
	__restfpr_16(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BD548"))) PPC_WEAK_FUNC(sub_831BD548);
PPC_FUNC_IMPL(__imp__sub_831BD548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// addi r3,r11,-12912
	ctx.r3.s64 = ctx.r11.s64 + -12912;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BD554"))) PPC_WEAK_FUNC(sub_831BD554);
PPC_FUNC_IMPL(__imp__sub_831BD554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BD558"))) PPC_WEAK_FUNC(sub_831BD558);
PPC_FUNC_IMPL(__imp__sub_831BD558) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31907
	ctx.r10.s64 = -2091057152;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r10,-12816
	ctx.r10.s64 = ctx.r10.s64 + -12816;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BD574"))) PPC_WEAK_FUNC(sub_831BD574);
PPC_FUNC_IMPL(__imp__sub_831BD574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BD578"))) PPC_WEAK_FUNC(sub_831BD578);
PPC_FUNC_IMPL(__imp__sub_831BD578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x831bd594
	if (!ctx.cr6.gt) goto loc_831BD594;
	// li r3,1
	ctx.r3.s64 = 1;
loc_831BD594:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BD5B0"))) PPC_WEAK_FUNC(sub_831BD5B0);
PPC_FUNC_IMPL(__imp__sub_831BD5B0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r8,r10,1
	ctx.r8.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// clrlwi r7,r9,1
	ctx.r7.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x831bd5d4
	if (!ctx.cr6.gt) goto loc_831BD5D4;
	// li r3,1
	ctx.r3.s64 = 1;
loc_831BD5D4:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r8,r9,1
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BD5F8"))) PPC_WEAK_FUNC(sub_831BD5F8);
PPC_FUNC_IMPL(__imp__sub_831BD5F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r8,r10,1
	ctx.r8.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// clrlwi r7,r9,1
	ctx.r7.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x831bd618
	if (!ctx.cr6.gt) goto loc_831BD618;
	// li r11,1
	ctx.r11.s64 = 1;
loc_831BD618:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r8,r9,1
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// lwzx r7,r10,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x831bd700
	if (ctx.cr6.gt) goto loc_831BD700;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831bd69c
	if (!ctx.cr6.eq) goto loc_831BD69C;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,6048
	ctx.r11.s64 = ctx.r11.s64 + 6048;
	// stfs f12,4(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,8(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// stfs f7,0(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f6,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fneg f3,f4
	ctx.f3.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// stfs f3,4(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f2,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f1,f1
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmadds f13,f2,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f0.f64));
	// b 0x831bd75c
	goto loc_831BD75C;
loc_831BD69C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x831bd700
	if (!ctx.cr6.eq) goto loc_831BD700;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,6048
	ctx.r11.s64 = ctx.r11.s64 + 6048;
	// lfs f10,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,0(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f9
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f7,f11,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f8.f64));
	// stfs f7,0(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f6,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fneg f3,f4
	ctx.f3.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// stfs f3,4(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f2,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// b 0x831bd758
	goto loc_831BD758;
loc_831BD700:
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// addi r11,r11,6048
	ctx.r11.s64 = ctx.r11.s64 + 6048;
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// stfs f7,0(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f6,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f6
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// lfs f4,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f4,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f5.f64));
	// stfs f3,4(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f2,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
loc_831BD758:
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_831BD75C:
	// stfs f13,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f9,f13,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f8,f12,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fsqrts f11,f8
	ctx.f11.f64 = double(float(sqrt(ctx.f8.f64)));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fmuls f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f10,0(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmuls f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f9,4(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmuls f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f8,8(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BD7AC"))) PPC_WEAK_FUNC(sub_831BD7AC);
PPC_FUNC_IMPL(__imp__sub_831BD7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BD7B0"))) PPC_WEAK_FUNC(sub_831BD7B0);
PPC_FUNC_IMPL(__imp__sub_831BD7B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f10,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f10,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f8,f0,f0
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f7,f13,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f6,f12,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fsqrts f11,f6
	ctx.f11.f64 = double(float(sqrt(ctx.f6.f64)));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// beq cr6,0x831bd82c
	if (ctx.cr6.eq) goto loc_831BD82C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fmuls f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f8,8(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_831BD82C:
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// b 0x831bd5f8
	sub_831BD5F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BD838"))) PPC_WEAK_FUNC(sub_831BD838);
PPC_FUNC_IMPL(__imp__sub_831BD838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,-17600(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17600);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// addi r11,r11,6048
	ctx.r11.s64 = ctx.r11.s64 + 6048;
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// ble cr6,0x831bd870
	if (!ctx.cr6.gt) goto loc_831BD870;
	// stfs f9,0(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f10,4(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f10,8(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// b 0x831bd89c
	goto loc_831BD89C;
loc_831BD870:
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f11,f13,f10
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f6,f12,f10,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - ctx.f8.f64));
	// stfs f6,4(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fsubs f7,f0,f11
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f7,0(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fsubs f5,f11,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f5,8(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
loc_831BD89C:
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f8,f13,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f7,f12,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fsqrts f11,f7
	ctx.f11.f64 = double(float(sqrt(ctx.f7.f64)));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// beq cr6,0x831bd8dc
	if (ctx.cr6.eq) goto loc_831BD8DC;
	// fdivs f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 / ctx.f11.f64));
	// fmuls f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f10,0(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmuls f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f9,4(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmuls f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f8,8(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
loc_831BD8DC:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f0,f10
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f6,f13,f8
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmsubs f5,f0,f13,f9
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 - ctx.f9.f64));
	// stfs f5,0(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmsubs f4,f11,f8,f7
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 - ctx.f7.f64));
	// stfs f4,8(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// fmsubs f3,f12,f10,f6
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - ctx.f6.f64));
	// stfs f3,4(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BD91C"))) PPC_WEAK_FUNC(sub_831BD91C);
PPC_FUNC_IMPL(__imp__sub_831BD91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BD920"))) PPC_WEAK_FUNC(sub_831BD920);
PPC_FUNC_IMPL(__imp__sub_831BD920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f10,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f10,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f8,f0,f0
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f7,f13,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f6,f12,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fsqrts f11,f6
	ctx.f11.f64 = double(float(sqrt(ctx.f6.f64)));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// beq cr6,0x831bd99c
	if (ctx.cr6.eq) goto loc_831BD99C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fmuls f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f8,8(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_831BD99C:
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// b 0x831bd838
	sub_831BD838(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BD9A8"))) PPC_WEAK_FUNC(sub_831BD9A8);
PPC_FUNC_IMPL(__imp__sub_831BD9A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f8,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// lfs f13,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f9,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f5,0(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmuls f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f4,4(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fmuls f3,f6,f13
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfs f3,8(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f2,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fsubs f7,f2,f1
	ctx.f7.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lfs f6,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f8
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fsubs f4,f12,f11
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmadds f3,f7,f7,f5
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fmadds f2,f4,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f3.f64));
	// fsqrts f1,f2
	ctx.f1.f64 = double(float(sqrt(ctx.f2.f64)));
	// fmadds f13,f1,f13,f6
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f6.f64));
	// stfs f13,12(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lfs f12,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// stfs f12,16(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// lfs f11,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,20(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// bne cr6,0x831bda9c
	if (!ctx.cr6.eq) goto loc_831BDA9C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,28(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f0,32(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// stfs f0,36(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// stfs f0,44(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// stfs f0,48(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 48, temp.u32);
	// lfs f13,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f13,40(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// stfs f0,52(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 52, temp.u32);
	// stfs f13,56(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 56, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_831BDA9C:
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x831bd920
	ctx.lr = 0x831BDAAC;
	sub_831BD920(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r9,24
	ctx.r11.s64 = ctx.r9.s64 + 24;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,24(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f13,36(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// stfs f12,48(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 48, temp.u32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f6.f64 = double(temp.f32);
	// stfs f11,28(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f10,40(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// stfs f9,52(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 52, temp.u32);
	// stfs f8,32(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// stfs f7,44(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// stfs f6,56(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 56, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BDB08"))) PPC_WEAK_FUNC(sub_831BDB08);
PPC_FUNC_IMPL(__imp__sub_831BDB08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BDB0C"))) PPC_WEAK_FUNC(sub_831BDB0C);
PPC_FUNC_IMPL(__imp__sub_831BDB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BDB10"))) PPC_WEAK_FUNC(sub_831BDB10);
PPC_FUNC_IMPL(__imp__sub_831BDB10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BDB14"))) PPC_WEAK_FUNC(sub_831BDB14);
PPC_FUNC_IMPL(__imp__sub_831BDB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BDB18"))) PPC_WEAK_FUNC(sub_831BDB18);
PPC_FUNC_IMPL(__imp__sub_831BDB18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BDB1C"))) PPC_WEAK_FUNC(sub_831BDB1C);
PPC_FUNC_IMPL(__imp__sub_831BDB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BDB20"))) PPC_WEAK_FUNC(sub_831BDB20);
PPC_FUNC_IMPL(__imp__sub_831BDB20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BDB24"))) PPC_WEAK_FUNC(sub_831BDB24);
PPC_FUNC_IMPL(__imp__sub_831BDB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BDB28"))) PPC_WEAK_FUNC(sub_831BDB28);
PPC_FUNC_IMPL(__imp__sub_831BDB28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BDB2C"))) PPC_WEAK_FUNC(sub_831BDB2C);
PPC_FUNC_IMPL(__imp__sub_831BDB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BDB30"))) PPC_WEAK_FUNC(sub_831BDB30);
PPC_FUNC_IMPL(__imp__sub_831BDB30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BDB34"))) PPC_WEAK_FUNC(sub_831BDB34);
PPC_FUNC_IMPL(__imp__sub_831BDB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BDB38"))) PPC_WEAK_FUNC(sub_831BDB38);
PPC_FUNC_IMPL(__imp__sub_831BDB38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BDB3C"))) PPC_WEAK_FUNC(sub_831BDB3C);
PPC_FUNC_IMPL(__imp__sub_831BDB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BDB40"))) PPC_WEAK_FUNC(sub_831BDB40);
PPC_FUNC_IMPL(__imp__sub_831BDB40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BDB44"))) PPC_WEAK_FUNC(sub_831BDB44);
PPC_FUNC_IMPL(__imp__sub_831BDB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BDB48"))) PPC_WEAK_FUNC(sub_831BDB48);
PPC_FUNC_IMPL(__imp__sub_831BDB48) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// srawi r11,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// srawi r8,r10,23
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 23;
	// rlwimi r9,r10,8,1,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x7FFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF800000FF);
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// addi r10,r10,-127
	ctx.r10.s64 = ctx.r10.s64 + -127;
	// subfic r7,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r7.s64 = 31 - ctx.r10.s64;
	// srawi r6,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 31;
	// srw r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// xor r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// subf r3,r11,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r11.s64;
	// andc r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 & ~ctx.r6.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BDB80"))) PPC_WEAK_FUNC(sub_831BDB80);
PPC_FUNC_IMPL(__imp__sub_831BDB80) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// clrlwi r11,r10,1
	ctx.r11.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// srawi r10,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 31;
	// srawi r9,r11,23
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 23;
	// clrlwi r5,r11,9
	ctx.r5.u64 = ctx.r11.u32 & 0x7FFFFF;
	// addi r9,r9,-127
	ctx.r9.s64 = ctx.r9.s64 + -127;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// srawi r4,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 31;
	// subfic r9,r9,31
	ctx.xer.ca = ctx.r9.u32 <= 31;
	ctx.r9.s64 = 31 - ctx.r9.s64;
	// rlwinm r6,r11,8,1,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x7FFFFF00;
	// slw r11,r8,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// not r8,r4
	ctx.r8.u64 = ~ctx.r4.u64;
	// and r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 & ctx.r6.u64;
	// srawi r4,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 31;
	// rlwimi r7,r5,8,1,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0x7FFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF800000FF);
	// cntlzw r3,r6
	ctx.r3.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// srw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r3,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// xor r7,r4,r8
	ctx.r7.u64 = ctx.r4.u64 ^ ctx.r8.u64;
	// and r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 & ctx.r8.u64;
	// and r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 & ctx.r7.u64;
	// xor r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 ^ ctx.r10.u64;
	// and r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 & ctx.r10.u64;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BDBF0"))) PPC_WEAK_FUNC(sub_831BDBF0);
PPC_FUNC_IMPL(__imp__sub_831BDBF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// xoris r6,r11,32768
	ctx.r6.u64 = ctx.r11.u64 ^ 2147483648;
	// clrlwi r11,r6,1
	ctx.r11.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// srawi r10,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 31;
	// srawi r9,r11,23
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 23;
	// clrlwi r4,r11,9
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFFFF;
	// addi r9,r9,-127
	ctx.r9.s64 = ctx.r9.s64 + -127;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// srawi r3,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 31;
	// subfic r9,r9,31
	ctx.xer.ca = ctx.r9.u32 <= 31;
	ctx.r9.s64 = 31 - ctx.r9.s64;
	// rlwinm r5,r11,8,1,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x7FFFFF00;
	// slw r11,r8,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// not r8,r3
	ctx.r8.u64 = ~ctx.r3.u64;
	// and r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 & ctx.r5.u64;
	// srawi r3,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 31;
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwimi r7,r4,8,1,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0x7FFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF800000FF);
	// xor r4,r3,r8
	ctx.r4.u64 = ctx.r3.u64 ^ ctx.r8.u64;
	// srw r5,r7,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// and r3,r5,r8
	ctx.r3.u64 = ctx.r5.u64 & ctx.r8.u64;
	// and r9,r6,r4
	ctx.r9.u64 = ctx.r6.u64 & ctx.r4.u64;
	// xor r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// and r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// neg r3,r8
	ctx.r3.s64 = -ctx.r8.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BDC68"))) PPC_WEAK_FUNC(sub_831BDC68);
PPC_FUNC_IMPL(__imp__sub_831BDC68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f13,f8,f7
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f5,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f10,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f4,f9,f11
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmadds f3,f6,f12,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmadds f0,f5,f13,f3
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x831bdcc0
	if (ctx.cr6.gt) goto loc_831BDCC0;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x831bdce4
	goto loc_831BDCE4;
loc_831BDCC0:
	// lfs f10,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fsubs f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// fsubs f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fsubs f11,f11,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
loc_831BDCE4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x831bdcf0
	if (ctx.cr6.eq) goto loc_831BDCF0;
	// stfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_831BDCF0:
	// fmuls f0,f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f13,f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f1,f11,f11,f13
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BDD00"))) PPC_WEAK_FUNC(sub_831BDD00);
PPC_FUNC_IMPL(__imp__sub_831BDD00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f13,f8,f9
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fsubs f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// lfs f6,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f12,f5,f6
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fsubs f8,f4,f6
	ctx.f8.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f3,f10,f11
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmadds f2,f9,f13,f3
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fmadds f7,f8,f12,f2
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// ble cr6,0x831bdd98
	if (!ctx.cr6.gt) goto loc_831BDD98;
	// fmuls f0,f9,f9
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f6,f10,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fmadds f0,f8,f8,f6
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// blt cr6,0x831bdd7c
	if (ctx.cr6.lt) goto loc_831BDD7C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// b 0x831bdd90
	goto loc_831BDD90;
loc_831BDD7C:
	// fdivs f0,f7,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f7.f64 / ctx.f0.f64));
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fsubs f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
loc_831BDD90:
	// fsubs f12,f12,f8
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fsubs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
loc_831BDD98:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x831bdda4
	if (ctx.cr6.eq) goto loc_831BDDA4;
	// stfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_831BDDA4:
	// fmuls f0,f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f13,f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f1,f11,f11,f13
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BDDB4"))) PPC_WEAK_FUNC(sub_831BDDB4);
PPC_FUNC_IMPL(__imp__sub_831BDDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BDDB8"))) PPC_WEAK_FUNC(sub_831BDDB8);
PPC_FUNC_IMPL(__imp__sub_831BDDB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x831bddd4
	if (!ctx.cr6.gt) goto loc_831BDDD4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x831bdde4
	goto loc_831BDDE4;
loc_831BDDD4:
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x831bdde4
	if (!ctx.cr6.lt) goto loc_831BDDE4;
	// li r11,2
	ctx.r11.s64 = 2;
loc_831BDDE4:
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x831bddfc
	if (!ctx.cr6.gt) goto loc_831BDDFC;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x831bde0c
	goto loc_831BDE0C;
loc_831BDDFC:
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x831bde0c
	if (!ctx.cr6.lt) goto loc_831BDE0C;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_831BDE0C:
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x831bde24
	if (!ctx.cr6.gt) goto loc_831BDE24;
	// ori r3,r11,32
	ctx.r3.u64 = ctx.r11.u64 | 32;
	// blr 
	return;
loc_831BDE24:
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// ori r3,r11,16
	ctx.r3.u64 = ctx.r11.u64 | 16;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BDE3C"))) PPC_WEAK_FUNC(sub_831BDE3C);
PPC_FUNC_IMPL(__imp__sub_831BDE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BDE40"))) PPC_WEAK_FUNC(sub_831BDE40);
PPC_FUNC_IMPL(__imp__sub_831BDE40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfs f10,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// ble cr6,0x831bde60
	if (!ctx.cr6.gt) goto loc_831BDE60;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x831bde70
	goto loc_831BDE70;
loc_831BDE60:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x831bde70
	if (!ctx.cr6.lt) goto loc_831BDE70;
	// li r9,2
	ctx.r9.s64 = 2;
loc_831BDE70:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x831bde88
	if (!ctx.cr6.gt) goto loc_831BDE88;
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
	// b 0x831bde98
	goto loc_831BDE98;
loc_831BDE88:
	// lfs f12,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x831bde98
	if (!ctx.cr6.lt) goto loc_831BDE98;
	// ori r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 8;
loc_831BDE98:
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x831bdeb0
	if (!ctx.cr6.gt) goto loc_831BDEB0;
	// ori r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 | 32;
	// b 0x831bdec0
	goto loc_831BDEC0;
loc_831BDEB0:
	// lfs f9,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x831bdec0
	if (!ctx.cr6.lt) goto loc_831BDEC0;
	// ori r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 16;
loc_831BDEC0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x831bdee4
	if (!ctx.cr6.eq) goto loc_831BDEE4;
	// stfs f13,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// blr 
	return;
loc_831BDEE4:
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// ble cr6,0x831bdefc
	if (!ctx.cr6.gt) goto loc_831BDEFC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x831bdf0c
	goto loc_831BDF0C;
loc_831BDEFC:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x831bdf0c
	if (!ctx.cr6.lt) goto loc_831BDF0C;
	// li r11,2
	ctx.r11.s64 = 2;
loc_831BDF0C:
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x831bdf20
	if (!ctx.cr6.gt) goto loc_831BDF20;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x831bdf30
	goto loc_831BDF30;
loc_831BDF20:
	// lfs f9,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x831bdf30
	if (!ctx.cr6.lt) goto loc_831BDF30;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_831BDF30:
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x831bdf44
	if (!ctx.cr6.gt) goto loc_831BDF44;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// b 0x831bdf54
	goto loc_831BDF54;
loc_831BDF44:
	// lfs f12,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x831bdf54
	if (!ctx.cr6.lt) goto loc_831BDF54;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_831BDF54:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831bdf78
	if (!ctx.cr6.eq) goto loc_831BDF78;
	// stfs f13,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// blr 
	return;
loc_831BDF78:
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831be184
	if (!ctx.cr6.eq) goto loc_831BE184;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f12,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f12.f64 = double(temp.f32);
	// beq cr6,0x831be038
	if (ctx.cr6.eq) goto loc_831BE038;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831bdfac
	if (ctx.cr6.eq) goto loc_831BDFAC;
	// stfs f10,0(r7)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// b 0x831bdfb4
	goto loc_831BDFB4;
loc_831BDFAC:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
loc_831BDFB4:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f7,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fdivs f5,f12,f11
	ctx.f5.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fmuls f4,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmadds f3,f4,f6,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f10.f64));
	// stfs f3,4(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lfs f2,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f13,f1,f2
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// fmuls f11,f13,f5
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// fmr f0,f3
	ctx.f0.f64 = ctx.f3.f64;
	// fmadds f13,f11,f6,f2
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f6.f64 + ctx.f2.f64));
	// stfs f13,8(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lfs f11,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x831be038
	if (ctx.cr6.gt) goto loc_831BE038;
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x831be038
	if (ctx.cr6.lt) goto loc_831BE038;
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x831be038
	if (ctx.cr6.gt) goto loc_831BE038;
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x831be038
	if (ctx.cr6.lt) goto loc_831BE038;
loc_831BE030:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831BE038:
	// rlwinm r11,r9,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831be0dc
	if (ctx.cr6.eq) goto loc_831BE0DC;
	// rlwinm r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831be058
	if (ctx.cr6.eq) goto loc_831BE058;
	// stfs f11,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// b 0x831be060
	goto loc_831BE060;
loc_831BE058:
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
loc_831BE060:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f7,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fdivs f5,f12,f11
	ctx.f5.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fmuls f4,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmadds f3,f4,f6,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f10.f64));
	// stfs f3,0(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f2,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f13,f1,f2
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// fmuls f11,f13,f5
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// fmr f0,f3
	ctx.f0.f64 = ctx.f3.f64;
	// fmadds f13,f11,f6,f2
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f6.f64 + ctx.f2.f64));
	// stfs f13,8(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lfs f10,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x831be0dc
	if (ctx.cr6.gt) goto loc_831BE0DC;
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x831be0dc
	if (ctx.cr6.lt) goto loc_831BE0DC;
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x831be0dc
	if (ctx.cr6.gt) goto loc_831BE0DC;
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x831be030
	if (!ctx.cr6.lt) goto loc_831BE030;
loc_831BE0DC:
	// rlwinm r11,r9,0,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831be184
	if (ctx.cr6.eq) goto loc_831BE184;
	// rlwinm r11,r9,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831be0fc
	if (ctx.cr6.eq) goto loc_831BE0FC;
	// lfs f0,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// b 0x831be100
	goto loc_831BE100;
loc_831BE0FC:
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
loc_831BE100:
	// stfs f0,8(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f5,f12,f11
	ctx.f5.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fsubs f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fmuls f4,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmadds f3,f4,f6,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f10.f64));
	// stfs f3,0(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmr f0,f3
	ctx.f0.f64 = ctx.f3.f64;
	// lfs f2,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fmuls f12,f13,f5
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// fmadds f13,f12,f6,f1
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f1.f64));
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lfs f11,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x831be184
	if (ctx.cr6.gt) goto loc_831BE184;
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x831be184
	if (ctx.cr6.lt) goto loc_831BE184;
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x831be184
	if (ctx.cr6.gt) goto loc_831BE184;
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_831BE184:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BE18C"))) PPC_WEAK_FUNC(sub_831BE18C);
PPC_FUNC_IMPL(__imp__sub_831BE18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BE190"))) PPC_WEAK_FUNC(sub_831BE190);
PPC_FUNC_IMPL(__imp__sub_831BE190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6acc
	ctx.lr = 0x831BE1A0;
	__savefpr_21(ctx, base);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f11,f9
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// lfs f6,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fadds f3,f9,f11
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f2,f8,f6
	ctx.f2.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// fadds f9,f6,f8
	ctx.f9.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// lfs f6,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f28,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f28.f64 = double(temp.f32);
	// lfs f5,24(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f24,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f4,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f29,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f12,f7,f0
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f1,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f7,f3,f0
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f31,16(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f30,28(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f3,f9,f0
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f27,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,20(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,32(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f2,f6,f13
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fsubs f0,f10,f8
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// fsubs f10,f7,f28
	ctx.f10.f64 = double(float(ctx.f7.f64 - ctx.f28.f64));
	// fsubs f9,f3,f24
	ctx.f9.f64 = double(float(ctx.f3.f64 - ctx.f24.f64));
	// fmadds f8,f5,f12,f2
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fmuls f7,f6,f0
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmadds f3,f11,f4,f8
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f4.f64 + ctx.f8.f64));
	// fmadds f2,f5,f10,f7
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fabs f28,f3
	ctx.f28.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fmadds f8,f9,f4,f2
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fadds f7,f29,f28
	ctx.f7.f64 = double(float(ctx.f29.f64 + ctx.f28.f64));
	// fabs f3,f8
	ctx.f3.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fcmpu cr6,f3,f7
	ctx.cr6.compare(ctx.f3.f64, ctx.f7.f64);
	// ble cr6,0x831be274
	if (!ctx.cr6.gt) goto loc_831BE274;
loc_831BE25C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b18
	ctx.lr = 0x831BE268;
	__restfpr_21(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_831BE274:
	// fmuls f8,f31,f13
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// lfs f3,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f7,f31,f0
	ctx.f7.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmadds f2,f30,f12,f8
	ctx.f2.f64 = double(float(ctx.f30.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmadds f8,f30,f10,f7
	ctx.f8.f64 = double(float(ctx.f30.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fmadds f7,f1,f11,f2
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmadds f8,f1,f9,f8
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fabs f2,f7
	ctx.f2.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fabs f7,f8
	ctx.f7.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fadds f8,f3,f2
	ctx.f8.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// fcmpu cr6,f7,f8
	ctx.cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// bgt cr6,0x831be25c
	if (ctx.cr6.gt) goto loc_831BE25C;
	// fmuls f7,f26,f13
	ctx.f7.f64 = double(float(ctx.f26.f64 * ctx.f13.f64));
	// lfs f8,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f24,f26,f0
	ctx.f24.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// fmadds f7,f25,f12,f7
	ctx.f7.f64 = double(float(ctx.f25.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmadds f24,f25,f10,f24
	ctx.f24.f64 = double(float(ctx.f25.f64 * ctx.f10.f64 + ctx.f24.f64));
	// fmadds f7,f27,f11,f7
	ctx.f7.f64 = double(float(ctx.f27.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fmadds f24,f27,f9,f24
	ctx.f24.f64 = double(float(ctx.f27.f64 * ctx.f9.f64 + ctx.f24.f64));
	// fabs f7,f7
	ctx.f7.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fabs f24,f24
	ctx.f24.u64 = ctx.f24.u64 & ~0x8000000000000000;
	// fadds f23,f8,f7
	ctx.f23.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// fcmpu cr6,f24,f23
	ctx.cr6.compare(ctx.f24.f64, ctx.f23.f64);
	// bgt cr6,0x831be25c
	if (ctx.cr6.gt) goto loc_831BE25C;
	// fmuls f24,f10,f11
	ctx.f24.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f23,f0,f12
	ctx.f23.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f22,f13,f9
	ctx.f22.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f21,f3,f7
	ctx.f21.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// fmsubs f12,f12,f9,f24
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 - ctx.f24.f64));
	// fmsubs f13,f10,f13,f23
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 - ctx.f23.f64));
	// fmsubs f0,f0,f11,f22
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 - ctx.f22.f64));
	// fmadds f11,f8,f2,f21
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f2.f64 + ctx.f21.f64));
	// fmuls f10,f12,f6
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmadds f9,f0,f5,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f5.f64 + ctx.f10.f64));
	// fmadds f6,f13,f4,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 + ctx.f9.f64));
	// fabs f5,f6
	ctx.f5.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fcmpu cr6,f5,f11
	ctx.cr6.compare(ctx.f5.f64, ctx.f11.f64);
	// bgt cr6,0x831be25c
	if (ctx.cr6.gt) goto loc_831BE25C;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f10,f29,f7
	ctx.f10.f64 = double(float(ctx.f29.f64 * ctx.f7.f64));
	// fmadds f9,f0,f30,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f11.f64));
	// fmadds f8,f8,f28,f10
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f28.f64 + ctx.f10.f64));
	// fmadds f7,f13,f1,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f9.f64));
	// fabs f6,f7
	ctx.f6.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fcmpu cr6,f6,f8
	ctx.cr6.compare(ctx.f6.f64, ctx.f8.f64);
	// bgt cr6,0x831be25c
	if (ctx.cr6.gt) goto loc_831BE25C;
	// fmuls f12,f12,f26
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f26.f64));
	// li r3,0
	ctx.r3.s64 = 0;
	// fmuls f11,f29,f2
	ctx.f11.f64 = double(float(ctx.f29.f64 * ctx.f2.f64));
	// fmadds f10,f0,f25,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f25.f64 + ctx.f12.f64));
	// fmadds f9,f3,f28,f11
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f28.f64 + ctx.f11.f64));
	// fmadds f8,f13,f27,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f27.f64 + ctx.f10.f64));
	// fabs f7,f8
	ctx.f7.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fcmpu cr6,f7,f9
	ctx.cr6.compare(ctx.f7.f64, ctx.f9.f64);
	// bgt cr6,0x831be354
	if (ctx.cr6.gt) goto loc_831BE354;
	// li r3,1
	ctx.r3.s64 = 1;
loc_831BE354:
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b18
	ctx.lr = 0x831BE35C;
	__restfpr_21(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BE368"))) PPC_WEAK_FUNC(sub_831BE368);
PPC_FUNC_IMPL(__imp__sub_831BE368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6acc
	ctx.lr = 0x831BE378;
	__savefpr_21(ctx, base);
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f12,f10,f6
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// lfs f9,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f4,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// lfs f8,24(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f31,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f3,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,16(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lfs f28,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,20(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f5,f11,f8,f4
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 + ctx.f4.f64));
	// lfs f26,32(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f26.f64 = double(temp.f32);
	// lfs f29,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f4,f8,f13,f6
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmadds f10,f9,f10,f5
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fmadds f11,f7,f12,f4
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fabs f25,f10
	ctx.f25.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fabs f6,f11
	ctx.f6.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f6,f31
	ctx.cr6.compare(ctx.f6.f64, ctx.f31.f64);
	// ble cr6,0x831be428
	if (!ctx.cr6.gt) goto loc_831BE428;
	// fmuls f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fcmpu cr6,f11,f29
	ctx.cr6.compare(ctx.f11.f64, ctx.f29.f64);
	// blt cr6,0x831be428
	if (ctx.cr6.lt) goto loc_831BE428;
loc_831BE410:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b18
	ctx.lr = 0x831BE41C;
	__restfpr_21(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_831BE428:
	// fmuls f11,f3,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f10,f2
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f4,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f11,f1,f13,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f6,f5,f1,f6
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f1.f64 + ctx.f6.f64));
	// fmadds f11,f2,f12,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f10,f10,f3,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f3.f64 + ctx.f6.f64));
	// fabs f5,f11
	ctx.f5.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f30,f10
	ctx.f30.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fcmpu cr6,f5,f4
	ctx.cr6.compare(ctx.f5.f64, ctx.f4.f64);
	// ble cr6,0x831be46c
	if (!ctx.cr6.gt) goto loc_831BE46C;
	// fmuls f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fcmpu cr6,f11,f29
	ctx.cr6.compare(ctx.f11.f64, ctx.f29.f64);
	// bge cr6,0x831be410
	if (!ctx.cr6.lt) goto loc_831BE410;
loc_831BE46C:
	// fmuls f10,f28,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f27
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f27.f64));
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f24,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f24.f64 = double(temp.f32);
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f26,f13,f10
	ctx.f10.f64 = double(float(ctx.f26.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f5,f6,f26,f5
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f26.f64 + ctx.f5.f64));
	// fmadds f6,f27,f12,f10
	ctx.f6.f64 = double(float(ctx.f27.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f5,f24,f28,f5
	ctx.f5.f64 = double(float(ctx.f24.f64 * ctx.f28.f64 + ctx.f5.f64));
	// fabs f24,f6
	ctx.f24.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fabs f10,f5
	ctx.f10.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fcmpu cr6,f24,f11
	ctx.cr6.compare(ctx.f24.f64, ctx.f11.f64);
	// ble cr6,0x831be4b0
	if (!ctx.cr6.gt) goto loc_831BE4B0;
	// fmuls f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fcmpu cr6,f6,f29
	ctx.cr6.compare(ctx.f6.f64, ctx.f29.f64);
	// bge cr6,0x831be410
	if (!ctx.cr6.lt) goto loc_831BE410;
loc_831BE4B0:
	// lfs f6,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f4,f10
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f29,f6,f13
	ctx.f29.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfs f24,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f22,f24,f0
	ctx.f22.f64 = double(float(ctx.f24.f64 * ctx.f0.f64));
	// fmuls f21,f23,f12
	ctx.f21.f64 = double(float(ctx.f23.f64 * ctx.f12.f64));
	// fmadds f5,f11,f30,f5
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f30.f64 + ctx.f5.f64));
	// fmsubs f0,f23,f0,f29
	ctx.f0.f64 = double(float(ctx.f23.f64 * ctx.f0.f64 - ctx.f29.f64));
	// fmsubs f12,f6,f12,f22
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 - ctx.f22.f64));
	// fmsubs f13,f24,f13,f21
	ctx.f13.f64 = double(float(ctx.f24.f64 * ctx.f13.f64 - ctx.f21.f64));
	// fmuls f7,f0,f7
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmadds f6,f12,f8,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fmadds f9,f13,f9,f6
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fabs f8,f9
	ctx.f8.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fcmpu cr6,f8,f5
	ctx.cr6.compare(ctx.f8.f64, ctx.f5.f64);
	// bgt cr6,0x831be410
	if (ctx.cr6.gt) goto loc_831BE410;
	// fmuls f9,f0,f2
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmuls f8,f31,f10
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f10.f64));
	// fmadds f7,f12,f1,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f9.f64));
	// fmadds f6,f11,f25,f8
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f25.f64 + ctx.f8.f64));
	// fmadds f5,f13,f3,f7
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f7.f64));
	// fabs f3,f5
	ctx.f3.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fcmpu cr6,f3,f6
	ctx.cr6.compare(ctx.f3.f64, ctx.f6.f64);
	// bgt cr6,0x831be410
	if (ctx.cr6.gt) goto loc_831BE410;
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// li r3,0
	ctx.r3.s64 = 0;
	// fmuls f11,f31,f30
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// fmadds f10,f12,f26,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f26.f64 + ctx.f0.f64));
	// fmadds f9,f4,f25,f11
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f25.f64 + ctx.f11.f64));
	// fmadds f8,f13,f28,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f28.f64 + ctx.f10.f64));
	// fabs f7,f8
	ctx.f7.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fcmpu cr6,f7,f9
	ctx.cr6.compare(ctx.f7.f64, ctx.f9.f64);
	// bgt cr6,0x831be53c
	if (ctx.cr6.gt) goto loc_831BE53C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_831BE53C:
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b18
	ctx.lr = 0x831BE544;
	__restfpr_21(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BE550"))) PPC_WEAK_FUNC(sub_831BE550);
PPC_FUNC_IMPL(__imp__sub_831BE550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fsubs f5,f12,f11
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fabs f3,f6
	ctx.f3.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fsubs f4,f10,f9
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fadds f8,f3,f5
	ctx.f8.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// fabs f7,f4
	ctx.f7.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// fcmpu cr6,f7,f8
	ctx.cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// ble cr6,0x831be590
	if (!ctx.cr6.gt) goto loc_831BE590;
loc_831BE588:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831BE590:
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f2,f11,f12
	ctx.f2.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fsubs f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fabs f7,f10
	ctx.f7.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fsubs f8,f8,f2
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f2.f64));
	// fadds f1,f7,f9
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// fabs f0,f8
	ctx.f0.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x831be588
	if (ctx.cr6.gt) goto loc_831BE588;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f2,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f12,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fadds f12,f2,f11
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// fsubs f13,f11,f2
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f2.f64));
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fsubs f12,f1,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// fadds f2,f11,f13
	ctx.f2.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fabs f1,f12
	ctx.f1.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f1,f2
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// bgt cr6,0x831be588
	if (ctx.cr6.gt) goto loc_831BE588;
	// fmuls f2,f0,f8
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f1,f11,f9
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmsubs f2,f12,f10,f2
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - ctx.f2.f64));
	// fmadds f1,f13,f7,f1
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f1.f64));
	// fabs f2,f2
	ctx.f2.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// fcmpu cr6,f2,f1
	ctx.cr6.compare(ctx.f2.f64, ctx.f1.f64);
	// bgt cr6,0x831be588
	if (ctx.cr6.gt) goto loc_831BE588;
	// fmuls f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f11,f11,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmsubs f2,f0,f4,f12
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f4.f64 - ctx.f12.f64));
	// fmadds f1,f13,f3,f11
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f11.f64));
	// fabs f0,f2
	ctx.f0.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x831be588
	if (ctx.cr6.gt) goto loc_831BE588;
	// fmuls f0,f10,f4
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// li r3,0
	ctx.r3.s64 = 0;
	// fmuls f13,f7,f5
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmsubs f12,f8,f6,f0
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f6.f64 - ctx.f0.f64));
	// fmadds f11,f9,f3,f13
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f3.f64 + ctx.f13.f64));
	// fabs f10,f12
	ctx.f10.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BE660"))) PPC_WEAK_FUNC(sub_831BE660);
PPC_FUNC_IMPL(__imp__sub_831BE660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x831BE668;
	__savegprlr_29(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// lfs f0,-18324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18324);
	ctx.f0.f64 = double(temp.f32);
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// stfs f10,-40(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// stfs f11,-44(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// stfs f0,-48(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// bge cr6,0x831be6b4
	if (!ctx.cr6.lt) goto loc_831BE6B4;
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x831be6ec
	if (ctx.cr6.eq) goto loc_831BE6EC;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// b 0x831be6d8
	goto loc_831BE6D8;
loc_831BE6B4:
	// lfs f12,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x831be6ec
	if (!ctx.cr6.gt) goto loc_831BE6EC;
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x831be6ec
	if (ctx.cr6.eq) goto loc_831BE6EC;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
loc_831BE6D8:
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f9,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f9.f64));
	// stfs f0,-48(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
loc_831BE6EC:
	// lfs f13,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x831be718
	if (!ctx.cr6.lt) goto loc_831BE718;
	// stfs f12,4(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x831be750
	if (ctx.cr6.eq) goto loc_831BE750;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// b 0x831be73c
	goto loc_831BE73C;
loc_831BE718:
	// lfs f12,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x831be750
	if (!ctx.cr6.gt) goto loc_831BE750;
	// stfs f12,4(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x831be750
	if (ctx.cr6.eq) goto loc_831BE750;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
loc_831BE73C:
	// lfs f12,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f9,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f9.f64));
	// stfs f11,-44(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
loc_831BE750:
	// lfs f13,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x831be7d0
	if (!ctx.cr6.lt) goto loc_831BE7D0;
	// stfs f12,8(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831be788
	if (ctx.cr6.eq) goto loc_831BE788;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
loc_831BE774:
	// lfs f12,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f9,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// stfs f10,-40(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
loc_831BE788:
	// li r29,0
	ctx.r29.s64 = 0;
	// fcmpu cr6,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x831be798
	if (!ctx.cr6.gt) goto loc_831BE798;
	// li r29,1
	ctx.r29.s64 = 1;
loc_831BE798:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-48
	ctx.r10.s64 = ctx.r1.s64 + -48;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x831be7b0
	if (!ctx.cr6.gt) goto loc_831BE7B0;
	// li r29,2
	ctx.r29.s64 = 2;
loc_831BE7B0:
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r1,-48
	ctx.r31.s64 = ctx.r1.s64 + -48;
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x831be81c
	if (ctx.cr6.eq) goto loc_831BE81C;
loc_831BE7C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_831BE7D0:
	// lfs f12,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x831be7f4
	if (!ctx.cr6.gt) goto loc_831BE7F4;
	// stfs f12,8(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831be788
	if (ctx.cr6.eq) goto loc_831BE788;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// b 0x831be774
	goto loc_831BE774;
loc_831BE7F4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x831be788
	if (ctx.cr6.eq) goto loc_831BE788;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_831BE81C:
	// subf r9,r5,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r5.s64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// subf r8,r5,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r5.s64;
	// subf r7,r5,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r5.s64;
	// subf r6,r5,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r5.s64;
	// lis r5,-32222
	ctx.r5.s64 = -2111700992;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,-18284(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -18284);
	ctx.f13.f64 = double(temp.f32);
loc_831BE83C:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x831be878
	if (ctx.cr6.eq) goto loc_831BE878;
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r30,r31
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfsx f0,r7,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// lfsx f10,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// blt cr6,0x831be7c8
	if (ctx.cr6.lt) goto loc_831BE7C8;
	// lfsx f12,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x831be7c8
	if (ctx.cr6.gt) goto loc_831BE7C8;
loc_831BE878:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x831be83c
	if (ctx.cr6.lt) goto loc_831BE83C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BE890"))) PPC_WEAK_FUNC(sub_831BE890);
PPC_FUNC_IMPL(__imp__sub_831BE890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f12,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,-18324(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18324);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// stfs f10,-24(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// stfs f11,-28(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// stfs f0,-32(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// bge cr6,0x831be8e8
	if (!ctx.cr6.lt) goto loc_831BE8E8;
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x831be920
	if (ctx.cr6.eq) goto loc_831BE920;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// b 0x831be90c
	goto loc_831BE90C;
loc_831BE8E8:
	// lfs f12,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x831be920
	if (!ctx.cr6.gt) goto loc_831BE920;
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x831be920
	if (ctx.cr6.eq) goto loc_831BE920;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
loc_831BE90C:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f9,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f9.f64));
	// stfs f0,-32(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
loc_831BE920:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x831be94c
	if (!ctx.cr6.lt) goto loc_831BE94C;
	// stfs f12,4(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x831be984
	if (ctx.cr6.eq) goto loc_831BE984;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// b 0x831be970
	goto loc_831BE970;
loc_831BE94C:
	// lfs f12,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x831be984
	if (!ctx.cr6.gt) goto loc_831BE984;
	// stfs f12,4(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x831be984
	if (ctx.cr6.eq) goto loc_831BE984;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
loc_831BE970:
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f9,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f9.f64));
	// stfs f11,-28(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
loc_831BE984:
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x831bea7c
	if (!ctx.cr6.lt) goto loc_831BEA7C;
	// stfs f12,8(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x831be9bc
	if (ctx.cr6.eq) goto loc_831BE9BC;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
loc_831BE9A8:
	// lfs f12,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f9,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// stfs f10,-24(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
loc_831BE9BC:
	// li r30,0
	ctx.r30.s64 = 0;
	// fcmpu cr6,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x831be9cc
	if (!ctx.cr6.gt) goto loc_831BE9CC;
	// li r30,1
	ctx.r30.s64 = 1;
loc_831BE9CC:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// lfsx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x831be9e4
	if (!ctx.cr6.gt) goto loc_831BE9E4;
	// li r30,2
	ctx.r30.s64 = 2;
loc_831BE9E4:
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,-32
	ctx.r5.s64 = ctx.r1.s64 + -32;
	// lwzx r10,r31,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x831beaa8
	if (!ctx.cr6.eq) goto loc_831BEAA8;
	// subf r9,r11,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r11.s64;
	// subf r6,r11,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lis r3,-32222
	ctx.r3.s64 = -2111700992;
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r7,r11,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// lfs f13,-18284(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -18284);
	ctx.f13.f64 = double(temp.f32);
loc_831BEA18:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x831bea54
	if (ctx.cr6.eq) goto loc_831BEA54;
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r31,r5
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfsx f0,r7,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// lfsx f10,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// blt cr6,0x831beaa8
	if (ctx.cr6.lt) goto loc_831BEAA8;
	// lfsx f12,r4,r11
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x831beaa8
	if (ctx.cr6.gt) goto loc_831BEAA8;
loc_831BEA54:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x831bea18
	if (ctx.cr6.lt) goto loc_831BEA18;
	// lfsx f0,r31,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 1;
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_831BEA7C:
	// lfs f12,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x831beaa0
	if (!ctx.cr6.gt) goto loc_831BEAA0;
	// stfs f12,8(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x831be9bc
	if (ctx.cr6.eq) goto loc_831BE9BC;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// b 0x831be9a8
	goto loc_831BE9A8;
loc_831BEAA0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x831be9bc
	if (ctx.cr6.eq) goto loc_831BE9BC;
loc_831BEAA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BEAB8"))) PPC_WEAK_FUNC(sub_831BEAB8);
PPC_FUNC_IMPL(__imp__sub_831BEAB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r30,-32222
	ctx.r30.s64 = -2111700992;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r31,-1
	ctx.r31.s64 = -1;
	// subf r6,r11,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lfs f0,-18268(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18268);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,-18264(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -18264);
	ctx.f13.f64 = double(temp.f32);
	// lis r3,-32222
	ctx.r3.s64 = -2111700992;
	// lis r30,-32222
	ctx.r30.s64 = -2111700992;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f13,0(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// lfs f10,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f10.f64 = double(temp.f32);
	// subf r5,r11,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r11.s64;
	// lfs f11,-18188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -18188);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,-18192(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -18192);
	ctx.f9.f64 = double(temp.f32);
loc_831BEB08:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// ble cr6,0x831beb3c
	if (!ctx.cr6.gt) goto loc_831BEB3C;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x831beb3c
	if (!ctx.cr6.lt) goto loc_831BEB3C;
	// lfsx f0,r5,r11
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x831bebe0
	if (ctx.cr6.lt) goto loc_831BEBE0;
	// lfsx f13,r4,r11
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x831bebe0
	if (ctx.cr6.gt) goto loc_831BEBE0;
	// b 0x831bebb4
	goto loc_831BEBB4;
loc_831BEB3C:
	// lfsx f13,r5,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// lfsx f8,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lfsx f7,r4,r11
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fsubs f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fmuls f0,f6,f12
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f13,f5,f12
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x831beb78
	if (!ctx.cr6.gt) goto loc_831BEB78;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// addi r10,r9,3
	ctx.r10.s64 = ctx.r9.s64 + 3;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_831BEB78:
	// lfs f12,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x831beb8c
	if (!ctx.cr6.gt) goto loc_831BEB8C;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_831BEB8C:
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x831beb9c
	if (!ctx.cr6.lt) goto loc_831BEB9C;
	// stfs f13,0(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_831BEB9C:
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x831bebe0
	if (ctx.cr6.gt) goto loc_831BEBE0;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x831bebe0
	if (ctx.cr6.lt) goto loc_831BEBE0;
loc_831BEBB4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// blt cr6,0x831beb08
	if (ctx.cr6.lt) goto loc_831BEB08;
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x831bebe0
	if (ctx.cr6.gt) goto loc_831BEBE0;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge cr6,0x831bebe4
	if (!ctx.cr6.lt) goto loc_831BEBE4;
loc_831BEBE0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_831BEBE4:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BEBF0"))) PPC_WEAK_FUNC(sub_831BEBF0);
PPC_FUNC_IMPL(__imp__sub_831BEBF0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31901
	ctx.r10.s64 = -2090663936;
	// addi r9,r11,-28928
	ctx.r9.s64 = ctx.r11.s64 + -28928;
	// li r5,281
	ctx.r5.s64 = 281;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r3,-32308(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32308);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x831BEC30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// lwz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831BEC64"))) PPC_WEAK_FUNC(sub_831BEC64);
PPC_FUNC_IMPL(__imp__sub_831BEC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BEC68"))) PPC_WEAK_FUNC(sub_831BEC68);
PPC_FUNC_IMPL(__imp__sub_831BEC68) {
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
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x831BEC84;
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

__attribute__((alias("__imp__sub_831BEC98"))) PPC_WEAK_FUNC(sub_831BEC98);
PPC_FUNC_IMPL(__imp__sub_831BEC98) {
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
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x831bed1c
	if (!ctx.cr6.eq) goto loc_831BED1C;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// beq cr6,0x831becf8
	if (ctx.cr6.eq) goto loc_831BECF8;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lbz r10,18344(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18344);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x831becf8
	if (ctx.cr6.eq) goto loc_831BECF8;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r10,18340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18340);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x831becf8
	if (!ctx.cr6.lt) goto loc_831BECF8;
	// rlwinm r10,r4,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r10,18340(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18340, ctx.r10.u32);
loc_831BECF8:
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-5016
	ctx.r5.s64 = ctx.r11.s64 + -5016;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82e64cc8
	ctx.lr = 0x831BED14;
	sub_82E64CC8(ctx, base);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
loc_831BED1C:
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

__attribute__((alias("__imp__sub_831BED30"))) PPC_WEAK_FUNC(sub_831BED30);
PPC_FUNC_IMPL(__imp__sub_831BED30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
loc_831BED38:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x831bed38
	if (!ctx.cr0.eq) goto loc_831BED38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BED58"))) PPC_WEAK_FUNC(sub_831BED58);
PPC_FUNC_IMPL(__imp__sub_831BED58) {
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
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x831bed88
	if (!ctx.cr6.eq) goto loc_831BED88;
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
loc_831BED88:
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82bf2190
	ctx.lr = 0x831BED94;
	sub_82BF2190(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BEDA8"))) PPC_WEAK_FUNC(sub_831BEDA8);
PPC_FUNC_IMPL(__imp__sub_831BEDA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
loc_831BEDB4:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x831bede8
	if (!ctx.cr6.eq) goto loc_831BEDE8;
	// stwcx. r10,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x831bedb4
	if (!ctx.cr0.eq) goto loc_831BEDB4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r3,r5,1
	ctx.r3.u64 = ctx.r5.u64 ^ 1;
	// blr 
	return;
loc_831BEDE8:
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r3,r5,1
	ctx.r3.u64 = ctx.r5.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BEE04"))) PPC_WEAK_FUNC(sub_831BEE04);
PPC_FUNC_IMPL(__imp__sub_831BEE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BEE08"))) PPC_WEAK_FUNC(sub_831BEE08);
PPC_FUNC_IMPL(__imp__sub_831BEE08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x82e67118
	sub_82E67118(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BEE1C"))) PPC_WEAK_FUNC(sub_831BEE1C);
PPC_FUNC_IMPL(__imp__sub_831BEE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BEE20"))) PPC_WEAK_FUNC(sub_831BEE20);
PPC_FUNC_IMPL(__imp__sub_831BEE20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BEE24"))) PPC_WEAK_FUNC(sub_831BEE24);
PPC_FUNC_IMPL(__imp__sub_831BEE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BEE28"))) PPC_WEAK_FUNC(sub_831BEE28);
PPC_FUNC_IMPL(__imp__sub_831BEE28) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e645c8
	sub_82E645C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BEE2C"))) PPC_WEAK_FUNC(sub_831BEE2C);
PPC_FUNC_IMPL(__imp__sub_831BEE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BEE30"))) PPC_WEAK_FUNC(sub_831BEE30);
PPC_FUNC_IMPL(__imp__sub_831BEE30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_831BEE44"))) PPC_WEAK_FUNC(sub_831BEE44);
PPC_FUNC_IMPL(__imp__sub_831BEE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BEE48"))) PPC_WEAK_FUNC(sub_831BEE48);
PPC_FUNC_IMPL(__imp__sub_831BEE48) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x831beee0
	if (ctx.cr6.eq) goto loc_831BEEE0;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x831bee8c
	if (ctx.cr6.eq) goto loc_831BEE8C;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82bed660
	ctx.lr = 0x831BEE78;
	sub_82BED660(ctx, base);
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
loc_831BEE8C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
loc_831BEE94:
	// slw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// and r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x831beec4
	if (!ctx.cr6.eq) goto loc_831BEEC4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x831bee94
	if (ctx.cr6.lt) goto loc_831BEE94;
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
loc_831BEEC4:
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82bed660
	ctx.lr = 0x831BEED4;
	sub_82BED660(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x831beee4
	if (!ctx.cr6.eq) goto loc_831BEEE4;
loc_831BEEE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831BEEE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BEEF4"))) PPC_WEAK_FUNC(sub_831BEEF4);
PPC_FUNC_IMPL(__imp__sub_831BEEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BEEF8"))) PPC_WEAK_FUNC(sub_831BEEF8);
PPC_FUNC_IMPL(__imp__sub_831BEEF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BEEFC"))) PPC_WEAK_FUNC(sub_831BEEFC);
PPC_FUNC_IMPL(__imp__sub_831BEEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BEF00"))) PPC_WEAK_FUNC(sub_831BEF00);
PPC_FUNC_IMPL(__imp__sub_831BEF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x831BEF08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31901
	ctx.r10.s64 = -2090663936;
	// addi r9,r11,-28928
	ctx.r9.s64 = ctx.r11.s64 + -28928;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,281
	ctx.r5.s64 = 281;
	// lwz r3,-32308(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32308);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x831BEF44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// lwz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r30,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r30.u32);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x831befb0
	if (!ctx.cr6.eq) goto loc_831BEFB0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-31972
	ctx.r9.s64 = -2095316992;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r9,-5016
	ctx.r5.s64 = ctx.r9.s64 + -5016;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82e64cc8
	ctx.lr = 0x831BEFA8;
	sub_82E64CC8(ctx, base);
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r3,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
loc_831BEFB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BEFBC"))) PPC_WEAK_FUNC(sub_831BEFBC);
PPC_FUNC_IMPL(__imp__sub_831BEFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BEFC0"))) PPC_WEAK_FUNC(sub_831BEFC0);
PPC_FUNC_IMPL(__imp__sub_831BEFC0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r9,r11,-28928
	ctx.r9.s64 = ctx.r11.s64 + -28928;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82bea4e0
	ctx.lr = 0x831BEFEC;
	sub_82BEA4E0(ctx, base);
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x831bf018
	if (ctx.cr6.eq) goto loc_831BF018;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x831BF010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
loc_831BF018:
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

__attribute__((alias("__imp__sub_831BF02C"))) PPC_WEAK_FUNC(sub_831BF02C);
PPC_FUNC_IMPL(__imp__sub_831BF02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BF030"))) PPC_WEAK_FUNC(sub_831BF030);
PPC_FUNC_IMPL(__imp__sub_831BF030) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r9,r11,-28928
	ctx.r9.s64 = ctx.r11.s64 + -28928;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82bea4e0
	ctx.lr = 0x831BF064;
	sub_82BEA4E0(ctx, base);
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x831bf090
	if (ctx.cr6.eq) goto loc_831BF090;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x831BF088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
loc_831BF090:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831bf0a8
	if (ctx.cr6.eq) goto loc_831BF0A8;
	// bl 0x822990f0
	ctx.lr = 0x831BF0A4;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_831BF0A8:
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

__attribute__((alias("__imp__sub_831BF0C0"))) PPC_WEAK_FUNC(sub_831BF0C0);
PPC_FUNC_IMPL(__imp__sub_831BF0C0) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82e65090
	ctx.lr = 0x831BF0E8;
	sub_82E65090(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_831BF104"))) PPC_WEAK_FUNC(sub_831BF104);
PPC_FUNC_IMPL(__imp__sub_831BF104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BF108"))) PPC_WEAK_FUNC(sub_831BF108);
PPC_FUNC_IMPL(__imp__sub_831BF108) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bea4e0
	sub_82BEA4E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BF110"))) PPC_WEAK_FUNC(sub_831BF110);
PPC_FUNC_IMPL(__imp__sub_831BF110) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82e65170
	sub_82E65170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BF118"))) PPC_WEAK_FUNC(sub_831BF118);
PPC_FUNC_IMPL(__imp__sub_831BF118) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82e65130
	sub_82E65130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BF120"))) PPC_WEAK_FUNC(sub_831BF120);
PPC_FUNC_IMPL(__imp__sub_831BF120) {
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
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x831bf138
	if (!ctx.cr6.eq) goto loc_831BF138;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_831BF138:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82bf2190
	ctx.lr = 0x831BF140;
	sub_82BF2190(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF158"))) PPC_WEAK_FUNC(sub_831BF158);
PPC_FUNC_IMPL(__imp__sub_831BF158) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF160"))) PPC_WEAK_FUNC(sub_831BF160);
PPC_FUNC_IMPL(__imp__sub_831BF160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x831bf184
	if (!ctx.cr6.eq) goto loc_831BF184;
	// li r6,-1
	ctx.r6.s64 = -1;
loc_831BF184:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831bf1b4
	if (ctx.cr6.eq) goto loc_831BF1B4;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_831BF19C:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x831bf19c
	if (!ctx.cr0.eq) goto loc_831BF19C;
loc_831BF1B4:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e65088
	ctx.lr = 0x831BF1C0;
	sub_82E65088(ctx, base);
	// addi r11,r3,-258
	ctx.r11.s64 = ctx.r3.s64 + -258;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF1E0"))) PPC_WEAK_FUNC(sub_831BF1E0);
PPC_FUNC_IMPL(__imp__sub_831BF1E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF1E4"))) PPC_WEAK_FUNC(sub_831BF1E4);
PPC_FUNC_IMPL(__imp__sub_831BF1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BF1E8"))) PPC_WEAK_FUNC(sub_831BF1E8);
PPC_FUNC_IMPL(__imp__sub_831BF1E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF1EC"))) PPC_WEAK_FUNC(sub_831BF1EC);
PPC_FUNC_IMPL(__imp__sub_831BF1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BF1F0"))) PPC_WEAK_FUNC(sub_831BF1F0);
PPC_FUNC_IMPL(__imp__sub_831BF1F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF1F4"))) PPC_WEAK_FUNC(sub_831BF1F4);
PPC_FUNC_IMPL(__imp__sub_831BF1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BF1F8"))) PPC_WEAK_FUNC(sub_831BF1F8);
PPC_FUNC_IMPL(__imp__sub_831BF1F8) {
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

__attribute__((alias("__imp__sub_831BF20C"))) PPC_WEAK_FUNC(sub_831BF20C);
PPC_FUNC_IMPL(__imp__sub_831BF20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BF210"))) PPC_WEAK_FUNC(sub_831BF210);
PPC_FUNC_IMPL(__imp__sub_831BF210) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF224"))) PPC_WEAK_FUNC(sub_831BF224);
PPC_FUNC_IMPL(__imp__sub_831BF224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BF228"))) PPC_WEAK_FUNC(sub_831BF228);
PPC_FUNC_IMPL(__imp__sub_831BF228) {
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

__attribute__((alias("__imp__sub_831BF238"))) PPC_WEAK_FUNC(sub_831BF238);
PPC_FUNC_IMPL(__imp__sub_831BF238) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF240"))) PPC_WEAK_FUNC(sub_831BF240);
PPC_FUNC_IMPL(__imp__sub_831BF240) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF248"))) PPC_WEAK_FUNC(sub_831BF248);
PPC_FUNC_IMPL(__imp__sub_831BF248) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF250"))) PPC_WEAK_FUNC(sub_831BF250);
PPC_FUNC_IMPL(__imp__sub_831BF250) {
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

__attribute__((alias("__imp__sub_831BF264"))) PPC_WEAK_FUNC(sub_831BF264);
PPC_FUNC_IMPL(__imp__sub_831BF264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BF268"))) PPC_WEAK_FUNC(sub_831BF268);
PPC_FUNC_IMPL(__imp__sub_831BF268) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r3,r8,r10
	ctx.r3.s32 = ctx.r8.s32 / ctx.r10.s32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF280"))) PPC_WEAK_FUNC(sub_831BF280);
PPC_FUNC_IMPL(__imp__sub_831BF280) {
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

__attribute__((alias("__imp__sub_831BF290"))) PPC_WEAK_FUNC(sub_831BF290);
PPC_FUNC_IMPL(__imp__sub_831BF290) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF298"))) PPC_WEAK_FUNC(sub_831BF298);
PPC_FUNC_IMPL(__imp__sub_831BF298) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF2A0"))) PPC_WEAK_FUNC(sub_831BF2A0);
PPC_FUNC_IMPL(__imp__sub_831BF2A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF2A8"))) PPC_WEAK_FUNC(sub_831BF2A8);
PPC_FUNC_IMPL(__imp__sub_831BF2A8) {
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

__attribute__((alias("__imp__sub_831BF2BC"))) PPC_WEAK_FUNC(sub_831BF2BC);
PPC_FUNC_IMPL(__imp__sub_831BF2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BF2C0"))) PPC_WEAK_FUNC(sub_831BF2C0);
PPC_FUNC_IMPL(__imp__sub_831BF2C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,40
	ctx.r10.s64 = 40;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r3,r8,r10
	ctx.r3.s32 = ctx.r8.s32 / ctx.r10.s32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF2D8"))) PPC_WEAK_FUNC(sub_831BF2D8);
PPC_FUNC_IMPL(__imp__sub_831BF2D8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF2F0"))) PPC_WEAK_FUNC(sub_831BF2F0);
PPC_FUNC_IMPL(__imp__sub_831BF2F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF2F8"))) PPC_WEAK_FUNC(sub_831BF2F8);
PPC_FUNC_IMPL(__imp__sub_831BF2F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF300"))) PPC_WEAK_FUNC(sub_831BF300);
PPC_FUNC_IMPL(__imp__sub_831BF300) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF308"))) PPC_WEAK_FUNC(sub_831BF308);
PPC_FUNC_IMPL(__imp__sub_831BF308) {
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
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF32C"))) PPC_WEAK_FUNC(sub_831BF32C);
PPC_FUNC_IMPL(__imp__sub_831BF32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BF330"))) PPC_WEAK_FUNC(sub_831BF330);
PPC_FUNC_IMPL(__imp__sub_831BF330) {
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
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF354"))) PPC_WEAK_FUNC(sub_831BF354);
PPC_FUNC_IMPL(__imp__sub_831BF354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BF358"))) PPC_WEAK_FUNC(sub_831BF358);
PPC_FUNC_IMPL(__imp__sub_831BF358) {
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
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF394"))) PPC_WEAK_FUNC(sub_831BF394);
PPC_FUNC_IMPL(__imp__sub_831BF394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BF398"))) PPC_WEAK_FUNC(sub_831BF398);
PPC_FUNC_IMPL(__imp__sub_831BF398) {
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
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF3D4"))) PPC_WEAK_FUNC(sub_831BF3D4);
PPC_FUNC_IMPL(__imp__sub_831BF3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BF3D8"))) PPC_WEAK_FUNC(sub_831BF3D8);
PPC_FUNC_IMPL(__imp__sub_831BF3D8) {
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
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF42C"))) PPC_WEAK_FUNC(sub_831BF42C);
PPC_FUNC_IMPL(__imp__sub_831BF42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BF430"))) PPC_WEAK_FUNC(sub_831BF430);
PPC_FUNC_IMPL(__imp__sub_831BF430) {
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
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF484"))) PPC_WEAK_FUNC(sub_831BF484);
PPC_FUNC_IMPL(__imp__sub_831BF484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BF488"))) PPC_WEAK_FUNC(sub_831BF488);
PPC_FUNC_IMPL(__imp__sub_831BF488) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831bf49c
	if (!ctx.cr6.eq) goto loc_831BF49C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831BF49C:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r3,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF4AC"))) PPC_WEAK_FUNC(sub_831BF4AC);
PPC_FUNC_IMPL(__imp__sub_831BF4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831BF4B0"))) PPC_WEAK_FUNC(sub_831BF4B0);
PPC_FUNC_IMPL(__imp__sub_831BF4B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_831BF4B8:
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// bne 0x831bf4b8
	if (!ctx.cr0.eq) goto loc_831BF4B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF4E8"))) PPC_WEAK_FUNC(sub_831BF4E8);
PPC_FUNC_IMPL(__imp__sub_831BF4E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_831BF4F4:
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
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x831bf4f4
	if (!ctx.cr6.eq) goto loc_831BF4F4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF528"))) PPC_WEAK_FUNC(sub_831BF528);
PPC_FUNC_IMPL(__imp__sub_831BF528) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_831BF548"))) PPC_WEAK_FUNC(sub_831BF548);
PPC_FUNC_IMPL(__imp__sub_831BF548) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

